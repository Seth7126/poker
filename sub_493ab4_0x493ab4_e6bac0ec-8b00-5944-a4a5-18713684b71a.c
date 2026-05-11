// ============================================================
// 函数名称: sub_493ab4
// 虚拟地址: 0x493ab4
// WARP GUID: e6bac0ec-8b00-5944-a4a5-18713684b71a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: mciSendCommandA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_492c54, sub_4931f4, sub_493064, sub_51a7f4, sub_4933b0
// ============================================================

int32_t __convention("regparm")sub_493ab4(void* arg1)
{
    // 第一条实际指令: *(arg1 + 0x2d0) = 0x102
    *(arg1 + 0x2d0) = 0x102
    int32_t var_10 = 2
    void dwParam2
    *(arg1 + 0x2ec) = mciSendCommandA(zx.d(*(arg1 + 0x2da)), 0x814, 0x102, &dwParam2)
    int32_t result
    return result
}
