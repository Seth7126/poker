// ============================================================
// 函数名称: sub_438dd4
// 虚拟地址: 0x438dd4
// WARP GUID: 46fb0bf0-7727-536a-9dc7-759199942d5e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_438dd4(char* arg1, void* arg2, void* arg3, int32_t arg4 @ ebp, uint16_t* arg5 @ esi, int16_t* arg6 @ edi)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    char temp1 = *arg1
    *arg1 += arg1.b
    
    if (not(add_overflow(temp1, arg1.b)))
        goto label_438de2
    
    void* entry_ebx
    int16_t* ebx = entry_ebx + 1
    char temp2_1 = *0x654c616d
    *0x654c616d += arg3.b
    void* eax_1
    void* eax
    void* esp
    
    if (temp2_1 == neg.b(arg3.b))
        arg1 = &arg1[1]
        arg5[arg3 * 2].b += ebx.b
    label_438dd2:
        entry_ebx = ebx + 1
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        arg1[0xffffff8e] += arg2:1.b
    label_438de2:
        ebx = entry_ebx + 1
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
    label_438de9:
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        arg1[0xffffff8e] += arg1:1.b
        *arg1 += arg3:1.b
        *arg1 += arg1.b
        arg1.b -= 0x76
        ebx = &ebx[1]
        *(esp + 0x33000041) += arg2.b
        eax:1.b = (&arg1[1]):1.b + arg3:1.b
    label_438e05:
        *esp
        esp += 4
        arg3 += 1
        *eax += arg3.b
        eax_1 = eax ^ *eax
        eax_1.b ^= *eax_1
        TEB* fsbase
        char temp5_1 = *(fsbase + eax_1) ^ eax_1.b
        *(fsbase + eax_1) = temp5_1
        
        if (temp5_1 s>= 0)
            goto label_438e16
    else
        int32_t eflags
        arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
        void* var_4_1 = arg2
        *(*(arg6 + 0x68) * 0x616d0d74 - 4) = arg2
        *(arg6 + 0x68)
        esp = *(arg6 + 0x68) * 0x4c6f5474
        bool o_1 = unimplemented  {imul esp, dword [edi+0x68], 0x4c6f5474}
        
        if (temp2_1 == neg.b(arg3.b))
            goto label_438d9c
        
        int16_t* edi
        int16_t temp0_2
        temp0_2, edi = __insd(arg6, arg2.w, eflags)
        *edi = temp0_2
        int32_t edi_1 = *esp
        uint16_t* esi = *(esp + 4)
        *(esp + 8)
        ebx = *(esp + 0x10)
        arg2 = *(esp + 0x14)
        arg3 = *(esp + 0x18)
        arg1 = *(esp + 0x1c)
        *(esp + 0x1c) = esp + 0x20
        esp += 0x1c
        arg5 = __outsd(arg2.w, *esi, esi, eflags)
        
        if (o_1)
            goto label_438de9
        
        uint16_t* esi_1 = __outsd(arg2.w, *arg5, arg5, eflags)
        void* temp6_1 = arg2
        arg2 += 1
        arg5 = __outsd(arg2.w, *esi_1, esi_1, eflags)
        void* eax_2
        
        if (temp6_1 != 0xffffffff)
            arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
            int16_t temp0_3
            temp0_3, arg6 = __insd(edi_1, arg2.w, eflags)
            *arg6 = temp0_3
        label_438d9c:
            eax_2 = arg1 | 0x6f42616d
            
            if ((arg1 | 0x6f42616d) == 0)
                goto label_438e17
            
            uint16_t* esi_2 = __outsd(arg2.w, *arg5, arg5, eflags)
            int16_t* edi_2
            int16_t temp0_4
            temp0_4, edi_2 = __insd(arg6, arg2.w, eflags)
            *edi_2 = temp0_4
            *(esp - 4) = esp
            uint16_t* esi_3 = __outsd(arg2.w, *esi_2, esi_2, eflags)
            *(esp - 8) = esp - 4
            void* esp_4 = esp - 8
            __outsd(arg2.w, *esi_3, esi_3, eflags)
            int16_t* edi_3
            int16_t temp0_5
            temp0_5, edi_3 = __insd(edi_2, arg2.w, eflags)
            *edi_3 = temp0_5
            *esp_4
            int32_t esi_5 = *(esp_4 + 4)
            arg4 = *(esp_4 + 8)
            ebx = *(esp_4 + 0x10)
            arg2 = *(esp_4 + 0x14)
            arg3 = *(esp_4 + 0x18)
            *(esp_4 + 0x1c)
            esp_4 += 0x20
            uint16_t* esi_7 = __outsd(arg2.w, *(esi_5 - 1), esi_5 - 1, eflags)
            int32_t esi_4 = __outsb(arg2.w, *esi_7, esi_7, eflags)
            arg1 = 0x600438d
            int16_t cs
            *(esp_4 - 4) = zx.d(cs)
            *(esp_4 - 8) = esp_4 - 4
            esp = esp_4 - 8
            uint16_t* gsbase
            arg5 = __outsb(arg2.w, *(gsbase + esi_4), esi_4, eflags)
            
            if (arg4 != 1)
                *0x600438d
                eax.b = __in_al_dx(arg2.w, eflags)
                goto label_438e05
            
            arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
            void* ebp_2 = *(arg4 + 0x60) * 0x6e6f6974
            *0x600431a += arg2
            ebx += 1
            *(ebp_2 - 0x71e3ffc0) += arg3.b
            goto label_438dd2
        
        eax_1 = &arg1[1]
        *(eax_1 + arg5 + 0x40) += eax_1:1.b
        *(eax_1 + 0x30) += ebx:1.b
    label_438e16:
        eax_2 = eax_1 + 1
    label_438e17:
        *eax_2 += arg3:1.b
        *ebx
        *(arg3 + (eax_2 << 1)) += arg3.b
        *(eax_2 + 0x1c004160) += eax_2:1.b
        eax_1 = eax_2 | *arg3
        ebx.b += arg2.b
        ebx += 1
        *(&ebx[arg2 * 4] + 0x61840043) += ebx.b
        *(arg2 + 0x41) += ebx:1.b
        *(esp + 0x61940041) += (arg3 + 1):1.b
        *(arg3 + 0x64b40043) += (arg3 + 2).b
    *(&arg5[ebx * 4] - 0x2d17ffbd) += arg2:1.b
    eax_1.b += eax_1:1.b
    undefined
}
