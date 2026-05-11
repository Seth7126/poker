// ============================================================
// 函数名称: sub_469d58
// 虚拟地址: 0x469d58
// WARP GUID: f88eed4c-ef43-5696-8692-0f982ebb552a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_403e90, sub_469b8c, sub_40401c, sub_402bdc, sub_403df8, sub_403010
// [被调用的父级函数]: sub_476d24, sub_47a2ac, sub_484e24, sub_47a46c, sub_47b5b8, sub_46f000, sub_47a5fc, sub_488509, sub_47a8a3, sub_478234, sub_47b650
// ============================================================

void** __convention("regparm")sub_469d58(void* arg1, char* arg2, char arg3, char* arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_120 = ebx
    int32_t esi
    int32_t var_124 = esi
    int32_t edi
    int32_t var_128 = edi
    void* var_18 = nullptr
    int32_t eax = arg7
    int32_t* var_12c = &var_4
    int32_t (* var_130)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool edx = eax s>= 0x3e8
    
    if (edx != 0)
        int32_t temp0_1 = eax
        eax -= 0x3e8
        
        if (add_overflow(temp0_1, 0xfffffc18))
            sub_403010()
            noreturn
    
    bool o_2 = unimplemented  {imul ecx, eax, 0x1038}
    
    if (o_2)
        sub_403010()
        noreturn
    
    bool o_3 = unimplemented  {imul ecx, esi, 0x23}
    
    if (o_3)
        sub_403010()
        noreturn
    
    int32_t ecx_2
    ecx_2.b = *(*(arg1 + 0xab0) + eax * 0x81c0 + arg6 * 0x118 - 0x16)
    bool o_4 = unimplemented  {imul ecx, eax, 0x1038}
    
    if (o_4)
        sub_403010()
        noreturn
    
    bool o_5 = unimplemented  {imul ecx, esi, 0x23}
    
    if (o_5)
        sub_403010()
        noreturn
    
    int32_t ecx_6 = *(*(arg1 + 0xab0) + eax * 0x81c0 + arg6 * 0x118 - 0x1c)
    int32_t edi_5
    
    edi_5 = edx == 0 ? 0 : 1
    
    bool o_6 = unimplemented  {imul edx, eax, 0x1038}
    
    if (o_6)
        sub_403010()
        noreturn
    
    bool o_7 = unimplemented  {imul edx, esi, 0x23}
    
    if (o_7)
        sub_403010()
        noreturn
    
    int32_t edx_3
    edx_3.b = *(*(arg1 + 0xab0) + eax * 0x81c0 + arg6 * 0x118 - 0xf8)
    char temp1 = edx_3.b
    edx_3.b -= 0xd
    char temp3_1
    
    if (temp1 != 0xd)
        edx_3.b -= 2
        temp3_1 = edx_3.b
        edx_3.b -= 3
    
    int32_t var_14
    
    if (temp1 == 0xd || temp3_1 u< 3 || arg5 != 0)
        if (add_overflow(arg5, edi_5))
            sub_403010()
            noreturn
        
        var_14 = arg5 + edi_5
        
        if (ecx_2.b != 0)
            int32_t edx_6 = arg5 * 2
            bool o_9 = unimplemented  {imul edx, dword [ebp+0xc], 0x2}
            
            if (o_9)
                sub_403010()
                noreturn
            
            if (add_overflow(edi_5, edx_6))
                sub_403010()
                noreturn
            
            var_14 = edi_5 + edx_6
    else
        var_14 = edi_5
    
    char var_11c[0x103]
    
    if (ecx_6 s< 0 || *(arg1 + 0x314) s<= ecx_6 || arg5 s< 0 || var_14 s< 0)
        sub_403e90(&var_18, "_ovc-stringcontainer error: invalid conpointer")
    else
        bool o_11 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_11)
            sub_403010()
            noreturn
        
        bool o_12 = unimplemented  {imul edx, esi, 0x23}
        
        if (o_12)
            sub_403010()
            noreturn
        
        if (sx.d(*(*(arg1 + 0xab0) + eax * 0x81c0 + arg6 * 0x118 - 0x18)) s< var_14)
            sub_403e90(&var_18, "_ovc-stringcontainer error: invalid conpointer")
        else
            if (add_overflow(ecx_6, neg.d(var_14)))
                sub_403010()
                noreturn
            
            sub_40401c(sub_469b8c(arg1, ecx_6 - var_14, &var_11c), &var_11c)
    
    sub_404054(arg4, var_18, 0xff)
    sub_404054(&var_11c, var_18, 0xff)
    sub_402bdc(arg2, &var_11c, arg3)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_12c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_469f38
    void** result = &var_18
    sub_403df8(result)
    return result
}
