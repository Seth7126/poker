// ============================================================
// 函数名称: sub_424524
// 虚拟地址: 0x424524
// WARP GUID: 4bd5f9b7-24ef-5a09-9ddf-671bc64f229d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_424560
// [被调用的父级函数]: sub_4246a4, sub_4244aa, sub_423f18, sub_423f2c
// ============================================================

int32_t __convention("regparm")sub_424524(int32_t* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x1f7) != 0 && arg1[0x7d].b == 1)
    if (*(arg1 + 0x1f7) != 0 && arg1[0x7d].b == 1)
        arg1[0x10] |= 0x200
        return sub_424560(arg1)
    
    int32_t result = 0xfffffdff & arg1[0x10]
    arg1[0x10] = result
    return result
}
