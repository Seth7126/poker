// ============================================================
// 函数名称: sub_4ce832
// 虚拟地址: 0x4ce832
// WARP GUID: 0dbcfa7e-0599-573a-a4ce-156606370ab7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_4d5ba0, sub_4ceed4, sub_4cf724, sub_4d5bdc, sub_4746a0, sub_408e1c, sub_4cc200, sub_403010, sub_4d5b64, sub_4ce88a, sub_403df8, sub_403e1c, sub_4d5b1c
// [被调用的父级函数]: sub_40e812, sub_40e6c4
// ============================================================

void* __convention("regparm")sub_4ce832(char* arg1, int16_t arg2, void* arg3, void* arg4 @ ebp, int32_t arg5 @ esi, void* arg6 @ edi)
{
    // 第一条实际指令: bool z
    bool z
    bool s
    bool o
    
    if (not(z) && s == o)
        *arg1 += arg1.b
        bool o_4 = unimplemented  {imul eax, eax, 0xd4f}
        
        if (o_4)
            sub_403010()
            noreturn
        
        int32_t ebx_1 = sx.d(*(arg4 - 0xa)) * 0x2e9c
        bool o_5 = unimplemented  {imul ebx, edx, 0x2e9c}
        
        if (o_5)
            sub_403010()
            noreturn
        
        int32_t eax_5 = *((ebx_1 << 3) + &data_532f70 + (arg1 & 0x7f) * 0x353c - 0x14010)
        int32_t eax_9 = (sub_4d5bdc(arg5) & 0x7f) * 0xd4f
        bool o_6 = unimplemented  {imul eax, eax, 0xd4f}
        
        if (o_6)
            sub_403010()
            noreturn
        
        if (add_overflow(eax_5, *((ebx_1 << 3) + &data_532f70 + (eax_9 << 2) - 0x1400c)))
            sub_403010()
            noreturn
        
        *(arg4 - 0xb4) = eax_5 + *((ebx_1 << 3) + &data_532f70 + (eax_9 << 2) - 0x1400c)
        int32_t eax_13 = (sub_4d5bdc(arg5) & 0x7f) * 0xd4f
        bool o_8 = unimplemented  {imul eax, eax, 0xd4f}
        
        if (o_8)
            sub_403010()
            noreturn
        
        int32_t temp7_1 = *((ebx_1 << 3) + &data_532f70 + (eax_13 << 2) - 0x1400c)
        *((ebx_1 << 3) + &data_532f70 + (eax_13 << 2) - 0x1400c) += 1
        
        if (add_overflow(temp7_1, 1))
            sub_403010()
            noreturn
        
        int32_t eax_14 = *(arg6 + 0x10)
        
        if (add_overflow(eax_14, 0xffffffff))
            sub_403010()
            noreturn
        
        if (eax_14 - 1 s>= 0)
            *(arg4 - 0x18) = eax_14
            int32_t eax_17 = 0
            int32_t i
            
            do
                int32_t edx_9 = eax_17 * 2
                bool o_11 = unimplemented  {imul edx, eax, 0x2}
                
                if (o_11)
                    sub_403010()
                    noreturn
                
                int32_t ecx_3
                ecx_3.b = *(arg6 + (edx_9 << 3) + 0x14)
                
                if (ecx_3 == *(arg4 - 0x5c))
                    int32_t ecx_4
                    ecx_4.b = *(arg6 + (edx_9 << 3) + 0x15)
                    
                    if (ecx_4 == *(arg4 - 0xac))
                        ecx_4.b = *(arg6 + (edx_9 << 3) + 0x18)
                        
                        if (ecx_4.b == *(arg4 - 0x58))
                            ecx_4.b = *(arg6 + (edx_9 << 3) + 0x19)
                            
                            if (ecx_4.b == *(arg4 - 0xa8))
                                int32_t ecx_5
                                ecx_5.b = *(arg6 + (edx_9 << 3) + 0x17)
                                
                                if (ecx_5 s< *(arg4 - 0xb4))
                                    char ecx_6 = (*(arg4 - 0xb4)).b
                                    ebx_1.b = *(arg6 + (edx_9 << 3) + 0x17)
                                    *(arg4 - 0xb4) = ebx_1
                                    *(arg6 + (edx_9 << 3) + 0x17) = ecx_6
                
                eax_17 += 1
                i = *(arg4 - 0x18)
                *(arg4 - 0x18) -= 1
            while (i != 1)
        
        void* const* esp_6
        
        if (*(arg4 - 8) == 0xff91)
            int32_t var_4_2 = 5
            sub_4cf724(arg4 - 0xb8, arg4 - 0x68, arg6, 5)
            esp_6 = &__return_addr
        else if (*(*data_5301f4 + 0x2008c) != 0)
        label_4cea0b:
            int32_t var_4_4 = 1
            sub_4cf724(arg4 - 0xb8, arg4 - 0x68, arg6, 1)
            esp_6 = &__return_addr
        else
            if (*(arg4 - 0xa) == 9)
                if (*(*data_5301f4 + 0xffec) == 2)
                    goto label_4cea0b
            else if (*(arg4 - 0xc) != 9 || *(*data_5301f4 + 0xffec) == 2)
                goto label_4cea0b
            
            int32_t var_4_3 = 6
            sub_4cf724(arg4 - 0xb8, arg4 - 0x68, arg6, 6)
            esp_6 = &__return_addr
        
        while (true)
            int32_t eax_100 = *(arg6 + 0x1660)
            
            if (eax_100 s> 0)
                bool o_20 = unimplemented  {imul eax, eax, 0x5}
                
                if (o_20)
                    sub_403010()
                    noreturn
                
                if (*(arg6 + eax_100 * 0xa + 0x843) != 0 && *(arg6 + 0x10) s< 0x82)
                    if (*(arg6 + 0x10) s< 0x50)
                    label_4ce6bc:
                        *(arg6 + 0x1660)
                        int32_t eax_120 = *(arg6 + 0x1660) * 5
                        bool o_25 = unimplemented  {imul eax, dword [edi+0x1660], 0x5}
                        
                        if (o_25)
                            sub_403010()
                            noreturn
                        
                        *(arg4 - 0xc) = *(arg6 + (eax_120 << 1) + 0x83a)
                        *(arg4 - 8) = *(arg6 + (eax_120 << 1) + 0x83e)
                        int32_t edx_42
                        edx_42.w = *(arg6 + (eax_120 << 1) + 0x842)
                        *(arg4 - 4) = edx_42.w
                        int32_t temp13_1 = *(arg6 + 0x1660)
                        *(arg6 + 0x1660) -= 1
                        
                        if (add_overflow(temp13_1, 0xffffffff))
                            sub_403010()
                            noreturn
                        
                        if (*(arg4 - 3) != 0)
                            break
                        
                        if (*(arg4 - 4) == 0)
                            int32_t i_2 = sx.d(*(arg4 - 8))
                            int32_t ebx_2 = 0
                            
                            do
                                *(arg4 - 0x10) = 0xf
                                int32_t i_1
                                
                                do
                                    if (i_2 s>= sub_4d5ba0(ebx_2.b))
                                        *(esp_6 - 4) = sub_4d5ba0(ebx_2.b)
                                        *(esp_6 - 8) = 1
                                        *(esp_6 - 0xc) = 4
                                        *(esp_6 - 0x10) = 1
                                        esp_6 -= 0x10
                                        sub_4ceed4(arg6, sx.d(*(arg4 - 0xc)), sx.d(*(arg4 - 0xa)))
                                        int32_t eax_31 = sub_4d5ba0(ebx_2.b)
                                        int32_t i_8 = i_2
                                        i_2 -= eax_31
                                        
                                        if (add_overflow(i_8, neg.d(eax_31)))
                                            sub_403010()
                                            noreturn
                                    
                                    i_1 = *(arg4 - 0x10)
                                    *(arg4 - 0x10) -= 1
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
                                        sub_4ceed4(arg6, sx.d(*(arg4 - 0xc)), sx.d(*(arg4 - 0xa)))
                                        int32_t eax_38 = sub_4d5ba0(ebx_1.b)
                                        int32_t i_11 = i_2
                                        i_2 -= eax_38
                                        
                                        if (add_overflow(i_11, neg.d(eax_38)))
                                            sub_403010()
                                            noreturn
                                    
                                    ebx_1 += 1
                                while (ebx_1.b != 5)
                            while (i_2 != 0)
                            
                            continue
                        else if (*(arg4 - 4) != 2)
                            int32_t i_3 = sx.d(*(arg4 - 8))
                            ebx_1.b = 4
                            
                            while (i_3 s> 0)
                                if (ebx_1.b == 5)
                                    break
                                
                                if (i_3 s>= sub_4d5ba0(ebx_1.b)
                                        && sub_4cc200(sx.d(*(arg4 - 0xc)), ebx_1.b) s> 0)
                                    *(esp_6 - 4) = sub_4d5ba0(ebx_1.b)
                                    *(esp_6 - 8) = 1
                                    *(esp_6 - 0xc) = 4
                                    *(esp_6 - 0x10) = 1
                                    esp_6 -= 0x10
                                    sub_4ceed4(arg6, sx.d(*(arg4 - 0xc)), sx.d(*(arg4 - 0xa)))
                                    int32_t eax_87 = sub_4d5ba0(ebx_1.b)
                                    int32_t i_9 = i_3
                                    i_3 -= eax_87
                                    
                                    if (not(add_overflow(i_9, neg.d(eax_87))))
                                        continue
                                    
                                    sub_403010()
                                    noreturn
                                
                                int32_t eax_89 = sub_4d5b1c(ebx_1.b)
                                
                                if (add_overflow(eax_89, 0xffffffff))
                                    sub_403010()
                                    noreturn
                                
                                ebx_1 = sub_4d5b64(eax_89 - 1)
                            
                            if (ebx_1.b != 5)
                                continue
                            else
                                sub_408e1c(sx.d(*(arg4 - 0xa)), arg4 - 0x1d4)
                                *(esp_6 - 4) = *(arg4 - 0x1d4)
                                sub_408e1c(sx.d(*(arg4 - 8)), arg4 - 0x1d8)
                                sub_404054(arg4 - 0x1bc, *(arg4 - 0x1d8), 0xff)
                                *(esp_6 - 8) = arg4 - 0x1bc
                                *(esp_6 - 0xc) = 0x4ceecc
                                sub_408e1c(sx.d(*(arg4 - 0xc)), arg4 - 0x1dc)
                                sub_4746a0(*(arg4 - 0x1dc), 0x19, *data_530304)
                                continue
                        else
                            int32_t i_5 = sx.d(*(arg4 - 8))
                            ebx_1 = 0
                            
                            do
                                if (i_5 s>= sub_4d5ba0(ebx_1.b)
                                        && sub_4cc200(sx.d(*(arg4 - 0xc)), ebx_1.b) s> 0)
                                    int32_t temp0_1 = divs.dp.d(
                                        sx.q(sub_4cc200(sx.d(*(arg4 - 0xc)), ebx_1.b)), 
                                        sx.d(*(arg4 - 6)))
                                    
                                    if (temp0_1 s> 0)
                                        *(arg4 - 0x18) = temp0_1
                                        int32_t i_4
                                        
                                        do
                                            if (i_5 s>= sub_4d5ba0(ebx_1.b))
                                                *(esp_6 - 4) = sub_4d5ba0(ebx_1.b)
                                                *(esp_6 - 8) = 1
                                                *(esp_6 - 0xc) = 4
                                                *(esp_6 - 0x10) = 1
                                                esp_6 -= 0x10
                                                sub_4ceed4(arg6, sx.d(*(arg4 - 0xc)), 
                                                    sx.d(*(arg4 - 0xa)))
                                                int32_t eax_53 = sub_4d5ba0(ebx_1.b)
                                                int32_t i_10 = i_5
                                                i_5 -= eax_53
                                                
                                                if (add_overflow(i_10, neg.d(eax_53)))
                                                    sub_403010()
                                                    noreturn
                                            
                                            i_4 = *(arg4 - 0x18)
                                            *(arg4 - 0x18) -= 1
                                        while (i_4 != 1)
                                
                                int32_t eax_55 = sub_4d5b1c(ebx_1.b)
                                
                                if (add_overflow(eax_55, 1))
                                    sub_403010()
                                    noreturn
                                
                                ebx_1 = sub_4d5b64(eax_55 + 1)
                            while (ebx_1.b u< 4)
                            
                            ebx_1.b = 4
                            
                            while (i_5 s> 0)
                                if (ebx_1.b == 5)
                                    break
                                
                                if (i_5 s>= sub_4d5ba0(ebx_1.b)
                                        && sub_4cc200(sx.d(*(arg4 - 0xc)), ebx_1.b) s> 0)
                                    *(esp_6 - 4) = sub_4d5ba0(ebx_1.b)
                                    *(esp_6 - 8) = 1
                                    *(esp_6 - 0xc) = 4
                                    *(esp_6 - 0x10) = 1
                                    esp_6 -= 0x10
                                    sub_4ceed4(arg6, sx.d(*(arg4 - 0xc)), sx.d(*(arg4 - 0xa)))
                                    int32_t eax_66 = sub_4d5ba0(ebx_1.b)
                                    int32_t i_13 = i_5
                                    i_5 -= eax_66
                                    
                                    if (not(add_overflow(i_13, neg.d(eax_66))))
                                        continue
                                    
                                    sub_403010()
                                    noreturn
                                
                                int32_t eax_68 = sub_4d5b1c(ebx_1.b)
                                
                                if (add_overflow(eax_68, 0xffffffff))
                                    sub_403010()
                                    noreturn
                                
                                ebx_1 = sub_4d5b64(eax_68 - 1)
                            
                            if (ebx_1.b != 5)
                                continue
                            else
                                sub_408e1c(sx.d(*(arg4 - 0xa)), arg4 - 0x1c8)
                                *(esp_6 - 4) = *(arg4 - 0x1c8)
                                sub_408e1c(sx.d(*(arg4 - 8)), arg4 - 0x1cc)
                                sub_404054(arg4 - 0x1bc, *(arg4 - 0x1cc), 0xff)
                                *(esp_6 - 8) = arg4 - 0x1bc
                                *(esp_6 - 0xc) = 0x4ceecc
                                sub_408e1c(sx.d(*(arg4 - 0xc)), arg4 - 0x1d0)
                                sub_4746a0(*(arg4 - 0x1d0), 0x18, *data_530304)
                                continue
                    else
                        *(arg6 + 0x1660)
                        bool o_21 = unimplemented  {imul eax, dword [edi+0x1660], 0x5}
                        
                        if (o_21)
                            sub_403010()
                            noreturn
                        
                        int32_t eax_102
                        eax_102.w = *(arg6 + *(arg6 + 0x1660) * 0xa + 0x83c)
                        
                        if (eax_102.w == *(arg4 - 0xa))
                            goto label_4ce6bc
            
            __builtin_strncpy(arg4 - 0x14, "333?", 4)
            int32_t eax_104 = *(data_530598 + 0x18)
            
            if (eax_104 s<= 4)
                *(arg4 - 0x14) = 0x3f4ccccd
            
            data_530598
            
            if (eax_104 == 5)
                *(arg4 - 0x14) = 0x3f1eb852
            
            data_530598
            
            if (eax_104 == 6)
                *(arg4 - 0x14) = 0x3f000000
            
            if (*(*data_530304 + 0xce0) != 0 && *(data_530598 + 0x18) == 6)
                *(arg4 - 0x14) = 0x3d4ccccd
            
            int32_t eax_109 = *data_5300d0
            
            if (eax_109 s> 0)
                *(arg4 - 0x18) = eax_109
                int32_t esi_3 = 1
                int32_t i_6
                
                do
                    bool o_22 = unimplemented  {imul eax, esi, 0x41}
                    
                    if (o_22)
                        sub_403010()
                        noreturn
                    
                    if (*(*data_5301f4 + esi_3 * 0x208 + 0x1feae) != 0)
                        bool o_23 = unimplemented  {imul eax, esi, 0x41}
                        
                        if (o_23)
                            sub_403010()
                            noreturn
                        
                        long double x87_r7_1 = fconvert.t(*(*data_5301f4 + esi_3 * 0x208 + 0x20074))
                        long double temp17_1 = fconvert.t(*(arg4 - 0x14))
                        x87_r7_1 - temp17_1
                        int32_t eax_111
                        eax_111.w = (x87_r7_1 < temp17_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_1, temp17_1) ? 1 : 0) << 0xa
                            | (x87_r7_1 == temp17_1 ? 1 : 0) << 0xe
                        
                        if (not(test_bit(eax_111:1.b, 0)) || *(*data_530304 + 0xcf9) != 0)
                            int32_t edx_39 = esi_3 * 0x41
                            bool o_24 = unimplemented  {imul edx, esi, 0x41}
                            
                            if (o_24)
                                sub_403010()
                                noreturn
                            
                            long double x87_r7_2 = fconvert.t(*(*data_5301f4 + (edx_39 << 3) + 0x20074))
                            long double temp19_1 = fconvert.t(1f)
                            x87_r7_2 - temp19_1
                            int32_t eax_115
                            eax_115.w = (x87_r7_2 < temp19_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_2, temp19_1) ? 1 : 0) << 0xa
                                | (x87_r7_2 == temp19_1 ? 1 : 0) << 0xe
                            
                            if (test_bit(eax_115:1.b, 0)
                                    && *(*data_5301f4 + (edx_39 << 3) + 0x1fea2) == 8)
                                *(arg4 - 1) = 0
                        else
                            *(arg4 - 1) = 0
                    
                    esi_3 += 1
                    i_6 = *(arg4 - 0x18)
                    *(arg4 - 0x18) -= 1
                while (i_6 != 1)
            
            *(arg6 + 0xc) = 0
            esp_6[2]
            TEB* fsbase
            fsbase->NtTib.ExceptionList = *esp_6
            esp_6[2] = sub_4ceec1
            sub_403e1c(arg4 - 0x1dc, 8)
            sub_403df8(arg4 - 0xbc)
            return arg4 - 0xbc
        
        int32_t eax_124 = (sub_4d5bdc(sx.d(*(arg4 - 8))) & 0x7f) * 0xd4f
        bool o_27 = unimplemented  {imul eax, eax, 0xd4f}
        
        if (o_27)
            sub_403010()
            noreturn
        
        bool o_28 = unimplemented  {imul edx, edx, 0x2e9c}
        
        if (o_28)
            sub_403010()
            noreturn
        
        int32_t ebx_3 = *(sx.d(*(arg4 - 0xc)) * 0x174e0 + &data_532f70 + (eax_124 << 2) - 0x14010)
        int32_t i_7 = ebx_3 - 1
        
        if (add_overflow(ebx_3, 0xffffffff))
            sub_403010()
            noreturn
        
        while (i_7 s>= 0)
            if (i_7 s>= 0x3e8)
                break
            
            int32_t eax_128 = (sub_4d5bdc(sx.d(*(arg4 - 8))) & 0x7f) * 0xd4f
            bool o_31 = unimplemented  {imul eax, eax, 0xd4f}
            
            if (o_31)
                sub_403010()
                noreturn
            
            bool o_32 = unimplemented  {imul edx, edx, 0x2e9c}
            
            if (o_32)
                sub_403010()
                noreturn
            
            bool o_33 = unimplemented  {imul edx, ebx, 0xa}
            
            if (o_33)
                sub_403010()
                noreturn
            
            if (*(sx.d(*(arg4 - 0xc)) * 0x174e0 + &data_532f70 + (eax_128 << 2) + i_7 * 0x50 - 0x174c8)
                    == 1)
                break
            
            int32_t i_12 = i_7
            i_7 -= 1
            
            if (add_overflow(i_12, 0xffffffff))
                sub_403010()
                noreturn
        
        if (i_7 s< 0 || i_7 s>= 0x3e8)
            sub_408e1c(sub_4d5b1c(sub_4d5bdc(sx.d(*(arg4 - 8)))), arg4 - 0xbc)
            *(esp_6 - 4) = *(arg4 - 0xbc)
            sub_408e1c(i_7, arg4 - 0x1c0)
            sub_404054(arg4 - 0x1bc, *(arg4 - 0x1c0), 0xff)
            *(esp_6 - 8) = arg4 - 0x1bc
            *(esp_6 - 0xc) = 0x4ceecc
            sub_408e1c(sx.d(*(arg4 - 0xc)), arg4 - 0x1c4)
            sub_4746a0(*(arg4 - 0x1c4), 0x17, *data_530304)
        
        int32_t esi_4 = sx.d(*(arg4 - 8))
        int32_t eax = (sub_4d5bdc(esi_4) & 0x7f) * 0xd4f
        bool o_1 = unimplemented  {imul eax, eax, 0xd4f}
        
        if (not(o_1))
            bool o_2 = unimplemented  {imul edx, edx, 0x2e9c}
            
            if (o_2)
                sub_403010()
                noreturn
            
            void* eax_1 = sx.d(*(arg4 - 0xc)) * 0x174e0 + &data_532f70 + (eax << 2)
            bool o_3 = unimplemented  {imul edx, ebx, 0xa}
            
            if (o_3)
                sub_403010()
                noreturn
            
            *(esp_6 - 4) = esi_4
            *(esp_6 - 8) = arg6
            __builtin_memcpy(arg4 - 0x68, eax_1 + i_7 * 0x50 - 0x174e0, 0x50)
            int32_t edi_1 = *(esp_6 - 8)
            *(esp_6 - 4) = *(esp_6 - 4)
            *(esp_6 - 8) = edi_1
            return sub_4ce88a(arg4) __tailcall
    else
        *(arg6 + 0xd) = ror.b(*(arg6 + 0xd), 0)
        *(arg3 + 5) += arg2:1.b
    
    sub_403010()
    noreturn
}
