// ============================================================
// 函数名称: sub_493a28
// 虚拟地址: 0x493a28
// WARP GUID: 2f9c911a-7e7f-585c-ba4b-d37e2ac76410
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: mciSendCommandA
// [内部子函数调用]: sub_492820
// [被调用的父级函数]: sub_493064
// ============================================================

int32_t __convention("regparm")sub_493a28(void* arg1)
{
    // 第一条实际指令: sub_492820(arg1)
    sub_492820(arg1)
    *(arg1 + 0x2d0) = 0x102
    int32_t var_10 = 3
    void dwParam2
    *(arg1 + 0x2ec) = mciSendCommandA(zx.d(*(arg1 + 0x2da)), 0x814, 0x102, &dwParam2)
    int32_t result
    return result
}
