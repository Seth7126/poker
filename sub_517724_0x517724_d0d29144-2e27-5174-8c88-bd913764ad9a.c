// ============================================================
// 函数名称: sub_517724
// 虚拟地址: 0x517724
// WARP GUID: d0d29144-2e27-5174-8c88-bd913764ad9a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_51bd00
// ============================================================

void __convention("regparm")sub_517724(void* arg1)
{
    // 第一条实际指令: int32_t i_1 = sx.d(*(arg1 + 0x298))
    int32_t i_1 = sx.d(*(arg1 + 0x298))
    
    if (i_1 s<= 0)
        return 
    
    int32_t ecx_1 = 1
    arg1 += 2
    int32_t i
    
    do
        *arg1 = ecx_1.w
        ecx_1 += 1
        arg1 += 4
        i = i_1
        i_1 -= 1
    while (i != 1)
}
