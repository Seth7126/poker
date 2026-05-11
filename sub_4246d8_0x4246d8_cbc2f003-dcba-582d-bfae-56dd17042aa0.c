// ============================================================
// 函数名称: sub_4246d8
// 虚拟地址: 0x4246d8
// WARP GUID: cbc2f003-dcba-582d-bfae-56dd17042aa0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_430ed0, sub_424560
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4246d8(int32_t* arg1)
{
    // 第一条实际指令: int32_t result = sub_430ed0(arg1)
    int32_t result = sub_430ed0(arg1)
    
    if ((*(arg1 + 0x41) & 2) != 0 && ((arg1[8].b & 0x10) == 0 || (arg1[8].b & 1) == 0))
        return sub_424560(arg1)
    
    return result
}
