// ============================================================
// 函数名称: sub_43d874
// 虚拟地址: 0x43d874
// WARP GUID: e2401dfc-cc3e-5905-abbc-4831406da9bb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_439ed0
// [被调用的父级函数]: sub_444d94
// ============================================================

int32_t __convention("regparm")sub_43d874(void* arg1, void* arg2)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        return sub_439ed0(*(arg1 + 0x28), nullptr)
    
    return sub_439ed0(*(arg1 + 0x28), *(arg2 + 0x28))
}
