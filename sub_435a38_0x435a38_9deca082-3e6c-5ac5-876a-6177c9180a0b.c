// ============================================================
// 函数名称: sub_435a38
// 虚拟地址: 0x435a38
// WARP GUID: 9deca082-3e6c-5ac5-876a-6177c9180a0b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ReleaseCapture, SetCapture
// [内部子函数调用]: sub_4359ac
// [被调用的父级函数]: sub_43512c, sub_43597c, sub_4350cc
// ============================================================

HWND __fastcallsub_435a38(int32_t arg1, HWND arg2)
{
    // 第一条实际指令: HWND result = sub_4359ac()
    HWND result = sub_4359ac()
    
    if (arg2 == result)
        return result
    
    if (arg2 != 0)
        return SetCapture(arg2)
    
    return ReleaseCapture()
}
