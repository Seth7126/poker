// ============================================================
// 函数名称: sub_4936a0
// 虚拟地址: 0x4936a0
// WARP GUID: 69b2bc6a-fd57-58fe-9455-1a9c4652d500
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: mciSendCommandA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_49292c
// ============================================================

uint32_t __convention("regparm")sub_4936a0(void* arg1, char arg2)
{
    // 第一条实际指令: *(arg1 + 0x2d0) = 0x401
    *(arg1 + 0x2d0) = 0x401
    int32_t eax
    eax.b = arg2
    int32_t var_10 = eax
    void dwParam2
    uint32_t result = mciSendCommandA(zx.d(*(arg1 + 0x2da)), 0x80d, 0x401, &dwParam2)
    *(arg1 + 0x2ec) = result
    return result
}
