// ============================================================
// 函数名称: sub_4a9498
// 虚拟地址: 0x4a9498
// WARP GUID: 150a9149-852e-544e-b1dd-1dce270ae20d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a62c0
// [被调用的父级函数]: sub_4a9430, sub_4a90cc
// ============================================================

int32_t __convention("regparm")sub_4a9498(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x70) == 0)
    if (*(arg1 + 0x70) == 0)
        int32_t edx
        edx.b = 1
        *(arg1 + 0x70) = sub_4a62c0(sub_4a6018+0xe4, edx)
    
    return *(arg1 + 0x70)
}
