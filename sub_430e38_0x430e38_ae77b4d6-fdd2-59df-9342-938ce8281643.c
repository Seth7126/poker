// ============================================================
// 函数名称: sub_430e38
// 虚拟地址: 0x430e38
// WARP GUID: ae77b4d6-fdd2-59df-9342-938ce8281643
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetWindowPos
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

BOOL __convention("regparm")sub_430e38(void* arg1)
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    edx.b = *(arg1 + 0x168)
    return SetWindowPos(*(arg1 + 0x14c), nullptr, 0, 0, 0, 0, zx.d(*((edx << 1) + &data_52e804)))
}
