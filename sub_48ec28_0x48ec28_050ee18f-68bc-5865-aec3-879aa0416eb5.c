// ============================================================
// 函数名称: sub_48ec28
// 虚拟地址: 0x48ec28
// WARP GUID: 050ee18f-68bc-5865-aec3-879aa0416eb5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4ec7d7
// ============================================================

void* __convention("regparm")sub_48ec28(char* arg1, char* arg2, int32_t arg3, uint32_t* arg4 @ ebp, uint16_t* arg5 @ esi, int32_t arg6 @ edi, uint32_t* arg7, char* arg8, char* arg9, int32_t arg10, char* arg11)
{
    // 第一条实际指令: int16_t cs
    int16_t cs
    uint32_t var_4 = zx.d(cs)
    uint32_t* esp = &var_4
    int32_t temp1 = *(arg4 + (arg1 << 1) + 0x6e) | arg2
    *(arg4 + (arg1 << 1) + 0x6e) = temp1
    int32_t eflags
    char* entry_ebx
    uint32_t edi
    
    if (temp1 u<= 0)
        int16_t es
        *arg1 = es
        entry_ebx[0x48ec88c0] += arg3.b
        *arg5 += arg3.b
        char temp2_1 = arg2.b
        arg2.b |= arg1[(arg3 << 1) + 0x65]
        bool s_1 = (temp2_1 | arg1[(arg3 << 1) + 0x65]) s< 0
        uint8_t temp0_2
        temp0_2, edi = __insb(arg6, arg2.w, eflags)
        *edi = temp0_2
        __outsb(arg2.w, *arg5, arg5, eflags)
        
        if (not(s_1))
        label_48ec95:
            *arg1 += arg1.b
            *arg2 += arg1.b
            *arg1 += arg1.b
            *(arg1 + arg2 + 0x40) += entry_ebx:1.b
            *arg1 += arg1.b
            esp = 0x4004010
    else
        edi = var_4
        arg4 = arg7
        entry_ebx = arg8
        arg2 = arg9
        arg1 = arg11
        void arg_1c
        esp = &arg_1c
        
        if (temp1 u>= 0)
            int16_t* edi_1
            int16_t temp0_1
            temp0_1, edi_1 = __insd(edi, arg2.w, eflags)
            *edi_1 = temp0_1
            breakpoint
        
        if (temp1 s>= 0)
            goto label_48ec95
    
    *arg1 += arg1.b
    arg1[0xe0048ec] += arg2:1.b
    arg1.b |= 0x54
    void* result = arg1 - 1
    uint8_t* edi_2
    uint8_t temp0_3
    temp0_3, edi_2 = __insb(edi, arg2.w, eflags)
    *edi_2 = temp0_3
    TEB* fsbase
    
    if (not(add_overflow(arg1, 0xffffffff)))
        *(esp - 4) = 0x65747061
        void* esp_1 = esp - 4
        
        if (arg1.b u>= 0)
            *result += result.b
            *entry_ebx += result.b
            *result += result.b
            *(result + arg2 + 0x40040) += entry_ebx:1.b
            *result += result.b
            esp_1 = 0x8004010
        
        *result += result.b
        *(result + arg2 + 0x100040) += entry_ebx:1.b
        *result += result.b
        *(esp_1 - 4) = arg4
        esp = esp_1 - 4
        *(esp - 4) = esp
        *(esp - 8) = j_sub_4037f0
        *(esp - 0xc) = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = esp - 0xc
        data_5320e0 += 1
        result = nullptr
        arg2 = *(esp - 0xc)
        *(esp - 8)
        esp -= 4
    
    *esp
    *(fsbase + result) = arg2
    *esp = sub_48ed0c
    return result
}
