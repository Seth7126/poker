// ============================================================
// 函数名称: sub_4a8f18
// 虚拟地址: 0x4a8f18
// WARP GUID: 6edd2565-61d4-5cb6-9869-8013ee58ea7f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_4994c8, sub_415cb4, sub_4030d0, sub_49d858, sub_404078, sub_49e5d4, sub_4a3090, sub_4a30d8, sub_415cac, sub_405ae8, sub_415c94, sub_415b58, sub_40b4b0, sub_403010
// [被调用的父级函数]: sub_4a90cc
// ============================================================

int32_t __convention("regparm")sub_4a8f18(uint32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t edi
    int32_t var_18 = edi
    char* var_c = nullptr
    uint32_t esi_1 = arg1
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    ebx.b = esi_1 == 0xfffffffe
    int32_t ecx
    ecx.b = 1
    int32_t* eax = sub_415b58(sub_4a8ea2+0x2a, 1, ecx)
    int32_t* var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    eax[0xc] = *(*(arg2 - 4) + 0x68)
    sub_415c94(eax)
    uint32_t edi_1
    
    if (sub_4a30d8() == 0)
        edi_1 = 0x7d
    else
        edi_1 = sub_49d858(*(*data_530a6c + 0x28), 0x7d)
    
    if (ebx.b != 0)
        esi_1 = edi_1 + 1
        
        if (add_overflow(edi_1, 1))
            sub_403010()
            noreturn
    
    while (edi_1 s< esi_1)
        sub_49e5d4(edi_1)
        uint32_t temp1_1 = esi_1
        esi_1 -= edi_1
        
        if (add_overflow(temp1_1, neg.d(edi_1)))
            sub_403010()
            noreturn
        
        if (ebx.b != 0)
            esi_1 = edi_1 + 1
            
            if (add_overflow(edi_1, 1))
                sub_403010()
                noreturn
        
        sub_4a3090(0, 1)
        
        if (eax[3].b != 0)
            esi_1 = 0
            break
    
    sub_49e5d4(esi_1)
    
    if (eax[3].b == 0)
        sub_415cac(eax)
        (*(**(arg2 - 4) + 0x40))()
        sub_415cb4(eax)
        sub_405ae8(data_530590, &var_c)
        int32_t edx_5
        edx_5.b = 1
        sub_40b4b0(sub_498c80+0x48, edx_5, var_c)
        sub_403828()
        noreturn
    
    if (sub_404078(eax[0xd]) s<= 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        int32_t* (__stdcall* var_28_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, 
            int32_t arg5, int32_t arg6, int32_t arg7) = sub_4a90a7
        return sub_4030d0(eax)
    
    int32_t ebx_1 = eax[0xe]
    int32_t edx_2
    
    if (ebx_1 == 0)
        edx_2.b = 1
        sub_40b4b0(sub_498c80+0xa8, edx_2, eax[0xd])
        sub_403828()
        noreturn
    
    edx_2.b = 1
    sub_4994c8(ebx_1, edx_2, sub_498fba+0x4b2, eax[0xd])
    sub_403828()
    noreturn
}
