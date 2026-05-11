// ============================================================
// 函数名称: sub_493a70
// 虚拟地址: 0x493a70
// WARP GUID: 23d8ddae-c747-518c-a149-42f72f1fb2a1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: mciSendCommandA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_49292c, sub_49277c, sub_4931f4, sub_493064, sub_492ed0
// ============================================================

uint32_t __convention("regparm")sub_493a70(void* arg1)
{
    // 第一条实际指令: *(arg1 + 0x2d0) = 0x102
    *(arg1 + 0x2d0) = 0x102
    int32_t var_10 = 4
    void dwParam2
    *(arg1 + 0x2ec) = mciSendCommandA(zx.d(*(arg1 + 0x2da)), 0x814, 0x102, &dwParam2)
    char var_14
    uint32_t result
    result.b = var_14
    result.b -= 0xc
    return result
}
