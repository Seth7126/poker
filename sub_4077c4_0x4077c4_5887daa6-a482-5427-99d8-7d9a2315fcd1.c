// ============================================================
// 函数名称: sub_4077c4
// 虚拟地址: 0x4077c4
// WARP GUID: 5887daa6-a482-5427-99d8-7d9a2315fcd1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GlobalHandle, GlobalUnlock, GlobalReAlloc, GlobalLock
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_412ca4
// ============================================================

int32_t __convention("regparm")sub_4077c4(int32_t arg1, uint32_t arg2, uint32_t arg3)
{
    // 第一条实际指令: HGLOBAL hMem = GlobalHandle(arg1)
    HGLOBAL hMem = GlobalHandle(arg1)
    GlobalUnlock(hMem)
    return GlobalLock(GlobalReAlloc(hMem, arg2, arg3))
}
