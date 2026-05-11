// ============================================================
// 函数名称: sub_440053
// 虚拟地址: 0x440053
// WARP GUID: 82780910-dabc-53c6-af42-5bdc967eb215
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_440053(char* arg1, char* arg2, int32_t arg3, int32_t* arg4 @ ebp, uint16_t* arg5 @ esi, int32_t arg6 @ edi)
{
    // 第一条实际指令: arg1[0x80ff0002] += arg1.b
    arg1[0x80ff0002] += arg1.b
    arg1.b += *arg1
    void* entry_ebx
    int32_t var_4 = *(entry_ebx + 1 + arg6 + 0x44)
    arg1[0x80000000] += arg1.b
    *arg1
    arg1.b |= 0x4f
    int32_t eflags
    uint16_t* esi = __outsb(arg2.w, *arg5, arg5, eflags)
    void* ebx = entry_ebx + 2
    uint8_t* edi
    uint8_t temp0
    temp0, edi = __insb(arg6, arg2.w, eflags)
    *edi = temp0
    uint16_t* esi_1 = __outsd(arg2.w, *esi, esi, eflags)
    int32_t var_8
    char* ecx
    int32_t* esp_1
    uint32_t* esp_2
    bool c_5
    bool c_6
    bool z_2
    
    if (arg1.b u< 0)
        var_8 = arg3
        esp_1 = &var_8
        
        if (entry_ebx != 0xfffffffe)
            arg1:1.b = 0x3b
            esp_1 = &var_8:1
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 = *arg1
            char temp4_1 = arg1[0x4f08003b]
            arg1[0x4f08003b] += arg1.b
            c_5 = temp4_1 + arg1.b u< temp4_1
            esi_1 = __outsb(arg2.w, *esi_1, esi_1, eflags)
            goto label_4400ec
        
        if (arg1.b u< 0)
        label_4400f3:
            char* eax_1 = __in_oeax_immb(0x40, eflags)
            *eax_1 += arg2.b
            *eax_1 = &eax_1[*eax_1]
            arg1, arg2, ecx = (*eax_1)()
            *arg1 = &arg1[*arg1]
        label_4400fd:
            *(esp_1 - 4) = *(ebx + edi + 0x44)
            arg1[0x80000000] += arg1.b
            ecx.b |= edi[0x6e]
            goto label_440110
        
        int32_t* var_c = arg4
        arg4 = &var_c
        void var_4283
        esp_1 = &var_4283
        arg1.b = 0
        ebx:1.b *= 2
        arg1.b = 0
        ebx:1.b *= 2
        *arg1 = &arg1[*arg1]
        *arg1 = *arg1
        *arg1 = *arg1
        arg1[0x80000000] = arg1[0x80000000]
        bool c_1 = *arg1 u< arg1
        int32_t temp8_1 = *(edi + 0x6e)
        ecx = adc.d(arg3, temp8_1, c_1)
        bool c_2 = adc.d(arg3, temp8_1, c_1) u< arg3 || (c_1 && adc.d(arg3, temp8_1, c_1) == arg3)
        ebx += 1
        uint16_t* esi_2 = __outsd(arg2.w, *esi_1, esi_1, eflags)
        esi_1 = __outsb(arg2.w, *esi_2, esi_2, eflags)
        
        if (not(c_2))
            esi_1 = __outsb(arg2.w, *esi_1, esi_1, eflags)
        label_440110:
            __bound_gprv_mema32(arg4, *(ebx + (arg1 << 1) + 0x6c))
            int32_t esp_4 = *(ebx + 0x6b) * &data_40e5f8
            *arg2 = rol.b(*arg2, 0)
            arg1.b = (&arg1[1]).b + arg1[1]
            *(esp_4 - 4) = *(ebx + edi + 0x44)
            esp_2 = esp_4 - 4
            arg1[0x80000000] += arg1.b
            c_6 = arg1 u< 0x6e4f0900
        else
            if (c_2)
                goto label_4400fd
            
            arg4 = *(esi_1 + 0x65) * 0x73655264
            *(arg2 + 0x65)
            int32_t edi_1 = *(arg2 + 0x65) * &data_42791c
            bool c_3 = unimplemented  {imul edi, dword [edx+0x65], 0x42791c}
            *ecx = sbb.b(*ecx, 0, c_3)
            char temp11_1 = ebx:1.b
            char temp12_1 = ebx:1.b
            ebx:1.b *= 2
            *ecx = sbb.b(*ecx, 0, temp11_1 + temp12_1 u< temp11_1)
            ebx:1.b *= 2
            *arg1 = &arg1[*arg1]
            *arg1 = *arg1
            *arg1 = *arg1
            arg1[0x80000000] = arg1[0x80000000]
            *arg1
            int16_t cs
            uint32_t var_4287 = zx.d(cs)
            esp_2 = &var_4287
            edi = edi_1 - 1
            uint16_t* esi_3 = __outsb(arg2.w, *esi_1, esi_1, eflags)
            void* temp13_1 = ebx
            ebx += 1
            uint16_t* esi_4 = __outsd(arg2.w, *esi_3, esi_3, eflags)
            uint16_t* esi_5 = __outsb(arg2.w, *esi_4, esi_4, eflags)
            
            if (temp13_1 != 0xffffffff)
                if (temp13_1 + 1 s< 0)
                    jump(0x44013e)
                
                jump("Popup")
            
            char temp19_1 = arg1[0x4f09003d]
            arg1[0x4f09003d] = arg1[0x4f09003d]
            c_6 = temp19_1 u< temp19_1
            esi_1 = __outsb(arg2.w, *esi_5, esi_5, eflags)
        
        while (true)
            uint32_t* temp18_1 = esp_2
            esp_2 += 1
            z_2 = temp18_1 == 0xffffffff
            
            if (not(c_6))
                arg1.b = 0x74
                arg1.b = arg2.b + 0x75
                *arg1 += arg1.b
                void* ecx_3
                arg1, arg2, ecx_3 = arg1()
                *arg1 += arg1.b
                *(esp_2 - 4) = *(ebx + edi + 0x44)
                esp_2 -= 4
                arg1[0x80000000] += arg1.b
                ecx = ecx_3 + 1
                char temp21_1 = *arg2
                *arg2 += ecx.b
                c_5 = temp21_1 + ecx.b u< temp21_1
                goto label_4401c7
            
            if (c_6)
                break
            
            if (temp18_1 + 1 s< 0)
                char* eax_2 = __in_oeax_immb(0x40, eflags)
                eax_2[0x88ff0002] += ecx.b
                eax_2.b += *eax_2
                *(esp_2 - 4) = *(ebx + edi + 0x44)
                esp_1 = esp_2 - 4
                eax_2[0x80000000] += eax_2.b
                char temp31_1 = edi[ecx << 1]
                edi[ecx << 1] += ecx.b
                c_5 = temp31_1 + ecx.b u< temp31_1
                goto label_440157
        
        goto label_4401a9
    
    arg1.b += *arg1
    var_8 = *(ebx + edi + 0x44)
    esp_1 = &var_8
    arg1[0x80000000] += arg1.b
    *arg1
    edi[0x6e]
    edi[0x6e] |= arg3.b
    c_5 = false
    label_4400ec:
    bool cond:2_1 = ebx == 0xffffffff
    
    if (not(c_5))
        edi = *esp_1
        esi_1 = esp_1[1]
        arg4 = esp_1[2]
        ebx = esp_1[4]
        arg2 = esp_1[5]
        esp_1[6]
        esp_1[7]
        esp_1 = &esp_1[8]
        
        if (cond:2_1)
            goto label_440157
        
        goto label_4400f3
    
    char temp5_1 = edi[arg3 << 1]
    edi[arg3 << 1] += arg3.b
    c_5 = temp5_1 + arg3.b u< temp5_1
    label_440157:
    __outsb(arg2.w, *esi_1, esi_1, eflags)
    int32_t ebp = *(esp_1 + 9)
    int32_t ecx_2 = *(esp_1 + 0x19)
    int16_t temp0_1
    temp0_1, eflags = __arpl_memw_gpr16(*(ecx_2 + (ebp << 1) + 0x76), (*(esp_1 + 5)).w)
    *(ecx_2 + (ebp << 1) + 0x76) = temp0_1
    edi = *(esp_1 + 0x21)
    esi_1 = *(esp_1 + 0x25)
    arg4 = *(esp_1 + 0x29)
    ebx = *(esp_1 + 0x31)
    arg2 = *(esp_1 + 0x35)
    ecx = *(esp_1 + 0x39)
    arg1 = *(esp_1 + 0x3d)
    esp_2 = esp_1 + 0x41
    
    if (esp_1 != 0xffffffff)
        *(arg4 + 0x42) = arg2:1.b
        bool z_1
        
        while (true)
            arg1[0x88ff0001] += ecx.b
            *arg1 = &arg1[*arg1]
            *ecx += 1
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 = *arg1
            char temp16_1 = arg1[0x4f0a003f]
            arg1[0x4f0a003f] += arg1.b
            c_5 = temp16_1 + arg1.b u< temp16_1
            uint16_t* esi_8 = __outsb(arg2.w, *esi_1, esi_1, eflags)
            uint32_t* temp17_1 = esp_2
            esp_2 += 1
            z_1 = temp17_1 == 0xffffffff
            esi_1 = __outsd(arg2.w, *esi_8, esi_8, eflags)
            int16_t temp0_2
            temp0_2, eflags = __arpl_memw_gpr16(*(ebx + 0x44), arg4.w)
            *(ebx + 0x44) = temp0_2
            
            if (c_5)
                if (c_5)
                    char temp23_1 = *0x65476e4f
                    *0x65476e4f += ecx.b
                    
                    if (temp23_1 == neg.b(ecx.b))
                        goto label_44028e
                    
                    goto label_44023b
                
                if (not(z_1))
                    goto label_44023b
                
                arg1.b += arg2:1.b
                *arg1 += arg1.b
                *(esp_2 - 4) = arg1
                esp_2 -= 4
                *arg1 += arg1.b
                *ecx += 1
                *arg1 += arg1.b
                *arg1 += arg1.b
                *arg1 += arg1.b
                *arg1 = *arg1
                char temp27_1 = arg1[0x4f090043]
                arg1[0x4f090043] += arg1.b
                c_5 = temp27_1 + arg1.b u< temp27_1
                goto label_440212
            
            if (not(add_overflow(temp17_1, 1)))
                break
            
            arg2 = &arg2[1]
        
        if (not(z_1))
            goto label_4401cc
        
        arg1[0x90ff0001] += arg2.b
        *arg1 = &arg1[*arg1]
        *ecx += 1
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 = *arg1
        char temp28_1 = arg1[0x4f0a0040]
        arg1[0x4f0a0040] += arg1.b
        c_6 = temp28_1 + arg1.b u< temp28_1
        uint16_t* esi_9 = __outsb(arg2.w, *esi_1, esi_1, eflags)
        uint32_t* temp29_1 = esp_2
        esp_2 += 1
        z_2 = temp29_1 == 0xffffffff
        esi_1 = __outsd(arg2.w, *esi_9, esi_9, eflags)
        int16_t temp0_3
        temp0_3, eflags = __arpl_memw_gpr16(*(ebx + 0x4f), arg4.w)
        *(ebx + 0x4f) = temp0_3
    label_4401a9:
        
        if (z_2 || c_6)
            *(edi + 0x6e)
            *(edi + 0x6e) |= ecx
            c_5 = false
            goto label_440213
        
        if (c_6)
            jump(0x44015d)
        
        jump(0x4401ad)
    
    label_4401c7:
    edi -= 1
    esi_1 = __outsb(arg2.w, *esi_1, esi_1, eflags)
    esp_2 += 1
    bool c_7
    void* esp_10
    bool c_8
    
    if (c_5)
    label_44022d:
        *arg1 = *arg1
        arg1[0x4f0d0044] += arg1.b
        esi_1 = __outsb(arg2.w, *esi_1, esi_1, eflags)
        uint8_t* temp14_1 = edi
        edi = &edi[1]
        
        if (temp14_1 != 0xffffffff)
        label_44023b:
            esi_1 = *(arg4 + 0x49) * 0xf86f666e
            goto label_440243
        
    label_44028e:
        ebx:1.b *= 2
        arg1:1.b = 0x3b
        esp_10 = esp_2 + 1
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 = *arg1
        char temp20_1 = arg1[0x4f090047]
        arg1[0x4f090047] += arg1.b
        c_8 = temp20_1 + arg1.b u< temp20_1
    label_4402a0:
        uint16_t* esi_11 = __outsb(arg2.w, *esi_1, esi_1, eflags)
        
        if (ebx - 1 s>= 0)
            uint16_t* esi_14 = __outsb(arg2.w, *esi_11, esi_11, eflags)
            
            if (ebx - 2 s< 0)
                if (add_overflow(ebx - 1, 0xffffffff))
                    jump(sub_4402f2+0x1a)
                
                jump(0x4402f0)
            
            unimplemented  {enter 0x0, 0xff}
            arg1:1.b = 0x3b
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 = *arg1
            arg1[0x4f09004c] += arg1.b
            uint16_t* esi_15 = __outsb(arg2.w, *esi_14, esi_14, eflags)
            __outsd(arg2.w, *esi_15, esi_15, eflags)
            
            if (arg4 != 1)
                jump("ouseWheelUp")
            
            jump("eUpDxB")
        
        uint16_t* esi_12 = __outsd(arg2.w, *esi_11, esi_11, eflags)
        
        if (ebx != 1 && not(c_8))
            if (not(c_8))
                jump(0x44035a)
            
            jump(sub_4402f2+0x26)
        
        arg2[arg1 << 1] = adc.b(arg2[arg1 << 1], arg2:1.b, c_8)
        *0xb8ff0001 -= 0x4700ffff
        *(esp_10 - 4) = *(ebx - 1 + edi + 0x44)
        *0x38ff0001 += 1
        char temp33_1 = *arg2
        *arg2 += ecx.b
        c_7 = temp33_1 + ecx.b u< temp33_1
        __outsb(arg2.w, *esi_12, esi_12, eflags)
        
        if (ebx - 2 s>= 0)
            jump(sub_4402f2+0x27)
    else
    label_4401cc:
        uint32_t* temp15_1 = esp_2
        esp_2 += 1
        
        if (not(c_5))
            bool z_4
            
            if (add_overflow(temp15_1, 1))
            label_440212:
                esi_1 = __outsb(arg2.w, *esi_1, esi_1, eflags)
            label_440213:
                arg4 += 1
                esi_1 = __outsb(arg2.w, *esi_1, esi_1, eflags)
                uint32_t* temp25_1 = esp_2
                esp_2 += 1
                z_4 = temp25_1 == 0xffffffff
            else
                if (temp15_1 != 0xffffffff)
                    arg1.b += ebx.b
                    *arg1 += arg1.b
                    undefined
                
                uint32_t* temp26_1 = esp_2
                esp_2 += 1
                z_4 = temp26_1 == 0xffffffff
            
            esi_1 = __outsd(arg2.w, *esi_1, esi_1, eflags)
            int16_t temp0_4
            temp0_4, eflags = __arpl_memw_gpr16(*(ebx - 0xc), arg4.w)
            *(ebx - 0xc) = temp0_4
            
            if (z_4 || c_5)
                goto label_440260
            
            arg1[0xa8ff0001] += ecx:1.b
            *arg1 = &arg1[*arg1]
            *ecx += 1
            *arg1 += arg1.b
            *arg1 += arg1.b
            *arg1 += arg1.b
            goto label_44022d
        
        uint16_t* esi_10 = __outsb(arg2.w, *esi_1, esi_1, eflags)
        esi_1 = __outsw(arg2.w, *esi_10, esi_10, eflags)
    label_440243:
        arg1 = __in_oeax_immb(0x40, eflags)
        arg1[0x98ff0002] += ebx.b
        arg1.b += *arg1
        *(esp_2 - 4) = *(ebx + edi + 0x44)
        arg1[0x80000000] += arg1.b
        arg4 += 1
        *esi_1 += arg1.b
        edi -= 1
        int32_t esp_9
        
        while (true)
            esi_1 = __outsb(arg2.w, *esi_1, esi_1, eflags)
        label_440260:
            esp_9 = arg4[7] * 0x900040e6
            void* eax_3
            eax_3.b = (arg1 - 1).b + *(arg1 - 1)
            char* eax_4
            eax_4, arg2, ecx = (*(eax_3 + 0x1ff0002))()
            *eax_4 += eax_4.b
            *eax_4 += eax_4.b
            *eax_4 += eax_4.b
            *eax_4 = *eax_4
            char temp35_1 = eax_4[0x4f060046]
            eax_4[0x4f060046] += eax_4.b
            c_7 = temp35_1 + eax_4.b u< temp35_1
            esi_1 = __outsb(arg2.w, *esi_1, esi_1, eflags)
            arg1 = eax_4 - 1
            uint8_t temp0_5
            temp0_5, edi = __insb(edi, arg2.w, eflags)
            *edi = temp0_5
            
            if (not(add_overflow(eax_4, 0xffffffff)))
                break
            
            *arg1 = *arg1
            arg1[0x4f060045] += arg1.b
        
        if (c_7)
            arg1[0xb0ff0001] += arg2:1.b
            *arg1 = &arg1[*arg1]
            *(esp_9 - 4) = *(ebx + edi + 0x44)
            esp_10 = esp_9 - 4
            arg1[0x80000000] += arg1.b
            char temp37_1 = *ecx
            *ecx += ecx.b
            c_8 = temp37_1 + ecx.b u< temp37_1
            goto label_4402a0
    
    if (c_7)
        jump(sub_4402f2+0x3e)
    
    jump(0x4402cb)
}
