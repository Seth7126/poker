// ============================================================
// 函数名称: sub_50d79c
// 虚拟地址: 0x50d79c
// WARP GUID: ec43942e-c6e3-5536-8c00-146ed38904eb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_50deb4, sub_50f0e4, sub_50d82b, sub_50d838
// ============================================================

void* __convention("regparm")sub_50d79c(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x2c) == 0)
    if (*(arg1 + 0x2c) == 0)
        int32_t edx_1 = *(arg1 + 0x1b200)
        int32_t edx_2 = edx_1 + *(arg1 + 0x1b204)
        
        if (add_overflow(edx_1, *(arg1 + 0x1b204)))
            sub_403010()
            noreturn
        
        if (add_overflow(edx_2, *(arg1 + 0x1b208)))
            sub_403010()
            noreturn
        
        if (edx_2 + *(arg1 + 0x1b208) == 0)
            arg1.b = 1
            return arg1
    
    return 0
}
