// ============================================================
// 函数名称: sub_4077e0
// 虚拟地址: 0x4077e0
// WARP GUID: 4d810e42-50fb-5e0f-9cc0-c0d8514db1d6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GlobalHandle, GlobalUnlock, GlobalFree
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_412ca4
// ============================================================

HGLOBAL __convention("regparm")sub_4077e0(int32_t arg1)
{
    // 第一条实际指令: HGLOBAL hMem = GlobalHandle(arg1)
    HGLOBAL hMem = GlobalHandle(arg1)
    GlobalUnlock(hMem)
    return GlobalFree(hMem)
}
