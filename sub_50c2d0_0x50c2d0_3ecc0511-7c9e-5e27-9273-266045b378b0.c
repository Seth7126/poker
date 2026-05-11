// ============================================================
// 函数名称: sub_50c2d0
// 虚拟地址: 0x50c2d0
// WARP GUID: 3ecc0511-7c9e-5e27-9273-266045b378b0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_403e90, sub_404078, sub_402b4c, sub_483950, sub_46fd7c, sub_403e1c, sub_403fa0, sub_47b650, sub_403df8, sub_404280, sub_403010
// [被调用的父级函数]: sub_514468, sub_514ef8
// ============================================================

void* __convention("regparm")sub_50c2d0(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_24 = ebx
    int32_t esi
    int32_t var_28 = esi
    int32_t edi
    int32_t var_2c = edi
    int32_t var_1c = 0
    int32_t var_10 = 0
    int32_t var_14 = 0
    sub_40422c(arg1)
    void* edi_1 = data_530304
    int32_t* var_30 = &var_4
    int32_t (* var_34)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_483950(*edi_1, *data_530438)
    int32_t ebx_1 = 0
    int32_t var_18 = 0
    int32_t esi_1 = 0
    sub_403e90(&var_10, arg1)
    sub_403df8(&var_14)
    void* var_3c
    int32_t eax_14
    
    do
        int32_t temp0_1 = ebx_1
        ebx_1 += 1
        
        if (add_overflow(temp0_1, 1))
            sub_403010()
            noreturn
        
        int32_t edx_3
        edx_3.b = *(ebp_1[-1] + ebx_1 - 1)
        sub_403fa0()
        ebp_1, edi_1 = sub_46fd7c(*edi_1, ebp_1[-6])
        unimplemented  {fadd dword [ebp-0x14]}
        ebp_1[-5] = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
        unimplemented  {fstp dword [ebp-0x14], st0}
        
        if (*(ebp_1[-1] + ebx_1 - 1) == 0x20)
            esi_1 = ebx_1
        
        unimplemented  {fld st0, dword [ebp-0x14]}
        long double temp1_1 = fconvert.t(28f)
        unimplemented  {fcomp st0, dword [0x50c5dc]} f- temp1_1
        bool c0_1 = unimplemented  {fcomp st0, dword [0x50c5dc]} f< temp1_1
        bool c2_1 = is_unordered.t(unimplemented  {fcomp st0, dword [0x50c5dc]}, temp1_1)
        bool c3_1 = unimplemented  {fcomp st0, dword [0x50c5dc]} f== temp1_1
        unimplemented  {fcomp st0, dword [0x50c5dc]}
        int16_t top = top + 1
        int32_t eax_6
        eax_6.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe | (top & 7) << 0xb
        
        if (not(test_bit(eax_6:1.b, 6)) && not(test_bit(eax_6:1.b, 0)))
            if (esi_1 != 0)
                ebx_1 = esi_1
            
            var_3c = &ebp_1[-3]
            
            if (add_overflow(ebx_1, 0xffffffff))
                sub_403010()
                noreturn
            
            sub_404280(ebx_1 - 1, 1, ebp_1[-1], var_3c)
            var_3c = &ebp_1[-4]
            int32_t eax_11 = sub_404078(ebp_1[-1])
            
            if (add_overflow(eax_11, neg.d(ebx_1)))
                sub_403010()
                noreturn
            
            if (add_overflow(ebx_1, 1))
                sub_403010()
                noreturn
            
            sub_404280(eax_11 - ebx_1, ebx_1 + 1, ebp_1[-1])
            break
        
        eax_14 = sub_404078(ebp_1[-1])
    while (ebx_1 != eax_14)
    var_3c = nullptr
    void** esp_1 = &var_3c
    sub_47b650(*edi_1, *data_530080, ebp_1[-3], var_3c)
    
    if (ebp_1[-4] != 0)
        void* var_40 = nullptr
        esp_1 = &var_40
        sub_47b650(*edi_1, *data_530080, ebp_1[-4], var_40)
    
    void* edx_11 = data_530438
    *edx_11
    bool o_5 = unimplemented  {imul edx, dword [edx], 0x1038}
    
    if (o_5)
        sub_403010()
        noreturn
    
    void* eax_17 = data_530080
    *eax_17
    int32_t eax_18 = *eax_17 * 0x23
    bool o_6 = unimplemented  {imul eax, dword [eax], 0x23}
    
    if (o_6)
        sub_403010()
        noreturn
    
    int32_t edx_14 = sx.d(*(*(*edi_1 + 0xab0) + *edx_11 * 0x81c0 + (eax_18 << 3) - 0x82))
    void* ecx_9 = data_530438
    *ecx_9
    bool o_7 = unimplemented  {imul ecx, dword [ecx], 0x1038}
    
    if (o_7)
        sub_403010()
        noreturn
    
    int32_t ebx_4 = sx.d(*(*(*edi_1 + 0xab0) + *ecx_9 * 0x81c0 + (eax_18 << 3) - 0x14))
    void* ecx_12 = data_530438
    *ecx_12
    bool o_8 = unimplemented  {imul ecx, dword [ecx], 0x1038}
    
    if (o_8)
        sub_403010()
        noreturn
    
    *(esp_1 - 4) = *(*edi_1 + 0xab0) + *ecx_12 * 0x81c0
    void* esp_3 = esp_1
    int32_t ecx_16 = sx.d(*(*(esp_1 - 4) + (eax_18 << 3) - 0x84))
    
    if (add_overflow(ebx_4, neg.d(ecx_16)))
        sub_403010()
        noreturn
    
    if (edx_14 s< ebx_4 - ecx_16)
        void* ecx_17 = data_530438
        *ecx_17
        bool o_10 = unimplemented  {imul ecx, dword [ecx], 0x1038}
        
        if (o_10)
            sub_403010()
            noreturn
        
        *(esp_3 - 4) = *(*edi_1 + 0xab0) + *ecx_17 * 0x81c0
        
        if (add_overflow(ebx_4, neg.d(edx_14)))
            sub_403010()
            noreturn
        
        *(*(esp_3 - 4) + (eax_18 << 3) - 0x84) = ebx_4.w - edx_14.w
        void* eax_19 = data_530438
        *eax_19
        int32_t eax_20 = *eax_19 * 0x1038
        bool o_12 = unimplemented  {imul eax, dword [eax], 0x1038}
        
        if (o_12)
            sub_403010()
            noreturn
        
        int32_t esi_8 = *(*edi_1 + 0xab0) + (eax_20 << 3)
        void* edx_19 = data_530080
        *edx_19
        bool o_13 = unimplemented  {imul edx, dword [edx], 0x23}
        
        if (o_13)
            sub_403010()
            noreturn
        
        void* ebx_6 = *(*edi_1 + 0xab0) + (eax_20 << 3) + *edx_19 * 0x118 + 0x250
        int32_t edi_2 = sx.d(*(ebx_6 + 0x88)) * 0x23
        bool o_14 = unimplemented  {imul edi, eax, 0x23}
        
        if (o_14)
            sub_403010()
            noreturn
        
        if (*(esi_8 + (edi_2 << 3) - 0xc) != 0)
            int32_t eax_23 = *(esi_8 + (edi_2 << 3) - 0x98)
            
            if (add_overflow(eax_23, 0xffffffc6))
                sub_403010()
                noreturn
            
            bool o_16 = unimplemented  {imul edx}
            
            if (o_16)
                sub_403010()
                noreturn
            
            ebp_1[-7] = (eax_23 - 0x3a) * sx.d(*(esi_8 + (edi_2 << 3) - 0x82))
            unimplemented  {fild st0, dword [ebp-0x1c]}
            *(ebx_6 + 0x88)
            bool o_17 = unimplemented  {imul eax, eax, 0x23}
            
            if (o_17)
                sub_403010()
                noreturn
            
            unimplemented  {fild st0, word [esi+eax*8-0xc]}
            unimplemented  {fdivp st1, st0}
            unimplemented  {fdivp st1, st0}
            int32_t eax_27 = sub_402b4c(unimplemented  {call 0x402b4c})
            *(ebx_6 + 0x64) = eax_27
        
        int32_t eax_28 = *(ebx_6 + 0x60)
        
        if (add_overflow(eax_28, neg.d(*(ebx_6 + 0x64))))
            sub_403010()
            noreturn
        
        *(ebx_6 + 0x74) = eax_28.w - (*(ebx_6 + 0x64)).w
        int32_t eax_30 = *(ebx_6 + 0x60)
        
        if (add_overflow(eax_30, neg.d(*(ebx_6 + 0x64))))
            sub_403010()
            noreturn
        
        *(ebx_6 + 0x76) = eax_30.w - (*(ebx_6 + 0x64)).w
    
    *(esp_3 + 8)
    fsbase->NtTib.ExceptionList = *esp_3
    *(esp_3 + 8) = sub_50c5cf
    sub_403df8(&ebp_1[-6])
    sub_403e1c(&ebp_1[-4], 2)
    sub_403df8(&ebp_1[-1])
    return &ebp_1[-1]
}
