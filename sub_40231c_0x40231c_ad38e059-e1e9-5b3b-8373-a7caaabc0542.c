// ============================================================
// 函数名称: sub_40231c
// 虚拟地址: 0x40231c
// WARP GUID: ad38e059-e1e9-5b3b-8373-a7caaabc0542
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: LeaveCriticalSection, EnterCriticalSection
// [内部子函数调用]: sub_401eb4, sub_4038c8, sub_401ac0, sub_401f3c, sub_401c64
// [被调用的父级函数]: sub_401d28, sub_402690
// ============================================================

int32_t __convention("regparm")sub_40231c(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* ebp = &__saved_ebp
    data_531434 = 0
    char eax
    
    if (data_531430 == 0)
        eax, ebp = sub_401ac0()
    
    if (data_531430 != 0 || eax != 0)
        int32_t* var_18_1 = ebp
        int32_t (* var_1c_1)(void* arg1, void* arg2) = j_sub_4037f0
        TEB* fsbase
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        
        if (data_531049 != 0)
            EnterCriticalSection(&data_531438)
        
        int32_t* esi_2 = arg1 - 4
        int32_t ebx_1 = *esi_2
        
        if ((ebx_1.b & 2) == 0)
            data_531434 = 9
        label_40248a:
            ebp[-1] = data_531434
            fsbase->NtTib.ExceptionList = ExceptionList
            int32_t var_18_2 = 0x4024b5
            
            if (data_531049 == 0)
                return 0
            
            return LeaveCriticalSection(&data_531438)
        
        data_531424 -= 1
        data_531428 -= (ebx_1 & 0x7ffffffc) - 4
        
        if ((ebx_1.b & 1) == 0)
            goto label_4023f0
        
        int32_t edx_1 = *(esi_2 - 4)
        
        if (edx_1 s< 0xc || (edx_1 & 0x80000003) != 0)
            data_531434 = 0xa
            goto label_40248a
        
        void* eax_7 = esi_2 - edx_1
        
        if (edx_1 != *(eax_7 + 8))
            data_531434 = 0xa
            goto label_40248a
        
        ebx_1 += edx_1
        esi_2 = eax_7
        sub_401c64(eax_7)
    label_4023f0:
        void* ebx_2 = ebx_1 & 0x7ffffffc
        void* eax_9 = esi_2 + ebx_2
        
        if (eax_9 != data_53148c)
            int32_t edx_2 = *eax_9
            
            if ((edx_2.b & 2) == 0)
                if (*(eax_9 + 4) == 0 || *eax_9 == 0 || *(eax_9 + 8) s< 0xc)
                    data_531434 = 0xb
                else
                    ebx_2 += *(eax_9 + 8)
                    sub_401c64(eax_9)
                    sub_401eb4(esi_2, ebx_2)
            else if ((edx_2 & 0x7ffffffc) s>= 4)
                *eax_9 |= 1
                sub_401eb4(esi_2, ebx_2)
            else
                data_531434 = 0xb
            
            goto label_40248a
        
        data_53148c -= ebx_2
        data_531488 += ebx_2
        
        if (data_531488 s> 0x3c00)
            sub_401f3c()
        
        ebp[-1] = 0
        sub_4038c8(ExceptionList, var_1c_1)
    else
        data_531434 = 8
        ebp[-1] = 8
    
    return ebp[-1]
}
