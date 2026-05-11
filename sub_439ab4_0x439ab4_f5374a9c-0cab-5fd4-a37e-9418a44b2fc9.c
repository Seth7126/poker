// ============================================================
// 函数名称: sub_439ab4
// 虚拟地址: 0x439ab4
// WARP GUID: f5374a9c-0cab-5fd4-a37e-9418a44b2fc9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DestroyMenu
// [内部子函数调用]: sub_403420, sub_439ed0, sub_4030d0, sub_43b964, sub_415d64, sub_43bcb4, sub_40cc98, sub_403430, sub_43b974, sub_43e0c8, sub_410a4c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_439ab4(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    sub_43e0c8(data_5317cc, arg1)
    int32_t* eax_1 = arg1[0x16]
    
    if (eax_1 != 0)
        sub_43bcb4(eax_1)
        arg1[0x16] = 0
    
    while (sub_43b964(arg1) s> 0)
        sub_4030d0(sub_43b974(arg1, 0))
    
    if (arg1[0xa] != 0)
        sub_439ed0(arg1, nullptr)
        DestroyMenu(arg1[0xa])
    
    sub_4030d0(arg1[0x14])
    sub_40cc98(&arg1[0xe])
    sub_40cc98(&arg1[0x1b])
    int16_t eax_11 = arg1[0x11].w
    
    if (eax_11 != 0)
        sub_410a4c(data_5317d4, zx.d(eax_11), 0)
    
    int32_t* eax_13 = arg1[0x10]
    
    if (eax_13 != 0)
        sub_4030d0(eax_13)
    
    int32_t edx_3
    edx_3.b = arg2.b & 0xfc
    int32_t result = sub_415d64(arg1, edx_3)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
