// ============================================================
// 函数名称: DrawFrameControl
// 虚拟地址: 0x407340
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4344b4
// ============================================================

BOOL __stdcallDrawFrameControl(HDC param0, RECT* param1, enum DFC_TYPE param2, enum DFCS_STATE param3)
{
    // 第一条实际指令: return DrawFrameControl(param0, param1, param2, param3) __tailcall
    return DrawFrameControl(param0, param1, param2, param3) __tailcall
}
