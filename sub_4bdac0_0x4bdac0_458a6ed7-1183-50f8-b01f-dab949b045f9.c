// ============================================================
// 函数名称: sub_4bdac0
// 虚拟地址: 0x4bdac0
// WARP GUID: 458a6ed7-1183-50f8-b01f-dab949b045f9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4bca48, sub_517a94, sub_51783c, sub_4cb9a0, sub_4cd0a0, sub_404138, sub_404080, sub_4cc9c8, sub_51765c, sub_52b2f0, sub_4bc450, sub_402b4c, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_4b9e84, sub_4e6659, sub_4c27e4, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_4bdac0(int32_t arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_560 = ebx
    int32_t esi
    int32_t var_564 = esi
    int32_t edi
    int32_t var_568 = edi
    int32_t var_55c = 0
    int32_t var_558 = 0
    int32_t var_554 = 0
    int32_t var_550 = 0
    char ecx
    char var_5 = ecx
    int32_t* var_56c = &var_4
    int32_t (* var_570)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_c = 0
    int32_t var_18 = 0
    int32_t var_14 = 0
    int32_t var_220
    
    if (*(data_5301b0 + 0x69c24) != 0)
        void var_324
        sub_4bc450(&var_324)
        void var_11c
        sub_51765c(data_5301b0 + 0x6998c, &var_11c)
        bool o_1 = unimplemented  {imul eax, ebx, 0x2345}
        
        if (o_1)
            sub_403010()
            noreturn
        
        sub_51765c(data_5301b0 + arg1 * 0x8d14 - 0x364, &var_220)
        int16_t i_5
        int32_t i_2 = sx.d(i_5)
        
        if (i_2 s> 0)
            void* edi_1 = &var_11c
            int32_t i
            
            do
                sub_517a94(&var_324, *edi_1)
                edi_1 += 4
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        int16_t i_4
        int32_t i_3 = sx.d(i_4)
        
        if (i_3 s> 0)
            int32_t* edi_2 = &var_220
            int32_t i_1
            
            do
                sub_517a94(&var_324, *edi_2)
                edi_2 = &edi_2[1]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
        struct _EXCEPTION_REGISTRATION_RECORD* var_578 = arg2
        void var_428
        __builtin_memcpy(&var_428, &var_11c, 0x104)
        struct _EXCEPTION_REGISTRATION_RECORD* esi_2 = var_578
        sub_51783c(&var_428, &var_220)
        i_3.b = 0xa
        var_578 = esi_2
        void var_52c
        __builtin_memcpy(&var_52c, &var_324, 0x104)
        struct _EXCEPTION_REGISTRATION_RECORD* esi_3 = var_578
        int32_t var_10_1 = 0x3f800000
        
        do
            var_578 = ebp_1
            int32_t eax_13 = sx.d(ebp_1[-6].w)
            
            if (add_overflow(5, neg.d(eax_13)))
                sub_403010()
                noreturn
            
            sub_4bca48(&ebp_1[-0x87], &ebp_1[-0x46], &ebp_1[-0x14a], &ebp_1[-0x152], esi_3, 0, 1, 0, 
                5 - eax_13, i_3.b, &ebp_1[-0xc8])
            var_578 = esi_3
            __builtin_memcpy(&ebp_1[-0x14e], &ebp_1[-0x152], 0x10)
            esi_3 = var_578
            esp = &ExceptionList
            ebp_1[-2] =
                fconvert.s(fconvert.t(ebp_1[-0x14d]) * fconvert.t(ebp_1[-3]) + fconvert.t(ebp_1[-2]))
            ebp_1[-5] =
                fconvert.s(fconvert.t(ebp_1[-0x14d]) * fconvert.t(ebp_1[-3]) + fconvert.t(ebp_1[-5]))
            ebp_1[-4] =
                fconvert.s(fconvert.t(ebp_1[-0x14e]) * fconvert.t(ebp_1[-3]) + fconvert.t(ebp_1[-4]))
            
            if (*(ebp_1 - 1) != 0 && i_3.b - 1 u< 0xa)
                sub_404080(data_5304e8, "\n\r")
                long double x87_r7_11 = fconvert.t(ebp_1[-0x14e])
                long double temp5_1 = fconvert.t(0f)
                x87_r7_11 - temp5_1
                int16_t eax_19 = (x87_r7_11 < temp5_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_11, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_11 == temp5_1 ? 1 : 0) << 0xe
                
                if (test_bit(eax_19:1.b, 6) || test_bit(eax_19:1.b, 0))
                    sub_404080(data_5304e8, U"-")
                    data_5304e8
                else
                    var_578 = &ebp_1[-0x153]
                    i_3, ebp_1, esi_3 = sub_52b2f0(
                        sub_402b4c(fconvert.t(10000f) * fconvert.t(ebp_1[-0x14e])
                            * fconvert.t(ebp_1[-3])), 
                        0x2710, 3, var_578)
                    esp = &ExceptionList
                    sub_404080(data_5304e8, ebp_1[-0x153])
                    data_5304e8
                
                long double x87_r7_15 = fconvert.t(ebp_1[-0x14d])
                long double temp6_1 = fconvert.t(0f)
                x87_r7_15 - temp6_1
                int16_t eax_23 = (x87_r7_15 < temp6_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_15, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r7_15 == temp6_1 ? 1 : 0) << 0xe
                
                if (test_bit(eax_23:1.b, 6) || test_bit(eax_23:1.b, 0))
                    sub_404080(data_5304e8, ", win: -")
                    data_5304e8
                else
                    var_578 = *data_5304e8
                    void* const var_57c_2 = ", win: "
                    i_3, ebp_1, esi_3 = sub_52b2f0(
                        sub_402b4c(fconvert.t(10000f) * fconvert.t(ebp_1[-0x14d])
                            * fconvert.t(ebp_1[-3])), 
                        0x2710, 3, &ebp_1[-0x154])
                    int32_t var_580_3 = ebp_1[-0x154]
                    sub_404138(data_5304e8, 3)
                    esp = &ExceptionList
            
            int32_t eax_32 = sub_4cd0a0(i_3.b)
            
            if (add_overflow(eax_32, 0xffffffff))
                sub_403010()
                noreturn
            
            i_3 = sub_4cc9c8(eax_32 - 1)
            ebp_1[-3] =
                fconvert.s(fconvert.t(ebp_1[-3]) - fconvert.t(ebp_1[-3]) * fconvert.t(ebp_1[-0x14e]))
        while (i_3.b != 0)
        
        if (*(ebp_1 - 1) != 0)
            var_578 = *data_5304e8
            void* const var_57c_3 = &data_4bdeb8
            void* const var_580_4 = "SUMME: "
            void* ebp_2 = sub_52b2f0(sub_402b4c(fconvert.t(10000f) * fconvert.t(ebp_1[-4])), 0x2710, 3, 
                &ebp_1[-0x155])
            int32_t var_584_3 = *(ebp_2 - 0x554)
            sub_404138(data_5304e8, 4)
            int32_t var_57c_4 = *data_5304e8
            void* const var_580_5 = ", WINWK: "
            ebp_1 = sub_52b2f0(sub_402b4c(fconvert.t(10000f) * fconvert.t(*(ebp_2 - 0x14))), 0x2710, 3, 
                ebp_2 - 0x558)
            int32_t var_584_5 = ebp_1[-0x156]
            sub_404138(data_5304e8, 3)
            esp = &var_578
    else
        bool o = unimplemented  {imul eax, ebx, 0x2345}
        
        if (o)
            sub_403010()
            noreturn
        
        sub_51765c(data_5301b0 + arg1 * 0x8d14 - 0x364, &var_220)
        int32_t var_21c
        float var_c_1 = fconvert.s(sub_4cb9a0(var_220.w, var_21c, arg2))
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4bdea6
    return sub_403e1c(&ebp_1[-0x156], 4)
}
