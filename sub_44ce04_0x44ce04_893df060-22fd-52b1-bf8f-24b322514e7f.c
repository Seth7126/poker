// ============================================================
// 函数名称: sub_44ce04
// 虚拟地址: 0x44ce04
// WARP GUID: 893df060-22fd-52b1-bf8f-24b322514e7f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: RegisterWindowMessageA, GetCurrentThreadId, GlobalAddAtomA
// [内部子函数调用]: sub_409a78
// [被调用的父级函数]: sub_44ce02, sub_44cfb4
// ============================================================

uint16_tsub_44ce04()
{
    // 第一条实际指令: data_531820 = RegisterWindowMessageA(sub_44ce65+3)
    data_531820 = RegisterWindowMessageA(sub_44ce65+3)
    data_531824 = RegisterWindowMessageA(sub_44ce65+0x13)
    int32_t var_10 = data_5314dc
    char var_c = 0
    uint32_t var_8 = GetCurrentThreadId()
    char var_4 = 0
    void string
    sub_409a78(&var_10, sub_44ce65+0x27, &string, 1)
    uint16_t result = GlobalAddAtomA(&string)
    data_52eac8 = result
    return result
}
