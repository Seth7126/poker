// ============================================================
// 函数名称: sub_464dec
// 虚拟地址: 0x464dec
// WARP GUID: 5af05dbd-7c4a-5542-9edb-4c24b7348b42
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_464d6c, sub_464cc4, sub_464c08
// [被调用的父级函数]: sub_464a00
// ============================================================

int32_t __convention("regparm")sub_464dec(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: uint32_t esi = *(arg1 + 0x161)
    uint32_t esi = *(arg1 + 0x161)
    char edx = (*(arg1 + 0x13d)).b
    *(esi + 0x10) = **(arg1 + 0x14)
    *(esi + 0x14) = *(*(arg1 + 0x14) + 4)
    
    if (*(arg1 + 0xc0) != 0 && *(esi + 0x44) == 0)
        sub_464d6c(esi, (*(esi + 0x48)).b)
    
    int32_t i = 0
    void* var_10 = arg1 + 0x109
    int32_t* var_14 = arg2
    
    while (*(arg1 + 0x105) s> i)
        int32_t edx_6 = *var_10
        void* ecx_5 = *(arg1 + (edx_6 << 2) + 0xed)
        int32_t edi_2 = sx.d(**var_14) s>> edx
        int32_t j = edi_2 - *(esi + (edx_6 << 2) + 0x24)
        *(esi + (edx_6 << 2) + 0x24) = edi_2
        int32_t j_1 = j
        
        if (j s< 0)
            j = neg.d(j)
            j_1 -= 1
        
        int32_t ebx_1 = 0
        
        while (j != 0)
            j s>>= 1
            ebx_1 += 1
        
        sub_464cc4(esi, *(ecx_5 + 0x14), ebx_1)
        
        if (ebx_1 != 0)
            sub_464c08(esi, j_1, ebx_1)
        
        i += 1
        var_10 += 4
        var_14 = &var_14[1]
    
    int32_t* eax_13 = *(arg1 + 0x14)
    *eax_13 = *(esi + 0x10)
    eax_13[1] = *(esi + 0x14)
    int32_t eax_14 = *(arg1 + 0xc0)
    
    if (eax_14 != 0)
        if (*(esi + 0x44) == 0)
            *(esi + 0x44) = eax_14
            *(esi + 0x48) += 1
            *(esi + 0x48) &= 7
        
        *(esi + 0x44) -= 1
    
    return 1
}
