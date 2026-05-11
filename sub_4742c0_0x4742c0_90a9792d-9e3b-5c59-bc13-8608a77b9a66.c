// ============================================================
// 函数名称: sub_4742c0
// 虚拟地址: 0x4742c0
// WARP GUID: 90a9792d-9e3b-5c59-bc13-8608a77b9a66
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_47ab08, sub_40422c, sub_404078, sub_4836b0, sub_403df8, sub_403010
// [被调用的父级函数]: sub_5223e8
// ============================================================

void** __convention("regparm")sub_4742c0(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    void* arg_4
    sub_40422c(arg_4)
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool o = unimplemented  {imul eax, esi, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    *(*(arg1 + 0xab0) + arg2 * 0x81c0 + 2) = 0x172
    bool o_1 = unimplemented  {imul eax, esi, 0x1038}
    
    if (o_1)
        sub_403010()
        noreturn
    
    *(*(arg1 + 0xab0) + arg2 * 0x81c0 + 6) = 0x1a4
    bool o_2 = unimplemented  {imul eax, esi, 0x1038}
    
    if (o_2)
        sub_403010()
        noreturn
    
    if (arg3 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_3 = unimplemented  {imul edx, edx, 0x23}
    
    if (o_3)
        sub_403010()
        noreturn
    
    void* edi_1 = *(arg1 + 0xab0) + arg2 * 0x81c0 + arg3 * 0x118 - 0xf8
    *(edi_1 + 7) = 1
    *(edi_1 + 8) = 0x4b4f2103
    bool o_4 = unimplemented  {imul eax, esi, 0x1038}
    
    if (o_4)
        sub_403010()
        noreturn
    
    if (arg3 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_5 = unimplemented  {imul edx, edx, 0x23}
    
    if (o_5)
        sub_403010()
        noreturn
    
    *(*(arg1 + 0xab0) + arg2 * 0x81c0 + arg3 * 0x118 - 0x9c) = 0x30
    int32_t var_c = 0
    int32_t edi_2 = 0
    int32_t i_1 = sub_404078(arg_4)
    
    if (i_1 s> 0)
        int32_t var_10_1 = 1
        int32_t i
        
        do
            int32_t temp3_1 = edi_2
            edi_2 += 1
            
            if (add_overflow(temp3_1, 1))
                sub_403010()
                noreturn
            
            bool o_7 = unimplemented  {imul edx, esi, 0x1038}
            
            if (o_7)
                sub_403010()
                noreturn
            
            if (arg3 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_8 = unimplemented  {imul edx, edx, 0x23}
            
            if (o_8)
                sub_403010()
                noreturn
            
            int32_t edx_18 = *(*(arg1 + 0xab0) + arg2 * 0x81c0 + arg3 * 0x118 - 0x9c)
            
            if (add_overflow(edx_18, 0xfffffffa))
                sub_403010()
                noreturn
            
            if (edi_2 s> edx_18 - 6)
                edi_2 = 0
                int32_t temp11_1 = var_c
                var_c += 1
                
                if (add_overflow(temp11_1, 1))
                    sub_403010()
                    noreturn
            
            void* ecx_2 = arg_4
            
            if (var_10_1 - 1 u>= *(ecx_2 - 4))
                sub_403008()
                noreturn
            
            if (*(ecx_2 + var_10_1 - 1) == 0xd)
                edi_2 = 0
                int32_t temp14_1 = var_c
                var_c += 1
                
                if (add_overflow(temp14_1, 1))
                    sub_403010()
                    noreturn
            
            var_10_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    bool o_12 = unimplemented  {imul edx, esi, 0x1038}
    
    if (o_12)
        sub_403010()
        noreturn
    
    int32_t eax_8 = var_c * 0x16
    bool o_13 = unimplemented  {imul eax, dword [ebp-0x8], 0x16}
    
    if (o_13)
        sub_403010()
        noreturn
    
    if (add_overflow(eax_8, 0x96))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_8 + 0x96, 0xf))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_8 + 0xa5, 0xffffffe2))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_8 + 0x87, 0xffffffe2))
        sub_403010()
        noreturn
    
    if (eax_8 + 0x8069 u> 0xffff)
        sub_403008()
        noreturn
    
    *(*(arg1 + 0xab0) + arg2 * 0x81c0 + 8) = (eax_8 + 0x8069).w - 0x8000
    
    if (add_overflow(0x1c2, neg.d(eax_8)))
        sub_403010()
        noreturn
    
    if (add_overflow(0x1c2 - eax_8, 0x22))
        sub_403010()
        noreturn
    
    if (0x1c2 - eax_8 + 0x8022 u> 0xffff)
        sub_403008()
        noreturn
    
    bool o_20 = unimplemented  {imul ecx, esi, 0x1038}
    
    if (o_20)
        sub_403010()
        noreturn
    
    *(*(arg1 + 0xab0) + arg2 * 0x81c0 + 4) = (0x1c2 - eax_8 + 0x8022).w - 0x8000
    bool o_21 = unimplemented  {imul edx, esi, 0x1038}
    
    if (o_21)
        sub_403010()
        noreturn
    
    if (arg3 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_22 = unimplemented  {imul ecx, ecx, 0x23}
    
    if (o_22)
        sub_403010()
        noreturn
    
    *(*(arg1 + 0xab0) + arg2 * 0x81c0 + arg3 * 0x118 - 0xf6) = 0xa
    
    if (var_c s> 1)
        bool o_25 = unimplemented  {imul edx, esi, 0x1038}
        
        if (o_25)
            sub_403010()
            noreturn
        
        if (arg3 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_26 = unimplemented  {imul ecx, ecx, 0x23}
        
        if (o_26)
            sub_403010()
            noreturn
        
        *(*(arg1 + 0xab0) + arg2 * 0x81c0 + arg3 * 0x118 - 0xf4) = 0x17
    else
        bool o_23 = unimplemented  {imul edx, esi, 0x1038}
        
        if (o_23)
            sub_403010()
            noreturn
        
        if (arg3 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_24 = unimplemented  {imul ecx, ecx, 0x23}
        
        if (o_24)
            sub_403010()
            noreturn
        
        *(*(arg1 + 0xab0) + arg2 * 0x81c0 + arg3 * 0x118 - 0xf4) = 0xf
    
    bool o_27 = unimplemented  {imul edx, esi, 0x1038}
    
    if (o_27)
        sub_403010()
        noreturn
    
    if (add_overflow(arg3, 1))
        sub_403010()
        noreturn
    
    if (arg3 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_29 = unimplemented  {imul ecx, ecx, 0x23}
    
    if (o_29)
        sub_403010()
        noreturn
    
    if (add_overflow(eax_8, 0x5f))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_8 + 0x5f, 2))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_8 + 0x61, 0xffffffd8))
        sub_403010()
        noreturn
    
    if (eax_8 + 0x8039 u> 0xffff)
        sub_403008()
        noreturn
    
    *(*(arg1 + 0xab0) + arg2 * 0x81c0 + (arg3 + 1) * 0x118 - 0xf4) = (eax_8 + 0x8039).w - 0x8000
    bool o_33 = unimplemented  {imul eax, esi, 0x1038}
    
    if (o_33)
        sub_403010()
        noreturn
    
    if (add_overflow(arg3, 1))
        sub_403010()
        noreturn
    
    if (arg3 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_35 = unimplemented  {imul edx, edx, 0x23}
    
    if (o_35)
        sub_403010()
        noreturn
    
    *(*(arg1 + 0xab0) + arg2 * 0x81c0 + (arg3 + 1) * 0x118 - 0xf6) = 0x7d
    long double x87_r0
    sub_4836b0(sub_47ab08(arg1, arg2, arg3, x87_r0, arg_4), arg2)
    fsbase->NtTib.ExceptionList = arg3
    __return_addr = sub_474695
    void** result = &arg_4
    sub_403df8(result)
    return result
}
