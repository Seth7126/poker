// ============================================================
// 函数名称: sub_40e8c2
// 虚拟地址: 0x40e8c2
// WARP GUID: b308e0f5-9a77-5b54-ad67-583c4fba740c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_4d5ba0, sub_4ceed4, sub_4cf724, sub_4d5bdc, sub_4746a0, sub_408e1c, sub_4cc200, sub_403010, sub_4d5b64, sub_4ce88a, sub_403df8, sub_403e1c, sub_4d5b1c
// [被调用的父级函数]: sub_40e812, sub_40e6c4
// ============================================================

void __convention("regparm")sub_40e8c2(void* arg1, uint16_t arg2, int32_t arg3 @ edi, long double arg4 @ st0, long double arg5 @ st1, void* arg6, char* arg7, int32_t arg8, int32_t arg9, char* arg10)
{
    // 第一条实际指令: char* eax
    char* eax
    eax.b = (arg1 + 1).b * 2
    char temp2 = *eax ^ eax.b
    *eax = temp2
    int16_t cs
    uint32_t var_4 = zx.d(cs)
    int32_t eflags
    uint8_t* edi
    uint8_t temp0
    temp0, edi = __insb(arg3, arg2, eflags)
    *edi = temp0
    int32_t ecx = arg9
    char* eax_1 = arg10
    void arg_1c
    void* esp_1 = &arg_1c
    
    if (temp2 u>= 0)
        *eax_1 += eax_1.b
    label_40e944:
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
    else
        uint16_t* esi_2 = __outsd(arg8.w, *(__return_addr - 1), __return_addr - 1, eflags)
        
        if (__return_addr != 1)
            __outsd(arg8.w, *esi_2, esi_2, eflags)
            
            if (__return_addr != 1)
                goto label_40e944
            
            eax_1.b &= 0xe9
            eax_1[1] += (&eax_1[1]).b
            eax_1[1] += (&eax_1[1]).b
            eax_1[1] += (&eax_1[1]).b
            eax_1[1] += (&eax_1[1]).b
            eax_1[1] += (&eax_1[1]).b
            eax_1[1] += (&eax_1[1]).b
            eax_1[1] += (&eax_1[1]).b
            eax_1[1] += (&eax_1[1]).b
            eax_1[1] += (&eax_1[1]).b
            eax_1[1] += (&eax_1[1]).b
            eax_1[1] += (&eax_1[1]).b
            eax_1[1] += (&eax_1[1]).b
            eax_1[1] += (&eax_1[1]).b
            eax_1[1] += (&eax_1[1]).b
            *(ecx + (arg6 << 3)) += (&eax_1[1]):1.b
            *(&eax_1[2] * 2) += ecx.b
            eax_1[2] += (&eax_1[2]).b
            *((eax_1 + 2) * 3)
            trap(0xd)
        
        char temp4_1 = *eax_1 ^ eax_1.b
        *eax_1 = temp4_1
        bool cond:7_1 = temp4_1 s< 0
        
        while (not(cond:7_1))
            void* eax_4
            eax_4.b = (&eax_1[1]).b * 2
            *eax_4 ^= eax_4.b
            eax_4.b |= 0x45
            bool cond:4_1 = eax_4.b s< 0
            *(esp_1 - 4) = arg8
            esp_1 -= 4
            
            if (eax_4.b u>= 0)
                goto label_40e978
            
            uint16_t* esi_4 = __outsd(arg8.w, *esi_2, esi_2, eflags)
            void* eax_5
            TEB* fsbase
            
            if (eax_4.b == 0)
                *(eax_4 + esi_4 + 0x40) += eax_4:1.b
                *(eax_4 + 0x30) += arg7:1.b
            label_40e97b:
                eax_1.b = (eax_4 + 1).b * 2
                *eax_1 ^= eax_1.b
                eax_1.b |= *(arg6 + 0x4c)
                cond:7_1 = eax_1.b s< 0
                *(arg7 + 0x74)
                esi_2 = *(arg7 + 0x74) * 0x6f727245
                bool c_1 = unimplemented  {imul esi, dword [ebx+0x74], 0x6f727245}
                
                if (c_1)
                    continue
                else
                    eax_5 = &eax_1[1]
                    *eax_5 += eax_5.b
                    *eax_5 += eax_5.b
                    *eax_5 += eax_5.b
                    *eax_5 += eax_5.b
                    *eax_5 += eax_5.b
                    *eax_5 += eax_5.b
                    *eax_5 += eax_5.b
                    *eax_5 += eax_5.b
            else
                int32_t esi_5 = __outsd(arg8.w, *esi_4, esi_4, eflags)
                
                if (eax_4.b != 0)
                    *eax_4 += eax_4.b
                    *eax_4 += eax_4.b
                    *eax_4 += eax_4.b
                    *eax_4 += eax_4.b
                    *eax_4 += eax_4.b
                    *eax_4 += eax_4.b
                label_40e9aa:
                    *eax_4 += eax_4.b
                    *((eax_4 + 1) * 2) += ecx.b
                    *(eax_4 + 1) += (eax_4 + 1).b
                    *((eax_4 + 1) * 3)
                    trap(0xd)
                
                ecx.b -= 0x40
                *eax_4 += eax_4.b
                *eax_4 += eax_4.b
                *eax_4 += eax_4.b
                *eax_4 += eax_4.b
                *eax_4 += eax_4.b
                *eax_4 += eax_4.b
                *eax_4 += eax_4.b
                *eax_4 += eax_4.b
                *eax_4 += eax_4.b
                *eax_4 += eax_4.b
                *eax_4 += eax_4.b
                *eax_4 += eax_4.b
                *eax_4 += eax_4.b
                *eax_4 += eax_4.b
                *(eax_4 + 0xc0040e9) += eax_4.b
                *eax_4 += eax_4.b
                eax_5.b = eax_4.b + arg7.b
                
                if (eax_4.b s>= neg.b(arg7.b))
                    eax_5:1.b += arg8:1.b
                    eax_5.b ^= *eax_5
                    *arg7 += arg8:1.b
                    arg7[esi_5] += (eax_5 + 1).b
                    *(eax_5 + 2) += ecx.b
                    eax_4 = (eax_5 + 2) ^ *(eax_5 + 2)
                    eax_4.b ^= *eax_4
                    char temp8_1 = *(fsbase + eax_4) ^ eax_4.b
                    *(fsbase + eax_4) = temp8_1
                    cond:4_1 = temp8_1 s< 0
                label_40e978:
                    
                    if (cond:4_1)
                        goto label_40e9aa
                    
                    goto label_40e97b
            
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            char temp7 = eax_5.b
            eax_5.b += arg7.b
            void* esp_5
            
            if (temp7 == neg.b(arg7.b))
                *(esp_1 - 4) = 1
                sub_4cf724(arg6 - 0xb8, arg6 - 0x68, var_4)
                esp_5 = esp_1
            else
                *(esp_1 - 4) = 6
                sub_4cf724(arg6 - 0xb8, arg6 - 0x68, var_4)
                esp_5 = esp_1
            
            while (true)
                int32_t eax_112 = *(var_4 + 0x1660)
                
                if (eax_112 s> 0)
                    bool o_21 = unimplemented  {imul eax, eax, 0x5}
                    
                    if (o_21)
                        sub_403010()
                        noreturn
                    
                    if (*(var_4 + eax_112 * 0xa + 0x843) != 0 && *(var_4 + 0x10) s< 0x82)
                        if (*(var_4 + 0x10) s< 0x50)
                        label_4ce6bc:
                            *(var_4 + 0x1660)
                            int32_t eax_9 = *(var_4 + 0x1660) * 5
                            bool o_1 = unimplemented  {imul eax, dword [edi+0x1660], 0x5}
                            
                            if (o_1)
                                sub_403010()
                                noreturn
                            
                            *(arg6 - 0xc) = *(var_4 + (eax_9 << 1) + 0x83a)
                            *(arg6 - 8) = *(var_4 + (eax_9 << 1) + 0x83e)
                            int32_t edx_2
                            edx_2.w = *(var_4 + (eax_9 << 1) + 0x842)
                            *(arg6 - 4) = edx_2.w
                            int32_t temp12_1 = *(var_4 + 0x1660)
                            *(var_4 + 0x1660) -= 1
                            
                            if (add_overflow(temp12_1, 0xffffffff))
                                sub_403010()
                                noreturn
                            
                            if (*(arg6 - 3) != 0)
                                break
                            
                            char* ebx
                            
                            if (*(arg6 - 4) == 0)
                                int32_t i_1 = sx.d(*(arg6 - 8))
                                int32_t ebx_2 = 0
                                
                                do
                                    *(arg6 - 0x10) = 0xf
                                    int32_t i
                                    
                                    do
                                        if (i_1 s>= sub_4d5ba0(ebx_2.b))
                                            *(esp_5 - 4) = sub_4d5ba0(ebx_2.b)
                                            *(esp_5 - 8) = 1
                                            *(esp_5 - 0xc) = 4
                                            *(esp_5 - 0x10) = 1
                                            esp_5 -= 0x10
                                            sub_4ceed4(var_4, sx.d(*(arg6 - 0xc)), sx.d(*(arg6 - 0xa)))
                                            int32_t eax_43 = sub_4d5ba0(ebx_2.b)
                                            int32_t i_7 = i_1
                                            i_1 -= eax_43
                                            
                                            if (add_overflow(i_7, neg.d(eax_43)))
                                                sub_403010()
                                                noreturn
                                        
                                        i = *(arg6 - 0x10)
                                        *(arg6 - 0x10) -= 1
                                    while (i != 1)
                                    ebx_2 += 1
                                while (ebx_2.b != 5)
                                
                                do
                                    ebx = nullptr
                                    
                                    do
                                        if (i_1 s>= sub_4d5ba0(ebx.b))
                                            *(esp_5 - 4) = sub_4d5ba0(ebx.b)
                                            *(esp_5 - 8) = 1
                                            *(esp_5 - 0xc) = 4
                                            *(esp_5 - 0x10) = 1
                                            esp_5 -= 0x10
                                            sub_4ceed4(var_4, sx.d(*(arg6 - 0xc)), sx.d(*(arg6 - 0xa)))
                                            int32_t eax_50 = sub_4d5ba0(ebx.b)
                                            int32_t i_10 = i_1
                                            i_1 -= eax_50
                                            
                                            if (add_overflow(i_10, neg.d(eax_50)))
                                                sub_403010()
                                                noreturn
                                        
                                        ebx = &ebx[1]
                                    while (ebx.b != 5)
                                while (i_1 != 0)
                                
                                continue
                            else if (*(arg6 - 4) != 2)
                                int32_t i_2 = sx.d(*(arg6 - 8))
                                ebx.b = 4
                                
                                while (i_2 s> 0)
                                    if (ebx.b == 5)
                                        break
                                    
                                    if (i_2 s>= sub_4d5ba0(ebx.b)
                                            && sub_4cc200(sx.d(*(arg6 - 0xc)), ebx.b) s> 0)
                                        *(esp_5 - 4) = sub_4d5ba0(ebx.b)
                                        *(esp_5 - 8) = 1
                                        *(esp_5 - 0xc) = 4
                                        *(esp_5 - 0x10) = 1
                                        esp_5 -= 0x10
                                        sub_4ceed4(var_4, sx.d(*(arg6 - 0xc)), sx.d(*(arg6 - 0xa)))
                                        int32_t eax_99 = sub_4d5ba0(ebx.b)
                                        int32_t i_8 = i_2
                                        i_2 -= eax_99
                                        
                                        if (not(add_overflow(i_8, neg.d(eax_99))))
                                            continue
                                        
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t eax_101 = sub_4d5b1c(ebx.b)
                                    
                                    if (add_overflow(eax_101, 0xffffffff))
                                        sub_403010()
                                        noreturn
                                    
                                    ebx = sub_4d5b64(eax_101 - 1)
                                
                                if (ebx.b != 5)
                                    continue
                                else
                                    sub_408e1c(sx.d(*(arg6 - 0xa)), arg6 - 0x1d4)
                                    *(esp_5 - 4) = *(arg6 - 0x1d4)
                                    sub_408e1c(sx.d(*(arg6 - 8)), arg6 - 0x1d8)
                                    sub_404054(arg6 - 0x1bc, *(arg6 - 0x1d8), 0xff)
                                    *(esp_5 - 8) = arg6 - 0x1bc
                                    *(esp_5 - 0xc) = 0x4ceecc
                                    sub_408e1c(sx.d(*(arg6 - 0xc)), arg6 - 0x1dc)
                                    sub_4746a0(*(arg6 - 0x1dc), 0x19, *data_530304)
                                    continue
                            else
                                int32_t i_4 = sx.d(*(arg6 - 8))
                                ebx = nullptr
                                
                                do
                                    if (i_4 s>= sub_4d5ba0(ebx.b)
                                            && sub_4cc200(sx.d(*(arg6 - 0xc)), ebx.b) s> 0)
                                        int32_t eax_58 = divs.dp.d(
                                            sx.q(sub_4cc200(sx.d(*(arg6 - 0xc)), ebx.b)), 
                                            sx.d(*(arg6 - 6)))
                                        
                                        if (eax_58 s> 0)
                                            *(arg6 - 0x18) = eax_58
                                            int32_t i_3
                                            
                                            do
                                                if (i_4 s>= sub_4d5ba0(ebx.b))
                                                    *(esp_5 - 4) = sub_4d5ba0(ebx.b)
                                                    *(esp_5 - 8) = 1
                                                    *(esp_5 - 0xc) = 4
                                                    *(esp_5 - 0x10) = 1
                                                    esp_5 -= 0x10
                                                    sub_4ceed4(var_4, sx.d(*(arg6 - 0xc)), 
                                                        sx.d(*(arg6 - 0xa)))
                                                    int32_t eax_65 = sub_4d5ba0(ebx.b)
                                                    int32_t i_9 = i_4
                                                    i_4 -= eax_65
                                                    
                                                    if (add_overflow(i_9, neg.d(eax_65)))
                                                        sub_403010()
                                                        noreturn
                                                
                                                i_3 = *(arg6 - 0x18)
                                                *(arg6 - 0x18) -= 1
                                            while (i_3 != 1)
                                    
                                    int32_t eax_67 = sub_4d5b1c(ebx.b)
                                    
                                    if (add_overflow(eax_67, 1))
                                        sub_403010()
                                        noreturn
                                    
                                    ebx = sub_4d5b64(eax_67 + 1)
                                while (ebx.b u< 4)
                                
                                ebx.b = 4
                                
                                while (i_4 s> 0)
                                    if (ebx.b == 5)
                                        break
                                    
                                    if (i_4 s>= sub_4d5ba0(ebx.b)
                                            && sub_4cc200(sx.d(*(arg6 - 0xc)), ebx.b) s> 0)
                                        *(esp_5 - 4) = sub_4d5ba0(ebx.b)
                                        *(esp_5 - 8) = 1
                                        *(esp_5 - 0xc) = 4
                                        *(esp_5 - 0x10) = 1
                                        esp_5 -= 0x10
                                        sub_4ceed4(var_4, sx.d(*(arg6 - 0xc)), sx.d(*(arg6 - 0xa)))
                                        int32_t eax_78 = sub_4d5ba0(ebx.b)
                                        int32_t i_12 = i_4
                                        i_4 -= eax_78
                                        
                                        if (not(add_overflow(i_12, neg.d(eax_78))))
                                            continue
                                        
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t eax_80 = sub_4d5b1c(ebx.b)
                                    
                                    if (add_overflow(eax_80, 0xffffffff))
                                        sub_403010()
                                        noreturn
                                    
                                    ebx = sub_4d5b64(eax_80 - 1)
                                
                                if (ebx.b != 5)
                                    continue
                                else
                                    sub_408e1c(sx.d(*(arg6 - 0xa)), arg6 - 0x1c8)
                                    *(esp_5 - 4) = *(arg6 - 0x1c8)
                                    sub_408e1c(sx.d(*(arg6 - 8)), arg6 - 0x1cc)
                                    sub_404054(arg6 - 0x1bc, *(arg6 - 0x1cc), 0xff)
                                    *(esp_5 - 8) = arg6 - 0x1bc
                                    *(esp_5 - 0xc) = 0x4ceecc
                                    sub_408e1c(sx.d(*(arg6 - 0xc)), arg6 - 0x1d0)
                                    sub_4746a0(*(arg6 - 0x1d0), 0x18, *data_530304)
                                    continue
                        else
                            *(var_4 + 0x1660)
                            bool o_22 = unimplemented  {imul eax, dword [edi+0x1660], 0x5}
                            
                            if (o_22)
                                sub_403010()
                                noreturn
                            
                            int32_t eax_114
                            eax_114.w = *(var_4 + *(var_4 + 0x1660) * 0xa + 0x83c)
                            
                            if (eax_114.w == *(arg6 - 0xa))
                                goto label_4ce6bc
                
                __builtin_strncpy(arg6 - 0x14, "333?", 4)
                int32_t eax_116 = *(data_530598 + 0x18)
                
                if (eax_116 s<= 4)
                    *(arg6 - 0x14) = 0x3f4ccccd
                
                data_530598
                
                if (eax_116 == 5)
                    *(arg6 - 0x14) = 0x3f1eb852
                
                data_530598
                
                if (eax_116 == 6)
                    *(arg6 - 0x14) = 0x3f000000
                
                if (*(*data_530304 + 0xce0) != 0 && *(data_530598 + 0x18) == 6)
                    *(arg6 - 0x14) = 0x3d4ccccd
                
                int32_t eax_121 = *data_5300d0
                
                if (eax_121 s> 0)
                    *(arg6 - 0x18) = eax_121
                    int32_t esi_10 = 1
                    int32_t i_5
                    
                    do
                        bool o_23 = unimplemented  {imul eax, esi, 0x41}
                        
                        if (o_23)
                            sub_403010()
                            noreturn
                        
                        if (*(*data_5301f4 + esi_10 * 0x208 + 0x1feae) != 0)
                            bool o_24 = unimplemented  {imul eax, esi, 0x41}
                            
                            if (o_24)
                                sub_403010()
                                noreturn
                            
                            long double x87_r7_1 =
                                fconvert.t(*(*data_5301f4 + esi_10 * 0x208 + 0x20074))
                            long double temp16_1 = fconvert.t(*(arg6 - 0x14))
                            x87_r7_1 - temp16_1
                            int32_t eax_123
                            eax_123.w = (x87_r7_1 < temp16_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_1, temp16_1) ? 1 : 0) << 0xa
                                | (x87_r7_1 == temp16_1 ? 1 : 0) << 0xe
                            
                            if (not(test_bit(eax_123:1.b, 0)) || *(*data_530304 + 0xcf9) != 0)
                                int32_t edx_48 = esi_10 * 0x41
                                bool o_25 = unimplemented  {imul edx, esi, 0x41}
                                
                                if (o_25)
                                    sub_403010()
                                    noreturn
                                
                                long double x87_r7_2 =
                                    fconvert.t(*(*data_5301f4 + (edx_48 << 3) + 0x20074))
                                long double temp18_1 = fconvert.t(1f)
                                x87_r7_2 - temp18_1
                                int32_t eax_127
                                eax_127.w = (x87_r7_2 < temp18_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_2, temp18_1) ? 1 : 0) << 0xa
                                    | (x87_r7_2 == temp18_1 ? 1 : 0) << 0xe
                                
                                if (test_bit(eax_127:1.b, 0)
                                        && *(*data_5301f4 + (edx_48 << 3) + 0x1fea2) == 8)
                                    *(arg6 - 1) = 0
                            else
                                *(arg6 - 1) = 0
                        
                        esi_10 += 1
                        i_5 = *(arg6 - 0x18)
                        *(arg6 - 0x18) -= 1
                    while (i_5 != 1)
                
                *(var_4 + 0xc) = 0
                *(esp_5 + 8)
                fsbase->NtTib.ExceptionList = *esp_5
                *(esp_5 + 8) = sub_4ceec1
                sub_403e1c(arg6 - 0x1dc, 8)
                sub_403df8(arg6 - 0xbc)
                return 
            
            int32_t eax_13 = (sub_4d5bdc(sx.d(*(arg6 - 8))) & 0x7f) * 0xd4f
            bool o_3 = unimplemented  {imul eax, eax, 0xd4f}
            
            if (o_3)
                sub_403010()
                noreturn
            
            bool o_4 = unimplemented  {imul edx, edx, 0x2e9c}
            
            if (o_4)
                sub_403010()
                noreturn
            
            int32_t ebx_1 = *(sx.d(*(arg6 - 0xc)) * 0x174e0 + &data_532f70 + (eax_13 << 2) - 0x14010)
            int32_t i_6 = ebx_1 - 1
            
            if (add_overflow(ebx_1, 0xffffffff))
                sub_403010()
                noreturn
            
            while (i_6 s>= 0)
                if (i_6 s>= 0x3e8)
                    break
                
                int32_t eax_17 = (sub_4d5bdc(sx.d(*(arg6 - 8))) & 0x7f) * 0xd4f
                bool o_7 = unimplemented  {imul eax, eax, 0xd4f}
                
                if (o_7)
                    sub_403010()
                    noreturn
                
                bool o_8 = unimplemented  {imul edx, edx, 0x2e9c}
                
                if (o_8)
                    sub_403010()
                    noreturn
                
                bool o_9 = unimplemented  {imul edx, ebx, 0xa}
                
                if (o_9)
                    sub_403010()
                    noreturn
                
                if (*(sx.d(*(arg6 - 0xc)) * 0x174e0 +
                        &data_532f70 + (eax_17 << 2) + i_6 * 0x50 - 0x174c8) == 1)
                    break
                
                int32_t i_11 = i_6
                i_6 -= 1
                
                if (add_overflow(i_11, 0xffffffff))
                    sub_403010()
                    noreturn
            
            if (i_6 s< 0 || i_6 s>= 0x3e8)
                sub_408e1c(sub_4d5b1c(sub_4d5bdc(sx.d(*(arg6 - 8)))), arg6 - 0xbc)
                *(esp_5 - 4) = *(arg6 - 0xbc)
                sub_408e1c(i_6, arg6 - 0x1c0)
                sub_404054(arg6 - 0x1bc, *(arg6 - 0x1c0), 0xff)
                *(esp_5 - 8) = arg6 - 0x1bc
                *(esp_5 - 0xc) = 0x4ceecc
                sub_408e1c(sx.d(*(arg6 - 0xc)), arg6 - 0x1c4)
                sub_4746a0(*(arg6 - 0x1c4), 0x17, *data_530304)
            
            int32_t esi_6 = sx.d(*(arg6 - 8))
            int32_t eax_32 = (sub_4d5bdc(esi_6) & 0x7f) * 0xd4f
            bool o_10 = unimplemented  {imul eax, eax, 0xd4f}
            
            if (o_10)
                sub_403010()
                noreturn
            
            bool o_11 = unimplemented  {imul edx, edx, 0x2e9c}
            
            if (o_11)
                sub_403010()
                noreturn
            
            void* eax_33 = sx.d(*(arg6 - 0xc)) * 0x174e0 + &data_532f70 + (eax_32 << 2)
            bool o_12 = unimplemented  {imul edx, ebx, 0xa}
            
            if (o_12)
                sub_403010()
                noreturn
            
            *(esp_5 - 4) = esi_6
            *(esp_5 - 8) = var_4
            __builtin_memcpy(arg6 - 0x68, eax_33 + i_6 * 0x50 - 0x174e0, 0x50)
            int32_t edi_3 = *(esp_5 - 8)
            *(esp_5 - 4) = *(esp_5 - 4)
            *(esp_5 - 8) = edi_3
            return sub_4ce88a(arg6) __tailcall
    
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    ecx.b -= 0x40
    *(eax_1 * 2) += ecx.b
    *eax_1 += eax_1.b
    *(eax_1 * 3)
    trap(0xd)
}
