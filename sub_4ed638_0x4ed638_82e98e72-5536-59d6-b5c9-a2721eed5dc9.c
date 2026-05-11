// ============================================================
// 函数名称: sub_4ed638
// 虚拟地址: 0x4ed638
// WARP GUID: 82e98e72-5536-59d6-b5c9-a2721eed5dc9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_404078, sub_408e80, sub_516e74, sub_403df8, sub_404280, sub_403010
// [被调用的父级函数]: sub_4ed7a0
// ============================================================

void** __convention("regparm")sub_4ed638(int32_t arg1, void* arg2, void* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    void* var_c = arg2
    sub_40422c(var_c)
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ebx_1 = 1
    int32_t esi_1 = 1
    
    while (true)
        int32_t eax_15 = sub_404078(var_c)
        
        if (add_overflow(eax_15, 0xfffffffe))
            sub_403010()
            noreturn
        
        if (ebx_1 s> eax_15 - 2)
            break
        
        sub_404280(1, ebx_1, var_c, arg3 - 4)
        char eax_6 = sub_408e80(*(arg3 - 4))
        bool o_1 = unimplemented  {imul edx, dword [ebp-0x4], 0x2345}
        
        if (o_1)
            sub_403010()
            noreturn
        
        bool o_2 = unimplemented  {imul ecx, esi, 0x35}
        
        if (o_2)
            sub_403010()
            noreturn
        
        *(data_5301b0 + arg1 * 0x8d14 + esi_1 * 0xd4 - 0x8de7) = eax_6
        
        if (add_overflow(ebx_1, 1))
            sub_403010()
            noreturn
        
        sub_404280(2, ebx_1 + 1, var_c, arg3 - 4)
        char eax_12 = sub_408e80(*(arg3 - 4))
        bool o_4 = unimplemented  {imul edx, dword [ebp-0x4], 0x2345}
        
        if (o_4)
            sub_403010()
            noreturn
        
        bool o_5 = unimplemented  {imul ecx, esi, 0x35}
        
        if (o_5)
            sub_403010()
            noreturn
        
        *(data_5301b0 + arg1 * 0x8d14 + esi_1 * 0xd4 - 0x8de8) = eax_12
        int32_t temp5_1 = ebx_1
        ebx_1 += 3
        
        if (add_overflow(temp5_1, 3))
            sub_403010()
            noreturn
        
        bool o_7 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
        
        if (o_7)
            sub_403010()
            noreturn
        
        *(data_5301b0 + arg1 * 0x8d14 - 0x39c) = esi_1
        int32_t temp7_1 = esi_1
        esi_1 += 1
        
        if (add_overflow(temp7_1, 1))
            sub_403010()
            noreturn
    
    bool o_10 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
    
    if (o_10)
        sub_403010()
        noreturn
    
    sub_516e74(data_5301b0 + arg1 * 0x8d14 - 0x8d14)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_1c_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_4ed795
    void** result = &var_c
    sub_403df8(result)
    return result
}
