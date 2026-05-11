// ============================================================
// 函数名称: sub_5177dc
// 虚拟地址: 0x5177dc
// WARP GUID: 7b3947fa-f8f9-5b04-86ed-98e75c56e867
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4c02cc, sub_4bf070
// ============================================================

void __convention("regparm")sub_5177dc(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_10 = ecx
    int32_t i_1 = sx.d(*(arg2 + 0x100))
    
    if (i_1 s> 0)
        int32_t edx = 1
        void* ebx_1 = arg2
        int32_t i
        
        do
            int32_t ecx_1 = sx.d(*(arg1 + 0x100))
            
            if (add_overflow(ecx_1, edx))
                sub_403010()
                noreturn
            
            *(arg1 + ((ecx_1 + edx) << 2) - 4) = *ebx_1
            edx += 1
            ebx_1 += 4
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t edx_1 = sx.d(*(arg1 + 0x100))
    int32_t ecx_4 = sx.d(*(arg2 + 0x100))
    
    if (not(add_overflow(edx_1, ecx_4)))
        *(arg1 + 0x100) = edx_1.w + ecx_4.w
        return 
    
    sub_403010()
    noreturn
}
