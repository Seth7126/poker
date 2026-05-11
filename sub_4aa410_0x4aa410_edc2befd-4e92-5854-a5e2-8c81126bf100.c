// ============================================================
// 函数名称: sub_4aa410
// 虚拟地址: 0x4aa410
// WARP GUID: edc2befd-4e92-5854-a5e2-8c81126bf100
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4aa410(char* arg1, int32_t arg2, int32_t arg3, void* arg4 @ ebp, char* arg5 @ esi, char* arg6 @ edi, void* arg7, int32_t arg8, int32_t arg9, char* arg10)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    int16_t arg_4
    int16_t* esp_1 = &arg_4
    *arg6 = *arg5
    void* entry___return_addr_2 = &arg6[1]
    void* entry___return_addr_1 = &arg5[1]
    *(__return_addr * 2) += arg3.b
    char temp0 = *__return_addr
    *__return_addr += __return_addr.b
    void* const eax
    eax.b = adc.b(__return_addr.b, 0xa2, temp0 + __return_addr.b u< temp0)
    eax:1.b += (arg2 - 2):1.b
    eax.b ^= *eax
    char* entry___return_addr
    *entry___return_addr += (arg2 - 2):1.b
    *(entry___return_addr + entry___return_addr_1) += (eax + 1).b
    *(eax + 2) += arg3.b
    char* eax_3 = (eax + 2) ^ *(eax + 2)
    eax_3.b ^= *eax_3
    TEB* fsbase
    char temp1 = *(fsbase + eax_3) ^ eax_3.b
    *(fsbase + eax_3) = temp1
    char* eax_9
    int32_t edx_3
    int32_t eflags
    char* eax_5
    int32_t edx_2
    
    if (temp1 s< 0)
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *(arg2 - 2 + (arg3 << 1) + 0xc00)
        *(arg2 - 2 + (arg3 << 1) + 0xc00) = *(arg2 - 2 + (arg3 << 1) + 0xc00)
        bool c_2 = unimplemented  {shl byte [edx+ecx*2+0xc00], 0x0}
        eax_3.b = adc.b(eax_3.b, 0xa2, c_2)
        edx_2 = arg2 - 3
        eax_3:1.b += edx_2:1.b
        eax_3.b ^= *eax_3
        *entry___return_addr += edx_2:1.b
        *(entry___return_addr + entry___return_addr_1) += (&eax_3[1]).b
        eax_3[2] += arg3.b
        eax_5 = &eax_3[2] ^ *(eax_3 + 2)
        eax_5.b ^= *eax_5
        char temp3_1 = *(fsbase + eax_5) ^ eax_5.b
        *(fsbase + eax_5) = temp3_1
        
        if (temp3_1 s< 0)
        label_4aa4ea:
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            eax_5.b &= 0xa5
            edx_2 -= 1
            *(eax_5 * 2) += arg3.b
            goto label_4aa4fe
        
        void* eax_8
        eax_8.b = (&eax_5[1]).b * 2
        *eax_8 ^= eax_8.b
        __outsd(edx_2.w, *entry___return_addr_1, entry___return_addr_1, eflags)
        entry___return_addr_2 = entry___return_addr
        entry___return_addr_1 = entry___return_addr
        entry___return_addr = arg7
        edx_3 = arg8
        arg3 = arg9
        eax_9 = arg10
        *(fsbase + entry___return_addr_1 + 0x67)
        bool c_3 = unimplemented  {imul ebp, dword [fs:esi+0x67], 0x74726543}
        arg4 = *(fsbase + entry___return_addr_1 + 0x67) * 0x74726543 + 1
        
        if (not(c_3))
            __outsd(edx_3.w, *entry___return_addr_1, entry___return_addr_1, eflags)
            
            if (c_3)
                jump(0x4aa4fd)
            
            jump(&data_4aa4d8:1)
        
        *eax_9 += eax_9.b
        *eax_9 += eax_9.b
        *eax_9 += eax_9.b
    else
        void* eax_4
        eax_4.b = (&eax_3[1]).b * 2
        *eax_4
        *eax_4 ^= eax_4.b
        __return_addr = entry___return_addr
        __outsd((arg2 - 2).w, *entry___return_addr_1, entry___return_addr_1, eflags)
        void* entry___return_addr_3
        entry___return_addr_2 = entry___return_addr_3
        entry___return_addr_1 = entry___return_addr
        edx_2 = arg8
        arg3 = arg9
        eax_5 = arg10
        void arg_1a
        esp_1 = &arg_1a
        *(fsbase + entry___return_addr_1 + 0x67)
        arg4 = *(fsbase + entry___return_addr_1 + 0x67) * 0x746f6f52
        bool c_1 = unimplemented  {imul ebp, dword [fs:esi+0x67], 0x746f6f52}
        entry___return_addr = arg7 + 1
        
        if (not(c_1))
            arg4 += 1
            
            if (c_1)
                *eax_5 += eax_5.b
                *eax_5 += eax_5.b
                *eax_5 += eax_5.b
                goto label_4aa4ea
            
            __outsd(edx_2.w, *entry___return_addr_1, entry___return_addr_1, eflags)
            
            if (c_1)
                jump(0x4aa435)
            
            jump(&data_4aa474:1)
        
        *eax_5 += eax_5.b
        *eax_5 += eax_5.b
        *eax_5 += eax_5.b
        *eax_5 += eax_5.b
        *eax_5 += eax_5.b
        *eax_5 += eax_5.b
        *eax_5 += eax_5.b
        *eax_5 += eax_5.b
        *eax_5 += eax_5.b
        *eax_5 += eax_5.b
        *0xc004a += eax_5:1.b
    label_4aa4fe:
        char temp7_1 = *eax_5
        *eax_5 += eax_5.b
        eax_5.b = adc.b(eax_5.b, 0xa2, temp7_1 + eax_5.b u< temp7_1)
        edx_3 = edx_2 - 1
        eax_5:1.b += edx_3:1.b
        eax_5.b ^= *eax_5
        *entry___return_addr += edx_3:1.b
        *(entry___return_addr + entry___return_addr_1) += (&eax_5[1]).b
        eax_5[2] += arg3.b
        eax_9 = &eax_5[2] ^ *(eax_5 + 2)
        eax_9.b ^= *eax_9
        char temp8_1 = *(fsbase + eax_9) ^ eax_9.b
        *(fsbase + eax_9) = temp8_1
        
        if (temp8_1 s>= 0)
            void* eax_12
            eax_12.b = (&eax_9[1]).b * 2
            *eax_12 ^= eax_12.b
            int16_t ss
            *(esp_1 - 4) = zx.d(ss)
            *(esp_1 - 8) = entry___return_addr
            *(esp_1 - 0xc) = entry___return_addr
            __outsd(edx_3.w, *entry___return_addr_1, entry___return_addr_1, eflags)
            *(esp_1 - 0xe)
            int32_t esi_5 = *(esp_1 - 0xa)
            *(esp_1 + 2)
            *(esp_1 + 6)
            *(esp_1 + 0xa)
            *(esp_1 + 0xe)
            *(fsbase + esi_5 + 0x67)
            *(fsbase + esi_5 + 0x67)
            bool c_5 = unimplemented  {imul ebp, dword [fs:esi+0x67], 0x4579654b}
            
            if (c_5)
                jump(sub_4aa582+0x29)
            
            jump(sub_4aa582-0x49)
    *eax_9 += eax_9.b
    *eax_9 += eax_9.b
    *eax_9 += eax_9.b
    *eax_9 += eax_9.b
    *eax_9 += eax_9.b
    *eax_9 += eax_9.b
    *eax_9 += eax_9.b
    *(arg4 + 0xc004a) = eax_9:1.b
    *eax_9 += eax_9.b
    void* eax_14
    eax_14.b = 0xa1 ^ *0xf4004aa1
    *entry___return_addr += edx_3:1.b
    *(entry___return_addr + entry___return_addr_1) += (eax_14 + 1).b
    *(eax_14 + 2) += arg3.b
    char* eax_17 = (eax_14 + 2) ^ *(eax_14 + 2)
    eax_17.b ^= *eax_17
    char temp9 = *(fsbase + eax_17) ^ eax_17.b
    *(fsbase + eax_17) = temp9
    
    if (temp9 s>= 0)
        return sub_4aa582(eax_17, edx_3, arg3, arg4, entry___return_addr_1, entry___return_addr_2)
            __tailcall
    
    *eax_17 += eax_17.b
    *eax_17 += eax_17.b
    *eax_17 += eax_17.b
    *eax_17 += eax_17.b
    *eax_17 += eax_17.b
    *eax_17 += eax_17.b
    *eax_17 += eax_17.b
    *eax_17 += eax_17.b
    *eax_17 += eax_17.b
    undefined
}
