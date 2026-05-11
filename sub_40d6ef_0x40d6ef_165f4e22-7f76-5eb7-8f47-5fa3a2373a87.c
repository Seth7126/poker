// ============================================================
// 函数名称: sub_40d6ef
// 虚拟地址: 0x40d6ef
// WARP GUID: 165f4e22-7f76-5eb7-8f47-5fa3a2373a87
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40d5c1
// ============================================================

int32_tsub_40d6ef(void* arg1 @ ebp, int32_t* arg2 @ esi)
{
    // 第一条实际指令: int32_t eax = *arg2
    int32_t eax = *arg2
    int32_t edx = arg2[1]
    int16_t result
    uint8_t edx_5
    int16_t* entry_ebx
    
    if ((eax | edx) == 0)
    label_40d7b2:
        result = 0
        edx_5 = 0
        *(entry_ebx + 3) = 0
    else
        int32_t edx_1 = edx
        
        if (edx_1 s< 0)
            int32_t temp1_1 = eax
            eax = neg.d(eax)
            edx_1 = sbb.d(neg.d(edx_1), 0, temp1_1 != 0)
        
        int32_t ecx_2 = 0
        int32_t edi_2 = *(arg1 + 8)
        
        if (edi_2 s< 0)
            edi_2 = 0
        
        if (edi_2 s>= 4)
            edi_2 = 4
            bool c_3
            
            do
                ecx_2 += 1
                int32_t temp3_1 = eax
                eax -= 0xa7640000
                edx_1 = sbb.d(edx_1, 0xde0b6b3, temp3_1 u< 0xa7640000)
                c_3 = unimplemented  {sbb edx, 0xde0b6b3}
            while (not(c_3))
            ecx_2 -= 1
            int32_t temp5_1 = eax
            eax -= 0x589c0000
            edx_1 = adc.d(edx_1, 0xde0b6b3, temp5_1 u>= 0x589c0000)
        
        *(arg1 - 0x10) = eax
        *(arg1 - 0xc) = edx_1
        long double x87_r7_1 = float.t(*(arg1 - 0x10))
        
        if (4 != edi_2)
            x87_r7_1 = x87_r7_1 / float.t(*(((4 - edi_2) << 2) + &data_40cff8))
        
        *(arg1 - 0x1a) = __fbst(x87_r7_1)
        void* edi_3 = entry_ebx + 3
        int32_t eax_1
        int32_t ecx_4
        
        if (ecx_2 != 0)
            eax_1.b = ecx_2.b
            eax_1.b += 0x30
            *edi_3 = eax_1.b
            edi_3 += 1
            ecx_4 = 9
            goto label_40d783
        
        ecx_4 = 9
        
        while (true)
            eax_1.b = *(arg1 + ecx_4 - 0x1b)
            eax_1:1.b = eax_1.b
            eax_1.b u>>= 4
            
            if (eax_1.b != 0)
                while (true)
                    eax_1.b += 0x30
                    *edi_3 = eax_1.b
                    edi_3 += 1
                    eax_1.b = eax_1:1.b
                    eax_1.b &= 0xf
                label_40d793:
                    eax_1.b += 0x30
                    *edi_3 = eax_1.b
                    edi_3 += 1
                    int32_t temp7_1 = ecx_4
                    ecx_4 -= 1
                    
                    if (temp7_1 == 1)
                        break
                    
                label_40d783:
                    eax_1.b = *(arg1 + ecx_4 - 0x1b)
                    eax_1:1.b = eax_1.b
                    eax_1.b u>>= 4
                
                result = edi_3.w - (entry_ebx.w + edi_2.w + 3)
                
                do
                    *edi_3 = 0
                    edi_3 -= 1
                while (*edi_3 == 0x30)
                
                edx_5 = (arg2[1] u>> 0x1f).b
                break
            
            eax_1.b = eax_1:1.b
            eax_1.b &= 0xf
            
            if (eax_1.b != 0)
                goto label_40d793
            
            int32_t temp6_1 = ecx_4
            ecx_4 -= 1
            
            if (temp6_1 == 1)
                goto label_40d7b2
    
    *entry_ebx = result
    entry_ebx[1].b = edx_5
    return result
}
