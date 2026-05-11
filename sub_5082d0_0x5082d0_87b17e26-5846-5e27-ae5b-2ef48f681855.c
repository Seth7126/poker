// ============================================================
// 函数名称: sub_5082d0
// 虚拟地址: 0x5082d0
// WARP GUID: 87b17e26-5846-5e27-ae5b-2ef48f681855
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_49732c, sub_4973e0, sub_40422c, sub_44921c, sub_4702a8, sub_403e4c, sub_4973d8, sub_4972ac, sub_403df8
// [被调用的父级函数]: sub_508730
// ============================================================

void* __convention("regparm")sub_5082d0(void* arg1, void* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t esi
    int32_t var_14 = esi
    int32_t edi
    int32_t var_18 = edi
    sub_40422c(arg2)
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    *(arg1 + 8) = 0
    *(arg1 + 9) = 0
    sub_403df8(arg3)
    uint32_t eax_2
    void* ecx
    eax_2, ecx = GetTickCount()
    int32_t* var_28 = &var_4
    int32_t (* var_2c)() = j_sub_40353c
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ebx_1
    void* ebp_1
    ebx_1, ebp_1 = sub_4972ac(*(arg1 + 4), arg2, ecx)
    sub_49732c(*(ebx_1 + 4), *(ebp_1 - 8))
    *(ebx_1 + 4)
    sub_4973d8()
    *(*data_530304 + 0x1335) = 1
    void* ebp_2
    
    do
        ebp_2 = sub_4702a8(*data_530304, 1)
        sub_44921c(*data_530660)
        int32_t var_20_1 = 0
        ExceptionList_1 = GetTickCount()
        int32_t eax_14
        int32_t edx_3
        edx_3:eax_14 = sx.q(eax_2)
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = ExceptionList_1
        ExceptionList_1 -= eax_14
        int32_t var_20_2 = sbb.d(var_20_1, edx_3, ExceptionList_2 u< eax_14)
        ExceptionList_1 = ExceptionList_1
        int32_t eax_17
        int32_t edx_5
        edx_5:eax_17 = sx.q(arg4)
        
        if (edx_5 != var_20_2)
            if (edx_5 s<= var_20_2)
                break
        else if (eax_17 u<= ExceptionList_1)
            break
        
        if (*(ebx_1 + 8) != 0)
            break
    while (*(ebx_1 + 9) == 0)
    
    *(*data_530304 + 0x1335) = 0
    
    if (*(ebx_1 + 8) != 0)
        sub_403e4c(*(ebp_2 + 8), *(ebx_1 + 0xc))
    
    *(ebx_1 + 4)
    sub_4973e0()
    fsbase->NtTib.ExceptionList = var_1c
    int32_t entry_ebx
    fsbase->NtTib.ExceptionList = entry_ebx
    int32_t (__stdcall* var_8_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_5083fe
    sub_403df8(ebp_2 - 4)
    return ebp_2 - 4
}
