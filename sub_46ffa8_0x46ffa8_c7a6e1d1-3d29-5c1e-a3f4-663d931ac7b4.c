// ============================================================
// 函数名称: sub_46ffa8
// 虚拟地址: 0x46ffa8
// WARP GUID: c7a6e1d1-3d29-5c1e-a3f4-663d931ac7b4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: wglGetCurrentContext, wglMakeCurrent, ReleaseDC, wglDeleteContext, wglGetCurrentDC
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_47ba07
// ============================================================

BOOL __fastcallsub_46ffa8(int32_t arg1, HWND arg2)
{
    // 第一条实际指令: HGLRC param0 = wglGetCurrentContext()
    HGLRC param0 = wglGetCurrentContext()
    HDC hDC = wglGetCurrentDC()
    wglMakeCurrent(nullptr, nullptr)
    ReleaseDC(arg2, hDC)
    return wglDeleteContext(param0)
}
