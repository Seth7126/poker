// ============================================================
// 函数名称: sub_4779d4
// 虚拟地址: 0x4779d4
// WARP GUID: bf0eaee7-f8c0-5055-a68f-f1b24e2671a1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_47ab08, sub_4837ec, sub_404188, sub_40fa94, sub_47a82c, sub_403df8, sub_403010
// [被调用的父级函数]: sub_47c160, sub_476830
// ============================================================

void* __convention("regparm")sub_4779d4(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t edi
    int32_t var_20 = edi
    int32_t var_c = 0
    void* ebx_1 = arg1
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edx = arg2 * 0x64
    bool o = unimplemented  {imul edx, dword [ebp-0x4], 0x64}
    
    if (o)
        sub_403010()
        noreturn
    
    if (add_overflow(edx, arg3))
        sub_403010()
        noreturn
    
    void var_14
    sub_40fa94(0xfffffff3, edx + arg3, &var_14)
    void* ecx
    ecx.b = 0x38
    *(ebx_1 + 0x1d4)
    (*(ebx_1 + 0x1d0))(ebx_1 + 0xa96, &var_14)
    bool o_2 = unimplemented  {imul eax, eax, 0x1038}
    
    if (o_2)
        sub_403010()
        noreturn
    
    void* edi_1 = *(ebx_1 + 0xab0) + arg2 * 0x81c0
    
    if (arg3 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_3 = unimplemented  {imul eax, esi, 0x23}
    
    if (o_3)
        sub_403010()
        noreturn
    
    int32_t eax_4
    eax_4.b = *(edi_1 + arg3 * 0x118 - 0xf8)
    
    if (*(ebx_1 + 0xa95) != 0)
        if (arg3 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_4 = unimplemented  {imul edx, esi, 0x23}
        
        if (o_4)
            sub_403010()
            noreturn
        
        int32_t edx_4
        edx_4.b = *(edi_1 + arg3 * 0x118 - 0xf8)
        bool c_1 = edx_4.b u< 0x1f
        
        if (edx_4.b == 0x1f || c_1)
            c_1 = test_bit(0x2b791, edx_4 & 0x7f)
        
        if (c_1)
            if (arg3 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_5 = unimplemented  {imul edx, esi, 0x23}
            
            if (o_5)
                sub_403010()
                noreturn
            
            if (*(edi_1 + arg3 * 0x118 - 8) != 9 && *(edi_1 + 0x8132) == 0)
                *(ebx_1 + 0x9b4) = arg3
                *(ebx_1 + 0x9b8) = arg2
    
    if (eax_4.b == 0xe)
        if (arg3 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_6 = unimplemented  {imul edx, esi, 0x23}
        
        if (o_6)
            sub_403010()
            noreturn
        
        *(edi_1 + arg3 * 0x118 - 0x87) = 1
    
    if (eax_4.b == 0xa)
        if (arg3 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_7 = unimplemented  {imul eax, esi, 0x23}
        
        if (o_7)
            sub_403010()
            noreturn
        
        if (*(edi_1 + arg3 * 0x118 - 8) == 8)
            if (arg3 + 0x8000 u> 0xffff)
                sub_403008()
                noreturn
            
            *(edi_1 + 0x8136) = arg3.w
    
    if (*(ebx_1 + 0xcfa) != 0)
        var_c = 0
        ebp_1 = sub_47a82c(arg3, &var_c, var_c.b)
        int32_t temp3_1 = ebp_1[-2]
        
        if (temp3_1 != 0)
            sub_404188(ebp_1[-2], sub_477bff+5)
            
            if (temp3_1 != 0)
                var_c = ebp_1[-2]
                long double x87_r0
                ebx_1 = sub_47ab08(ebx_1, *(ebx_1 + 0x10dc), *(ebx_1 + 0x9e0), x87_r0, var_c)
                sub_4837ec(ebx_1, *(ebx_1 + 0x10dc), true)
                *(ebx_1 + 0x9e4) = ebp_1[-1]
                *(ebx_1 + 0x9e8) = arg3
                *(ebx_1 + 0x9ec) = 1
    
    if (*(ebx_1 + 0x962) != 0)
        ebp_1[-1]
        *(ebx_1 + 0x964)
        (*(ebx_1 + 0x960))(arg2)
    
    fsbase->NtTib.ExceptionList = arg2
    __return_addr = sub_477bea
    sub_403df8(&ebp_1[-2])
    return &ebp_1[-2]
}
