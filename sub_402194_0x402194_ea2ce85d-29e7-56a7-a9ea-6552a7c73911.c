// ============================================================
// 函数名称: sub_402194
// 虚拟地址: 0x402194
// WARP GUID: ea2ce85d-29e7-56a7-a9ea-6552a7c73911
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: LeaveCriticalSection, EnterCriticalSection
// [内部子函数调用]: sub_4020a0, sub_4038c8, sub_401ac0
// [被调用的父级函数]: sub_402690
// ============================================================

int32_t __convention("regparm")sub_402194(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* ebp = &__saved_ebp
    char eax
    
    if (data_531430 == 0)
        eax, ebp = sub_401ac0()
    
    if (data_531430 != 0 || eax != 0)
        int32_t* var_1c_1 = ebp
        int32_t (* var_20_1)(void* arg1, void* arg2) = j_sub_4037f0
        TEB* fsbase
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        
        if (data_531049 != 0)
            EnterCriticalSection(&data_531438)
        
        int32_t ebx_2 = (arg1 + 7) & 0xfffffffc
        
        if (ebx_2 s< 0xc)
            ebx_2 = 0xc
        
        int32_t* edx_2
        
        if (ebx_2 s<= 0x1000)
            int32_t eax_1 = ebx_2
            
            if (eax_1 s< 0)
                eax_1 += 3
            
            edx_2 = *(data_531490 + (eax_1 s>> 2 << 2) - 0xc)
        
        if (ebx_2 s> 0x1000 || edx_2 == 0)
            if (ebx_2 s> data_531488)
                ebp[-1] = sub_4020a0(ebx_2)
                fsbase->NtTib.ExceptionList = ExceptionList
                int32_t var_1c_2 = 0x40230f
                
                if (data_531049 == 0)
                    return 0
                
                return LeaveCriticalSection(&data_531438)
            
            data_531488 -= ebx_2
            
            if (data_531488 s< 0xc)
                ebx_2 += data_531488
                data_531488 = 0
            
            int32_t* eax_10 = data_53148c
            data_53148c += ebx_2
            *eax_10 = ebx_2 | 2
            ebp[-1] = &eax_10[1]
            data_531424 += 1
            data_531428 += ebx_2 - 4
            sub_4038c8(ExceptionList, var_20_1)
        else
            int32_t* eax_4 = edx_2 + ebx_2
            *eax_4 &= 0xfffffffe
            int32_t* eax_5 = edx_2[1]
            
            if (edx_2 != eax_5)
                int32_t ecx_2 = ebx_2
                
                if (ecx_2 s< 0)
                    ecx_2 += 3
                
                *(data_531490 + (ecx_2 s>> 2 << 2) - 0xc) = eax_5
                ebp[-2] = *edx_2
                *(ebp[-2] + 4) = eax_5
                *eax_5 = ebp[-2]
            else
                int32_t eax_6 = ebx_2
                
                if (eax_6 s< 0)
                    eax_6 += 3
                
                *(data_531490 + (eax_6 s>> 2 << 2) - 0xc) = 0
            
            *edx_2 = edx_2[2] | 2
            ebp[-1] = &edx_2[1]
            data_531424 += 1
            data_531428 += ebx_2 - 4
            sub_4038c8(ExceptionList, var_20_1)
    else
        ebp[-1] = 0
    
    return ebp[-1]
}
