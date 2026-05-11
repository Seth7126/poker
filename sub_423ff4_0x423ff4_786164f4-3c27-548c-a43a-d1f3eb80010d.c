// ============================================================
// 函数名称: sub_423ff4
// 虚拟地址: 0x423ff4
// WARP GUID: 786164f4-3c27-548c-a43a-d1f3eb80010d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_431bcc, sub_4318d0
// [被调用的父级函数]: sub_4244aa, sub_424de4
// ============================================================

int32_t __convention("regparm")sub_423ff4(int32_t* arg1, char arg2)
{
    // 第一条实际指令: char result = sub_431bcc(arg1)
    char result = sub_431bcc(arg1)
    
    if (result == 0)
        *(arg1 + 0x1fd) = arg2
        return result
    
    WPARAM wParam
    wParam.b = arg2
    return SendMessageA(sub_4318d0(arg1), 0xb9, wParam, 0)
}
