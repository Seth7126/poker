// ============================================================
// 函数名称: sub_503984
// 虚拟地址: 0x503984
// WARP GUID: c2fb5aa0-6599-5b23-b96c-7a1a6400b775
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402d38, sub_51ad40, sub_4c1e14, sub_474260, sub_404138, sub_44cde0, sub_408e1c, sub_4c1dd8, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_4f0d44, sub_502b8c, sub_4ee958, sub_503538, sub_5047f4
// ============================================================

int32_t __convention("regparm")sub_503984(int32_t arg1, int32_t arg2, int32_t arg3, float arg4, int32_t arg5, int32_t arg6, char arg7, char arg8, char arg9, void* arg10)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_104 = ebx
    int32_t esi
    int32_t var_108 = esi
    int32_t edi
    int32_t var_10c = edi
    int32_t var_100
    __builtin_memset(&var_100, 0, 0x20)
    int32_t* var_110 = &var_4
    int32_t (* var_114)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((arg1 != 0xb || arg7 != 1 || arg3 != 0xb) && arg3 == 0xb)
        bool o_1 = unimplemented  {imul eax, dword [ebp+0x20], 0x35}
        
        if (o_1)
            sub_403010()
            noreturn
        
        void* eax_1 = data_5301b0 + arg10 * 0xd4 + 0x58250
        *(eax_1 + 0xc) = 3
        *(eax_1 + 0x20) = 0
        bool o_2 = unimplemented  {imul eax, dword [ebp+0x20], 0x35}
        
        if (o_2)
            sub_403010()
            noreturn
        
        void* eax_3 = data_5301b0 + arg10 * 0xd4 + 0x581f8
        *(eax_3 + 0xc) = 0x43340000
        *(eax_3 + 0x14) = 0x41a00000
        bool o_3 = unimplemented  {imul edx, dword [ebp+0x20], 0x2}
        
        if (o_3)
            sub_403010()
            noreturn
        
        *(eax_3 + 8) = fconvert.s(float.t(arg10 * 2))
        *(eax_3 + 0x20) = 0
        *(eax_3 + 0x1c) = 0
        *(eax_3 + 0x24) = 0
        *(eax_3 + 0x18) = 0
    
    if (arg2 s<= 0)
        void* const var_11c_1 = "Fehler 0: movecard from zero index at spi"
        int32_t var_e8
        sub_408e1c(arg1, &var_e8)
        int32_t var_120_1 = var_e8
        void* const var_124_1 = &data_504288
        int32_t var_ec
        sub_408e1c(arg2, &var_ec)
        int32_t var_128_1 = var_ec
        void* const var_12c_1 = ":spi"
        int32_t var_f0
        sub_408e1c(arg3, &var_f0)
        int32_t var_130_1 = var_f0
        void* const var_134_1 = &data_504288
        int32_t var_f4
        sub_408e1c(arg10, &var_f4)
        int32_t var_138_1 = var_f4
        char* var_e4
        sub_404138(&var_e4, 8)
        sub_44cde0()
    
    *data_53041c = 2
    void var_dc
    struct _EXCEPTION_REGISTRATION_RECORD** esp
    int32_t esi_3
    int32_t edi_2
    
    if (arg1 s>= 0)
        bool o_7 = unimplemented  {imul eax, ebx, 0x2345}
        
        if (o_7)
            sub_403010()
            noreturn
        
        bool o_8 = unimplemented  {imul edx, edi, 0x35}
        
        if (o_8)
            sub_403010()
            noreturn
        
        __builtin_memcpy(&var_dc, data_5301b0 + arg1 * 0x8d14 + arg2 * 0xd4 - 0x8de8, 0xd4)
        edi_2 = arg2
        esi_3 = arg3
        esp = &ExceptionList
    else
        if (neg.d(arg1) == 0x80000000)
            sub_403010()
            noreturn
        
        bool o_5 = unimplemented  {imul eax, eax, 0x2345}
        
        if (o_5)
            sub_403010()
            noreturn
        
        bool o_6 = unimplemented  {imul edx, edi, 0x35}
        
        if (o_6)
            sub_403010()
            noreturn
        
        __builtin_memcpy(&var_dc, data_5302e4 + neg.d(arg1) * 0x8d14 + arg2 * 0xd4 - 0x8de8, 0xd4)
        edi_2 = arg2
        esi_3 = arg3
        esp = &ExceptionList
    
    if (esi_3 == 0xc)
        *(data_5301b0 + 0x7b37c) = 1
        int32_t eax_18 = arg1 * 0x2345
        bool o_9 = unimplemented  {imul eax, ebx, 0x2345}
        
        if (o_9)
            sub_403010()
            noreturn
        
        bool o_10 = unimplemented  {imul ecx, edi, 0x35}
        
        if (o_10)
            sub_403010()
            noreturn
        
        void* edx_12
        edx_12.b = *(data_5301b0 + (eax_18 << 2) + edi_2 * 0xd4 - 0x8de8)
        *(data_5301b0 + 0x72a04) = edx_12.b
        bool o_11 = unimplemented  {imul edx, edi, 0x35}
        
        if (o_11)
            sub_403010()
            noreturn
        
        void* eax_19
        eax_19.b = *(data_5301b0 + (eax_18 << 2) + edi_2 * 0xd4 - 0x8de7)
        *(data_5301b0 + 0x72a05) = eax_19.b
    
    void* eax_20 = data_53070c
    int32_t temp5 = *eax_20
    *eax_20 += 1
    
    if (add_overflow(temp5, 1))
        sub_403010()
        noreturn
    
    void* eax_21 = data_53070c
    *eax_21
    int32_t eax_22 = *eax_21 * 5
    bool o_13 = unimplemented  {imul eax, dword [eax], 0x5}
    
    if (o_13)
        sub_403010()
        noreturn
    
    void* ecx
    ecx.b = arg7
    *(data_5304b0 + (eax_22 << 2) - 0x14) = ecx.b
    *(data_5304b0 + (eax_22 << 2) - 0x10) = arg1
    *(data_5304b0 + (eax_22 << 2) - 0xc) = edi_2
    *(data_5304b0 + (eax_22 << 2) - 8) = esi_3
    void* ecx_2 = arg10
    *(data_5304b0 + (eax_22 << 2) - 4) = ecx_2
    int32_t var_20 = *data_53070c
    void* eax_25 = data_53070c
    *eax_25
    bool o_14 = unimplemented  {imul eax, dword [eax], 0x5}
    
    if (o_14)
        sub_403010()
        noreturn
    
    int32_t eax_29
    
    if (*(data_5304b0 + *eax_25 * 0x14 - 0x10) - 0xb u< 3 && esi_3 != arg1)
        if (neg.d(esi_3) == 0x80000000)
            sub_403010()
            noreturn
        
        if (arg1 != neg.d(esi_3))
            bool o_16 = unimplemented  {imul eax, ebx, 0x2345}
            
            if (o_16)
                sub_403010()
                noreturn
            
            int32_t eax_32 = *(data_5301b0 + arg1 * 0x8d14 - 0x39c)
            
            if (edi_2 == eax_32)
            label_503cd3:
                int32_t var_11c_4 = edi_2
                eax_29, ecx_2 = sub_51ad40(*data_5303b8, 0xc)
                esp = &ExceptionList
            else
                bool o_17 = unimplemented  {imul edx, ebx, 0x2345}
                
                if (o_17)
                    sub_403010()
                    noreturn
                
                ecx_2 = data_5301b0
                
                if (add_overflow(eax_32, 0xffffffff))
                    sub_403010()
                    noreturn
                
                if (edi_2 == eax_32 - 1)
                    goto label_503cd3
    
    char var_74 = 3
    eax_29.b = arg8
    char var_7f = eax_29.b
    int32_t var_38 = esi_3
    void* var_34 = arg10
    int32_t var_78 = 0x41700000
    float var_78_1 = fconvert.s(float.t(*(data_530598 + 0x30)))
    
    if (sub_4c1e14() != 0)
        var_78_1 = fconvert.s(sub_4c1dd8(ecx_2) * fconvert.t(var_78_1))
    
    if (esi_3 - 7 u< 4)
        float var_78_2 = fconvert.s(data_50429c * fconvert.t(var_78_1))
    
    int32_t var_7c = 0
    char var_10 = 0
    char var_f = 0
    int32_t var_c = 0
    
    if (arg5 == 0xffffffff)
        int32_t var_c_1 = 0xffffffff
    
    int32_t var_14 = 0
    int32_t var_1c = arg6
    fconvert.t(arg4) - fconvert.t(-1f)
    float var_18 = arg4
    
    if (arg7 == 8)
        int32_t var_78_3 = 0x3f800000
        int32_t var_28 = 0x2020
    else
        float eax_42
        
        if (arg7 == 7)
            int32_t var_28_1 = 0x2021
            
            if (arg5 != 0)
                int32_t var_24_2 = 0x3f000000
                int32_t var_28_3 = 0x12121
            else
                long double st0_2 = sub_402d38()
                long double temp12_1 = fconvert.t(0.5f)
                st0_2 - temp12_1
                eax_42.w = (st0_2 < temp12_1 ? 1 : 0) << 8
                    | (is_unordered.t(st0_2, temp12_1) ? 1 : 0) << 0xa
                    | (st0_2 == temp12_1 ? 1 : 0) << 0xe
                
                if (test_bit(eax_42:1.b, 0))
                    int32_t temp15_1 = var_28_1
                    var_28_1 += 0x80
                    
                    if (add_overflow(temp15_1, 0x80))
                        sub_403010()
                        noreturn
                
                long double st0_3 = sub_402d38()
                long double temp14_1 = fconvert.t(0.5f)
                st0_3 - temp14_1
                eax_42.w = (st0_3 < temp14_1 ? 1 : 0) << 8
                    | (is_unordered.t(st0_3, temp14_1) ? 1 : 0) << 0xa
                    | (st0_3 == temp14_1 ? 1 : 0) << 0xe
                
                if (test_bit(eax_42:1.b, 0))
                    if (add_overflow(var_28_1, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(var_28_1 - 1, 2))
                        sub_403010()
                        noreturn
                    
                    int32_t var_28_2 = var_28_1 + 1
                
                float var_24_1 = fconvert.s(sub_402d38())
        else if (arg7 == 0x10)
            int32_t var_28_4 = 0x12241
        else if (arg7 == 0xe)
            int32_t var_28_5 = 0x2020
        else if (arg7 == 0xf)
            int32_t var_28_6 = 0
        else if (arg7 == 5)
            int32_t var_28_7 = 0x2020
        else if (arg7 == 4)
            int32_t var_28_8 = 0x3231
            
            if (arg5 != 0)
                int32_t var_24_4 = 0x3f000000
            else
                long double st0_5 = sub_402d38()
                long double temp19_1 = fconvert.t(0.5f)
                st0_5 - temp19_1
                eax_42.w = (st0_5 < temp19_1 ? 1 : 0) << 8
                    | (is_unordered.t(st0_5, temp19_1) ? 1 : 0) << 0xa
                    | (st0_5 == temp19_1 ? 1 : 0) << 0xe
                
                if (test_bit(eax_42:1.b, 0))
                    int32_t temp21_1 = var_28_8
                    var_28_8 += 0x80
                    
                    if (add_overflow(temp21_1, 0x80))
                        sub_403010()
                        noreturn
                
                long double st0_6 = sub_402d38()
                long double temp20_1 = fconvert.t(0.5f)
                st0_6 - temp20_1
                eax_42.w = (st0_6 < temp20_1 ? 1 : 0) << 8
                    | (is_unordered.t(st0_6, temp20_1) ? 1 : 0) << 0xa
                    | (st0_6 == temp20_1 ? 1 : 0) << 0xe
                
                if (test_bit(eax_42:1.b, 0))
                    if (add_overflow(var_28_8, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(var_28_8 - 1, 2))
                        sub_403010()
                        noreturn
                    
                    int32_t var_28_9 = var_28_8 + 1
                
                float var_24_3 = fconvert.s(sub_402d38())
        else if (arg7 == 3)
            int32_t var_28_10
            
            var_28_10 = esi_3 != 0xffffffff ? 0x2021 : 0x2421
            
            if (arg5 != 0)
                int32_t var_24_6 = 0x3f4ccccd
                int32_t var_c_2 = arg5
                
                if (add_overflow(var_28_10, 0xffffffff))
                    sub_403010()
                    noreturn
                
                if (add_overflow(var_28_10 - 1, 2))
                    sub_403010()
                    noreturn
                
                int32_t var_28_12 = var_28_10 + 1
            else
                long double st0_8 = sub_402d38()
                long double temp26_1 = fconvert.t(0.5f)
                st0_8 - temp26_1
                eax_42.w = (st0_8 < temp26_1 ? 1 : 0) << 8
                    | (is_unordered.t(st0_8, temp26_1) ? 1 : 0) << 0xa
                    | (st0_8 == temp26_1 ? 1 : 0) << 0xe
                
                if (test_bit(eax_42:1.b, 0))
                    int32_t temp34_1 = var_28_10
                    var_28_10 += 0x80
                    
                    if (add_overflow(temp34_1, 0x80))
                        sub_403010()
                        noreturn
                
                long double st0_9 = sub_402d38()
                long double temp33_1 = fconvert.t(0.5f)
                st0_9 - temp33_1
                eax_42.w = (st0_9 < temp33_1 ? 1 : 0) << 8
                    | (is_unordered.t(st0_9, temp33_1) ? 1 : 0) << 0xa
                    | (st0_9 == temp33_1 ? 1 : 0) << 0xe
                
                if (test_bit(eax_42:1.b, 0))
                    if (add_overflow(var_28_10, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(var_28_10 - 1, 2))
                        sub_403010()
                        noreturn
                    
                    int32_t var_28_11 = var_28_10 + 1
                
                int32_t var_24_5 = 0x3f800000
            
            if (arg1 == 0x10 && *(*data_5301f4 + 4) == 2 && *(*data_5301f4 + 0xffec) == 4
                    && *(*data_5301f4 + 0xfff0) == 4)
                if (esi_3 != 0xffffffff)
                    int32_t var_28_14 = 0x1230
                else
                    int32_t var_28_13 = 0
        else if (arg9 == 0)
            int32_t var_28_22 = 0
        else if (esi_3 != 0xb)
            if (arg1 != 1)
                int32_t var_28_20 = 0x1471
                int32_t var_14_1 = 1
                long double st0_13 = sub_402d38()
                long double temp23_1 = fconvert.t(0.5f)
                st0_13 - temp23_1
                eax_42.w = (st0_13 < temp23_1 ? 1 : 0) << 8
                    | (is_unordered.t(st0_13, temp23_1) ? 1 : 0) << 0xa
                    | (st0_13 == temp23_1 ? 1 : 0) << 0xe
                
                if (test_bit(eax_42:1.b, 0))
                    int32_t temp29_1 = var_28_20
                    var_28_20 += 0x80
                    
                    if (add_overflow(temp29_1, 0x80))
                        sub_403010()
                        noreturn
                
                long double st0_14 = sub_402d38()
                long double temp28_1 = fconvert.t(0.5f)
                st0_14 - temp28_1
                eax_42.w = (st0_14 < temp28_1 ? 1 : 0) << 8
                    | (is_unordered.t(st0_14, temp28_1) ? 1 : 0) << 0xa
                    | (st0_14 == temp28_1 ? 1 : 0) << 0xe
                
                if (test_bit(eax_42:1.b, 0))
                    if (add_overflow(var_28_20, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(var_28_20 - 1, 2))
                        sub_403010()
                        noreturn
                    
                    int32_t var_28_21 = var_28_20 + 1
                
                float var_24_8 = fconvert.s(sub_402d38())
            else
                int32_t var_28_17 = 0x61
                long double st0_10 = sub_402d38()
                long double temp24_1 = fconvert.t(0.5f)
                st0_10 - temp24_1
                eax_42.w = (st0_10 < temp24_1 ? 1 : 0) << 8
                    | (is_unordered.t(st0_10, temp24_1) ? 1 : 0) << 0xa
                    | (st0_10 == temp24_1 ? 1 : 0) << 0xe
                
                if (test_bit(eax_42:1.b, 0))
                    int32_t temp31_1 = var_28_17
                    var_28_17 += 0x80
                    
                    if (add_overflow(temp31_1, 0x80))
                        sub_403010()
                        noreturn
                
                long double st0_11 = sub_402d38()
                long double temp30_1 = fconvert.t(0.5f)
                st0_11 - temp30_1
                eax_42.w = (st0_11 < temp30_1 ? 1 : 0) << 8
                    | (is_unordered.t(st0_11, temp30_1) ? 1 : 0) << 0xa
                    | (st0_11 == temp30_1 ? 1 : 0) << 0xe
                
                if (test_bit(eax_42:1.b, 0))
                    if (add_overflow(var_28_17, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(var_28_17 - 1, 2))
                        sub_403010()
                        noreturn
                    
                    int32_t var_28_18 = var_28_17 + 1
                
                float var_24_7 = fconvert.s(sub_402d38())
                int32_t var_28_19 = 0x1071
            
            if (*(*data_5301f4 + 4) == 2 && *(*data_5301f4 + 0xffec) == 4
                    && *(*data_5301f4 + 0xfff0) == 4)
                int32_t var_1c_1 = 0x3d4ccccd
                
                if (arg1 != 1)
                    int32_t var_24_10 = 0
                    int32_t var_14_2 = 1
                else
                    int32_t var_24_9 = 0
        else if (arg1 != 1)
            int32_t var_28_16 = 0x8c89
        else
            int32_t var_28_15 = 0x161
    
    char var_80
    
    if (var_80 != 0)
        float var_d8
        float var_68
        float var_d8_1 = fconvert.s(fconvert.t(var_d8) + fconvert.t(var_68))
        float var_d4
        float var_64
        float var_d4_1 = fconvert.s(fconvert.t(var_d4) + fconvert.t(var_64))
        float var_d0
        float var_60
        float var_d0_1 = fconvert.s(fconvert.t(var_d0) + fconvert.t(var_60))
    
    char var_80_1 = 1
    int32_t var_30 = arg1
    int32_t var_2c = edi_2
    
    if (arg1 s< 0)
        if (neg.d(arg1) == 0x80000000)
            sub_403010()
            noreturn
        
        bool o_37 = unimplemented  {imul eax, ebx, 0x2345}
        
        if (o_37)
            sub_403010()
            noreturn
        
        bool o_38 = unimplemented  {imul edx, edi, 0x35}
        
        if (o_38)
            sub_403010()
            noreturn
        
        __builtin_memcpy(data_5302e4 + neg.d(arg1) * 0x8d14 + edi_2 * 0xd4 - 0x8de8, &var_dc, 0xd4)
    else if (edi_2 s< 0 || edi_2 s> 0xa6)
        int32_t var_11c_5 = 0x5042b8
        int32_t var_fc
        sub_408e1c(arg1, &var_fc)
        int32_t var_120_4 = var_fc
        void* const var_124_2 = &data_504288
        sub_408e1c(edi_2, &var_100)
        int32_t var_128_2 = var_100
        char* var_f8
        sub_404138(&var_f8, 4)
        sub_474260(*data_530304, var_f8)
        void var_8
        esp = &var_8
    else
        bool o_39 = unimplemented  {imul eax, ebx, 0x2345}
        
        if (o_39)
            sub_403010()
            noreturn
        
        bool o_40 = unimplemented  {imul edx, edi, 0x35}
        
        if (o_40)
            sub_403010()
            noreturn
        
        __builtin_memcpy(data_5301b0 + arg1 * 0x8d14 + edi_2 * 0xd4 - 0x8de8, &var_dc, 0xd4)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_504240
    return sub_403e1c(&var_100, 8)
}
