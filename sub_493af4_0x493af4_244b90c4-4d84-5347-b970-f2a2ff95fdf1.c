// ============================================================
// 函数名称: sub_493af4
// 虚拟地址: 0x493af4
// WARP GUID: 244b90c4-4d84-5347-b970-f2a2ff95fdf1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: mciSendCommandA
// [内部子函数调用]: sub_492820
// [被调用的父级函数]: sub_493064, sub_4931f4
// ============================================================

uint32_t __convention("regparm")sub_493af4(void* arg1)
{
    // 第一条实际指令: sub_492820(arg1)
    sub_492820(arg1)
    *(arg1 + 0x2d0) = 0x102
    int32_t var_10 = 6
    void dwParam2
    *(arg1 + 0x2ec) = mciSendCommandA(zx.d(*(arg1 + 0x2da)), 0x814, 0x102, &dwParam2)
    char var_14
    uint32_t result
    result.b = var_14
    return result
}
