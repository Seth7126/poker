// ============================================================
// 函数名称: sub_493628
// 虚拟地址: 0x493628
// WARP GUID: 02834e98-02ed-58ec-8df8-f763c3065b45
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: mciSendCommandA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_493064, sub_4931f4
// ============================================================

int32_t __convention("regparm")sub_493628(void* arg1)
{
    // 第一条实际指令: *(arg1 + 0x2d0) = 0x112
    *(arg1 + 0x2d0) = 0x112
    int32_t var_8 = 2
    int32_t edx
    int32_t var_4 = edx
    void dwParam2
    mciSendCommandA(zx.d(*(arg1 + 0x2da)), 0x814, 0x112, &dwParam2)
    int32_t result
    return result
}
