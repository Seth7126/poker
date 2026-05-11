// ============================================================
// 函数名称: sub_40d5e8
// 虚拟地址: 0x40d5e8
// WARP GUID: 690d3533-2d8c-5b70-b6dd-0a4dc1e7f637
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_406510
// [被调用的父级函数]: sub_40d5c1
// ============================================================

int32_tsub_40d5e8(void* arg1 @ ebp, int32_t* arg2 @ esi, long double arg3 @ st0)
{
    // 第一条实际指令: int32_t i_2
    int32_t i_2
    i_2.w = arg2[2].w
    int32_t i_1 = i_2
    int32_t result = i_2 & 0x7fff
    int16_t* entry_ebx
    
    if (result == 0)
        i_1 = 0
        *(entry_ebx + 3) = 0
    else if (result != 0x7fff)
        long double x87_r7_1 = *arg2
        *(arg1 - 8) = (((result - 0x3fff) * 0x4d10) s>> 0x10) + 1
        sub_406510(0x12 - *(arg1 - 8), fabs(x87_r7_1))
        long double x87_r0 = roundint.t(arg3)
        long double x87_r7_3 = data_40d00c
        x87_r7_3 - x87_r0
        *(arg1 - 4) = (x87_r7_3 < x87_r0 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_3, x87_r0) ? 1 : 0) << 0xa | (x87_r7_3 == x87_r0 ? 1 : 0) << 0xe
        
        if ((*(arg1 - 4) & 0x4100) != 0)
            x87_r0 = x87_r0 / float.t(0xa)
            *(arg1 - 8) += 1
        
        *(arg1 - 0x1a) = __fbst(x87_r0)
        void* edi_1 = entry_ebx + 3
        i_1 = 9
        int32_t i
        
        do
            int16_t eax_5
            eax_5.b = *(arg1 + i_1 - 0x1b)
            eax_5:1.b = eax_5.b
            eax_5.b u>>= 4
            eax_5:1.b &= 0xf
            *edi_1 = eax_5 + 0x3030
            edi_1 += 2
            i = i_1
            i_1 -= 1
        while (i != 1)
        *edi_1 = 0
        int32_t edi_3 = *(arg1 - 8)
        int32_t edi_4 = edi_3 + *(arg1 + 8)
        
        if (edi_3 + *(arg1 + 8) s>= 0)
            if (edi_4 u>= *(arg1 + 0xc))
                edi_4 = *(arg1 + 0xc)
            
            if (edi_4 u>= 0x12)
                edi_4 = 0x12
            label_40d6d7:
                
                do
                    *(entry_ebx + edi_4 + 3) = 0
                    int32_t temp4_1 = edi_4
                    edi_4 -= 1
                    
                    if (temp4_1 - 1 s< 0)
                        i_1 = 0
                        goto label_40d6dd
                while (*(entry_ebx + edi_4 + 3) == 0x30)
            else
                if (*(entry_ebx + edi_4 + 3) u< 0x35)
                    goto label_40d6d7
                
                do
                    *(entry_ebx + edi_4 + 3) = 0
                    int32_t temp5_1 = edi_4
                    edi_4 -= 1
                    
                    if (temp5_1 - 1 s< 0)
                        *(entry_ebx + 3) = 0x31
                        *(arg1 - 8) += 1
                        break
                    
                    *(entry_ebx + edi_4 + 3) += 1
                while (*(entry_ebx + edi_4 + 3) u> 0x39)
            
            i_1.w = arg2[2].w
        label_40d6dd:
            result = *(arg1 - 8)
        else
            result = 0
            i_1 = 0
            *(entry_ebx + 3) = 0
    else if ((*(arg2 + 6) & 0x8000) == 0 || (*arg2 == 0 && arg2[1] == 0x80000000))
        *(entry_ebx + 3) = 0
    else
        result += 1
        i_1 = 0
        *(entry_ebx + 3) = 0
    
    i_1.w u>>= 0xf
    *entry_ebx = result.w
    entry_ebx[1].b = i_1.b
    return result
}
