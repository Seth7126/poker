// ============================================================
// 函数名称: SendMessageA
// 虚拟地址: 0x407670
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4445ed, sub_442e78, sub_4249af, sub_4247f8, sub_425e70, sub_415c58, sub_425788, sub_424794, sub_443c64, sub_496eec, sub_4b29bc, sub_444722, sub_440ae4, sub_445ad4, sub_425b2c, sub_444e3c, sub_449490, sub_425a84, sub_4241e4, sub_424d79, sub_425cb8, sub_425358, sub_4b2a3c, sub_4240f0, sub_43d8ac, sub_423fbc, sub_424cac, sub_407860, sub_43d81c, sub_425aac, sub_424664, sub_4248b0, sub_4243ec, sub_42483c, sub_425a1c, sub_425a64, sub_4240b4, sub_449030, sub_449258, sub_42551c, sub_4b6e1c, sub_444830, sub_4b2d78, sub_447664, sub_445374, sub_423ef8, sub_448668, sub_443a70, sub_4b28bf, sub_425c24, sub_4492b4, sub_425e67, sub_4b29fc, sub_446078, sub_435a60, sub_4244aa, sub_424114, sub_4b2c50, sub_425af0, sub_424a5c, sub_4b2d2c, sub_424164, sub_424134, sub_449b10, sub_43d7fc, sub_424ac0, sub_425374, sub_4259fc, sub_4b2abc, sub_4481cc, sub_4296ec, sub_4b2cf0, sub_4289ac, sub_4257bc, sub_4463a4, sub_425c9c, sub_42f448, sub_4255a0, sub_42402c, sub_4480dd, sub_4b2cb4, sub_445b91, sub_425118, sub_423ff4, sub_4b4e78
// ============================================================

LRESULT __stdcallSendMessageA(HWND hWnd, uint32_t Msg, WPARAM wParam, LPARAM lParam)
{
    // 第一条实际指令: return SendMessageA(hWnd, Msg, wParam, lParam) __tailcall
    return SendMessageA(hWnd, Msg, wParam, lParam) __tailcall
}
