// ============================================================
// 函数名称: sub_5079c3
// 虚拟地址: 0x5079c3
// WARP GUID: 95484235-71f3-54f7-baf7-e7606ae52a91
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47ab08, sub_47a180, sub_47a1c0, sub_404138, sub_50d318, sub_408e1c, sub_46910c, sub_403df8, sub_403e1c, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_5079c3(char* arg1, int16_t arg2, int32_t* arg3, void* arg4 @ ebp, char* arg5 @ esi)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    *arg5 += arg3:1.b
    *arg1 += arg1.b
    *(arg4 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2, eflags)
    int32_t var_18
    __builtin_memset(&var_18, 0, 0x18)
    int32_t ebx
    int32_t var_1c = ebx
    char* var_20 = arg5
    int32_t edi
    int32_t var_24 = edi
    *(arg4 - 4) = arg1
    void* esi = data_530304
    void* edi_1 = data_530438
    void* var_28 = arg4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(arg4 - 4) != 0xffffffff)
        ebx.b = 1
        void* ebp
        void** esi_1
        ebp, esi_1 = sub_46910c(*esi, "f_gamestarts", arg4 - 0x10)
        int32_t var_34_1 = *(ebp - 0x10)
        sub_408e1c(*(ebp - 4), ebp - 0x14)
        int32_t var_38_1 = *(ebp - 0x14)
        arg4, esi = sub_46910c(*esi_1, sub_507d3f+5, ebp - 0x18)
        int32_t var_3c_1 = *(arg4 - 0x18)
        sub_404138(arg4 - 0xc, 3)
    else
        ebx = 0
        sub_403df8(arg4 - 0xc)
    
    sub_47a180(*data_530804, *edi_1, *esi, ebx.b ^ 1)
    sub_47a180(*data_5309e4, *edi_1, *esi, ebx.b ^ 1)
    
    if (ebx.b != 0)
        *edi_1
        bool o_1 = unimplemented  {imul eax, dword [edi], 0x1038}
        
        if (o_1)
            sub_403010()
            noreturn
        
        void* edx_5 = data_5309e4
        *edx_5
        bool o_2 = unimplemented  {imul edx, dword [edx], 0x23}
        
        if (o_2)
            sub_403010()
            noreturn
        
        int32_t eax_10
        eax_10.w = *(*(*esi + 0xab0) + *edi_1 * 0x81c0 + *edx_5 * 0x118 - 0xa2)
        
        if (eax_10.w - 1 u< 2)
            *edi_1
            bool o_3 = unimplemented  {imul eax, dword [edi], 0x1038}
            
            if (o_3)
                sub_403010()
                noreturn
            
            void* edx_9 = data_5309e4
            *edx_9
            bool o_4 = unimplemented  {imul edx, dword [edx], 0x23}
            
            if (o_4)
                sub_403010()
                noreturn
            
            *(*(*esi + 0xab0) + *edi_1 * 0x81c0 + *edx_9 * 0x118 - 0xa2) = 0
            *edi_1
            bool o_5 = unimplemented  {imul eax, dword [edi], 0x1038}
            
            if (o_5)
                sub_403010()
                noreturn
            
            void* edx_13 = data_5309e4
            *edx_13
            bool o_6 = unimplemented  {imul edx, dword [edx], 0x23}
            
            if (o_6)
                sub_403010()
                noreturn
            
            *(*(*esi + 0xab0) + *edi_1 * 0x81c0 + *edx_13 * 0x118 - 0x87) = 0
            *edi_1
            bool o_7 = unimplemented  {imul eax, dword [edi], 0x1038}
            
            if (o_7)
                sub_403010()
                noreturn
            
            *(*(*esi + 0xab0) + *edi_1 * 0x81c0 + 0x8138) = 0
            *edi_1
            bool o_8 = unimplemented  {imul eax, dword [edi], 0x1038}
            
            if (o_8)
                sub_403010()
                noreturn
            
            *(*(*esi + 0xab0) + *edi_1 * 0x81c0 + 0x8136) = 0
            *edi_1
            bool o_9 = unimplemented  {imul eax, dword [edi], 0x1038}
            
            if (o_9)
                sub_403010()
                noreturn
            
            *(*(*esi + 0xab0) + *edi_1 * 0x81c0 + 0x8132) = 0
            *(*esi + 0x9b4) = 0
    
    sub_47a180(*data_5305f0, *edi_1, *esi, ebx.b ^ 1)
    int32_t ecx_9 = *data_530960
    
    if (add_overflow(ecx_9, 0xffffffff))
        sub_403010()
        noreturn
    
    sub_47a180(ecx_9 - 1, *edi_1, *esi, ebx.b ^ 1)
    void* const eax_25
    
    if (ebx.b != 0 || *(*data_5301f4 + 0x111fa) != 0)
        eax_25 = nullptr
    else
        eax_25.b = 1
    
    sub_47a180(*data_530960, *edi_1, *esi, eax_25.b)
    void* const eax_28
    
    if (ebx.b != 0 || *(*data_5301f4 + 0x111fa) != 0)
        eax_28 = nullptr
    else
        eax_28.b = 1
    
    sub_47a180(*data_530444, *edi_1, *esi, eax_28.b)
    void* const eax_31
    
    if (ebx.b != 0 || *(*data_5301f4 + 0x111fa) != 0)
        eax_31 = nullptr
    else
        eax_31.b = 1
    
    int32_t ecx_16 = *data_530444
    
    if (add_overflow(ecx_16, 1))
        sub_403010()
        noreturn
    
    sub_47a180(ecx_16 + 1, *edi_1, *esi, eax_31.b)
    void* eax_34
    eax_34.b = *(*data_5301f4 + 0x111fa)
    eax_34.b ^= 1
    sub_47a1c0(*data_530804, *edi_1, *esi, eax_34.b)
    char eax_36
    
    if (ebx.b != 0)
        eax_36 = sub_50d318(*data_530454)
    
    if (ebx.b == 0 || eax_36 != 0)
        eax_36 = 1
    else
        eax_36 = 0
    
    sub_47a180(*data_530184, *edi_1, *esi, eax_36)
    sub_47a180(*data_5305f0, *edi_1, *esi, ebx.b)
    sub_47a1c0(*data_5305f0, *edi_1, *esi, ebx.b)
    char eax_44
    
    if (ebx.b == 0)
        eax_44 = sub_50d318(*data_530454)
    
    if (ebx.b == 0 && eax_44 != 0)
        eax_44 = 1
    else
        eax_44 = 0
    
    sub_47a1c0(*data_530330, *edi_1, *esi, eax_44)
    long double x87_r0
    sub_47ab08(*esi, *edi_1, *data_5305f0, x87_r0, *(arg4 - 0xc))
    int32_t var_8
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_507d18
    return sub_403e1c(arg4 - 0x18, 4)
}
