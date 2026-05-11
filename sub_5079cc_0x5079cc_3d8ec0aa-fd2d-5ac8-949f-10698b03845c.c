// ============================================================
// 函数名称: sub_5079cc
// 虚拟地址: 0x5079cc
// WARP GUID: 3d8ec0aa-fd2d-5ac8-949f-10698b03845c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47ab08, sub_47a180, sub_47a1c0, sub_404138, sub_50d318, sub_408e1c, sub_46910c, sub_403df8, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_511fd8
// ============================================================

int32_t __convention("regparm")sub_5079cc(int32_t arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t var_1c
    __builtin_memset(&var_1c, 0, 0x18)
    int32_t ebx
    int32_t var_20 = ebx
    int32_t esi
    int32_t var_24 = esi
    int32_t edi
    int32_t var_28 = edi
    void* esi_1 = data_530304
    void* edi_1 = data_530438
    int32_t* var_2c = &var_4
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1 != 0xffffffff)
        ebx.b = 1
        int32_t var_14
        void* ebp_2
        void** esi_2
        ebp_2, esi_2 = sub_46910c(*esi_1, "f_gamestarts", &var_14)
        int32_t var_38_1 = *(ebp_2 - 0x10)
        sub_408e1c(*(ebp_2 - 4), ebp_2 - 0x14)
        int32_t var_3c_1 = *(ebp_2 - 0x14)
        ebp_1, esi_1 = sub_46910c(*esi_2, sub_507d3f+5, ebp_2 - 0x18)
        int32_t var_40_1 = ebp_1[-6]
        sub_404138(&ebp_1[-3], 3)
    else
        ebx = 0
        int32_t var_10
        sub_403df8(&var_10)
    
    sub_47a180(*data_530804, *edi_1, *esi_1, ebx.b ^ 1)
    sub_47a180(*data_5309e4, *edi_1, *esi_1, ebx.b ^ 1)
    
    if (ebx.b != 0)
        *edi_1
        bool o_1 = unimplemented  {imul eax, dword [edi], 0x1038}
        
        if (o_1)
            sub_403010()
            noreturn
        
        void* edx_6 = data_5309e4
        *edx_6
        bool o_2 = unimplemented  {imul edx, dword [edx], 0x23}
        
        if (o_2)
            sub_403010()
            noreturn
        
        int32_t eax_10
        eax_10.w = *(*(*esi_1 + 0xab0) + *edi_1 * 0x81c0 + *edx_6 * 0x118 - 0xa2)
        
        if (eax_10.w - 1 u< 2)
            *edi_1
            bool o_3 = unimplemented  {imul eax, dword [edi], 0x1038}
            
            if (o_3)
                sub_403010()
                noreturn
            
            void* edx_10 = data_5309e4
            *edx_10
            bool o_4 = unimplemented  {imul edx, dword [edx], 0x23}
            
            if (o_4)
                sub_403010()
                noreturn
            
            *(*(*esi_1 + 0xab0) + *edi_1 * 0x81c0 + *edx_10 * 0x118 - 0xa2) = 0
            *edi_1
            bool o_5 = unimplemented  {imul eax, dword [edi], 0x1038}
            
            if (o_5)
                sub_403010()
                noreturn
            
            void* edx_14 = data_5309e4
            *edx_14
            bool o_6 = unimplemented  {imul edx, dword [edx], 0x23}
            
            if (o_6)
                sub_403010()
                noreturn
            
            *(*(*esi_1 + 0xab0) + *edi_1 * 0x81c0 + *edx_14 * 0x118 - 0x87) = 0
            *edi_1
            bool o_7 = unimplemented  {imul eax, dword [edi], 0x1038}
            
            if (o_7)
                sub_403010()
                noreturn
            
            *(*(*esi_1 + 0xab0) + *edi_1 * 0x81c0 + 0x8138) = 0
            *edi_1
            bool o_8 = unimplemented  {imul eax, dword [edi], 0x1038}
            
            if (o_8)
                sub_403010()
                noreturn
            
            *(*(*esi_1 + 0xab0) + *edi_1 * 0x81c0 + 0x8136) = 0
            *edi_1
            bool o_9 = unimplemented  {imul eax, dword [edi], 0x1038}
            
            if (o_9)
                sub_403010()
                noreturn
            
            *(*(*esi_1 + 0xab0) + *edi_1 * 0x81c0 + 0x8132) = 0
            *(*esi_1 + 0x9b4) = 0
    
    sub_47a180(*data_5305f0, *edi_1, *esi_1, ebx.b ^ 1)
    int32_t ecx_10 = *data_530960
    
    if (add_overflow(ecx_10, 0xffffffff))
        sub_403010()
        noreturn
    
    sub_47a180(ecx_10 - 1, *edi_1, *esi_1, ebx.b ^ 1)
    void* const eax_25
    
    if (ebx.b != 0 || *(*data_5301f4 + 0x111fa) != 0)
        eax_25 = nullptr
    else
        eax_25.b = 1
    
    sub_47a180(*data_530960, *edi_1, *esi_1, eax_25.b)
    void* const eax_28
    
    if (ebx.b != 0 || *(*data_5301f4 + 0x111fa) != 0)
        eax_28 = nullptr
    else
        eax_28.b = 1
    
    sub_47a180(*data_530444, *edi_1, *esi_1, eax_28.b)
    void* const eax_31
    
    if (ebx.b != 0 || *(*data_5301f4 + 0x111fa) != 0)
        eax_31 = nullptr
    else
        eax_31.b = 1
    
    int32_t ecx_17 = *data_530444
    
    if (add_overflow(ecx_17, 1))
        sub_403010()
        noreturn
    
    sub_47a180(ecx_17 + 1, *edi_1, *esi_1, eax_31.b)
    void* eax_34
    eax_34.b = *(*data_5301f4 + 0x111fa)
    eax_34.b ^= 1
    sub_47a1c0(*data_530804, *edi_1, *esi_1, eax_34.b)
    char eax_36
    
    if (ebx.b != 0)
        eax_36 = sub_50d318(*data_530454)
    
    if (ebx.b == 0 || eax_36 != 0)
        eax_36 = 1
    else
        eax_36 = 0
    
    sub_47a180(*data_530184, *edi_1, *esi_1, eax_36)
    sub_47a180(*data_5305f0, *edi_1, *esi_1, ebx.b)
    sub_47a1c0(*data_5305f0, *edi_1, *esi_1, ebx.b)
    char eax_44
    
    if (ebx.b == 0)
        eax_44 = sub_50d318(*data_530454)
    
    if (ebx.b == 0 && eax_44 != 0)
        eax_44 = 1
    else
        eax_44 = 0
    
    sub_47a1c0(*data_530330, *edi_1, *esi_1, eax_44)
    long double x87_r0
    sub_47ab08(*esi_1, *edi_1, *data_5305f0, x87_r0, ebp_1[-3])
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_507d18
    return sub_403e1c(&ebp_1[-6], 4)
}
