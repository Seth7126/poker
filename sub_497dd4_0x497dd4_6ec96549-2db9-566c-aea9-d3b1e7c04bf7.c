// ============================================================
// 函数名称: sub_497dd4
// 虚拟地址: 0x497dd4
// WARP GUID: 6ec96549-2db9-566c-aea9-d3b1e7c04bf7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_49732c, sub_4974fc, sub_44921c, sub_4973e0, sub_495f94, sub_4953dc, sub_40401c, sub_4973d8, sub_4953e8, sub_4972ac, sub_403df8, sub_497bcc
// [被调用的父级函数]: sub_4986c7
// ============================================================

void* __convention("regparm")sub_497dd4(void* arg1, int32_t arg2, char* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_18c = ebx
    int32_t esi
    int32_t var_190 = esi
    int32_t edi
    int32_t var_194 = edi
    void* var_188 = nullptr
    int32_t ecx
    ecx.b = *arg3
    char var_184[0x84]
    __builtin_memcpy(&var_184, arg3, ecx + 1)
    void var_84
    __builtin_memcpy(&var_84, arg2, 0x7c)
    int32_t* var_198 = &var_4
    int32_t (* var_19c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(arg1 + 0x3398) = 0
    *(arg1 + 0x339c) = 0
    *(arg1 + 0x339d) = 0
    *(arg1 + 0x3394) = 0
    *(arg1 + 0x31f8) = 0
    *data_530660
    arg2.b = 1
    int32_t* eax
    int32_t ecx_4
    eax, ecx_4 = sub_4974fc(sub_4947f8+0x48, arg2)
    *(arg1 + 4) = eax
    eax[0x11] = arg1
    eax[0x10] = sub_497bb4
    eax[0x15] = arg1
    eax[0x14] = sub_497bc8
    eax[0x1b] = arg1
    eax[0x1a] = 0x497d20
    eax[0x1f] = arg1
    eax[0x1e] = 0x497dbc
    sub_49732c(eax, arg5)
    void* ecx_5 = sub_40401c(ecx_4, &var_184)
    void* ebx_2
    void* ebp_1
    ebx_2, ebp_1 = sub_4972ac(*(arg1 + 4), var_188, ecx_5)
    *(ebx_2 + 4)
    sub_4973d8()
    *(ebx_2 + 0x3398) = 1
    uint32_t esi_4 = GetTickCount()
    
    while (true)
        sub_44921c(*data_530660)
        
        if (*(ebx_2 + 0x3398) == 2)
            sub_4953dc(*(*(ebx_2 + 4) + 0x80))
            ebp_1, esi_4 = sub_495f94(*(*(ebx_2 + 4) + 0x80), ebp_1 - 0x80, 0x7c)
            sub_4953e8(*(*(ebx_2 + 4) + 0x80))
            *(ebx_2 + 0x3398) = 3
        
        if (*(ebx_2 + 0x339c) != 0)
            break
        
        if (*(ebx_2 + 0x339d) != 0)
            break
        
        uint32_t eax_13 = GetTickCount()
        int32_t eax_15
        int32_t edx_4
        edx_4:eax_15 = sx.q(esi_4)
        int32_t var_1a4_1 = sbb.d(0, edx_4, eax_13 u< eax_15)
        int32_t eax_18
        int32_t edx_6
        edx_6:eax_18 = sx.q(arg4)
        
        if (edx_6 != var_1a4_1)
            if (edx_6 s< var_1a4_1)
                break
        else
            if (eax_18 u< eax_13 - eax_15)
                break
    
    *(ebx_2 + 4)
    sub_4973e0()
    char eax_22
    
    if (*(ebx_2 + 0x339c) == 0 || *(ebx_2 + 0x339d) != 0)
        eax_22 = 0
    else
        eax_22 = 1
    
    *(ebp_1 - 1) = eax_22
    
    if (*(ebp_1 - 1) != 0)
        ebp_1 = sub_497bcc(ebx_2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_198_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_497fa7
    sub_403df8(ebp_1 - 0x184)
    return ebp_1 - 0x184
}
