// ============================================================
// 函数名称: sub_42aa4c
// 虚拟地址: 0x42aa4c
// WARP GUID: 34083149-d09d-5416-921c-bc066ee91fc8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_403420, sub_4030d0, sub_42c754, sub_44836c, sub_42b180, sub_415d64, sub_4095f8, sub_403430
// [被调用的父级函数]: sub_432984, sub_42da58
// ============================================================

int32_t __convention("regparm")sub_42aa4c(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    char var_1c = arg2.b
    sub_44836c(*data_530660, arg1)
    void* eax_2 = arg1[0x24]
    
    if (eax_2 == 0 || (*(eax_2 + 0x20) & 8) != 0)
        (*(*arg1 + 0x60))(var_1c)
    else
        sub_42c754(eax_2, arg1)
        (*(*arg1 + 0x60))(var_1c)
        void var_18
        sub_42b180(arg1, &var_18)
        int32_t ebx
        ebx.w = 0xffd1
        sub_4032ac(arg1, 0xffffffff, &var_18)
        arg1[0x24] = 0
    
    sub_4030d0(arg1[0x17])
    arg1[0x17] = 0
    sub_4030d0(arg1[0x19])
    sub_4030d0(arg1[0x16])
    sub_4095f8(arg1[0x15])
    int32_t edx_5
    edx_5.b = var_1c
    edx_5.b &= 0xfc
    int32_t result = sub_415d64(arg1, edx_5)
    
    if (var_1c s<= 0)
        return result
    
    return sub_403420(arg1)
}
