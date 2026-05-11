// ============================================================
// 函数名称: sub_4ce88a
// 虚拟地址: 0x4ce88a
// WARP GUID: 02baf637-9d28-53e8-a635-28ca7a9e0762
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_4d5ba0, sub_4ceed4, sub_4cf724, sub_4d5bdc, sub_4746a0, sub_408e1c, sub_4cc200, sub_403010, sub_4d5b64, sub_403df8, sub_403e1c, sub_4d5b1c
// [被调用的父级函数]: sub_40e812, sub_4ce8e2, sub_4ce5b4, sub_40e6c4, sub_40e8c2, sub_4ce832
// ============================================================

void*sub_4ce88a(void* arg1 @ ebp)
{
    // 第一条实际指令: while (true)
    while (true)
        int32_t ecx
        void* esi
        void* edi
        __builtin_memcpy(edi, esi, ecx << 2)
        int32_t* esp
        void* edi_1 = *esp
        int32_t esi_1 = esp[1]
        *(arg1 - 0xac) = sx.d(*(arg1 - 0xa))
        int32_t eax_5 = (sub_4d5bdc(esi_1) & 0x7f) * 0xd4f
        bool o_1 = unimplemented  {imul eax, eax, 0xd4f}
        
        if (o_1)
            sub_403010()
            noreturn
        
        int32_t ebx_1 = sx.d(*(arg1 - 0xa)) * 0x2e9c
        bool o_2 = unimplemented  {imul ebx, edx, 0x2e9c}
        
        if (o_2)
            sub_403010()
            noreturn
        
        esp[1] = *((ebx_1 << 3) + &data_532f70 + (eax_5 << 2) - 0x14010)
        int32_t eax_10 = (sub_4d5bdc(esi_1) & 0x7f) * 0xd4f
        bool o_3 = unimplemented  {imul eax, eax, 0xd4f}
        
        if (o_3)
            sub_403010()
            noreturn
        
        int32_t ecx_1 = esp[1]
        
        if (add_overflow(ecx_1, *((ebx_1 << 3) + &data_532f70 + (eax_10 << 2) - 0x1400c)))
            sub_403010()
            noreturn
        
        *(arg1 - 0xb4) = ecx_1 + *((ebx_1 << 3) + &data_532f70 + (eax_10 << 2) - 0x1400c)
        int32_t eax_14 = (sub_4d5bdc(esi_1) & 0x7f) * 0xd4f
        bool o_5 = unimplemented  {imul eax, eax, 0xd4f}
        
        if (o_5)
            sub_403010()
            noreturn
        
        int32_t temp7_1 = *((ebx_1 << 3) + &data_532f70 + (eax_14 << 2) - 0x1400c)
        *((ebx_1 << 3) + &data_532f70 + (eax_14 << 2) - 0x1400c) += 1
        
        if (add_overflow(temp7_1, 1))
            sub_403010()
            noreturn
        
        int32_t eax_15 = *(edi_1 + 0x10)
        
        if (add_overflow(eax_15, 0xffffffff))
            sub_403010()
            noreturn
        
        if (eax_15 - 1 s>= 0)
            *(arg1 - 0x18) = eax_15
            int32_t eax_18 = 0
            int32_t i
            
            do
                int32_t edx_5 = eax_18 * 2
                bool o_8 = unimplemented  {imul edx, eax, 0x2}
                
                if (o_8)
                    sub_403010()
                    noreturn
                
                int32_t ecx_3
                ecx_3.b = *(edi_1 + (edx_5 << 3) + 0x14)
                
                if (ecx_3 == *(arg1 - 0x5c))
                    int32_t ecx_4
                    ecx_4.b = *(edi_1 + (edx_5 << 3) + 0x15)
                    
                    if (ecx_4 == *(arg1 - 0xac))
                        ecx_4.b = *(edi_1 + (edx_5 << 3) + 0x18)
                        
                        if (ecx_4.b == *(arg1 - 0x58))
                            ecx_4.b = *(edi_1 + (edx_5 << 3) + 0x19)
                            
                            if (ecx_4.b == *(arg1 - 0xa8))
                                int32_t ecx_5
                                ecx_5.b = *(edi_1 + (edx_5 << 3) + 0x17)
                                
                                if (ecx_5 s< *(arg1 - 0xb4))
                                    char ecx_6 = (*(arg1 - 0xb4)).b
                                    ebx_1.b = *(edi_1 + (edx_5 << 3) + 0x17)
                                    *(arg1 - 0xb4) = ebx_1
                                    *(edi_1 + (edx_5 << 3) + 0x17) = ecx_6
                
                eax_18 += 1
                i = *(arg1 - 0x18)
                *(arg1 - 0x18) -= 1
            while (i != 1)
        
        void* esp_6
        
        if (*(arg1 - 8) == 0xff91)
            esp[1] = 5
            sub_4cf724(arg1 - 0xb8, arg1 - 0x68, edi_1)
            esp_6 = &esp[2]
        else if (*(*data_5301f4 + 0x2008c) != 0)
        label_4cea0b:
            esp[1] = 1
            sub_4cf724(arg1 - 0xb8, arg1 - 0x68, edi_1)
            esp_6 = &esp[2]
        else
            if (*(arg1 - 0xa) == 9)
                if (*(*data_5301f4 + 0xffec) == 2)
                    goto label_4cea0b
            else if (*(arg1 - 0xc) != 9 || *(*data_5301f4 + 0xffec) == 2)
                goto label_4cea0b
            
            esp[1] = 6
            sub_4cf724(arg1 - 0xb8, arg1 - 0x68, edi_1)
            esp_6 = &esp[2]
        
        int32_t i_7
        
        while (true)
            int32_t eax_101 = *(edi_1 + 0x1660)
            
            if (eax_101 s> 0)
                bool o_17 = unimplemented  {imul eax, eax, 0x5}
                
                if (o_17)
                    sub_403010()
                    noreturn
                
                if (*(edi_1 + eax_101 * 0xa + 0x843) != 0 && *(edi_1 + 0x10) s< 0x82)
                    if (*(edi_1 + 0x10) s< 0x50)
                    label_4ce6bc:
                        *(edi_1 + 0x1660)
                        int32_t eax_121 = *(edi_1 + 0x1660) * 5
                        bool o_22 = unimplemented  {imul eax, dword [edi+0x1660], 0x5}
                        
                        if (o_22)
                            sub_403010()
                            noreturn
                        
                        *(arg1 - 0xc) = *(edi_1 + (eax_121 << 1) + 0x83a)
                        *(arg1 - 8) = *(edi_1 + (eax_121 << 1) + 0x83e)
                        int32_t edx_38
                        edx_38.w = *(edi_1 + (eax_121 << 1) + 0x842)
                        *(arg1 - 4) = edx_38.w
                        int32_t temp13_1 = *(edi_1 + 0x1660)
                        *(edi_1 + 0x1660) -= 1
                        
                        if (add_overflow(temp13_1, 0xffffffff))
                            sub_403010()
                            noreturn
                        
                        if (*(arg1 - 3) != 0)
                            int32_t eax_125 = (sub_4d5bdc(sx.d(*(arg1 - 8))) & 0x7f) * 0xd4f
                            bool o_24 = unimplemented  {imul eax, eax, 0xd4f}
                            
                            if (o_24)
                                sub_403010()
                                noreturn
                            
                            bool o_25 = unimplemented  {imul edx, edx, 0x2e9c}
                            
                            if (o_25)
                                sub_403010()
                                noreturn
                            
                            int32_t ebx_3 = *(sx.d(*(arg1 - 0xc)) * 0x174e0 +
                                &data_532f70 + (eax_125 << 2) - 0x14010)
                            i_7 = ebx_3 - 1
                            
                            if (not(add_overflow(ebx_3, 0xffffffff)))
                                break
                            
                            sub_403010()
                            noreturn
                        
                        if (*(arg1 - 4) == 0)
                            int32_t i_2 = sx.d(*(arg1 - 8))
                            int32_t ebx_2 = 0
                            
                            do
                                *(arg1 - 0x10) = 0xf
                                int32_t i_1
                                
                                do
                                    if (i_2 s>= sub_4d5ba0(ebx_2.b))
                                        *(esp_6 - 4) = sub_4d5ba0(ebx_2.b)
                                        *(esp_6 - 8) = 1
                                        *(esp_6 - 0xc) = 4
                                        *(esp_6 - 0x10) = 1
                                        esp_6 -= 0x10
                                        sub_4ceed4(edi_1, sx.d(*(arg1 - 0xc)), sx.d(*(arg1 - 0xa)))
                                        int32_t eax_32 = sub_4d5ba0(ebx_2.b)
                                        int32_t i_8 = i_2
                                        i_2 -= eax_32
                                        
                                        if (add_overflow(i_8, neg.d(eax_32)))
                                            sub_403010()
                                            noreturn
                                    
                                    i_1 = *(arg1 - 0x10)
                                    *(arg1 - 0x10) -= 1
                                while (i_1 != 1)
                                ebx_2 += 1
                            while (ebx_2.b != 5)
                            
                            do
                                ebx_1 = 0
                                
                                do
                                    if (i_2 s>= sub_4d5ba0(ebx_1.b))
                                        *(esp_6 - 4) = sub_4d5ba0(ebx_1.b)
                                        *(esp_6 - 8) = 1
                                        *(esp_6 - 0xc) = 4
                                        *(esp_6 - 0x10) = 1
                                        esp_6 -= 0x10
                                        sub_4ceed4(edi_1, sx.d(*(arg1 - 0xc)), sx.d(*(arg1 - 0xa)))
                                        int32_t eax_39 = sub_4d5ba0(ebx_1.b)
                                        int32_t i_11 = i_2
                                        i_2 -= eax_39
                                        
                                        if (add_overflow(i_11, neg.d(eax_39)))
                                            sub_403010()
                                            noreturn
                                    
                                    ebx_1 += 1
                                while (ebx_1.b != 5)
                            while (i_2 != 0)
                            
                            continue
                        else if (*(arg1 - 4) != 2)
                            int32_t i_3 = sx.d(*(arg1 - 8))
                            ebx_1.b = 4
                            
                            while (i_3 s> 0)
                                if (ebx_1.b == 5)
                                    break
                                
                                if (i_3 s>= sub_4d5ba0(ebx_1.b)
                                        && sub_4cc200(sx.d(*(arg1 - 0xc)), ebx_1.b) s> 0)
                                    *(esp_6 - 4) = sub_4d5ba0(ebx_1.b)
                                    *(esp_6 - 8) = 1
                                    *(esp_6 - 0xc) = 4
                                    *(esp_6 - 0x10) = 1
                                    esp_6 -= 0x10
                                    sub_4ceed4(edi_1, sx.d(*(arg1 - 0xc)), sx.d(*(arg1 - 0xa)))
                                    int32_t eax_88 = sub_4d5ba0(ebx_1.b)
                                    int32_t i_9 = i_3
                                    i_3 -= eax_88
                                    
                                    if (not(add_overflow(i_9, neg.d(eax_88))))
                                        continue
                                    
                                    sub_403010()
                                    noreturn
                                
                                int32_t eax_90 = sub_4d5b1c(ebx_1.b)
                                
                                if (add_overflow(eax_90, 0xffffffff))
                                    sub_403010()
                                    noreturn
                                
                                ebx_1 = sub_4d5b64(eax_90 - 1)
                            
                            if (ebx_1.b != 5)
                                continue
                            else
                                sub_408e1c(sx.d(*(arg1 - 0xa)), arg1 - 0x1d4)
                                *(esp_6 - 4) = *(arg1 - 0x1d4)
                                sub_408e1c(sx.d(*(arg1 - 8)), arg1 - 0x1d8)
                                sub_404054(arg1 - 0x1bc, *(arg1 - 0x1d8), 0xff)
                                *(esp_6 - 8) = arg1 - 0x1bc
                                *(esp_6 - 0xc) = 0x4ceecc
                                sub_408e1c(sx.d(*(arg1 - 0xc)), arg1 - 0x1dc)
                                sub_4746a0(*(arg1 - 0x1dc), 0x19, *data_530304)
                                continue
                        else
                            int32_t i_5 = sx.d(*(arg1 - 8))
                            ebx_1 = 0
                            
                            do
                                if (i_5 s>= sub_4d5ba0(ebx_1.b)
                                        && sub_4cc200(sx.d(*(arg1 - 0xc)), ebx_1.b) s> 0)
                                    int32_t temp0_1 = divs.dp.d(
                                        sx.q(sub_4cc200(sx.d(*(arg1 - 0xc)), ebx_1.b)), 
                                        sx.d(*(arg1 - 6)))
                                    
                                    if (temp0_1 s> 0)
                                        *(arg1 - 0x18) = temp0_1
                                        int32_t i_4
                                        
                                        do
                                            if (i_5 s>= sub_4d5ba0(ebx_1.b))
                                                *(esp_6 - 4) = sub_4d5ba0(ebx_1.b)
                                                *(esp_6 - 8) = 1
                                                *(esp_6 - 0xc) = 4
                                                *(esp_6 - 0x10) = 1
                                                esp_6 -= 0x10
                                                sub_4ceed4(edi_1, sx.d(*(arg1 - 0xc)), 
                                                    sx.d(*(arg1 - 0xa)))
                                                int32_t eax_54 = sub_4d5ba0(ebx_1.b)
                                                int32_t i_10 = i_5
                                                i_5 -= eax_54
                                                
                                                if (add_overflow(i_10, neg.d(eax_54)))
                                                    sub_403010()
                                                    noreturn
                                            
                                            i_4 = *(arg1 - 0x18)
                                            *(arg1 - 0x18) -= 1
                                        while (i_4 != 1)
                                
                                int32_t eax_56 = sub_4d5b1c(ebx_1.b)
                                
                                if (add_overflow(eax_56, 1))
                                    sub_403010()
                                    noreturn
                                
                                ebx_1 = sub_4d5b64(eax_56 + 1)
                            while (ebx_1.b u< 4)
                            
                            ebx_1.b = 4
                            
                            while (i_5 s> 0)
                                if (ebx_1.b == 5)
                                    break
                                
                                if (i_5 s>= sub_4d5ba0(ebx_1.b)
                                        && sub_4cc200(sx.d(*(arg1 - 0xc)), ebx_1.b) s> 0)
                                    *(esp_6 - 4) = sub_4d5ba0(ebx_1.b)
                                    *(esp_6 - 8) = 1
                                    *(esp_6 - 0xc) = 4
                                    *(esp_6 - 0x10) = 1
                                    esp_6 -= 0x10
                                    sub_4ceed4(edi_1, sx.d(*(arg1 - 0xc)), sx.d(*(arg1 - 0xa)))
                                    int32_t eax_67 = sub_4d5ba0(ebx_1.b)
                                    int32_t i_13 = i_5
                                    i_5 -= eax_67
                                    
                                    if (not(add_overflow(i_13, neg.d(eax_67))))
                                        continue
                                    
                                    sub_403010()
                                    noreturn
                                
                                int32_t eax_69 = sub_4d5b1c(ebx_1.b)
                                
                                if (add_overflow(eax_69, 0xffffffff))
                                    sub_403010()
                                    noreturn
                                
                                ebx_1 = sub_4d5b64(eax_69 - 1)
                            
                            if (ebx_1.b != 5)
                                continue
                            else
                                sub_408e1c(sx.d(*(arg1 - 0xa)), arg1 - 0x1c8)
                                *(esp_6 - 4) = *(arg1 - 0x1c8)
                                sub_408e1c(sx.d(*(arg1 - 8)), arg1 - 0x1cc)
                                sub_404054(arg1 - 0x1bc, *(arg1 - 0x1cc), 0xff)
                                *(esp_6 - 8) = arg1 - 0x1bc
                                *(esp_6 - 0xc) = 0x4ceecc
                                sub_408e1c(sx.d(*(arg1 - 0xc)), arg1 - 0x1d0)
                                sub_4746a0(*(arg1 - 0x1d0), 0x18, *data_530304)
                                continue
                    else
                        *(edi_1 + 0x1660)
                        bool o_18 = unimplemented  {imul eax, dword [edi+0x1660], 0x5}
                        
                        if (o_18)
                            sub_403010()
                            noreturn
                        
                        int32_t eax_103
                        eax_103.w = *(edi_1 + *(edi_1 + 0x1660) * 0xa + 0x83c)
                        
                        if (eax_103.w == *(arg1 - 0xa))
                            goto label_4ce6bc
            
            __builtin_strncpy(arg1 - 0x14, "333?", 4)
            int32_t eax_105 = *(data_530598 + 0x18)
            
            if (eax_105 s<= 4)
                *(arg1 - 0x14) = 0x3f4ccccd
            
            data_530598
            
            if (eax_105 == 5)
                *(arg1 - 0x14) = 0x3f1eb852
            
            data_530598
            
            if (eax_105 == 6)
                *(arg1 - 0x14) = 0x3f000000
            
            if (*(*data_530304 + 0xce0) != 0 && *(data_530598 + 0x18) == 6)
                *(arg1 - 0x14) = 0x3d4ccccd
            
            int32_t eax_110 = *data_5300d0
            
            if (eax_110 s> 0)
                *(arg1 - 0x18) = eax_110
                int32_t esi_2 = 1
                int32_t i_6
                
                do
                    bool o_19 = unimplemented  {imul eax, esi, 0x41}
                    
                    if (o_19)
                        sub_403010()
                        noreturn
                    
                    if (*(*data_5301f4 + esi_2 * 0x208 + 0x1feae) != 0)
                        bool o_20 = unimplemented  {imul eax, esi, 0x41}
                        
                        if (o_20)
                            sub_403010()
                            noreturn
                        
                        long double x87_r7_1 = fconvert.t(*(*data_5301f4 + esi_2 * 0x208 + 0x20074))
                        long double temp17_1 = fconvert.t(*(arg1 - 0x14))
                        x87_r7_1 - temp17_1
                        int32_t eax_112
                        eax_112.w = (x87_r7_1 < temp17_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_1, temp17_1) ? 1 : 0) << 0xa
                            | (x87_r7_1 == temp17_1 ? 1 : 0) << 0xe
                        
                        if (not(test_bit(eax_112:1.b, 0)) || *(*data_530304 + 0xcf9) != 0)
                            int32_t edx_35 = esi_2 * 0x41
                            bool o_21 = unimplemented  {imul edx, esi, 0x41}
                            
                            if (o_21)
                                sub_403010()
                                noreturn
                            
                            long double x87_r7_2 = fconvert.t(*(*data_5301f4 + (edx_35 << 3) + 0x20074))
                            long double temp19_1 = fconvert.t(1f)
                            x87_r7_2 - temp19_1
                            int32_t eax_116
                            eax_116.w = (x87_r7_2 < temp19_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_2, temp19_1) ? 1 : 0) << 0xa
                                | (x87_r7_2 == temp19_1 ? 1 : 0) << 0xe
                            
                            if (test_bit(eax_116:1.b, 0)
                                    && *(*data_5301f4 + (edx_35 << 3) + 0x1fea2) == 8)
                                *(arg1 - 1) = 0
                        else
                            *(arg1 - 1) = 0
                    
                    esi_2 += 1
                    i_6 = *(arg1 - 0x18)
                    *(arg1 - 0x18) -= 1
                while (i_6 != 1)
            
            *(edi_1 + 0xc) = 0
            *(esp_6 + 8)
            TEB* fsbase
            fsbase->NtTib.ExceptionList = *esp_6
            *(esp_6 + 8) = sub_4ceec1
            sub_403e1c(arg1 - 0x1dc, 8)
            sub_403df8(arg1 - 0xbc)
            return arg1 - 0xbc
        
        while (i_7 s>= 0)
            if (i_7 s>= 0x3e8)
                break
            
            int32_t eax_129 = (sub_4d5bdc(sx.d(*(arg1 - 8))) & 0x7f) * 0xd4f
            bool o_28 = unimplemented  {imul eax, eax, 0xd4f}
            
            if (o_28)
                sub_403010()
                noreturn
            
            bool o_29 = unimplemented  {imul edx, edx, 0x2e9c}
            
            if (o_29)
                sub_403010()
                noreturn
            
            bool o_30 = unimplemented  {imul edx, ebx, 0xa}
            
            if (o_30)
                sub_403010()
                noreturn
            
            if (*(sx.d(*(arg1 - 0xc)) * 0x174e0 + &data_532f70 + (eax_129 << 2) + i_7 * 0x50 - 0x174c8)
                    == 1)
                break
            
            int32_t i_12 = i_7
            i_7 -= 1
            
            if (add_overflow(i_12, 0xffffffff))
                sub_403010()
                noreturn
        
        if (i_7 s< 0 || i_7 s>= 0x3e8)
            sub_408e1c(sub_4d5b1c(sub_4d5bdc(sx.d(*(arg1 - 8)))), arg1 - 0xbc)
            *(esp_6 - 4) = *(arg1 - 0xbc)
            sub_408e1c(i_7, arg1 - 0x1c0)
            sub_404054(arg1 - 0x1bc, *(arg1 - 0x1c0), 0xff)
            *(esp_6 - 8) = arg1 - 0x1bc
            *(esp_6 - 0xc) = 0x4ceecc
            sub_408e1c(sx.d(*(arg1 - 0xc)), arg1 - 0x1c4)
            sub_4746a0(*(arg1 - 0x1c4), 0x17, *data_530304)
        
        int32_t esi_3 = sx.d(*(arg1 - 8))
        int32_t eax_144 = (sub_4d5bdc(esi_3) & 0x7f) * 0xd4f
        bool o_31 = unimplemented  {imul eax, eax, 0xd4f}
        
        if (o_31)
            sub_403010()
            noreturn
        
        bool o_32 = unimplemented  {imul edx, edx, 0x2e9c}
        
        if (o_32)
            sub_403010()
            noreturn
        
        void* eax_145 = sx.d(*(arg1 - 0xc)) * 0x174e0 + &data_532f70 + (eax_144 << 2)
        bool o_33 = unimplemented  {imul edx, ebx, 0xa}
        
        if (o_33)
            break
        
        *(esp_6 - 4) = esi_3
        *(esp_6 - 8) = edi_1
        __builtin_memcpy(arg1 - 0x68, eax_145 + i_7 * 0x50 - 0x174e0, 0x50)
        int32_t edi_3 = *(esp_6 - 8)
        *(esp_6 - 4) = *(esp_6 - 4)
        *(esp_6 - 8) = edi_3
        esp = esp_6 - 8
        esi = arg1 - 0x68
        edi = arg1 - 0xb8
        ecx = 0x14
    
    sub_403010()
    noreturn
}
