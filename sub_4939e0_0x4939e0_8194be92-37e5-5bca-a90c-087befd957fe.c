// ============================================================
// 函数名称: sub_4939e0
// 虚拟地址: 0x4939e0
// WARP GUID: 8194be92-37e5-5bca-a90c-087befd957fe
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: mciSendCommandA
// [内部子函数调用]: sub_492820
// [被调用的父级函数]: sub_4933b0, sub_492c54, sub_51a7f4, sub_49292c
// ============================================================

int32_t __convention("regparm")sub_4939e0(void* arg1)
{
    // 第一条实际指令: sub_492820(arg1)
    sub_492820(arg1)
    *(arg1 + 0x2d0) = 0x102
    int32_t var_10 = 1
    void dwParam2
    *(arg1 + 0x2ec) = mciSendCommandA(zx.d(*(arg1 + 0x2da)), 0x814, 0x102, &dwParam2)
    int32_t result
    return result
}
