// ============================================================
// 函数名称: sub_48f5f8
// 虚拟地址: 0x48f5f8
// WARP GUID: 98935241-de6e-5908-b9d8-466bb6f46c53
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_48f6a4, sub_412ac8, sub_48f760, sub_403898, sub_403df8
// [被调用的父级函数]: sub_48f538
// ============================================================

int32_t* __convention("regparm")sub_48f5f8(char* arg1, int32_t* arg2, uint16_t* arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, int32_t arg6 @ edi, long double arg7 @ st0, void* arg8, void* arg9, int32_t* arg10, uint16_t* arg11, char* arg12)
{
    // 第一条实际指令: uint8_t* entry_ebx
    uint8_t* entry_ebx
    uint8_t* var_3 = entry_ebx
    int32_t* esp_1 = &var_3
    int32_t eflags
    uint16_t* esi = __outsd(arg2.w, *arg5, arg5, eflags)
    int32_t* result
    void* ebx
    void* esp_6
    uint16_t* __return_addr_1
    uint8_t* edi_1
    bool cond:3_1
    bool cond:4_1
    bool cond:8_1
    
    if (&var_3:3 != 0xffffffff)
        __outsd(arg2.w, *esi, esi, eflags)
        
        if (&var_3:3 == 0xffffffff)
            edi_1 = var_3
            __return_addr_1 = __return_addr
            arg4 = arg8
            ebx = arg9
            arg2 = arg10
            arg3 = arg11
            arg1 = arg12
            void arg_1d
            esp_1 = &arg_1d
            
            if (add_overflow(entry_ebx, 1) || entry_ebx != 0xffffffff)
            label_48f6e7:
                *(ebx + 0x70e8f855) -= 1
                *arg1 += arg1.b
                *(ebx + 0x5ac033d8) += arg3.b
                goto label_48f6f6
            
            void* temp7_1 = arg4
            arg4 += 1
            cond:3_1 = temp7_1 != 0xffffffff
            cond:4_1 = temp7_1 != 0xffffffff
            cond:8_1 = temp7_1 == 0xffffffff
        label_48f677:
            __outsb(arg2.w, *__return_addr_1, __return_addr_1, eflags)
            
            if (cond:4_1)
                goto label_48f6e7
            
            goto label_48f67a
        
        arg2.b = 1
    label_48f6eb:
        sub_48f760(sub_412ac8(arg3, arg2, 0x40f2a8), *(arg4 - 8))
        arg1 = nullptr
        arg2 = esp_1[1]
        esp_1 = &esp_1[2]
    label_48f6f6:
        esp_1[1]
        esp_1 = &esp_1[2]
        TEB* fsbase
        *(fsbase + arg1) = arg2
    label_48f70f:
        arg1 = nullptr
        arg2 = *esp_1
        esp_1[2]
        esp_6 = &esp_1[3]
    label_48f714:
        *(fsbase + arg1) = arg2
        *(esp_6 - 4) = sub_48f72c
        result = arg4 - 4
        sub_403df8(result)
    else
        uint8_t* edi
        uint8_t temp0_1
        temp0_1, edi = __insb(arg6, arg2.w, eflags)
        *edi = temp0_1
        uint8_t temp0_2
        temp0_2, edi_1 = __insb(edi, arg2.w, eflags)
        *edi_1 = temp0_2
        *arg1 += arg1.b
        esp_1 = &var_3:1
        cond:3_1 = &var_3 != 0xffffffff
        cond:8_1 = &var_3 == 0xffffffff
        *(arg2 + 0x65)
        __return_addr_1 = *(arg2 + 0x65) * 0x6f537463
        bool c = unimplemented  {imul esi, dword [edx+0x65], 0x6f537463}
        void arg_1e
        uint16_t* esi_2
        bool c_1
        bool z_1
        bool o_1
        bool cond:10_1
        bool cond:11_1
        
        if (&var_3 == 0xffffffff)
            ebx = &entry_ebx[1]
            cond:3_1 = entry_ebx != 0xffffffff
            cond:4_1 = entry_ebx != 0xffffffff
            cond:8_1 = entry_ebx == 0xffffffff
            
            if (c)
                goto label_48f677
            
            edi_1 = var_3
            arg4 = arg8
            ebx = arg9
            arg2 = arg10
            arg3 = arg11
            arg1 = arg12
            esp_1 = &arg_1e
            
            if (entry_ebx == 0xffffffff)
            label_48f67a:
                
                if (c)
                    goto label_48f6eb
                
                goto label_48f67d
            
            *arg1 += arg1.b
            char temp10_1 = arg3[arg4 + 0x39].b
            arg3[arg4 + 0x39].b += arg1.b
            c_1 = temp10_1 + arg1.b u< temp10_1
            z_1 = temp10_1 == neg.b(arg1.b)
            o_1 = add_overflow(temp10_1, arg1.b)
            int32_t gsbase
            int16_t temp0_3
            temp0_3, eflags = __arpl_memw_gpr16(*(gsbase + ebx + (arg2 << 1) + 0x6f), __return_addr.w)
            *(gsbase + ebx + (arg2 << 1) + 0x6f) = temp0_3
            
            if (not(z_1))
                goto label_48f690
            
            void* temp11_1 = arg4
            arg4 += 1
            z_1 = temp11_1 == 0xffffffff
            o_1 = add_overflow(temp11_1, 1)
            esi_2 = __outsb(arg2.w, *__return_addr, __return_addr, eflags)
            
            if (z_1)
                if (c_1)
                    __outsd(arg2.w, *esi_2, esi_2, eflags)
                    goto label_48f68c
                
                if (not(z_1))
                    arg12 = edi_1
                    *arg1 += arg1.b
                    char temp15 = arg3[arg4 + 0x39].b
                    arg3[arg4 + 0x39].b += arg1.b
                    int32_t eflags_1
                    int16_t temp0_4
                    temp0_4, eflags_1 = __arpl_memw_gpr16(*(gsbase + ebx + (arg2 << 1) + 0x6f), esi_2.w)
                    *(gsbase + ebx + (arg2 << 1) + 0x6f) = temp0_4
                    
                    if (temp15 != neg.b(arg1.b))
                        undefined
                    
                    jump("dEnumerateA")
                
                goto label_48f691
            
            if (c_1)
                arg4 = adc.d(arg4, arg3, c_1)
                *esi_2
            label_48f701:
                arg1 = *(arg4 - 8)
            label_48f704:
                arg1[0x10] = 2
                sub_403898()
                goto label_48f70f
            
            void* temp13_1 = arg4
            arg4 += 1
            cond:10_1 = temp13_1 != 0xffffffff
            cond:11_1 = temp13_1 == 0xffffffff
        label_48f697:
            __outsb(arg2.w, *esi_2, esi_2, eflags)
            
            if (cond:10_1)
                goto label_48f707
            
            if (c_1)
                goto label_48f701
            
            if (cond:11_1)
                goto label_48f704
            
            *arg1 += arg1.b
            *arg1 += arg1.b
            return sub_48f6a4(arg1, arg2) __tailcall
        
        edi_1 = var_3
        arg4 = arg8
        ebx = arg9
        arg2 = arg10
        arg3 = arg11
        arg1 = arg12
        esp_1 = &arg_1e
    label_48f67d:
        
        if (not(cond:8_1))
            *(esp_1 - 4) = edi_1
            void* esp_2 = esp_1 - 4
            *arg1 += arg1.b
            *arg1 += arg1.b
            esp_1 = esp_2 + 1
            z_1 = esp_2 == 0xffffffff
            *(arg2 + 0x65)
            *(arg2 + 0x65)
            c_1 = unimplemented  {imul esi, dword [edx+0x65], 0x6f537463}
        label_48f68c:
            
            if (not(z_1))
                return sub_40353c() __tailcall
            
            z_1 = ebx == 0xffffffff
            o_1 = add_overflow(ebx, 1)
        label_48f690:
            *esp_1
            esi_2 = esp_1[1]
            arg4 = esp_1[2]
            ebx = esp_1[4]
            arg2 = esp_1[5]
            arg3 = esp_1[6]
            arg1 = esp_1[7]
            esp_1 = &esp_1[8]
        label_48f691:
            
            if (not(o_1) && z_1)
                void* temp14_1 = arg4
                arg4 += 1
                cond:10_1 = temp14_1 != 0xffffffff
                cond:11_1 = temp14_1 == 0xffffffff
                goto label_48f697
            
        label_48f707:
            arg2:1.b += *ebx
            arg7 - arg7
            *(arg3 - 9) = arg1
            *(esp_1 - 4) = *ebx
            esp_6 = esp_1 - 4
            *(arg2 + 0x59) = rrc.b(*(arg2 + 0x59), 0x59, arg7 < arg7)
            goto label_48f714
        
        arg3 -= 1
        
        if (not(cond:3_1) || arg3 == 0)
            goto label_48f6e7
        
        *arg1
        int32_t eflags_2
        char temp0_7
        char temp1_3
        temp0_7, temp1_3, eflags_2 = __aam_immb(0x46, arg1.b)
        arg1.b = temp0_7
        arg1:1.b = temp1_3
        result = divs.dp.d(arg2:arg1, edi_1)
    return result
}
