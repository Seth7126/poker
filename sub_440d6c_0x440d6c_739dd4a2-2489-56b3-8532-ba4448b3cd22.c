// ============================================================
// 函数名称: sub_440d6c
// 虚拟地址: 0x440d6c
// WARP GUID: 739dd4a2-2489-56b3-8532-ba4448b3cd22
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DestroyWindow, GetWindowLongA
// [内部子函数调用]: sub_440c94
// [被调用的父级函数]: sub_4950e0, sub_426610, sub_43de98, sub_428ec4
// ============================================================

int32_t __convention("regparm")sub_440d6c(HWND arg1)
{
    // 第一条实际指令: int32_t result_1 = GetWindowLongA(arg1, 0xfffffffc)
    int32_t result_1 = GetWindowLongA(arg1, 0xfffffffc)
    int32_t result = DestroyWindow(arg1)
    
    if (result_1 != DefWindowProcA)
        result = result_1
        sub_440c94(result)
    
    return result
}
