// ============================================================
// 函数名称: sub_47b650
// 虚拟地址: 0x47b650
// WARP GUID: 2eb1490d-08f7-5411-9aeb-a120ce24a4f4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_404054, sub_40422c, sub_4040c4, sub_404138, sub_46accc, sub_469f7c, sub_408e1c, sub_469d58, sub_403df8, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_520efc, sub_4d88f8, sub_47d208, sub_4c2418, sub_4d951f, sub_4dd164, sub_4d9378, sub_51d270, sub_4e649b, sub_4e6659, sub_4dd1e0, sub_50c5e0, sub_4dd1d7, sub_5223e8, sub_51d580, sub_50e4b0, sub_4d8208, sub_4d954c, sub_50c2d0, sub_50e9c0
// ============================================================

int32_t* __convention("regparm")sub_47b650(void* arg1, int32_t arg2, char* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_330 = ebx
    int32_t esi
    int32_t var_334 = esi
    int32_t edi
    int32_t var_338 = edi
    int32_t var_32c = 0
    char* var_328
    __builtin_memset(&var_328, 0, 0x14)
    void* ebx_1 = arg1
    sub_40422c(arg3)
    int32_t* var_33c = &var_4
    int32_t (* var_340)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool o = unimplemented  {imul eax, eax, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    if (arg2 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_1 = unimplemented  {imul edx, edi, 0x23}
    
    if (o_1)
        sub_403010()
        noreturn
    
    char* esi_1 = *(ebx_1 + 0xab0) + *(ebx_1 + 0x8a8) * 0x81c0 + arg2 * 0x118 - 0xf8
    void* esp_11
    void* ebp_3
    void* var_14
    
    if (arg4 != 0xffffffff)
        void* const var_348_1 = "_addstring: !do with "
        int32_t var_31c
        sub_408e1c(*(ebx_1 + 0x8a8), &var_31c)
        int32_t var_34c_1 = var_31c
        void* const var_350_1 = &data_47b9c4
        int32_t var_320
        sub_408e1c(arg2, &var_320)
        int32_t var_354_1 = var_320
        char* var_318
        sub_404138(&var_318, 4)
        sub_46accc()
        
        if (arg4 == 0)
            int16_t temp5_1 = *(esi_1 + 0xe4)
            *(esi_1 + 0xe4) += 1
            
            if (add_overflow(temp5_1, 1))
                sub_403010()
                noreturn
        
        int32_t eax_25 = sx.d(*(esi_1 + 0xe4))
        
        if (add_overflow(eax_25, 1))
            sub_403010()
            noreturn
        
        sub_408e1c(eax_25 + 1, &var_328)
        int32_t var_324
        sub_4040c4(&var_324, "_addstring: setlength to ", var_328)
        sub_46accc()
        sub_46accc()
        sub_4040c4(&var_32c, sub_47ba07+5, arg3)
        sub_46accc()
        char var_314[0x100]
        void var_214
        
        if (arg4 s<= 0)
            int32_t var_c_3 = arg2
            int32_t eax_35 = sx.d(*(esi_1 + 0xe4))
            var_14 = &var_214
            esp_11 = &var_14
            sub_404054(&var_314, arg3, 0xff)
            ebp_3 = sub_469f7c(ebx_1, &var_314, *(ebx_1 + 0x8a8), var_14, eax_35)
        else
            int32_t var_c_2 = arg2
            var_14 = &var_214
            esp_11 = &var_14
            sub_404054(&var_314, arg3, 0xff)
            int32_t ecx_5 = *(ebx_1 + 0x8a8)
            
            if (add_overflow(ecx_5, 0x3e8))
                sub_403010()
                noreturn
            
            ebp_3 = sub_469f7c(ebx_1, &var_314, ecx_5 + 0x3e8, var_14, arg4)
        sub_46accc()
        
        if (*esi_1 != 0xf)
            *(esi_1 + 0xec) = *(esi_1 + 0xe4)
        else
            int32_t temp0_1 = divs.dp.d(sx.q(*(esi_1 + 0xe4)), sx.d(*(esi_1 + 0x7e)))
            
            if (add_overflow(temp0_1, 0xfffffffe))
                sub_403010()
                noreturn
            
            if (temp0_1 + 0x7ffe u> 0xffff)
                sub_403008()
                noreturn
            
            *(esi_1 + 0xec) = (temp0_1 + 0x7ffe).w - 0x8000
    else
        int16_t temp3_1 = *(esi_1 + 0xe4)
        *(esi_1 + 0xe4) += 1
        
        if (add_overflow(temp3_1, 1))
            sub_403010()
            noreturn
        
        int32_t eax_4 = sx.d(*(esi_1 + 0xe4))
        
        if (add_overflow(eax_4, 0xffffffff))
            sub_403010()
            noreturn
        
        if (eax_4 - 1 s>= 0)
            var_14 = eax_4
            int32_t var_c_1 = 0
            int32_t i
            
            do
                int32_t eax_7 = sx.d(*(esi_1 + 0xe4))
                
                if (add_overflow(eax_7, neg.d(ebp_1[-2])))
                    sub_403010()
                    noreturn
                
                ebp_1[-3] = eax_7 - ebp_1[-2]
                *(esp_1 - 4) = *(ebx_1 + 0x8a8)
                *(esp_1 - 8) = arg2
                int32_t eax_10 = ebp_1[-3]
                
                if (add_overflow(eax_10, 0xffffffff))
                    sub_403010()
                    noreturn
                
                *(esp_1 - 0xc) = eax_10 - 1
                *(esp_1 - 0x10) = &ebp_1[-0x84]
                void* ebp_2
                ebx_1, ebp_2 = sub_469d58(ebx_1, &ebp_1[-0x44], 0xff)
                *(esp_1 - 4) = arg2
                *(esp_1 - 8) = *(ebp_2 - 0xc)
                *(esp_1 - 0xc) = ebp_2 - 0x210
                esp_1 -= 0xc
                ebp_1 = sub_469f7c(ebx_1, ebp_2 - 0x110, *(ebx_1 + 0x8a8))
                ebp_1[-2] += 1
                i = ebp_1[-4]
                ebp_1[-4] -= 1
            while (i != 1)
        
        *(esp_1 - 4) = arg2
        *(esp_1 - 8) = 1
        *(esp_1 - 0xc) = &ebp_1[-0x84]
        esp_11 = esp_1 - 0xc
        sub_404054(&ebp_1[-0xc4], ebp_1[-1], 0xff)
        ebp_3 = sub_469f7c(ebx_1, &ebp_1[-0xc4], *(ebx_1 + 0x8a8))
        *(esi_1 + 0xec) = *(esi_1 + 0xe4)
    *(esp_11 + 8)
    fsbase->NtTib.ExceptionList = *esp_11
    *(esp_11 + 8) = sub_47b991
    sub_403e1c(ebp_3 - 0x328, 6)
    sub_403df8(ebp_3 - 4)
    return ebp_3 - 4
}
