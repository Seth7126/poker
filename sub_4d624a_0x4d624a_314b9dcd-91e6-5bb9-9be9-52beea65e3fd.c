// ============================================================
// 函数名称: sub_4d624a
// 虚拟地址: 0x4d624a
// WARP GUID: 314b9dcd-91e6-5bb9-9be9-52beea65e3fd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_50d2f4, sub_403010, sub_4c0924
// [被调用的父级函数]: sub_4d6164
// ============================================================

char* __convention("regparm")sub_4d624a(char* arg1, char* arg2, char* arg3, int32_t* arg4 @ ebp, uint16_t* arg5 @ esi, uint8_t* arg6 @ edi)
{
    // 第一条实际指令: int32_t eflags
    int32_t eflags
    int32_t esi_20 = __outsb(arg2.w, *arg5, arg5, eflags)
    int32_t* entry_ebx
    arg1.b ^= entry_ebx[0x1b].b
    uint8_t** esp = *(entry_ebx + 0x6b) * 0xc5600013
    uint16_t* esi = esi_20 - 1
    char temp1 = arg2[arg1 << 1]
    arg2[arg1 << 1] += arg3.b
    
    if (temp1 != neg.b(arg3.b))
        goto label_4d62cf
    
    if (temp1 == neg.b(arg3.b))
        arg6[(arg1 << 3) + 0x4e] += arg3:1.b
        goto label_4d62d0
    
    int32_t esi_1 = __outsb(arg2.w, *esi, esi, eflags)
    arg1 ^= entry_ebx[0x1b]
    int32_t esp_1 = *(entry_ebx + 0x6b) * 0xc6a80013
    uint16_t* esi_2 = esi_1 - 1
    char temp3_1 = arg2[arg1 << 1]
    arg2[arg1 << 1] += arg3.b
    
    if (temp3_1 != neg.b(arg3.b))
        goto label_4d62e2
    
    void* esp_6
    int16_t es
    bool c_2
    bool z_1
    bool z_2
    bool s_1
    bool o_1
    bool o_2
    
    if (temp3_1 == neg.b(arg3.b))
        arg1[0x66] += arg3:1.b
    label_4d62e2:
        arg4 -= 1
        char temp6_1 = *arg2
        *arg2 += arg3.b
        bool p_1 = unimplemented  {add byte [edx], cl}
        o_1 = add_overflow(temp6_1, arg3.b)
        
        if (not(p_1))
            *(esp_1 - 4) = 0x746e7572
            esp = esp_1 - 4
            
            if (temp6_1 + arg3.b u>= temp6_1)
            label_4d62f0:
                *(esi_2 + 0x4d) += arg1:1.b
            label_4d62f4:
                char temp8_1 = *esi_2
                *esi_2 += arg3.b
                c_2 = temp8_1 + arg3.b u< temp8_1
                z_1 = temp8_1 == neg.b(arg3.b)
                s_1 = temp8_1 + arg3.b s< 0
                o_2 = add_overflow(temp8_1, arg3.b)
                *(esp - 4) = 0x68656469
                esp -= 4
                uint8_t temp0_9
                temp0_9, arg6 = __insb(arg6, arg2.w, eflags)
                *arg6 = temp0_9
                
                if (o_2)
                    goto label_4d6361
                
                goto label_4d62ff
            
        label_4d6305:
            arg1[0x66] += arg1:1.b
            arg4 -= 1
        label_4d6309:
            char temp9_1 = *esi_2
            *esi_2 += arg3.b
            c_2 = temp9_1 + arg3.b u< temp9_1
            z_2 = temp9_1 == neg.b(arg3.b)
            o_2 = add_overflow(temp9_1, arg3.b)
            
            if (not(c_2))
                goto label_4d6375
            
            esi_2 = __outsd(arg2.w, *esi_2, esi_2, eflags)
        label_4d630e:
            
            if (not(z_2) && not(c_2))
                goto label_4d6378
            
            uint8_t temp0_10
            temp0_10, arg6 = __insb(arg6, arg2.w, eflags)
            *arg6 = temp0_10
        label_4d6312:
            
            if (o_2)
                goto label_4d6377
            
            goto label_4d6314
        
        *(esp_1 - 4) = 0x67616c66
        *(esp_1 - 8) = zx.d(es)
        esp_6 = esp_1 - 8
    label_4d6356:
        *(esp_6 - 4) = esp_6
        uint16_t temp0_15
        temp0_15, temp0_15 = __insb(arg6.w, arg2.w, eflags)
        arg6.w = temp0_15
        *arg6 = temp0_15
        arg6 = *(esp_6 - 4)
        esi_2 = *esp_6
        arg4 = *(esp_6 + 4)
        entry_ebx = *(esp_6 + 0xc)
        arg2 = *(esp_6 + 0x10)
        arg3 = *(esp_6 + 0x14)
        esp = esp_6 + 0x1c
        
        if (o_1)
            arg1 = arg2 * 0x1038
            bool o_3 = unimplemented  {imul eax, edx, 0x1038}
            
            if (not(o_3))
                goto label_4d63e1
            
            sub_403010()
            noreturn
        
        arg1 = &(*(esp_6 + 0x18))[0x44adc000]
    label_4d6361:
        *(arg6 + entry_ebx + 0x1178004b) += arg2.b
        arg2 = &arg2[1]
        *(esi_2 + arg4 + 0x42) += entry_ebx.b
        char temp10_1 = *(entry_ebx - 0x3f74ffbe)
        *(entry_ebx - 0x3f74ffbe) += arg3:1.b
        s_1 = temp10_1 + arg3:1.b s< 0
    label_4d6374:
        
        if (not(s_1))
        label_4d6377:
            uint8_t temp13_1 = *arg6
            *arg6 += arg1.b
            c_2 = temp13_1 + arg1.b u< temp13_1
            o_2 = add_overflow(temp13_1, arg1.b)
            goto label_4d6379
        
    label_4d63e1:
        int32_t ecx_4 = sx.d(*(*(*entry_ebx + 0xab0) + (arg1 << 3) + 0x8130))
        arg3 = ecx_4 - 3
        
        if (ecx_4 s>= 3)
            goto label_4d63f2
    else
        esi_2 = __outsb(arg2.w, *esi_2, esi_2, eflags)
        arg1.b ^= 0x43
        uint8_t temp0_1
        temp0_1, arg6 = __insb(arg6, arg2.w, eflags)
        *arg6 = temp0_1
        esp = *(entry_ebx + 0x6b) * 0x69940017
        arg4 -= 1
        char temp7_1 = *arg1
        *arg1 += arg2.b
        bool c_1 = temp7_1 + arg2.b u< temp7_1
        z_1 = temp7_1 == neg.b(arg2.b)
        s_1 = temp7_1 + arg2.b s< 0
        o_1 = add_overflow(temp7_1, arg2.b)
        
        if (not(c_1))
            goto label_4d62f4
        
        arg6 = *esp
        esi_2 = esp[1]
        arg4 = esp[2]
        entry_ebx = esp[4]
        arg2 = esp[5]
        arg3 = esp[6]
        arg1 = esp[7]
        
        if (not(c_1))
            arg6 = esp[8]
            esp = &esp[9]
            
            if (c_1)
                esi_2 = __outsb(arg2.w, *esi_2, esi_2, eflags)
                
                if (not(z_1))
                    if (c_1)
                        goto label_4d6305
                    
                    goto label_4d62f0
                
                arg6 = *esp
                esp[1]
                esp[2]
                esp[4]
                arg2 = esp[5]
                esp[6]
                esp[7]
                esp[7] = zx.d(es)
                esp_6 = &esp[7]
                goto label_4d6356
            
            uint16_t temp0_2
            temp0_2, temp0_2 = __insb(arg6.w, arg2.w, eflags)
            arg6.w = temp0_2
            *arg6 = temp0_2
            int16_t temp0_3
            temp0_3, arg6 = __insd(arg6, arg2.w, eflags)
            *arg6 = temp0_3
            uint16_t* gsbase
            esi_2 = __outsb(arg2.w, *(gsbase + esi_2), esi_2, eflags)
            
            if (not(z_1))
                arg4 -= 1
                goto label_4d62f4
            
            *esp
            esp += 2
            char temp14_1 = arg1.b
            arg1.b += arg3:1.b
            z_2 = temp14_1 == neg.b(arg3:1.b)
            *arg4
            arg3 = *arg4 * 0x61747310
            c_2 = unimplemented  {imul ecx, dword [ebp], 0x61747310}
            o_2 = unimplemented  {imul ecx, dword [ebp], 0x61747310}
            
            if (c_2)
                goto label_4d630e
            
            arg6 = *esp
            esp = &esp[1]
            esi_2 = __outsb(arg2.w, *esi_2, esi_2, eflags)
            
            if (not(z_2))
                arg1 = adc.d(arg1, 0x4d666000, c_2)
                goto label_4d6309
            
            char eax_7
            void* esi_3
            TEB* fsbase
            
            if (not(c_2))
            label_4d6314:
                
                if (z_2)
                    if (z_2)
                        goto label_4d6387
                    
                    esi_3 = __outsb(arg2.w, *esi_2, esi_2, eflags)
                    int48_t ldtr = __lldt_memw(*(arg1 + 0x8004d65))
                label_4d6320:
                    esi_3 = __outsd(arg2.w, *(fsbase + esi_3), esi_3, eflags)
                    
                    if (z_2)
                        esi_2 = __outsb(arg2.w, *esi_3, esi_3, eflags)
                        goto label_4d638d
                    
                    __bound_gprv_mema32(esi_3, *(gsbase + arg4 + 0x67))
                    goto label_4d6328
                
                *(arg1 + 0x74696e55) ^= &arg1[0x74696e55]
                entry_ebx[-0x4dd2a90].b += arg3.b
            label_4d6397:
                *(esp - 4) = entry_ebx
                esp -= 4
                entry_ebx = nullptr
                
                if (sub_4c0924() == 0)
                    goto label_4d63b7
                
                data_61c9f0
                eax_7 = sub_50d2f4()
            else
                if (o_2)
                    *(esp - 4) = 0x6568776f
                    esp -= 4
                    uint8_t temp0_11
                    temp0_11, arg6 = __insb(arg6, arg2.w, eflags)
                    *arg6 = temp0_11
                    goto label_4d6312
                
                uint8_t temp0_4
                temp0_4, arg6 = __insb(arg6, arg2.w, eflags)
                *arg6 = temp0_4
                char temp0_5
                char temp1_1
                temp0_5, temp1_1, eflags = __aam_immb(0xc6, adc.d(arg1, *arg1, c_2).b)
                arg1.b = temp0_5
                arg1:1.b = temp1_1
                esi_3 = esi_2 - 1
                char temp20_1 = arg2[arg1 << 1]
                arg2[arg1 << 1] += arg3.b
                c_2 = temp20_1 + arg3.b u< temp20_1
                z_2 = temp20_1 == neg.b(arg3.b)
                
                if (not(z_2))
                    *(esp - 4) = 0x67756265
                label_4d6328:
                    arg1 = sbb.d(arg1, *arg1, c_2)
                    esp = 0x14004d63
                    uint16_t* esi_6 = __outsd(arg2.w, *(fsbase + esi_3), esi_3, eflags)
                    __outsb(arg2.w, *esi_6, esi_6, eflags)
                label_4d6333:
                    uint16_t temp0_12
                    temp0_12, temp0_12 = __insb(arg6.w, arg2.w, eflags)
                    arg6.w = temp0_12
                    *arg6 = temp0_12
                    entry_ebx[0x1a]
                    entry_ebx[0x1a]
                    bool c_5 = unimplemented  {imul esi, dword [ebx+0x68], 0x766e6f43}
                    
                    if (c_5)
                        goto label_4d63b7
                    
                    arg4 = *(arg6 + 0x6e) * 0x94001273
                label_4d6346:
                    int16_t temp0_13
                    temp0_13, eflags = __arpl_memw_gpr16(*arg4, arg3.w)
                    *arg4 = temp0_13
                label_4d6349:
                    *(arg2 + 0x65)
                    *(arg2 + 0x65)
                label_4d63b9:
                    *esp
                    esp[1]
                    return arg1
                
                if (z_2)
                    goto label_4d6320
                
                int32_t esi_4 = __outsb(arg2.w, *esi_3, esi_3, eflags)
                arg1 ^= 0x63696c43
                arg2 = nullptr
                entry_ebx:1.b -= arg1.b
                char temp24_1 = *(arg1 << 1)
                *(arg1 << 1) += arg3.b
                bool c_3 = temp24_1 + arg3.b u< temp24_1
                bool z_3 = temp24_1 == neg.b(arg3.b)
                
                if (z_3)
                    if (z_3)
                        goto label_4d6333
                    
                    esi = __outsb(0, *(esi_4 - 1), esi_4 - 1, eflags)
                    entry_ebx += 1
                    uint8_t temp0_6
                    temp0_6, arg6 = __insb(arg6, 0, eflags)
                    *arg6 = temp0_6
                    esp = *(entry_ebx + 0x6b) * 0xc76c0013
                label_4d62cf:
                    esi -= 1
                label_4d62d0:
                    char temp2_1 = arg2[arg1 << 1]
                    arg2[arg1 << 1] += arg3.b
                    
                    if (temp2_1 != neg.b(arg3.b))
                        goto label_4d6349
                    
                    if (temp2_1 == neg.b(arg3.b))
                        goto label_4d6346
                    
                    esi_2 = __outsb(arg2.w, *esi, esi, eflags)
                    char temp0_7
                    char temp1_2
                    temp0_7, temp1_2, eflags = __aaa(arg1.b, arg1:1.b, eflags)
                    arg1.b = temp0_7
                    arg1:1.b = temp1_2
                    entry_ebx += 1
                    uint8_t temp0_8
                    temp0_8, arg6 = __insb(arg6, arg2.w, eflags)
                    *arg6 = temp0_8
                    esp_1 = *(entry_ebx + 0x6b) * 0x66680011
                    goto label_4d62e2
                
                if (c_3)
                    uint16_t* esi_8 = __outsd(0, *(esi_4 - 1), esi_4 - 1, eflags)
                    __outsb(0, *esi_8, esi_8, eflags)
                    
                    if (entry_ebx != 0xffffffff && not(c_3))
                        jump(0x4d633d)
                    
                    arg1.b = adc.b(arg1.b, 0xa1, c_3)
                    undefined
                
                *(esp - 0x5f) <<= 0xf0
                arg4[1]
                uint16_t* esi_14 = arg4[2]
                arg4[3]
                entry_ebx = arg4[5]
                esp = &arg4[9]
                int32_t eax_6
                eax_6.b = arg4[8].b + (arg4[7]).w:1.b
                __outsd((arg4[6]).w, *esi_14, esi_14, eflags)
                eax_7 = eax_6.b + (*eax_6).b
            
            if (eax_7 == 0)
                goto label_4d63b7
            
            entry_ebx.b = data_7a6eb0
        label_4d63b7:
            arg1 = entry_ebx
            goto label_4d63b9
        
        arg4[0x1a]
        esp = arg4[0x1a] * 0x62706c65
        c_2 = unimplemented  {imul esp, dword [ebp+0x68], 0x62706c65}
        o_2 = unimplemented  {imul esp, dword [ebp+0x68], 0x62706c65}
    label_4d62ff:
        
        if (z_1)
            if (z_1)
                goto label_4d6374
            
            esi_2 = __outsb(arg2.w, *esi_2, esi_2, eflags)
            arg1 = adc.d(arg1, 0x4d666000, c_2)
            goto label_4d6309
        
    label_4d6375:
        int16_t temp0_16
        temp0_16, eflags = __arpl_memw_gpr16(*arg4, arg3.w)
        *arg4 = temp0_16
    label_4d6378:
        es = *esp
        esp += 2
    label_4d6379:
        *(esp - 4) = zx.d(es)
        *(esp - 8) = esp - 4
        uint16_t temp0_17
        temp0_17, temp0_17 = __insb(arg6.w, arg2.w, eflags)
        arg6.w = temp0_17
        *arg6 = temp0_17
        *(esp - 8)
        char* esi_12 = *(esp - 4)
        char* ebp_3 = *esp
        entry_ebx = esp[2]
        arg2 = esp[3]
        arg3 = esp[4]
        char* eax_2 = esp[5]
        esp = &esp[6]
        
        if (not(o_2))
            ebp_3[0x4d] = sbb.b(ebp_3[0x4d], entry_ebx.b, c_2)
            arg2[eax_2 << 2] += arg2.b
            esi_2 = &esi_12[1]
        label_4d6387:
            entry_ebx[0x1b954140].b += arg3.b
        label_4d638d:
            *(arg3 + esi_2)
            goto label_4d6397
        
        *eax_2 += eax_2.b
    label_4d63f2:
        void* i_2 = &arg3[1]
        int32_t eax_9 = 3
        void* i
        
        do
            bool o_4 = unimplemented  {imul edi, edx, 0x1038}
            
            if (o_4)
                sub_403010()
                noreturn
            
            *(esp - 4) = *(*entry_ebx + 0xab0) + arg2 * 0x81c0
            int32_t esi_17 = eax_9 * 0x23
            bool o_5 = unimplemented  {imul esi, eax, 0x23}
            
            if (o_5)
                sub_403010()
                noreturn
            
            if (*(*(esp - 4) + (esi_17 << 3) - 0xf8) == 1)
                bool o_6 = unimplemented  {imul edi, edx, 0x1038}
                
                if (o_6)
                    sub_403010()
                    noreturn
                
                *(esp - 4) = *(*entry_ebx + 0xab0) + arg2 * 0x81c0
                int32_t edi_10 = sx.d(*(*(esp - 4) + (esi_17 << 3) - 0xf6))
                
                if (add_overflow(edi_10, 8))
                    sub_403010()
                    noreturn
                
                *(esp - 4) = edi_10 + 8
                bool o_8 = unimplemented  {imul edi, edx, 0x1038}
                
                if (o_8)
                    sub_403010()
                    noreturn
                
                *(esp - 8) = *(*entry_ebx + 0xab0) + arg2 * 0x81c0
                *(*(esp - 8) + (esi_17 << 3) - 0xf6) = (*(esp - 4)).w
            
            eax_9 += 1
            i = i_2
            i_2 -= 1
        while (i != 1)
    int32_t edx_1 = data_61caec
    bool o_9 = unimplemented  {imul eax, edx, 0x1038}
    
    if (o_9)
        sub_403010()
        noreturn
    
    int32_t ecx_7 = sx.d(*(*(*entry_ebx + 0xab0) + edx_1 * 0x81c0 + 0x8130))
    
    if (ecx_7 s>= 3)
        int32_t i_3 = ecx_7 - 2
        int32_t eax_11 = 3
        int32_t i_1
        
        do
            bool o_10 = unimplemented  {imul edi, edx, 0x1038}
            
            if (o_10)
                sub_403010()
                noreturn
            
            *(esp - 4) = *(*entry_ebx + 0xab0) + edx_1 * 0x81c0
            int32_t esi_18 = eax_11 * 0x23
            bool o_11 = unimplemented  {imul esi, eax, 0x23}
            
            if (o_11)
                sub_403010()
                noreturn
            
            if (*(*(esp - 4) + (esi_18 << 3) - 0xf8) == 1)
                bool o_12 = unimplemented  {imul edi, edx, 0x1038}
                
                if (o_12)
                    sub_403010()
                    noreturn
                
                *(esp - 4) = *(*entry_ebx + 0xab0) + edx_1 * 0x81c0
                int32_t edi_21 = sx.d(*(*(esp - 4) + (esi_18 << 3) - 0xf6))
                
                if (add_overflow(edi_21, 0xf))
                    sub_403010()
                    noreturn
                
                *(esp - 4) = edi_21 + 0xf
                bool o_14 = unimplemented  {imul edi, edx, 0x1038}
                
                if (o_14)
                    sub_403010()
                    noreturn
                
                *(esp - 8) = *(*entry_ebx + 0xab0) + edx_1 * 0x81c0
                *(*(esp - 8) + (esi_18 << 3) - 0xf6) = (*(esp - 4)).w
            
            eax_11 += 1
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    bool o_15 = unimplemented  {imul eax, edx, 0x1038}
    
    if (o_15)
        sub_403010()
        noreturn
    
    data_61cbc0
    bool o_16 = unimplemented  {imul edx, dword [0x61cbc0], 0x23}
    
    if (o_16)
        sub_403010()
        noreturn
    
    void* eax_14 = *(*entry_ebx + 0xab0) + edx_1 * 0x81c0 + data_61cbc0 * 0x118 - 0xf8
    int32_t edx_5 = sx.d(*(eax_14 + 2))
    
    if (add_overflow(edx_5, 0xfffffff4))
        sub_403010()
        noreturn
    
    *(eax_14 + 2) = edx_5.w - 0xc
    int32_t temp21 = *(eax_14 + 0x5c)
    *(eax_14 + 0x5c) += 0x1a
    
    if (add_overflow(temp21, 0x1a))
        sub_403010()
        noreturn
    
    eax_14.b = *esp
    *esp
    esp[1]
    esp[2]
    esp[3]
    esp[4]
    return eax_14
}
