// ============================================================
// 函数名称: sub_4ce8e2
// 虚拟地址: 0x4ce8e2
// WARP GUID: b695b985-9c15-56ad-83d2-b09004a96e7f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_4d5ba0, sub_4ceed4, sub_4cf724, sub_4d5bdc, sub_4746a0, sub_408e1c, sub_4cc200, sub_403010, sub_4d5b64, sub_4ce88a, sub_403df8, sub_403e1c, sub_4d5b1c
// [被调用的父级函数]: sub_40e812, sub_40e6c4
// ============================================================

void* __convention("regparm")sub_4ce8e2(char arg1, void* arg2, void* arg3, void* arg4 @ ebp, int32_t arg5 @ esi, void* arg6 @ edi)
{
    // 第一条实际指令: *(arg6 - 0xd)
    *(arg6 - 0xd)
    *(arg4 + 0x2f70dd14) -= 1
    int32_t entry_ebx
    int32_t var_4 = entry_ebx
    *(arg3 + 3) += entry_ebx.b
    bool o = add_overflow(*(arg3 + 3), entry_ebx.b)
    int16_t es
    *(arg2 - 0x1400c) = es
    
    if (o)
        sub_403010()
        noreturn
    
    *(arg4 - 0xb4) = arg3
    int32_t eax_3 = (sub_4d5bdc(arg5) & 0x7f) * 0xd4f
    bool o_1 = unimplemented  {imul eax, eax, 0xd4f}
    
    if (o_1)
        sub_403010()
        noreturn
    
    int32_t temp4 = *((entry_ebx << 3) + &data_532f70 + (eax_3 << 2) - 0x1400c)
    *((entry_ebx << 3) + &data_532f70 + (eax_3 << 2) - 0x1400c) += 1
    
    if (add_overflow(temp4, 1))
        sub_403010()
        noreturn
    
    int32_t eax_4 = *(arg6 + 0x10)
    
    if (add_overflow(eax_4, 0xffffffff))
        sub_403010()
        noreturn
    
    if (eax_4 - 1 s>= 0)
        *(arg4 - 0x18) = eax_4
        int32_t eax_7 = 0
        int32_t i
        
        do
            int32_t edx_1 = eax_7 * 2
            bool o_4 = unimplemented  {imul edx, eax, 0x2}
            
            if (o_4)
                sub_403010()
                noreturn
            
            int32_t ecx
            ecx.b = *(arg6 + (edx_1 << 3) + 0x14)
            
            if (ecx == *(arg4 - 0x5c))
                int32_t ecx_1
                ecx_1.b = *(arg6 + (edx_1 << 3) + 0x15)
                
                if (ecx_1 == *(arg4 - 0xac))
                    ecx_1.b = *(arg6 + (edx_1 << 3) + 0x18)
                    
                    if (ecx_1.b == *(arg4 - 0x58))
                        ecx_1.b = *(arg6 + (edx_1 << 3) + 0x19)
                        
                        if (ecx_1.b == *(arg4 - 0xa8))
                            int32_t ecx_2
                            ecx_2.b = *(arg6 + (edx_1 << 3) + 0x17)
                            
                            if (ecx_2 s< *(arg4 - 0xb4))
                                char ecx_3 = (*(arg4 - 0xb4)).b
                                entry_ebx.b = *(arg6 + (edx_1 << 3) + 0x17)
                                *(arg4 - 0xb4) = entry_ebx
                                *(arg6 + (edx_1 << 3) + 0x17) = ecx_3
            
            eax_7 += 1
            i = *(arg4 - 0x18)
            *(arg4 - 0x18) -= 1
        while (i != 1)
    
    int32_t* esp_1
    
    if (*(arg4 - 8) == 0xff91)
        int32_t var_8 = 5
        sub_4cf724(arg4 - 0xb8, arg4 - 0x68, arg6, 5)
        esp_1 = &var_4
    else if (*(*data_5301f4 + 0x2008c) != 0)
    label_4cea0b:
        int32_t var_8_2 = 1
        sub_4cf724(arg4 - 0xb8, arg4 - 0x68, arg6, 1)
        esp_1 = &var_4
    else
        if (*(arg4 - 0xa) == 9)
            if (*(*data_5301f4 + 0xffec) == 2)
                goto label_4cea0b
        else if (*(arg4 - 0xc) != 9 || *(*data_5301f4 + 0xffec) == 2)
            goto label_4cea0b
        
        int32_t var_8_1 = 6
        sub_4cf724(arg4 - 0xb8, arg4 - 0x68, arg6, 6)
        esp_1 = &var_4
    
    while (true)
        int32_t eax_90 = *(arg6 + 0x1660)
        
        if (eax_90 s> 0)
            bool o_13 = unimplemented  {imul eax, eax, 0x5}
            
            if (o_13)
                sub_403010()
                noreturn
            
            if (*(arg6 + eax_90 * 0xa + 0x843) != 0 && *(arg6 + 0x10) s< 0x82)
                if (*(arg6 + 0x10) s< 0x50)
                label_4ce6bc:
                    *(arg6 + 0x1660)
                    int32_t eax_110 = *(arg6 + 0x1660) * 5
                    bool o_18 = unimplemented  {imul eax, dword [edi+0x1660], 0x5}
                    
                    if (o_18)
                        sub_403010()
                        noreturn
                    
                    *(arg4 - 0xc) = *(arg6 + (eax_110 << 1) + 0x83a)
                    *(arg4 - 8) = *(arg6 + (eax_110 << 1) + 0x83e)
                    int32_t edx_34
                    edx_34.w = *(arg6 + (eax_110 << 1) + 0x842)
                    *(arg4 - 4) = edx_34.w
                    int32_t temp10_1 = *(arg6 + 0x1660)
                    *(arg6 + 0x1660) -= 1
                    
                    if (add_overflow(temp10_1, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    if (*(arg4 - 3) != 0)
                        break
                    
                    if (*(arg4 - 4) == 0)
                        int32_t i_2 = sx.d(*(arg4 - 8))
                        int32_t ebx = 0
                        
                        do
                            *(arg4 - 0x10) = 0xf
                            int32_t i_1
                            
                            do
                                if (i_2 s>= sub_4d5ba0(ebx.b))
                                    *(esp_1 - 4) = sub_4d5ba0(ebx.b)
                                    *(esp_1 - 8) = 1
                                    *(esp_1 - 0xc) = 4
                                    *(esp_1 - 0x10) = 1
                                    esp_1 -= 0x10
                                    sub_4ceed4(arg6, sx.d(*(arg4 - 0xc)), sx.d(*(arg4 - 0xa)))
                                    int32_t eax_21 = sub_4d5ba0(ebx.b)
                                    int32_t i_8 = i_2
                                    i_2 -= eax_21
                                    
                                    if (add_overflow(i_8, neg.d(eax_21)))
                                        sub_403010()
                                        noreturn
                                
                                i_1 = *(arg4 - 0x10)
                                *(arg4 - 0x10) -= 1
                            while (i_1 != 1)
                            ebx += 1
                        while (ebx.b != 5)
                        
                        do
                            entry_ebx = 0
                            
                            do
                                if (i_2 s>= sub_4d5ba0(entry_ebx.b))
                                    *(esp_1 - 4) = sub_4d5ba0(entry_ebx.b)
                                    *(esp_1 - 8) = 1
                                    *(esp_1 - 0xc) = 4
                                    *(esp_1 - 0x10) = 1
                                    esp_1 -= 0x10
                                    sub_4ceed4(arg6, sx.d(*(arg4 - 0xc)), sx.d(*(arg4 - 0xa)))
                                    int32_t eax_28 = sub_4d5ba0(entry_ebx.b)
                                    int32_t i_11 = i_2
                                    i_2 -= eax_28
                                    
                                    if (add_overflow(i_11, neg.d(eax_28)))
                                        sub_403010()
                                        noreturn
                                
                                entry_ebx += 1
                            while (entry_ebx.b != 5)
                        while (i_2 != 0)
                        
                        continue
                    else if (*(arg4 - 4) != 2)
                        int32_t i_3 = sx.d(*(arg4 - 8))
                        entry_ebx.b = 4
                        
                        while (i_3 s> 0)
                            if (entry_ebx.b == 5)
                                break
                            
                            if (i_3 s>= sub_4d5ba0(entry_ebx.b)
                                    && sub_4cc200(sx.d(*(arg4 - 0xc)), entry_ebx.b) s> 0)
                                *(esp_1 - 4) = sub_4d5ba0(entry_ebx.b)
                                *(esp_1 - 8) = 1
                                *(esp_1 - 0xc) = 4
                                *(esp_1 - 0x10) = 1
                                esp_1 -= 0x10
                                sub_4ceed4(arg6, sx.d(*(arg4 - 0xc)), sx.d(*(arg4 - 0xa)))
                                int32_t eax_77 = sub_4d5ba0(entry_ebx.b)
                                int32_t i_9 = i_3
                                i_3 -= eax_77
                                
                                if (not(add_overflow(i_9, neg.d(eax_77))))
                                    continue
                                
                                sub_403010()
                                noreturn
                            
                            int32_t eax_79 = sub_4d5b1c(entry_ebx.b)
                            
                            if (add_overflow(eax_79, 0xffffffff))
                                sub_403010()
                                noreturn
                            
                            entry_ebx = sub_4d5b64(eax_79 - 1)
                        
                        if (entry_ebx.b != 5)
                            continue
                        else
                            sub_408e1c(sx.d(*(arg4 - 0xa)), arg4 - 0x1d4)
                            *(esp_1 - 4) = *(arg4 - 0x1d4)
                            sub_408e1c(sx.d(*(arg4 - 8)), arg4 - 0x1d8)
                            sub_404054(arg4 - 0x1bc, *(arg4 - 0x1d8), 0xff)
                            *(esp_1 - 8) = arg4 - 0x1bc
                            *(esp_1 - 0xc) = 0x4ceecc
                            sub_408e1c(sx.d(*(arg4 - 0xc)), arg4 - 0x1dc)
                            sub_4746a0(*(arg4 - 0x1dc), 0x19, *data_530304)
                            continue
                    else
                        int32_t i_5 = sx.d(*(arg4 - 8))
                        entry_ebx = 0
                        
                        do
                            if (i_5 s>= sub_4d5ba0(entry_ebx.b)
                                    && sub_4cc200(sx.d(*(arg4 - 0xc)), entry_ebx.b) s> 0)
                                int32_t temp0_1 = divs.dp.d(
                                    sx.q(sub_4cc200(sx.d(*(arg4 - 0xc)), entry_ebx.b)), 
                                    sx.d(*(arg4 - 6)))
                                
                                if (temp0_1 s> 0)
                                    *(arg4 - 0x18) = temp0_1
                                    int32_t i_4
                                    
                                    do
                                        if (i_5 s>= sub_4d5ba0(entry_ebx.b))
                                            *(esp_1 - 4) = sub_4d5ba0(entry_ebx.b)
                                            *(esp_1 - 8) = 1
                                            *(esp_1 - 0xc) = 4
                                            *(esp_1 - 0x10) = 1
                                            esp_1 -= 0x10
                                            sub_4ceed4(arg6, sx.d(*(arg4 - 0xc)), sx.d(*(arg4 - 0xa)))
                                            int32_t eax_43 = sub_4d5ba0(entry_ebx.b)
                                            int32_t i_10 = i_5
                                            i_5 -= eax_43
                                            
                                            if (add_overflow(i_10, neg.d(eax_43)))
                                                sub_403010()
                                                noreturn
                                        
                                        i_4 = *(arg4 - 0x18)
                                        *(arg4 - 0x18) -= 1
                                    while (i_4 != 1)
                            
                            int32_t eax_45 = sub_4d5b1c(entry_ebx.b)
                            
                            if (add_overflow(eax_45, 1))
                                sub_403010()
                                noreturn
                            
                            entry_ebx = sub_4d5b64(eax_45 + 1)
                        while (entry_ebx.b u< 4)
                        
                        entry_ebx.b = 4
                        
                        while (i_5 s> 0)
                            if (entry_ebx.b == 5)
                                break
                            
                            if (i_5 s>= sub_4d5ba0(entry_ebx.b)
                                    && sub_4cc200(sx.d(*(arg4 - 0xc)), entry_ebx.b) s> 0)
                                *(esp_1 - 4) = sub_4d5ba0(entry_ebx.b)
                                *(esp_1 - 8) = 1
                                *(esp_1 - 0xc) = 4
                                *(esp_1 - 0x10) = 1
                                esp_1 -= 0x10
                                sub_4ceed4(arg6, sx.d(*(arg4 - 0xc)), sx.d(*(arg4 - 0xa)))
                                int32_t eax_56 = sub_4d5ba0(entry_ebx.b)
                                int32_t i_13 = i_5
                                i_5 -= eax_56
                                
                                if (not(add_overflow(i_13, neg.d(eax_56))))
                                    continue
                                
                                sub_403010()
                                noreturn
                            
                            int32_t eax_58 = sub_4d5b1c(entry_ebx.b)
                            
                            if (add_overflow(eax_58, 0xffffffff))
                                sub_403010()
                                noreturn
                            
                            entry_ebx = sub_4d5b64(eax_58 - 1)
                        
                        if (entry_ebx.b != 5)
                            continue
                        else
                            sub_408e1c(sx.d(*(arg4 - 0xa)), arg4 - 0x1c8)
                            *(esp_1 - 4) = *(arg4 - 0x1c8)
                            sub_408e1c(sx.d(*(arg4 - 8)), arg4 - 0x1cc)
                            sub_404054(arg4 - 0x1bc, *(arg4 - 0x1cc), 0xff)
                            *(esp_1 - 8) = arg4 - 0x1bc
                            *(esp_1 - 0xc) = 0x4ceecc
                            sub_408e1c(sx.d(*(arg4 - 0xc)), arg4 - 0x1d0)
                            sub_4746a0(*(arg4 - 0x1d0), 0x18, *data_530304)
                            continue
                else
                    *(arg6 + 0x1660)
                    bool o_14 = unimplemented  {imul eax, dword [edi+0x1660], 0x5}
                    
                    if (o_14)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_92
                    eax_92.w = *(arg6 + *(arg6 + 0x1660) * 0xa + 0x83c)
                    
                    if (eax_92.w == *(arg4 - 0xa))
                        goto label_4ce6bc
        
        __builtin_strncpy(arg4 - 0x14, "333?", 4)
        int32_t eax_94 = *(data_530598 + 0x18)
        
        if (eax_94 s<= 4)
            *(arg4 - 0x14) = 0x3f4ccccd
        
        data_530598
        
        if (eax_94 == 5)
            *(arg4 - 0x14) = 0x3f1eb852
        
        data_530598
        
        if (eax_94 == 6)
            *(arg4 - 0x14) = 0x3f000000
        
        if (*(*data_530304 + 0xce0) != 0 && *(data_530598 + 0x18) == 6)
            *(arg4 - 0x14) = 0x3d4ccccd
        
        int32_t eax_99 = *data_5300d0
        
        if (eax_99 s> 0)
            *(arg4 - 0x18) = eax_99
            int32_t esi = 1
            int32_t i_6
            
            do
                bool o_15 = unimplemented  {imul eax, esi, 0x41}
                
                if (o_15)
                    sub_403010()
                    noreturn
                
                if (*(*data_5301f4 + esi * 0x208 + 0x1feae) != 0)
                    bool o_16 = unimplemented  {imul eax, esi, 0x41}
                    
                    if (o_16)
                        sub_403010()
                        noreturn
                    
                    long double x87_r7_1 = fconvert.t(*(*data_5301f4 + esi * 0x208 + 0x20074))
                    long double temp14_1 = fconvert.t(*(arg4 - 0x14))
                    x87_r7_1 - temp14_1
                    int32_t eax_101
                    eax_101.w = (x87_r7_1 < temp14_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_1, temp14_1) ? 1 : 0) << 0xa
                        | (x87_r7_1 == temp14_1 ? 1 : 0) << 0xe
                    
                    if (not(test_bit(eax_101:1.b, 0)) || *(*data_530304 + 0xcf9) != 0)
                        int32_t edx_31 = esi * 0x41
                        bool o_17 = unimplemented  {imul edx, esi, 0x41}
                        
                        if (o_17)
                            sub_403010()
                            noreturn
                        
                        long double x87_r7_2 = fconvert.t(*(*data_5301f4 + (edx_31 << 3) + 0x20074))
                        long double temp16_1 = fconvert.t(1f)
                        x87_r7_2 - temp16_1
                        int32_t eax_105
                        eax_105.w = (x87_r7_2 < temp16_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_2, temp16_1) ? 1 : 0) << 0xa
                            | (x87_r7_2 == temp16_1 ? 1 : 0) << 0xe
                        
                        if (test_bit(eax_105:1.b, 0) && *(*data_5301f4 + (edx_31 << 3) + 0x1fea2) == 8)
                            *(arg4 - 1) = 0
                    else
                        *(arg4 - 1) = 0
                
                esi += 1
                i_6 = *(arg4 - 0x18)
                *(arg4 - 0x18) -= 1
            while (i_6 != 1)
        
        *(arg6 + 0xc) = 0
        esp_1[2]
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_1
        esp_1[2] = sub_4ceec1
        sub_403e1c(arg4 - 0x1dc, 8)
        sub_403df8(arg4 - 0xbc)
        return arg4 - 0xbc
    
    int32_t eax_114 = (sub_4d5bdc(sx.d(*(arg4 - 8))) & 0x7f) * 0xd4f
    bool o_20 = unimplemented  {imul eax, eax, 0xd4f}
    
    if (o_20)
        sub_403010()
        noreturn
    
    bool o_21 = unimplemented  {imul edx, edx, 0x2e9c}
    
    if (o_21)
        sub_403010()
        noreturn
    
    int32_t ebx_1 = *(sx.d(*(arg4 - 0xc)) * 0x174e0 + &data_532f70 + (eax_114 << 2) - 0x14010)
    int32_t i_7 = ebx_1 - 1
    
    if (add_overflow(ebx_1, 0xffffffff))
        sub_403010()
        noreturn
    
    while (i_7 s>= 0)
        if (i_7 s>= 0x3e8)
            break
        
        int32_t eax_118 = (sub_4d5bdc(sx.d(*(arg4 - 8))) & 0x7f) * 0xd4f
        bool o_24 = unimplemented  {imul eax, eax, 0xd4f}
        
        if (o_24)
            sub_403010()
            noreturn
        
        bool o_25 = unimplemented  {imul edx, edx, 0x2e9c}
        
        if (o_25)
            sub_403010()
            noreturn
        
        bool o_26 = unimplemented  {imul edx, ebx, 0xa}
        
        if (o_26)
            sub_403010()
            noreturn
        
        if (*(sx.d(*(arg4 - 0xc)) * 0x174e0 + &data_532f70 + (eax_118 << 2) + i_7 * 0x50 - 0x174c8)
                == 1)
            break
        
        int32_t i_12 = i_7
        i_7 -= 1
        
        if (add_overflow(i_12, 0xffffffff))
            sub_403010()
            noreturn
    
    if (i_7 s< 0 || i_7 s>= 0x3e8)
        sub_408e1c(sub_4d5b1c(sub_4d5bdc(sx.d(*(arg4 - 8)))), arg4 - 0xbc)
        *(esp_1 - 4) = *(arg4 - 0xbc)
        sub_408e1c(i_7, arg4 - 0x1c0)
        sub_404054(arg4 - 0x1bc, *(arg4 - 0x1c0), 0xff)
        *(esp_1 - 8) = arg4 - 0x1bc
        *(esp_1 - 0xc) = 0x4ceecc
        sub_408e1c(sx.d(*(arg4 - 0xc)), arg4 - 0x1c4)
        sub_4746a0(*(arg4 - 0x1c4), 0x17, *data_530304)
    
    int32_t esi_1 = sx.d(*(arg4 - 8))
    int32_t eax_133 = (sub_4d5bdc(esi_1) & 0x7f) * 0xd4f
    bool o_27 = unimplemented  {imul eax, eax, 0xd4f}
    
    if (o_27)
        sub_403010()
        noreturn
    
    bool o_28 = unimplemented  {imul edx, edx, 0x2e9c}
    
    if (o_28)
        sub_403010()
        noreturn
    
    void* eax_134 = sx.d(*(arg4 - 0xc)) * 0x174e0 + &data_532f70 + (eax_133 << 2)
    bool o_29 = unimplemented  {imul edx, ebx, 0xa}
    
    if (o_29)
        sub_403010()
        noreturn
    
    *(esp_1 - 4) = esi_1
    *(esp_1 - 8) = arg6
    __builtin_memcpy(arg4 - 0x68, eax_134 + i_7 * 0x50 - 0x174e0, 0x50)
    int32_t edi_1 = *(esp_1 - 8)
    *(esp_1 - 4) = *(esp_1 - 4)
    *(esp_1 - 8) = edi_1
    return sub_4ce88a(arg4) __tailcall
}
