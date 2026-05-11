// ============================================================
// 函数名称: sub_46de48
// 虚拟地址: 0x46de48
// WARP GUID: 20012127-0749-5edf-80e6-9f4c80454385
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4471a4, sub_42afdc, sub_46dce0, sub_42afb8, sub_42affc, sub_447198, sub_40401c, sub_403010, sub_42af98, sub_46e24c, sub_403e1c, sub_408e80
// [被调用的父级函数]: sub_47d208, sub_478234
// ============================================================

int32_t __convention("regparm")sub_46de48(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    int32_t var_c = 0
    int32_t var_10 = 0
    int32_t var_14 = 0
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ebx_2
    void* ebp_1
    ebx_2, ebp_1 = sub_46dce0(arg1)
    ebx_2[0x434]
    bool o = unimplemented  {imul edx, dword [esi+0x3e8], 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    ebx_2[0x449]
    int32_t ecx_1 = ebx_2[0x449] * 0x23
    bool o_1 = unimplemented  {imul ecx, dword [esi+0x43c], 0x23}
    
    if (o_1)
        sub_403010()
        noreturn
    
    sub_40401c(ecx_1, ebx_2[0x2ac] + ebx_2[0x434] * 0x81c0 + (ecx_1 << 3) - 0xf0)
    ebx_2[0x38b] = sub_408e80(*(ebp_1 - 4))
    ebx_2[0x434]
    bool o_2 = unimplemented  {imul edx, dword [esi+0x3e8], 0x1038}
    
    if (o_2)
        sub_403010()
        noreturn
    
    ebx_2[0x448]
    int32_t ecx_3 = ebx_2[0x448] * 0x23
    bool o_3 = unimplemented  {imul ecx, dword [esi+0x438], 0x23}
    
    if (o_3)
        sub_403010()
        noreturn
    
    sub_40401c(ecx_3, ebx_2[0x2ac] + ebx_2[0x434] * 0x81c0 + (ecx_3 << 3) - 0xf0)
    ebx_2[0x38c] = sub_408e80(*(ebp_1 - 8))
    ebx_2[0x434]
    bool o_4 = unimplemented  {imul edx, dword [esi+0x3e8], 0x1038}
    
    if (o_4)
        sub_403010()
        noreturn
    
    ebx_2[0x44a]
    int32_t ecx_5 = ebx_2[0x44a] * 0x23
    bool o_5 = unimplemented  {imul ecx, dword [esi+0x440], 0x23}
    
    if (o_5)
        sub_403010()
        noreturn
    
    sub_40401c(ecx_5, ebx_2[0x2ac] + ebx_2[0x434] * 0x81c0 + (ecx_5 << 3) - 0xf0)
    ebx_2[0x38d] = sub_408e80(*(ebp_1 - 0xc))
    ebx_2[0x434]
    bool o_6 = unimplemented  {imul edx, dword [esi+0x3e8], 0x1038}
    
    if (o_6)
        sub_403010()
        noreturn
    
    ebx_2[0x44b]
    int32_t ecx_7 = ebx_2[0x44b] * 0x23
    bool o_7 = unimplemented  {imul ecx, dword [esi+0x444], 0x23}
    
    if (o_7)
        sub_403010()
        noreturn
    
    sub_40401c(ecx_7, ebx_2[0x2ac] + ebx_2[0x434] * 0x81c0 + (ecx_7 << 3) - 0xf0)
    ebx_2[0x38e] = sub_408e80(*(ebp_1 - 0x10))
    
    if (ebx_2[0x38d] s< 0)
        ebx_2[0x38d] = 0
    
    if (ebx_2[0x38e] s< 0)
        ebx_2[0x38e] = 0
    
    sub_42afdc(ebx_2, ebx_2[0x38b])
    sub_42affc(ebx_2, ebx_2[0x38c])
    *data_530a18
    int32_t eax_17 = sub_4471a4()
    int32_t edx_14 = ebx_2[0xe]
    
    if (add_overflow(edx_14, ebx_2[0x38d]))
        sub_403010()
        noreturn
    
    if (eax_17 s< edx_14 + ebx_2[0x38d])
        *data_530a18
        int32_t eax_20 = sub_4471a4()
        
        if (add_overflow(eax_20, neg.d(ebx_2[0xe])))
            sub_403010()
            noreturn
        
        ebx_2[0x38d] = eax_20 - ebx_2[0xe]
    
    *data_530a18
    int32_t eax_24 = sub_447198()
    int32_t edx_16 = ebx_2[0xf]
    
    if (add_overflow(edx_16, ebx_2[0x38e]))
        sub_403010()
        noreturn
    
    if (eax_24 s< edx_16 + ebx_2[0x38e])
        *data_530a18
        int32_t eax_27 = sub_447198()
        
        if (add_overflow(eax_27, neg.d(ebx_2[0xf])))
            sub_403010()
            noreturn
        
        ebx_2[0x38e] = eax_27 - ebx_2[0xf]
    
    ebx_2[0x38d]
    sub_42af98(ebx_2)
    ebx_2[0x38e]
    sub_42afb8(ebx_2)
    *data_530a18
    int32_t eax_33
    int32_t edx_20
    eax_33, edx_20 = sub_447198()
    
    if (eax_33 s<= ebx_2[0xf])
        *data_530a18
        sub_42affc(ebx_2, sub_447198())
    
    edx_20.b = 1
    int32_t edi
    sub_46e24c(ebx_2, &ebx_2[0x33a], edi)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_46e0a3
    return sub_403e1c(ebp_1 - 0x10, 4)
}
