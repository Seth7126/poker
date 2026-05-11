// ============================================================
// 函数名称: sub_464f18
// 虚拟地址: 0x464f18
// WARP GUID: 2369527e-726c-5baa-912a-c0dc7c32657b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_464d6c, sub_464cc4, sub_464c08, sub_464d1c
// [被调用的父级函数]: sub_464a00
// ============================================================

int32_t __convention("regparm")sub_464f18(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: uint32_t ebx = *(arg1 + 0x161)
    uint32_t ebx = *(arg1 + 0x161)
    int32_t edx = *(arg1 + 0x135)
    char eax_2 = (*(arg1 + 0x13d)).b
    *(ebx + 0x10) = **(arg1 + 0x14)
    *(ebx + 0x14) = *(*(arg1 + 0x14) + 4)
    
    if (*(arg1 + 0xc0) != 0 && *(ebx + 0x44) == 0)
        sub_464d6c(ebx, (*(ebx + 0x48)).b)
    
    int32_t ecx_3 = *arg2
    int32_t i = 0
    int32_t var_24 = *(arg1 + 0x131)
    void* var_14 = (var_24 << 2) + &data_52eed0
    
    while (var_24 s<= edx)
        int32_t edi_1 = sx.d(*(ecx_3 + (*var_14 << 1)))
        
        if (edi_1 != 0)
            int32_t var_28_1
            int32_t edi_3
            
            if (edi_1 s>= 0)
                edi_3 = edi_1 s>> eax_2
                var_28_1 = edi_3
            else
                edi_3 = neg.d(edi_1) s>> eax_2
                var_28_1 = not.d(edi_3)
            
            if (edi_3 != 0)
                if (*(ebx + 0x38) u> 0)
                    sub_464d1c(ebx)
                
                for (; i s> 0xf; i -= 0x10)
                    sub_464cc4(ebx, *(ebx + 0x34), 0xf0)
                
                int32_t ebp_1 = 1
                
                while (true)
                    edi_3 s>>= 1
                    
                    if (edi_3 == 0)
                        break
                    
                    ebp_1 += 1
                
                sub_464cc4(ebx, *(ebx + 0x34), (i << 4) + ebp_1)
                sub_464c08(ebx, var_28_1, ebp_1)
                i = 0
            else
                i += 1
        else
            i += 1
        
        var_24 += 1
        var_14 += 4
    
    if (i s> 0)
        *(ebx + 0x38) += 1
        
        if (*(ebx + 0x38) == 0x7fff)
            sub_464d1c(ebx)
    
    int32_t* eax_17 = *(arg1 + 0x14)
    *eax_17 = *(ebx + 0x10)
    eax_17[1] = *(ebx + 0x14)
    int32_t eax_19 = *(arg1 + 0xc0)
    
    if (eax_19 != 0)
        if (*(ebx + 0x44) == 0)
            *(ebx + 0x44) = eax_19
            *(ebx + 0x48) += 1
            *(ebx + 0x48) &= 7
        
        *(ebx + 0x44) -= 1
    
    return 1
}
