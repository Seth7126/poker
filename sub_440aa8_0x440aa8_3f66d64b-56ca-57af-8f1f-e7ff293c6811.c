// ============================================================
// 函数名称: sub_440aa8
// 虚拟地址: 0x440aa8
// WARP GUID: 3f66d64b-56ca-57af-8f1f-e7ff293c6811
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetCurrentThreadId, EnumThreadWindows
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_448668, sub_445f30, sub_445ad4
// ============================================================

int32_t __convention("regparm")sub_440aa8(int32_t arg1)
{
    // 第一条实际指令: data_52e984 = arg1
    data_52e984 = arg1
    data_52e988 = 0
    data_52e98c = 0
    EnumThreadWindows(GetCurrentThreadId(), sub_440a44, 0)
    
    if (data_52e988 == 0)
        return data_52e98c
    
    return data_52e988
}
