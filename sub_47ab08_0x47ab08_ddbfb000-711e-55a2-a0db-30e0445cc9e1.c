// ============================================================
// 函数名称: sub_47ab08
// 虚拟地址: 0x47ab08
// WARP GUID: ddbfb000-711e-55a2-a0db-30e0445cc9e1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_404054, sub_40422c, sub_404078, sub_4042c0, sub_469f7c, sub_469cc8, sub_403df8, sub_402bdc, sub_46fd7c, sub_402b4c, sub_404280, sub_403010
// [被调用的父级函数]: sub_472ccc, sub_4c1fb8, sub_4748fc, sub_4692db, sub_4c9168, sub_4755b0, sub_4742c0, sub_520efc, sub_4c5eb0, sub_47013c, sub_477bff, sub_509890, sub_509af8, sub_512690, sub_46e17c, sub_50f300, sub_5079cc, sub_50f0e4, sub_50fa27, sub_51e1c0, sub_52ba68, sub_4d88f8, sub_50dbd4, sub_51260b, sub_4692e4, sub_50deb4, sub_4c8aa0, sub_478234, sub_5079c3, sub_51038c, sub_529818, sub_4dad04, sub_4e649b, sub_4ed7a0, sub_4e6659, sub_50c5e0, sub_50b624, sub_4c96bc, sub_5223e8, sub_4779d4, sub_517120, sub_477c08, sub_46e0ac, sub_46e16f, sub_50b1ac, sub_50f7b8, sub_509bfc, sub_5295d8, sub_50e4b0, sub_4ee360, sub_47575c, sub_509ed4, sub_509dc4, sub_4702a8, sub_4d6bc8, sub_50732c, sub_4c8a23, sub_483f98, sub_483d54, sub_4c8a8f, sub_4fc834, sub_50e9c0
// ============================================================

void* __convention("regparm")sub_47ab08(void* arg1, int32_t arg2, int32_t arg3, long double arg4 @ st0, void* arg5)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_210 = ebx
    int32_t esi
    int32_t var_214 = esi
    int32_t edi
    int32_t var_218 = edi
    int32_t var_20c = 0
    sub_40422c(arg5)
    int32_t* var_21c = &var_4
    int32_t (* var_220)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* esp_8
    int32_t edi_15
    
    if (sub_404078(arg5) s<= 0x19)
        char var_108[0x100]
        sub_404054(&var_108, arg5, 0xff)
        bool o_12 = unimplemented  {imul eax, esi, 0x1038}
        
        if (o_12)
            sub_403010()
            noreturn
        
        if (arg3 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        edi_15 = arg3
        bool o_13 = unimplemented  {imul eax, edi, 0x23}
        
        if (o_13)
            sub_403010()
            noreturn
        
        esp_8 = &ExceptionList
        int32_t ecx_6
        ecx_6.b = 0x19
        sub_402bdc(*(arg1 + 0xab0) + arg2 * 0x81c0 + edi_15 * 0x118 - 0xf0, &var_108, ecx_6.b)
    else
        bool o = unimplemented  {imul eax, esi, 0x1038}
        
        if (o)
            sub_403010()
            noreturn
        
        if (arg3 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_1 = unimplemented  {imul edx, edi, 0x23}
        
        if (o_1)
            sub_403010()
            noreturn
        
        if (*(*(arg1 + 0xab0) + arg2 * 0x81c0 + arg3 * 0x118 - 0x18) s< 4)
            int32_t temp0_1 = *(arg1 + 0x314)
            *(arg1 + 0x314) += 4
            
            if (add_overflow(temp0_1, 4))
                sub_403010()
                noreturn
            
            bool o_3 = unimplemented  {imul eax, esi, 0x1038}
            
            if (o_3)
                sub_403010()
                noreturn
            
            if (arg3 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_4 = unimplemented  {imul edx, edi, 0x23}
            
            if (o_4)
                sub_403010()
                noreturn
            
            *(*(arg1 + 0xab0) + arg2 * 0x81c0 + arg3 * 0x118 - 0x18) = 4
            bool o_5 = unimplemented  {imul eax, esi, 0x1038}
            
            if (o_5)
                sub_403010()
                noreturn
            
            if (arg3 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_6 = unimplemented  {imul edx, edi, 0x23}
            
            if (o_6)
                sub_403010()
                noreturn
            
            int32_t eax_10 =
                sub_469cc8(arg1, sx.d(*(*(arg1 + 0xab0) + arg2 * 0x81c0 + arg3 * 0x118 - 0x18)))
            bool o_7 = unimplemented  {imul edx, esi, 0x1038}
            
            if (o_7)
                sub_403010()
                noreturn
            
            if (arg3 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_8 = unimplemented  {imul edx, edi, 0x23}
            
            if (o_8)
                sub_403010()
                noreturn
            
            *(*(arg1 + 0xab0) + arg2 * 0x81c0 + arg3 * 0x118 - 0x1c) = eax_10
        
        bool o_9 = unimplemented  {imul eax, esi, 0x1038}
        
        if (o_9)
            sub_403010()
            noreturn
        
        if (arg3 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_10 = unimplemented  {imul edx, edi, 0x23}
        
        if (o_10)
            sub_403010()
            noreturn
        
        int32_t* edi_11 = *(arg1 + 0xab0) + arg2 * 0x81c0 + arg3 * 0x118 - 0xf0
        *edi_11 = 0x63734005
        edi_11[1].w = data_47aefc.w
        edi_15 = arg3
        struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
        int32_t var_8_1 = 0
        
        while (true)
            if (sub_404078(ebp_1[2]) s<= 0)
                *(esp_1 - 4) = edi_15
                *(esp_1 - 8) = ebp_1[-1]
                *(esp_1 - 0xc) = &ebp_1[-0x41]
                esp_8 = esp_1 - 0xc
                ebp_1 = sub_469f7c(arg1, &data_47af00, arg2)
                break
            
            *(esp_1 - 4) = edi_15
            *(esp_1 - 8) = ebp_1[-1]
            *(esp_1 - 0xc) = &ebp_1[-0x41]
            *(esp_1 - 0x10) = &ebp_1[-0x82]
            sub_404280(0xff, 1, ebp_1[2])
            esp_1 -= 0xc
            sub_404054(&ebp_1[-0x81], ebp_1[-0x82], 0xff)
            ebp_1 = sub_469f7c(arg1, &ebp_1[-0x81], arg2)
            int32_t temp1_1 = ebp_1[-1]
            ebp_1[-1] += 1
            
            if (add_overflow(temp1_1, 1))
                sub_403010()
                noreturn
            
            sub_4042c0(&ebp_1[2], 1, 0xff)
    
    bool o_14 = unimplemented  {imul eax, esi, 0x1038}
    
    if (o_14)
        sub_403010()
        noreturn
    
    if (edi_15 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_15 = unimplemented  {imul edx, edi, 0x23}
    
    if (o_15)
        sub_403010()
        noreturn
    
    if (*(*(arg1 + 0xab0) + arg2 * 0x81c0 + edi_15 * 0x118 - 0xf8) == 0xa)
        bool o_16 = unimplemented  {imul eax, esi, 0x1038}
        
        if (o_16)
            sub_403010()
            noreturn
        
        if (edi_15 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_17 = unimplemented  {imul edx, edi, 0x23}
        
        if (o_17)
            sub_403010()
            noreturn
        
        if (*(*(arg1 + 0xab0) + arg2 * 0x81c0 + edi_15 * 0x118 - 8) == 8)
            int32_t edi_20
            ebp_1, edi_20 = sub_46fd7c(arg1, ebp_1[2])
            bool o_18 = unimplemented  {imul eax, esi, 0x1038}
            
            if (o_18)
                sub_403010()
                noreturn
            
            if (edi_20 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_19 = unimplemented  {imul edx, edi, 0x23}
            
            if (o_19)
                sub_403010()
                noreturn
            
            int32_t eax_37
            int32_t edx_25
            eax_37, edx_25 = sub_402b4c(arg4 * fconvert.t(11.5f)
                * fconvert.t(*(*(arg1 + 0xab0) + arg2 * 0x81c0 + edi_20 * 0x118 - 0x74)) + fconvert.t(83f))
            *(esp_8 - 4) = eax_37
            int32_t eax_39 = *(esp_8 - 4)
            
            if (eax_37 s>> 0x1f != edx_25)
                sub_403008()
                noreturn
            
            bool o_20 = unimplemented  {imul edx, esi, 0x1038}
            
            if (o_20)
                sub_403010()
                noreturn
            
            *(esp_8 - 4) = *(arg1 + 0xab0) + arg2 * 0x81c0
            
            if (edi_20 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_21 = unimplemented  {imul edx, edi, 0x23}
            
            if (o_21)
                sub_403010()
                noreturn
            
            *(*(esp_8 - 4) + edi_20 * 0x118 - 0x9c) = eax_39
            bool o_22 = unimplemented  {imul eax, esi, 0x1038}
            
            if (o_22)
                sub_403010()
                noreturn
            
            if (edi_20 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_23 = unimplemented  {imul edx, edi, 0x23}
            
            if (o_23)
                sub_403010()
                noreturn
            
            if (*(*(arg1 + 0xab0) + arg2 * 0x81c0 + edi_20 * 0x118 - 0x9c) s<= 0x8c)
                bool o_24 = unimplemented  {imul eax, esi, 0x1038}
                
                if (o_24)
                    sub_403010()
                    noreturn
                
                if (arg2 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_25 = unimplemented  {imul edx, esi, 0x23}
                
                if (o_25)
                    sub_403010()
                    noreturn
                
                *(arg2 * 0x82d8 + *(arg1 + 0xab0) - 0x9c) = 0x8c
    
    *(esp_8 + 8)
    fsbase->NtTib.ExceptionList = *esp_8
    *(esp_8 + 8) = sub_47aeed
    sub_403df8(&ebp_1[-0x82])
    sub_403df8(&ebp_1[2])
    return &ebp_1[2]
}
