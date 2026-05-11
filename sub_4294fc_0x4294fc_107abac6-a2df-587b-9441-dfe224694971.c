// ============================================================
// 函数名称: sub_4294fc
// 虚拟地址: 0x4294fc
// WARP GUID: 107abac6-a2df-587b-9441-dfe224694971
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: IsChild
// [内部子函数调用]: sub_403248, sub_4318d0
// [被调用的父级函数]: sub_429540
// ============================================================

int32_tsub_4294fc(void* arg1)
{
    // 第一条实际指令: if (sub_403248(*(arg1 - 0x10), 0x427f2c) == 0)
    if (sub_403248(*(arg1 - 0x10), 0x427f2c) == 0)
        return 0
    
    HWND hWnd = sub_4318d0(*(arg1 - 0x14))
    BOOL eax_8 = IsChild(sub_4318d0(*(arg1 - 0x10)), hWnd)
    int32_t eax_9 = neg.d(eax_8)
    return neg.d(sbb.d(eax_9, eax_9, eax_8 != 0))
}
