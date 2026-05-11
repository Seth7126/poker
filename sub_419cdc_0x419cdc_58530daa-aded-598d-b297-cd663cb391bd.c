// ============================================================
// 函数名称: sub_419cdc
// 虚拟地址: 0x419cdc
// WARP GUID: 58530daa-aded-598d-b297-cd663cb391bd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetROP2, SelectObject
// [内部子函数调用]: sub_418e00
// [被调用的父级函数]: sub_419c14
// ============================================================

int32_t __convention("regparm")sub_419cdc(void* arg1)
{
    // 第一条实际指令: HGDIOBJ h = sub_418e00(*(arg1 + 0x10))
    HGDIOBJ h = sub_418e00(*(arg1 + 0x10))
    SelectObject(*(arg1 + 4), h)
    return SetROP2(*(arg1 + 4), zx.d(*((zx.d(*(*(arg1 + 0x10) + 0x18)) << 1) + &data_52e5fc)))
}
