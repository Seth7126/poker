// ============================================================
// 函数名称: sub_4b2693
// 虚拟地址: 0x4b2693
// WARP GUID: 9218aedc-9688-558d-ab8d-52be43a33ae9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: InitCommonControls
// [内部子函数调用]: sub_4033d0, sub_42d8f4, sub_42afdc, sub_431afc, sub_42affc, sub_403428
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_4b2693(char* arg1, void* arg2, int32_t* arg3, uint16_t* arg4 @ esi, char* arg5 @ edi, int80_t arg6 @ st0, int32_t arg7, void* arg8, void* arg9, int32_t* arg10, char* arg11)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg3 += 1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 = *arg1
    char temp2 = arg1[0x4f0b0032]
    arg1[0x4f0b0032] += arg1.b
    bool c = temp2 + arg1.b u< temp2
    bool z = temp2 == neg.b(arg1.b)
    int32_t eflags
    uint16_t* esi = __outsb(arg2.w, *arg4, arg4, eflags)
    void* entry_ebx
    void* var_4 = entry_ebx
    void* var_7
    void* esp_1 = &var_7:3
    
    if (z)
        goto label_4b270c
    
    char* eax_4
    void* ebx_1
    bool cond:1_1
    TEB* fsbase
    
    if (c)
        if (not(c))
            *(entry_ebx + 0x33f08bda) -= 1
            *(entry_ebx - 0x4ea6173a) = ror.b(*(entry_ebx - 0x4ea6173a), arg3.b)
        label_4b27a2:
            sub_42afdc(esi, 0x96)
            sub_42affc(esi, 0x2d)
            sub_431afc(esi, 1)
            *(esi + 0x204) = 0
            *(esi + 0x208) = 0xa
            *(esi + 0x1f4) = 1
            *(esi + 0x1f8) = 2
            *(esi + 0x20c) = 1
            *(esi + 0x1fc) = 0x14
            *(esi + 0x1f1) = 0
            esi[0xf9].b = 1
            esi[0xf8].b = 0
            *(esi + 0x40) &= 0xffffff7f
            esi[0x100].b = 1
            
            if (entry_ebx.b != 0)
                sub_403428(esi)
                fsbase->NtTib.ExceptionList = *esp_1
                esp_1 += 0x10
            
            *esp_1
            *(esp_1 + 4)
            return esi
        
        uint16_t* esi_1 = __outsd(arg2.w, *esi, esi, eflags)
        void* esi_2 = __outsb(arg2.w, *esi_1, esi_1, eflags)
        cond:1_1 = esi_2 == 0xffffffff
        esi = __outsd(arg2.w, *(esi_2 + 1), esi_2 + 1, eflags)
        
        if (c)
        label_4b2796:
            sub_42d8f4(arg1, arg2)
            goto label_4b27a2
        
        ebx_1 = arg8
        arg2 = arg9
        arg3 = arg10
        eax_4 = arg11
    else
        if (c)
            *(arg5 + 0x6e)
            return sub_4b2718(arg1, arg2, arg3, esi) __tailcall
        
        int32_t eax = entry_ebx + esi
        *arg5 += eax:1.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += arg3.b
        char temp0_1
        temp0_1, eflags = __daa(eax.b, eflags)
        eax.b = temp0_1
        ebx_1 = entry_ebx - 2
        *(eax * 2) += eax.b
        *eax += eax.b
        arg6 f- fconvert.t(*eax)
        char* eax_1
        eax_1:1.b = (eax + 1):1.b + arg2:1.b
        eax_1.b ^= *eax_1
        *ebx_1 += arg2:1.b
        *(ebx_1 + esi) += (&eax_1[1]).b
        eax_1[2] += arg3.b
        eax_4 = &eax_1[2] ^ *(eax_1 + 2)
        eax_4.b ^= *eax_4
        char temp4_1 = *(fsbase + eax_4) ^ eax_4.b
        *(fsbase + eax_4) = temp4_1
        cond:1_1 = temp4_1 == 0
        
        if (temp4_1 s>= 0)
            arg1.b = (&eax_4[1]).b * 2
            *arg1 ^= arg1.b
            arg1.b &= 0x2e
            *arg1 += (ebx_1 - 1):1.b
            char temp5_1 = *(ebx_1 - 2)
            *(ebx_1 - 2) += arg3.b
            c = temp5_1 + arg3.b u< temp5_1
            var_7 = &var_4:1
            esp_1 = &var_7
            entry_ebx = ebx_1 - 1
            z = ebx_1 == 1
            esi = __outsd(arg2.w, *esi, esi, eflags)
        label_4b270c:
            esi = __outsb(arg2.w, *esi, esi, eflags)
            
            if (z || c)
                InitCommonControls()
                *esp_1
                *(esp_1 + 4)
                *(esp_1 + 8)
                return entry_ebx
            
            if (not(c))
                *(arg5 + 0x6e)
                return sub_4b2718(arg1, arg2, arg3, esi) __tailcall
            
            if (not(z))
                esp_1 -= 0x10
                arg1 = sub_4033d0(arg3, arg2)
            
            entry_ebx = arg2
            esi = arg1
            arg2 = nullptr
            arg1 = esi
            goto label_4b2796
    
    if (not(cond:1_1))
        *eax_4 += eax_4.b
        *arg3 += eax_4.b
        *eax_4 += eax_4.b
        *(eax_4 + arg2 + 0x40040) += ebx_1:1.b
        *eax_4 += eax_4.b
        undefined
    
    *eax_4 += eax_4.b
    eax_4[0xffffffff] += arg2.b
    void* eax_6 = &eax_4[*eax_4]
    char temp7 = *eax_6
    *eax_6 += eax_6.b
    
    if (temp7 + eax_6.b u< temp7)
        jump(0x4b27ba)
    
    jump(0x4b2746)
}
