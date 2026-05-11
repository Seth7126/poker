// ============================================================
// 函数名称: sub_42100c
// 虚拟地址: 0x42100c
// WARP GUID: e6408651-2994-5c71-8d0d-b3b2af2eb175
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_42100c(char* arg1, int32_t arg2, char* arg3, char* arg4 @ ebp, char* arg5, int32_t arg6, char* arg7, char* arg8, char arg9, char arg10)
{
    // 第一条实际指令: bool c
    bool c
    *arg1 = adc.b(*arg1, arg2.b, c)
    char* entry_ebx
    *entry_ebx += arg1.b
    void arg_65
    char* edx_1 = (arg2 + 1) | *(&arg_65 + ((arg2 + 1) << 1))
    
    if (edx_1 s< 0)
        *(arg3 + arg4 - 0x2b47ffbd) += arg1.b
        edx_1 = &edx_1[1]
    else
        char** var_1
        char** edi_1 = var_1
        void* const __return_addr_1 = __return_addr
        arg4 = arg5
        int32_t ebx = arg6
        edx_1 = arg7
        arg3 = arg8
        char* arg_1b
        arg1 = arg_1b
        void arg_1f
        char** esp_1 = &arg_1f
        
        if (&var_1 s>= 0)
        label_42108a:
            arg1 = &arg1[1]
            *(arg3 + arg4 - 0x2b47ffbd) += arg1.b
            edx_1 = &edx_1[1]
        else
            if (&var_1:1 == 1)
                *arg1 = &arg1[*arg1]
                *arg1 += arg1.b
                *edx_1 += arg1.b
                *arg1 += arg1.b
                *(arg1 + edx_1) += arg3.b
                char temp2_1 = *0x6f546c74
                *0x6f546c74 += arg1.b
                bool c_1 = temp2_1 + arg1.b u< temp2_1
                int32_t eflags
                void* edx_6
                
                if (not(add_overflow(temp2_1, arg1.b)))
                    if (temp2_1 == neg.b(arg1.b))
                        arg1[0x3d] += (&edx_1[1]).b
                        edx_6 = &edx_1[2]
                        arg1[0x580042ac] += ebx:1.b
                        arg3:1.b = 0x42
                    else
                        int32_t temp4_1 = ebx
                        ebx += 1
                        uint16_t* gsbase
                        __return_addr_1 =
                            __outsb((&edx_1[1]).w, *(gsbase + __return_addr_1), __return_addr_1, eflags)
                        
                        if (temp4_1 != 0xffffffff)
                            if (c_1)
                                goto label_421045
                            
                            if (temp4_1 == 0xffffffff)
                                jump(0x4210a8)
                            
                            jump(0x42103c)
                        
                        *(edx_1 + 1)
                        arg_1b = arg1
                        esp_1 = &arg_1b
                        arg1[0xffffffb5] += ebx.b
                        edx_6 = &edx_1[3]
                    
                    *(esp_1 + 0x61940041) += arg3:1.b
                    arg3[0x64b40042] += (&arg3[1]).b
                    arg1[0x84004238] += ebx.b
                    int16_t ds_1
                    arg1, ds_1 = __lds_gprz_memp(*edx_6)
                    arg3:1.b = (&arg3[2]):1.b + 0x42
                    goto label_4210c7
                
                char arg_61[0x4]
                char temp3_1 = arg_61[arg4 << 1]
                arg_61[arg4 << 1] |= (&edx_1[1]):1.b
                c_1 = false
                __return_addr_1 = __outsd((&edx_1[1]).w, *__return_addr_1, __return_addr_1, eflags)
                
                if ((temp3_1 | (&edx_1[1]):1.b) != 0)
                    __return_addr_1 = __outsd((&edx_1[1]).w, *__return_addr_1, __return_addr_1, eflags)
                    char* edi_2
                    char temp0_1
                    temp0_1, edi_2 = __insd(edi_1, (&edx_1[1]).w, eflags)
                    *edi_2 = temp0_1
                label_421045:
                    edx_1[1] = adc.b(edx_1[1], arg1.b, c_1)
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    char temp5_1 = *arg1
                    *arg1 += arg1.b
                    arg_1b = &arg_1f
                    *(edx_1 + 1) = adc.d(*(edx_1 + 1), arg1, temp5_1 + arg1.b u< temp5_1)
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *arg3 &= (&edx_1[1]).b
                    arg1[0x11] += arg1.b
                    *(arg3 + arg1) += (&edx_1[3]):1.b
                    *arg1 += arg1.b
                    char* eax
                    eax.b = __in_al_immb(0x82, eflags)
                    arg9 += (&edx_1[4]).b
                    void* eax_1
                    eax_1:1.b = (&eax[1]):1.b + arg3:1.b
                    arg4 = arg_1b
                    arg3 = &arg3[1]
                    *eax_1 += arg3.b
                    arg1 = eax_1 ^ *eax_1
                    edx_1 = &edx_1[5]
                    *(arg1 + __return_addr_1 + 0x40) += arg1:1.b
                    arg1[0x30] += ebx:1.b
                    goto label_42108a
                
                int16_t fs
                *(arg3 + 0x41) = fs
                arg10 += (&edx_1[1]):1.b
                arg4[(arg1 << 3) - 0x3a7fffbe] += arg1.b
                edx_6 = &edx_1[3]
            label_4210c7:
                arg1[0xffffffc6] += edx_6.b
                arg1[0xffffffb2] += arg1:1.b
                arg1:1.b += arg1.b
                arg3.b = 0x42
                arg1[0xffffffba] += (edx_6 + 2):1.b
                *(ebx + (arg4 << 2)) += arg1.b
                *arg1 += 0x42
                *edi_1 = arg1
                char** edi_3 = &edi_1[1]
                *(__return_addr_1 + ((edx_6 + 5) << 3) + 0x42) += 0x42
                arg1[0xffffffd6] += ebx:1.b
                *(&esp_1[arg4] - 0x492bffbe) += arg1.b
                *(__return_addr_1 * 5 + 0x42) += arg1.b
                arg1[0xffffffb9] += 0x42
                arg1[edi_3 << 2] += 0x42
                *arg1 += arg1:1.b
                unimplemented  {enter 0x42, 0xf8}
                arg1.b = __salc(eflags)
                *arg1 += (edx_6 + 0xa):1.b
                *(__return_addr_1 + (arg4 << 2)) += arg1:1.b
                arg1[0xffffffbc] += ebx:1.b
                arg1[0x400423a] += 0x42
                *(edx_6 + 0xd)
                *(edx_6 + 0xd + (arg1 << 1))
                *0xeb01200 += arg1.b
                arg1.b = 6
                arg1.b = 0xcd
                *(arg1 - 0x67ffbdc3) += 1
                *(ebx + edi_3 + 0x39180042) += arg1:1.b
                void* edx_23 = edx_6 + 0xf
                char temp6 = *(0xbc940041 + (edx_23 << 1))
                *(0xbc940041 + (edx_23 << 1)) += 0x42
                
                if (ebx != 0xffffffff)
                    TEB* fsbase
                    char temp8_1 = *(fsbase + arg1) ^ 0xcd
                    *(fsbase + arg1) = temp8_1
                    
                    if (temp8_1 s< 0)
                        arg1[0x84004238] += (ebx + 1).b
                        char* eax_6
                        int16_t ds_2
                        eax_6, ds_2 = __lds_gprz_memp(*edx_23)
                        eax_6[0xffffffc6] += edx_23.b
                        eax_6[0xffffffb2] += eax_6:1.b
                        eax_6:1.b += eax_6.b
                        eax_6[0xffffffba] += (edx_23 + 2):1.b
                        *(ebx + 1 + (arg4 << 2)) += eax_6.b
                        *eax_6 += 0x42
                        *edi_3 = eax_6
                        void* edi_6 = &edi_3[1]
                        *(__return_addr_1 + ((edx_23 + 5) << 3) + 0x42) += 0x42
                        eax_6[0xffffffd6] += (ebx + 1):1.b
                        *((arg4 << 2) + 0x73680083) += eax_6.b
                        *(__return_addr_1 * 5 + 0x42) += eax_6.b
                        eax_6[0xffffffb9] += 0x42
                        eax_6[edi_6 << 2] += 0x42
                        *eax_6 += eax_6:1.b
                        unimplemented  {enter 0x42, 0xf8}
                        eax_6.b = __salc(eflags)
                        *eax_6 += (edx_23 + 0xa):1.b
                        *(__return_addr_1 + (arg4 << 2)) += eax_6:1.b
                        eax_6[0xffffffbc] += (ebx + 1):1.b
                        eax_6[0x400423a] += 0x42
                        *(edx_23 + 0xd)
                        *(edx_23 + 0xd + (eax_6 << 1))
                        *__return_addr_1 += eax_6.b
                        *0xbc94003e = 0xbc940042
                        int32_t edi_7 = *0xbc94003d
                        int32_t esi_2 = *0xbc940041
                        void* ebp_1 = *0xbc940045
                        int32_t ebx_4 = *0xbc94004d
                        int32_t edx_39 = *0xbc940051
                        int32_t ecx_2 = *0xbc940055
                        int32_t eax_7 = *0xbc940059
                        __bound_gprv_mema32(0xbc94005d, *(ebp_1 + 0x6c))
                        *0xbc940059 = eax_7
                        *0xbc940055 = ecx_2
                        *0xbc940051 = edx_39
                        *0xbc94004d = ebx_4
                        *0xbc940049 = 0xbc94004d
                        *0xbc940045 = ebp_1
                        *0xbc940041 = esi_2
                        *0xbc94003d = edi_7
                        *0xbc94003b = zx.d(*0xbc94003d)
                        *0xbc940037 = 0xbc94003b
                        int32_t edi_8 = *0xbc940036
                        *0xbc94003a
                        int32_t ebx_5 = *0xbc940046
                        *0xbc94004a
                        uint64_t* ecx_3 = *0xbc94004e
                        char* eax_8 = *0xbc940052
                        __bound_gprv_mema32(0xbc940056, *(*0xbc94003e + 0x6c))
                        int16_t edx_41
                        int16_t es_2
                        edx_41, es_2 = __les_gprz_memp(*ecx_3)
                        eax_8[0x11] += (edx_41 + 1).b
                        char temp11 = *0x74530800
                        *0x74530800 += ecx_3:1.b
                        
                        if (ebx_5 != 0xffffffff)
                            uint8_t* edi_9
                            uint8_t temp0_7
                            temp0_7, edi_9 = __insb(edi_8, edx_41 + 2, eflags)
                            *edi_9 = temp0_7
                            
                            if (temp11 + ecx_3:1.b u>= temp11)
                                jump(sub_4211cc+0xd5)
                            
                            jump(sub_4211cc+0xb0)
                        
                        *eax_8 = es_2
                        uint16_t edx_43
                        edx_43:1.b = (edx_41 + 2):1.b + (ebx_5.w + 1):1.b
                        *eax_8 = &eax_8[*eax_8]
                        *eax_8 += eax_8.b
                        *eax_8 += eax_8.b
                        eax_8[1] += eax_8.b
                        char temp13 = *(ecx_3 + 0x75) | eax_8.b | (*eax_8).b
                        *(ecx_3 + 0x75) = temp13
                        
                        if (temp13 == 0)
                            jump(sub_4211cc+0x1a5)
                        
                        jump(sub_4211cc+0x136)
                else
                    if (ebx != 0xffffffff)
                        char* edi_4
                        char temp0_5
                        temp0_5, edi_4 = __insd(edi_3, edx_23.w, eflags)
                        *edi_4 = temp0_5
                        *0xbc940040
                        *0xbc940044
                        int32_t ebx_2 = *0xbc940050
                        int32_t* edx_24 = *0xbc940054
                        int32_t ecx_1 = *0xbc940058
                        int32_t eax_2 = *0xbc94005c
                        __bound_gprv_mema32(0xbc940060, *(*0xbc940048 + 0x6c))
                        *0xbc94005c = 0xbc940060
                        *edx_24 = adc.d(*edx_24, eax_2, temp6 + 0x42 u< temp6)
                        *0xbc94005c
                        int32_t eax_3
                        eax_3.b = eax_2.b | 0x54
                        
                        if (ebx_2 == 0xffffffff)
                            jump("tomLabel")
                        
                        *ecx_1
                        undefined
                    
                    edx_23 += 1
                    *(arg1 + __return_addr_1 + 0x40) += arg1:1.b
                    arg1[0x30] += (ebx + 1):1.b
                
                *(arg3 + arg4 - 0x2b47ffbd) += (&arg1[1]).b
                arg1[1] += edx_23.b + 1
                undefined
            
            int32_t eflags_1
            char temp0_3
            char temp1_1
            temp0_3, temp1_1, eflags_1 = __aam_immb(0x42, arg1.b)
            arg1.b = temp0_3
            arg1:1.b = temp1_1
    
    *arg1 += edx_1.b
    undefined
}
