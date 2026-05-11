// ============================================================
// 函数名称: sub_42da58
// 虚拟地址: 0x42da58
// WARP GUID: 73893853-d41b-5dca-990c-0ee1c8bfb5fd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42e5f8, sub_403420, sub_4030d0, sub_42e7fc, sub_440c94, sub_42e664, sub_42e838, sub_42aa4c, sub_405b40, sub_403430, sub_415fc8, sub_42968c
// [被调用的父级函数]: sub_43324c, sub_4259b4, sub_424c18, sub_441b74
// ============================================================

int32_t __convention("regparm")sub_42da58(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    sub_403430(arg1, arg2)
    var_c.b = arg2.b
    sub_415fc8(arg1)
    
    if (arg1[0x51].b != 0)
        arg1[0x51].b = 0
        sub_42968c(arg1, 0)
    
    sub_405b40(&arg1[0x52])
    sub_4030d0(arg1[0x50])
    
    if (arg1[9] != 0)
        sub_42e5f8(arg1, 1)
    
    if (arg1[0x53] != 0)
        (*(*arg1 + 0x9c))(var_c)
    
    for (int32_t i = sub_42e838(arg1); i != 0; i = sub_42e838(arg1))
        int32_t* eax_8 = sub_42e7fc(arg1, i - 1)
        sub_42e664(arg1, eax_8)
        int32_t edx_5
        edx_5.b = 1
        (*(*eax_8 - 4))(var_c)
    
    sub_4030d0(arg1[0x4c])
    void* eax_13 = arg1[0x57]
    
    if (eax_13 != 0)
        sub_440c94(eax_13)
    
    int32_t edx_6
    edx_6.b = var_c.b
    edx_6.b &= 0xfc
    int32_t result = sub_42aa4c(arg1, edx_6)
    
    if (var_c.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
