// ============================================================
// 函数名称: sub_40d876
// 虚拟地址: 0x40d876
// WARP GUID: 5f52fbb2-5dbb-558d-a1af-4712f21840d0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40d7c0
// ============================================================

voidsub_40d876(void* arg1 @ ebp, char* arg2 @ esi, long double arg3 @ st0)
{
    // 第一条实际指令: int32_t edx = 0
    int32_t edx = 0
    
    while (true)
        int32_t eax
        eax.b = *arg2
        arg2 = &arg2[1]
        eax.b -= 0x3a
        char temp0_1 = eax.b
        eax.b += 0xa
        
        if (temp0_1 u< 0xf6)
            break
        
        *(arg1 - 4) = eax
        arg3 = arg3 * float.t(0xa) + float.t(*(arg1 - 4))
        edx += 1
}
