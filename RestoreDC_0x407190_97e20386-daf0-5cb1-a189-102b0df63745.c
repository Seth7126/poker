// ============================================================
// 函数名称: RestoreDC
// 虚拟地址: 0x407190
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_42f578, sub_443300, sub_43d934, sub_42f6d0
// ============================================================

BOOL __stdcallRestoreDC(HDC hdc, int32_t nSavedDC)
{
    // 第一条实际指令: return RestoreDC(hdc, nSavedDC) __tailcall
    return RestoreDC(hdc, nSavedDC) __tailcall
}
