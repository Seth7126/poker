// ============================================================
// 函数名称: sub_4bca48
// 虚拟地址: 0x4bca48
// WARP GUID: 958a98ca-eed8-57e2-980c-c2140ff1c196
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4cc8a8, sub_517880, sub_4c1e5c, sub_52c3cc, sub_403010, sub_5182d8, sub_517a94, sub_4cc848, sub_517dc0, sub_5182a4, sub_4bc79c, sub_517edc, sub_517b0c, sub_4bc640, sub_5179dc, sub_4bc4ec, sub_4cd498, sub_4cc7ec, sub_517c4c, sub_51783c, sub_4bc9dc, sub_4c3f8c
// [被调用的父级函数]: sub_4bdac0, sub_4bc4ec
// ============================================================

int32_t* __fastcallsub_4bca48(int32_t arg1, int32_t arg2, void* arg3 @ eax, int32_t* arg4, float arg5, char arg6, char arg7, int32_t arg8, int32_t arg9, char arg10, void* arg11)
{
    // 第一条实际指令: *arg4 = 0
    *arg4 = 0
    arg4[1] = 0
    int32_t* eax_1
    eax_1.b = arg10
    void var_168
    sub_4cc8a8(eax_1.b, &var_168)
    void var_26c
    __builtin_memcpy(&var_26c, arg1, 0x104)
    void var_b90
    __builtin_memcpy(&var_b90, arg2, 0x104)
    sub_51783c(&var_b90, &var_26c)
    sub_52c3cc(0, 0, &var_b90, 0)
    
    if (add_overflow(arg9, arg8))
        sub_403010()
        noreturn
    
    int32_t var_8 = arg9 + arg8
    int32_t eax_7
    char temp3_1
    
    if (arg6 != 0)
        eax_7.b = arg10
        temp3_1 = eax_7.b
        eax_7.b -= 6
    
    if (arg6 != 0 && temp3_1 == 6)
        eax_7.b = 1
    else
        eax_7 = 0
    
    char var_149 = eax_7.b
    int32_t* i = 8
    int32_t* result_2 = 6
    int32_t var_118 = 1
    char var_12d = 0
    char var_12e = 0
    char var_12f = 0
    eax_7.b = arg10
    int32_t* result
    result.b = (eax_7 - 1).b - 2
    
    if ((eax_7 - 1).b u< 2)
        var_12e = 1
    else
        char temp5_1 = (result - 1).b
        result.b = (result - 1).b - 2
        
        if (temp5_1 u< 2)
            var_12e = 1
        else
            result.b -= 2
            char temp7_1 = result.b
            result.b -= 3
            
            if (temp7_1 u< 3)
                var_12e = 1
    
    result.b = arg10
    char temp6 = result.b
    result.b -= 3
    char temp8_1
    
    if (temp6 != 3)
        temp8_1 = result.b
        result.b -= 4
    
    if (temp6 == 3 || temp8_1 == 4)
        var_12f = 1
    
    result.b = arg10
    char temp9 = result.b
    result.b -= 6
    char temp10_1
    
    if (temp9 != 6)
        result.b -= 3
        temp10_1 = result.b
        result.b -= 2
    
    if (temp9 == 6 || temp10_1 u< 2)
        var_12d = 1
    
    do
        int32_t* ebx_1 = nullptr
        void var_114
        __builtin_memcpy(&var_114, &var_b90, 0x104)
        char var_152
        int32_t __saved_ebp
        int32_t edx_2
        
        if (var_152 != 0)
            result, edx_2 = sub_4bc9dc(&__saved_ebp)
            ebx_1.b = result.b ^ 1
        
        if (ebx_1.b == 0)
            int16_t j_16 = 0
            int16_t result_1 = 0
            int16_t var_680_1 = 0
            int32_t var_c_1 = var_8
            int32_t* i_1 = i
            char var_153
            
            if (arg10 == 1)
                var_153 = 1
            
            char var_474
            int32_t var_370
            int32_t var_164
            int16_t j_17
            
            do
                int32_t var_15c
                
                if (var_12f != 0)
                    if (sx.d(result_1) s>= var_15c)
                        i_1 = result_2
                    else
                        i_1 = i
                char eax_13 = 0
                int32_t j_8 = sx.d(j_17)
                char var_154
                
                if (j_8 s> 0)
                    int32_t var_10_1 = 1
                    void var_113
                    ebx_1 = &var_113
                    int32_t j
                    
                    do
                        if (var_152 == 0 || sx.d(*ebx_1) == var_118)
                            if (var_154 != 0)
                                if (i_1 == sx.d(*(ebx_1 - 1)))
                                    goto label_4bcc5d
                            else if (var_153 == 0 || i_1 == sx.d(*(ebx_1 - 1)))
                            label_4bcc5d:
                                sub_5179dc(&var_474, sub_517b0c(&var_114, var_10_1))
                                eax_13 = 1
                                break
                                break
                            
                            if (*(ebx_1 - 1) == 8 && i_1 == 0xe)
                                goto label_4bcc5d
                        
                        var_10_1 += 1
                        ebx_1 = &ebx_1[1]
                        j = j_8
                        j_8 -= 1
                    while (j != 1)
                
                if (eax_13 == 0 && var_c_1 s> 0)
                    int32_t j_9 = sx.d(*(arg3 + 0x100))
                    
                    if (j_9 s> 0)
                        int32_t var_10_2 = 1
                        ebx_1 = arg3 + 1
                        int32_t j_1
                        
                        do
                            if ((var_152 == 0 || sx.d(*ebx_1) == var_118) && ((var_154 == 0
                                    && var_153 == 0) || i_1 == sx.d(*(ebx_1 - 1))
                                    || (*(ebx_1 - 1) == 8 && i_1 == 0xe)))
                                sub_5179dc(&var_474, *(ebx_1 - 1))
                                sub_5179dc(&var_370, *(ebx_1 - 1))
                                eax_13 = 1
                                int32_t temp16_1 = var_c_1
                                var_c_1 -= 1
                                
                                if (not(add_overflow(temp16_1, 0xffffffff)))
                                    break
                                
                                sub_403010()
                                noreturn
                            
                            var_10_2 += 1
                            ebx_1 = &ebx_1[1]
                            j_1 = j_9
                            j_9 -= 1
                        while (j_1 != 1)
                
                if (var_c_1 s< 0 || eax_13 == 0)
                    ebx_1.b = 1
                else
                    ebx_1 = nullptr
                
                if (arg10 == 5 || arg10 - 9 u< 2)
                    if (i_1 == 0xe || (arg10 == 0xa && i_1 == 9))
                    label_4bcd5a:
                        
                        if (i_1 == 9)
                            ebx_1.b = 1
                        else
                            int32_t* i_3
                            i_3, edx_2 = sub_4cc848(i_1)
                            i_1 = i_3
                    else
                        if (sub_4c1e5c() == 0)
                            goto label_4bcd5a
                        
                        if (i_1 != 9)
                            int32_t* i_2
                            i_2, edx_2 = sub_4cc848(i_1)
                            i_1 = i_2
                        else
                            i_1 = 0xe
                
                int32_t eax_19
                eax_19.b = sx.d(result_1) s>= var_164
                ebx_1.b |= eax_19.b
            while (ebx_1.b == 0)
            
            result = sx.d(result_1)
            
            if (result == var_164)
                if (arg10 != 0xa)
                label_4bcdc7:
                    void var_578
                    __builtin_memcpy(&var_578, &var_474, 0x104)
                    int32_t ebx_3 = 0
                    int16_t var_478
                    
                    while (true)
                        result.w = var_478
                        
                        if (result.w s>= 5)
                            break
                        
                        int32_t temp17_1 = ebx_3
                        ebx_3 += 1
                        
                        if (add_overflow(temp17_1, 1))
                            sub_403010()
                            noreturn
                        
                        if (j_17 s<= 0)
                            result, edx_2 = sub_5179dc(&var_578, *(arg3 + (sx.d(result.w) << 2) - 4))
                        else
                            result, edx_2 = sub_5179dc(&var_578, sub_517b0c(&var_114, 1))
                    
                    int32_t var_150_1 = 0x3f800000
                    int16_t var_784
                    char var_36f
                    int32_t var_780
                    
                    if (var_149 == 0)
                        if (arg6 != 0 && result_1 s< 5 && ebx_3 s>= 1)
                            var_149 = 1
                            int32_t j_12 = sx.d(result_1)
                            
                            if (j_12 s> 0)
                                int32_t var_10_5 = 1
                                int32_t* ebx_7 = &var_474
                                int32_t j_2
                                
                                do
                                    if (sub_5182a4(arg11, *ebx_7) == 0)
                                        var_149 = 0
                                    
                                    var_10_5 += 1
                                    ebx_7 = &ebx_7[1]
                                    j_2 = j_12
                                    j_12 -= 1
                                while (j_2 != 1)
                        
                        if (var_149 != 0)
                            int32_t var_150_4 = 0
                            __builtin_memcpy(&var_780, arg11, 0x104)
                            int32_t j_13 = sx.d(result_1)
                            
                            if (j_13 s> 0)
                                int32_t var_10_6 = 1
                                char* ebx_8 = &var_474
                                int32_t j_3
                                
                                do
                                    sub_517a94(&var_780, *ebx_8)
                                    var_10_6 += 1
                                    ebx_8 = &ebx_8[4]
                                    j_3 = j_13
                                    j_13 -= 1
                                while (j_3 != 1)
                            
                            sub_52c3cc(0, 0, &var_780, 0)
                            int32_t j_14 = sx.d(*(arg3 + 0x100))
                            
                            if (j_14 s> 0)
                                int32_t var_10_7 = 1
                                void* ebx_9 = arg3
                                int32_t j_4
                                
                                do
                                    if (sub_4cc7ec(*ebx_9) s> sub_4cc7ec(var_780))
                                        unimplemented  {fild st0, word [eax+0x100]}
                                        unimplemented  {fdivr st0, dword [0x4bdab4]}
                                        unimplemented  {fadd dword [ebp-0x14c]}
                                        float var_150_5 =
                                            fconvert.s(unimplemented  {fstp dword [ebp-0x14c], st0})
                                        unimplemented  {fstp dword [ebp-0x14c], st0}
                                    
                                    var_10_7 += 1
                                    ebx_9 += 4
                                    j_4 = j_14
                                    j_14 -= 1
                                while (j_4 != 1)
                    else if (j_16 s>= 1)
                        __builtin_memcpy(&var_780, arg3, 0x104)
                        edx_2.b = var_36f
                        sub_517880(&var_780, edx_2.b)
                        int32_t j_10 = sx.d(j_16)
                        
                        if (j_10 s> 0)
                            int32_t var_10_3 = 1
                            int32_t* ebx_4 = &var_370
                            int32_t j_5
                            
                            do
                                sub_517a94(&var_780, *ebx_4)
                                var_10_3 += 1
                                ebx_4 = &ebx_4[1]
                                j_5 = j_10
                                j_10 -= 1
                            while (j_5 != 1)
                        
                        int32_t var_150_2 = 0
                        int32_t eax_30
                        eax_30, edx_2 = sub_517c4c(&var_474, var_370)
                        int32_t esi_4 = sx.d(var_680_1)
                        
                        if (esi_4 s>= 0)
                            int32_t j_11 = esi_4 + 1
                            int32_t var_10_4 = 0
                            int16_t* ebx_5 = &var_784
                            int32_t j_6
                            
                            do
                                if (var_10_4 s> 0)
                                    *(&var_478 + (eax_30 << 2)) = *ebx_5
                                
                                int32_t eax_33
                                eax_33, edx_2 = sub_4c3f8c(&var_474, arg11)
                                
                                if (eax_33 == 1)
                                    int32_t eax_34 = sx.d(var_680_1)
                                    
                                    if (add_overflow(eax_34, 1))
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t var_b94_1 = eax_34 + 1
                                    unimplemented  {fild st0, dword [ebp-0xb90]}
                                    unimplemented  {fdivr st0, dword [0x4bdab4]}
                                    unimplemented  {fadd dword [ebp-0x14c]}
                                    float var_150_3 =
                                        fconvert.s(unimplemented  {fstp dword [ebp-0x14c], st0})
                                    unimplemented  {fstp dword [ebp-0x14c], st0}
                                
                                var_10_4 += 1
                                ebx_5 = &ebx_5[2]
                                j_6 = j_11
                                j_11 -= 1
                            while (j_6 != 1)
                    int32_t var_138_1 = 0
                    int16_t eax_45
                    eax_45.b = arg10
                    eax_45.b -= 9
                    char temp18_1 = eax_45.b
                    eax_45.b -= 2
                    int16_t top
                    
                    if (temp18_1 u>= 2)
                        eax_45.b = arg10
                        char temp20_1 = eax_45.b
                        eax_45.b -= 6
                        
                        if (temp20_1 != 6)
                            eax_45.b = arg10
                            char temp21_1 = eax_45.b
                            eax_45.b -= 5
                            char var_36c
                            
                            if (temp21_1 != 5)
                                eax_45.b = arg10
                                char temp23_1 = eax_45.b
                                eax_45.b -= 8
                                
                                if (temp23_1 != 8)
                                    eax_45.b = arg10
                                    char temp25_1 = eax_45.b
                                    eax_45.b -= 7
                                    
                                    if (temp25_1 != 7)
                                        eax_45.b = arg10
                                        char temp31_1 = eax_45.b
                                        eax_45.b -= 4
                                        
                                        if (temp31_1 != 4)
                                            eax_45.b = arg10
                                            char temp36_1 = eax_45.b
                                            eax_45.b -= 3
                                            
                                            if (temp36_1 != 3)
                                                eax_45.b = arg10
                                                char temp41_1 = eax_45.b
                                                eax_45.b -= 2
                                                
                                                if (temp41_1 != 2)
                                                    eax_45.b = arg10
                                                    char temp49_1 = eax_45.b
                                                    eax_45.b -= 1
                                                    
                                                    if (temp49_1 == 1)
                                                        int32_t var_138_28 = 0x3f800000
                                                else
                                                    edx_2.b = var_474
                                                    int32_t eax_101 = sub_517edc(arg3, edx_2.b)
                                                    
                                                    if (j_16 s< 1)
                                                        int32_t var_138_27 = 0x3f800000
                                                    else
                                                        int32_t j_35 = sx.d(j_16)
                                                        
                                                        if (add_overflow(j_35, var_c_1))
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        sub_4bc640(j_35 + var_c_1, 
                                                            sx.d(*(arg3 + 0x100)), eax_101, sx.d(j_16))
                                                        unimplemented  {call 0x4bc640}
                                                        float var_138_26 = fconvert.s(unimplemented  {
                                                            fstp dword [ebp-0x134], st0})
                                                        unimplemented  {fstp dword [ebp-0x134], st0}
                                            else if (j_16 == 2)
                                                eax_45.b = var_370.b
                                                
                                                if (eax_45.b != var_36c)
                                                    edx_2.b = var_370.b
                                                    int32_t eax_91 = sub_517edc(arg3, edx_2.b)
                                                    edx_2.b = var_36c
                                                    int32_t eax_93 = sub_517edc(arg3, edx_2.b)
                                                    int32_t* var_ce4_21 = &__saved_ebp
                                                    int32_t j_33 = sx.d(j_16)
                                                    
                                                    if (add_overflow(j_33, var_c_1))
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    sub_4bc79c(j_33 + var_c_1, sx.d(*(arg3 + 0x100)), 
                                                        eax_91, 0f, 0f, 0, 0, 0, eax_93, 1)
                                                    float var_138_23 = fconvert.s(unimplemented  {fstp 
                                                        dword [ebp-0x134], st0})
                                                    unimplemented  {fstp dword [ebp-0x134], st0}
                                                    top += 3
                                                else
                                                    edx_2.b = var_370.b
                                                    int32_t eax_87 = sub_517edc(arg3, edx_2.b)
                                                    int32_t j_32 = sx.d(j_16)
                                                    
                                                    if (add_overflow(j_32, var_c_1))
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    sub_4bc640(j_32 + var_c_1, sx.d(*(arg3 + 0x100)), 
                                                        eax_87, sx.d(j_16))
                                                    unimplemented  {call 0x4bc640}
                                                    float var_138_22 = fconvert.s(unimplemented  {fstp 
                                                        dword [ebp-0x134], st0})
                                                    unimplemented  {fstp dword [ebp-0x134], st0}
                                            else if (j_16 == 1)
                                                edx_2.b = var_370.b
                                                int32_t eax_97 = sub_517edc(arg3, edx_2.b)
                                                int32_t j_34 = sx.d(j_16)
                                                
                                                if (add_overflow(j_34, var_c_1))
                                                    sub_403010()
                                                    noreturn
                                                
                                                sub_4bc640(j_34 + var_c_1, sx.d(*(arg3 + 0x100)), 
                                                    eax_97, sx.d(j_16))
                                                unimplemented  {call 0x4bc640}
                                                float var_138_24 = fconvert.s(unimplemented  {fstp 
                                                    dword [ebp-0x134], st0})
                                                unimplemented  {fstp dword [ebp-0x134], st0}
                                            else if (j_16 == 0)
                                                int32_t var_138_25 = 0x3f800000
                                        else
                                            edx_2.b = var_474
                                            int32_t eax_83 = sub_517edc(arg3, edx_2.b)
                                            
                                            if (j_16 s< 1)
                                                int32_t var_138_21 = 0x3f800000
                                            else
                                                int32_t j_31 = sx.d(j_16)
                                                
                                                if (add_overflow(j_31, var_c_1))
                                                    sub_403010()
                                                    noreturn
                                                
                                                sub_4bc640(j_31 + var_c_1, sx.d(*(arg3 + 0x100)), 
                                                    eax_83, sx.d(j_16))
                                                unimplemented  {call 0x4bc640}
                                                float var_138_20 = fconvert.s(unimplemented  {fstp 
                                                    dword [ebp-0x134], st0})
                                                unimplemented  {fstp dword [ebp-0x134], st0}
                                    else if (j_16 == 2)
                                        eax_45.b = var_370.b
                                        
                                        if (eax_45.b != var_36c)
                                            edx_2.b = var_370.b
                                            int32_t eax_73 = sub_517edc(arg3, edx_2.b)
                                            edx_2.b = var_36c
                                            int32_t eax_75 = sub_517edc(arg3, edx_2.b)
                                            int32_t* var_ce4_17 = &__saved_ebp
                                            int32_t j_29 = sx.d(j_16)
                                            
                                            if (add_overflow(j_29, var_c_1))
                                                sub_403010()
                                                noreturn
                                            
                                            sub_4bc79c(j_29 + var_c_1, sx.d(*(arg3 + 0x100)), eax_73, 
                                                0f, 0f, 0, 0, 0, eax_75, 1)
                                            float var_138_17 =
                                                fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                                            unimplemented  {fstp dword [ebp-0x134], st0}
                                            top += 3
                                        else
                                            edx_2.b = var_370.b
                                            int32_t eax_69 = sub_517edc(arg3, edx_2.b)
                                            int32_t j_28 = sx.d(j_16)
                                            
                                            if (add_overflow(j_28, var_c_1))
                                                sub_403010()
                                                noreturn
                                            
                                            sub_4bc640(j_28 + var_c_1, sx.d(*(arg3 + 0x100)), eax_69, 
                                                sx.d(j_16))
                                            unimplemented  {call 0x4bc640}
                                            float var_138_16 =
                                                fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                                            unimplemented  {fstp dword [ebp-0x134], st0}
                                    else if (j_16 == 1)
                                        edx_2.b = var_370.b
                                        int32_t eax_79 = sub_517edc(arg3, edx_2.b)
                                        int32_t j_30 = sx.d(j_16)
                                        
                                        if (add_overflow(j_30, var_c_1))
                                            sub_403010()
                                            noreturn
                                        
                                        sub_4bc640(j_30 + var_c_1, sx.d(*(arg3 + 0x100)), eax_79, 
                                            sx.d(j_16))
                                        unimplemented  {call 0x4bc640}
                                        float var_138_18 =
                                            fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                                        unimplemented  {fstp dword [ebp-0x134], st0}
                                    else if (j_16 == 0)
                                        int32_t var_138_19 = 0x3f800000
                                else
                                    edx_2.b = var_474
                                    int32_t eax_65 = sub_517edc(arg3, edx_2.b)
                                    
                                    if (j_16 s< 1)
                                        int32_t var_138_15 = 0x3f800000
                                    else
                                        int32_t j_27 = sx.d(j_16)
                                        
                                        if (add_overflow(j_27, var_c_1))
                                            sub_403010()
                                            noreturn
                                        
                                        sub_4bc640(j_27 + var_c_1, sx.d(*(arg3 + 0x100)), eax_65, 
                                            sx.d(j_16))
                                        unimplemented  {call 0x4bc640}
                                        float var_138_14 =
                                            fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                                        unimplemented  {fstp dword [ebp-0x134], st0}
                            else if (j_16 != 0)
                                edx_2.b = var_370.b
                                int32_t eax_56 = sub_517edc(arg3, edx_2.b)
                                
                                if (j_16 s>= 2)
                                    int32_t j_24 = sx.d(j_16)
                                    
                                    if (add_overflow(j_24, var_c_1))
                                        sub_403010()
                                        noreturn
                                    
                                    sub_4bc640(j_24 + var_c_1, sx.d(*(arg3 + 0x100)), eax_56, 
                                        sx.d(j_16))
                                    unimplemented  {call 0x4bc640}
                                    float var_138_11 =
                                        fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                                    unimplemented  {fstp dword [ebp-0x134], st0}
                                else if (j_16 == 2)
                                    edx_2.b = var_36c
                                    int32_t eax_60 = sub_517edc(arg3, edx_2.b)
                                    int32_t* var_ce4_13 = &__saved_ebp
                                    int32_t j_25 = sx.d(j_16)
                                    
                                    if (add_overflow(j_25, var_c_1))
                                        sub_403010()
                                        noreturn
                                    
                                    sub_4bc79c(j_25 + var_c_1, sx.d(*(arg3 + 0x100)), eax_56, 0f, 0f, 
                                        0, 0, 0, eax_60, 1)
                                    float var_138_12 =
                                        fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                                    unimplemented  {fstp dword [ebp-0x134], st0}
                                    top += 3
                                else if (j_16 == 1)
                                    int32_t* var_ce4_14 = &__saved_ebp
                                    int32_t j_26 = sx.d(j_16)
                                    
                                    if (add_overflow(j_26, var_c_1))
                                        sub_403010()
                                        noreturn
                                    
                                    sub_4bc79c(j_26 + var_c_1, sx.d(*(arg3 + 0x100)), eax_56, 0f, 0f, 
                                        0, 0, 0, 0, 0)
                                    float var_138_13 =
                                        fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                                    unimplemented  {fstp dword [ebp-0x134], st0}
                                    top += 3
                            else
                                int32_t var_138_10 = 0x3f800000
                        else if (j_16 != 0)
                            edx_2.b = var_36f
                            int32_t eax_48
                            eax_48, edx_2 = sub_517dc0(arg3, edx_2.b)
                            
                            if (j_16 s>= 2)
                                int32_t j_21 = sx.d(j_16)
                                
                                if (add_overflow(j_21, var_c_1))
                                    sub_403010()
                                    noreturn
                                
                                sub_4bc640(j_21 + var_c_1, sx.d(*(arg3 + 0x100)), eax_48, sx.d(j_16))
                                unimplemented  {call 0x4bc640}
                                float var_138_7 =
                                    fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                                unimplemented  {fstp dword [ebp-0x134], st0}
                            else if (j_16 == 2)
                                int32_t* var_ce4_10 = &__saved_ebp
                                
                                if (add_overflow(eax_48, 0xffffffff))
                                    sub_403010()
                                    noreturn
                                
                                int32_t j_22 = sx.d(j_16)
                                
                                if (add_overflow(j_22, var_c_1))
                                    sub_403010()
                                    noreturn
                                
                                sub_4bc79c(j_22 + var_c_1, sx.d(*(arg3 + 0x100)), eax_48, 0f, 0f, 0, 0, 
                                    0, eax_48 - 1, 1)
                                float var_138_8 =
                                    fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                                unimplemented  {fstp dword [ebp-0x134], st0}
                                top += 3
                            else if (j_16 == 1)
                                int32_t* var_ce4_11 = &__saved_ebp
                                int32_t j_23 = sx.d(j_16)
                                
                                if (add_overflow(j_23, var_c_1))
                                    sub_403010()
                                    noreturn
                                
                                sub_4bc79c(j_23 + var_c_1, sx.d(*(arg3 + 0x100)), eax_48, 0f, 0f, 0, 0, 
                                    0, 0, 0)
                                float var_138_9 =
                                    fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                                unimplemented  {fstp dword [ebp-0x134], st0}
                                top += 3
                        else
                            int32_t var_138_6 = 0x3f800000
                    else if (j_16 s>= 2)
                        int32_t j_18 = sx.d(j_16)
                        
                        if (add_overflow(j_18, var_c_1))
                            sub_403010()
                            noreturn
                        
                        sub_4bc640(j_18 + var_c_1, sx.d(*(arg3 + 0x100)), sx.d(j_16), sx.d(j_16))
                        unimplemented  {call 0x4bc640}
                        float var_138_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                        unimplemented  {fstp dword [ebp-0x134], st0}
                    else if (j_16 == 2)
                        int32_t* var_ce4_7 = &__saved_ebp
                        int32_t j_19 = sx.d(j_16)
                        
                        if (add_overflow(j_19, var_c_1))
                            sub_403010()
                            noreturn
                        
                        sub_4bc79c(j_19 + var_c_1, sx.d(*(arg3 + 0x100)), 1, 0f, 0f, 0, 0, 0, 1, 1)
                        float var_138_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                        unimplemented  {fstp dword [ebp-0x134], st0}
                        top += 3
                    else if (j_16 == 1)
                        int32_t* var_ce4_8 = &__saved_ebp
                        int32_t j_20 = sx.d(j_16)
                        
                        if (add_overflow(j_20, var_c_1))
                            sub_403010()
                            noreturn
                        
                        sub_4bc79c(j_20 + var_c_1, sx.d(*(arg3 + 0x100)), 1, 0f, 0f, 0, 0, 0, 0, 0)
                        float var_138_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                        unimplemented  {fstp dword [ebp-0x134], st0}
                        top += 3
                    else if (j_16 == 0)
                        int32_t var_138_5 = 0x3f800000
                    
                    if (j_16 == 1)
                        sub_517a94(arg3, var_370)
                    
                    unimplemented  {fld st0, dword [eax]}
                    unimplemented  {fadd dword [ebp-0x134]}
                    long double temp35_1 = fconvert.t(1f)
                    unimplemented  {fcomp st0, dword [0x4bdab4]} f- temp35_1
                    bool c0_1 = unimplemented  {fcomp st0, dword [0x4bdab4]} f< temp35_1
                    bool c2_1 = is_unordered.t(unimplemented  {fcomp st0, dword [0x4bdab4]}, temp35_1)
                    bool c3_1 = unimplemented  {fcomp st0, dword [0x4bdab4]} f== temp35_1
                    unimplemented  {fcomp st0, dword [0x4bdab4]}
                    
                    if (not(test_bit(
                            ((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                                | (top & 7) << 0xb):1.b, 
                            0)))
                        unimplemented  {fld st0, dword [0x4bdab4]}
                        unimplemented  {fsub st0, dword [eax]}
                        float var_138_29 = fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                        unimplemented  {fstp dword [ebp-0x134], st0}
                    
                    if (arg6 == 0)
                        unimplemented  {fld st0, dword [eax]}
                        unimplemented  {fadd dword [ebp-0x134]}
                        result = arg4
                        *result = fconvert.s(unimplemented  {fstp dword [eax], st0})
                        unimplemented  {fstp dword [eax], st0}
                    else if (var_149 == 0)
                        result, edx_2 = sub_4c3f8c(&var_578, arg11)
                        
                        if (result == 1)
                            unimplemented  {fld st0, dword [eax]}
                            unimplemented  {fadd dword [ebp-0x134]}
                            result = arg4
                            *result = fconvert.s(unimplemented  {fstp dword [eax], st0})
                            unimplemented  {fstp dword [eax], st0}
                        else if (result == 0)
                            unimplemented  {fld st0, dword [ebp-0x134]}
                            unimplemented  {fmul st0, dword [0x4bdab8]}
                            unimplemented  {fmul st0, dword [0x4bdabc]}
                            unimplemented  {fadd dword [eax]}
                            result = arg4
                            *result = fconvert.s(unimplemented  {fstp dword [eax], st0})
                            unimplemented  {fstp dword [eax], st0}
                    else
                        unimplemented  {fld st0, dword [ebp-0x134]}
                        unimplemented  {fmul st0, dword [ebp-0x14c]}
                        unimplemented  {fadd dword [eax]}
                        result = arg4
                        *result = fconvert.s(unimplemented  {fstp dword [eax], st0})
                        unimplemented  {fstp dword [eax], st0}
                    
                    if (arg7 != 0)
                        void var_884
                        __builtin_memcpy(&var_884, arg2, 0x104)
                        void var_988
                        __builtin_memcpy(&var_988, arg3, 0x104)
                        sub_51783c(&var_884, &var_370)
                        int32_t j_15 = sx.d(j_16)
                        
                        if (j_15 s> 0)
                            int32_t var_c_15 = 1
                            int32_t* ebx_10 = &var_370
                            int32_t j_7
                            
                            do
                                sub_517a94(&var_988, *ebx_10)
                                var_c_15 += 1
                                ebx_10 = &ebx_10[1]
                                j_7 = j_15
                                j_15 -= 1
                            while (j_7 != 1)
                        
                        char var_cc4
                        sub_4cd498(&var_474, 0, &var_cc4)
                        void* eax_112
                        eax_112.b = var_cc4
                        int32_t* var_ce4_24 = &__saved_ebp
                        eax_112.b = eax_112.b
                        int32_t eax_113 = sx.d(var_784)
                        
                        if (add_overflow(5, neg.d(eax_113)))
                            sub_403010()
                            noreturn
                        
                        int32_t var_cd4
                        sub_4bc4ec(&var_884, &var_988, arg5, &var_cd4, &var_578, 5 - eax_113.b, eax_112)
                        int32_t var_13c_1 = var_cd4
                        unimplemented  {fld st0, dword [ebp-0x138]}
                        unimplemented  {fmul st0, dword [ebp-0x134]}
                        unimplemented  {fadd dword [eax+0x4]}
                        result = arg4
                        result[1] = fconvert.s(unimplemented  {fstp dword [eax+0x4], st0})
                        unimplemented  {fstp dword [eax+0x4], st0}
                else
                    edx_2.b = 8
                    result, edx_2 = sub_5182d8(&var_474, edx_2.b)
                    
                    if (result.b != 0)
                        goto label_4bcdc7
        
        if (var_12f == 0)
            if (var_12d != 0)
                int32_t temp11_1 = var_118
                var_118 += 1
                
                if (add_overflow(temp11_1, 1))
                    sub_403010()
                    noreturn
            
            if (var_12e != 0 && ((var_12d != 0 && var_118 s> 4) || var_12d == 0))
                if (var_118 s> 4)
                    var_118 = 1
                
                if (i == 9)
                    i = 0xffffffff
                else
                    result, edx_2 = sub_4cc848(i)
                    i = result
        else if (i == 0xa && result_2 == 9)
            i = 0xffffffff
        else if (result_2 != 9)
            int32_t* result_3
            result_3, edx_2 = sub_4cc848(result_2)
            result_2 = result_3
            result = result_2
            
            if (result == i)
                result, edx_2 = sub_4cc848(result_2)
                result_2 = result
        else
            result, edx_2 = sub_4cc848(i)
            i = result
            
            if (arg10 != 7)
                result, edx_2 = sub_4cc848(i)
                result_2 = result
            else
                result_2 = 8
        
        if (var_12f == 0 && (var_118 s> 4 || var_12d == 0) && var_12e == 0)
            break
    while (i != 0xffffffff)
    
    return result
}
