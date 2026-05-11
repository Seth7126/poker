// ============================================================
// 函数名称: sub_40496c
// 虚拟地址: 0x40496c
// WARP GUID: 268bb90e-a11e-5b25-8305-5a11bd20c4d5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404d30, sub_402980, sub_404524, sub_403e4c, sub_404a88, sub_40496c, sub_405b58, sub_4027e0, sub_40553c
// [被调用的父级函数]: sub_404a88, sub_4c5eb0, sub_4f2e8c, sub_4ee818, sub_40496c, sub_51d270, sub_51db70, sub_529818
// ============================================================

void* __convention("regparm")sub_40496c(void* arg1, void** arg2, void* arg3)
{
    // 第一条实际指令: int32_t esi
    int32_t esi
    int32_t var_8 = esi
    int32_t edi
    int32_t var_c = edi
    int32_t ebp
    int32_t var_10 = ebp
    int32_t eax
    eax.b = *(arg3 + 1)
    void* edi_1 = arg3 + eax + 0xa
    int32_t i_1 = *(edi_1 - 4)
    void* result = nullptr
    int32_t ecx = *(edi_1 - 8)
    int32_t i
    
    do
        int32_t ecx_1 = *(edi_1 + 4)
        
        if (ecx_1 s> result)
            sub_402980(result + arg2, result + arg1, ecx_1 - result)
        
        void* eax_2 = *(edi_1 + 4)
        char* edx_3 = **edi_1
        void* ecx_2
        ecx_2.b = *edx_3
        int32_t eax_4
        
        switch (ecx_2.b)
            case 0xa
                sub_403e4c(eax_2 + arg1, *(arg2 + eax_2))
                eax_4 = 4
            case 0xb
                sub_404524(eax_2 + arg1, *(arg2 + eax_2))
                eax_4 = 4
            case 0xc
                sub_404d30(eax_2 + arg1, arg2 + eax_2)
                eax_4 = 0x10
            case 0xd
                int32_t ecx_3
                ecx_3.b = edx_3[1]
                int32_t var_18_1 = *(edx_3 + ecx_3 + 2)
                sub_404a88(**(edx_3 + ecx_3 + 0xa), arg2 + eax_2, eax_2 + arg1, *(edx_3 + ecx_3 + 6))
                eax_4 = var_18_1
            case 0xe
                int32_t ecx_6
                ecx_6.b = edx_3[1]
                int32_t ecx_7 = *(edx_3 + ecx_6 + 2)
                sub_40496c(ecx_7, ecx)
                eax_4 = ecx_7
            case 0xf
                sub_405b58(eax_2 + arg1, *(arg2 + eax_2))
                eax_4 = 4
            default
                if (ecx_2.b != 0x11)
                    eax_2.b = 2
                    noreturn sub_4027e0(eax_2) __tailcall
                
                sub_40553c(eax_2 + arg1, *(arg2 + eax_2), edx_3)
                eax_4 = 4
        
        result = eax_4 + *(edi_1 + 4)
        edi_1 += 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    
    if (ecx s<= result)
        return result
    
    return sub_402980(result + arg2, arg1 + result, ecx - result)
}
