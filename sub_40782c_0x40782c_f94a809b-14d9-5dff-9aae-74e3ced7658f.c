// ============================================================
// 函数名称: sub_40782c
// 虚拟地址: 0x40782c
// WARP GUID: f94a809b-14d9-5dff-9aae-74e3ced7658f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CreateWindowExA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4481cc, sub_4159b4
// ============================================================

HWND __fastcallsub_40782c(enum WINDOW_STYLE arg1, PSTR arg2, PSTR arg3 @ eax, int32_t arg4, HINSTANCE arg5, HMENU arg6, HWND arg7, int32_t arg8, int32_t arg9, int32_t arg10, int32_t arg11)
{
    // 第一条实际指令: return CreateWindowExA(WS_EX_LEFT, arg3, arg2, arg1, arg11, arg10, arg9, arg8, arg7, arg6, arg5, arg4)
    return CreateWindowExA(WS_EX_LEFT, arg3, arg2, arg1, arg11, arg10, arg9, arg8, arg7, arg6, arg5, 
        arg4)
}
