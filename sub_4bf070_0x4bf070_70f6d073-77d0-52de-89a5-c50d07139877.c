// ============================================================
// 函数名称: sub_4bf070
// 虚拟地址: 0x4bf070
// WARP GUID: 70f6d073-77d0-52de-89a5-c50d07139877
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4cc8a8, sub_517e44, sub_517880, sub_4c1e5c, sub_517eb4, sub_52c3cc, sub_4beb4c, sub_403010, sub_4be6c0, sub_5182d8, sub_517a94, sub_4cc848, sub_5182a4, sub_517b0c, sub_5179dc, sub_4cd498, sub_4cc7ec, sub_4bedc4, sub_4be3e0, sub_517c4c, sub_5177dc, sub_4bf004, sub_4be9f0, sub_4c3f8c, sub_4be88c
// [被调用的父级函数]: sub_4c02cc, sub_4be6c0
// ============================================================

int32_t* __fastcallsub_4bf070(int32_t arg1, int32_t arg2, void* arg3 @ eax, int32_t* arg4, float arg5, float arg6, char arg7, char arg8, int32_t arg9, int32_t arg10, char arg11, void* arg12)
{
    // 第一条实际指令: *arg4 = 0
    *arg4 = 0
    arg4[1] = 0
    arg4[2] = 0
    arg4[3] = 0
    int32_t* eax_3
    eax_3.b = arg11
    void var_16c
    sub_4cc8a8(eax_3.b, &var_16c)
    void var_270
    __builtin_memcpy(&var_270, arg1, 0x104)
    void var_ba4
    __builtin_memcpy(&var_ba4, arg2, 0x104)
    sub_5177dc(&var_ba4, &var_270)
    float j_18 = 0f
    int32_t edx_2 = sub_52c3cc(0, 0, &var_ba4, j_18.b)
    
    if (add_overflow(arg10, arg9))
        sub_403010()
        noreturn
    
    float j_46 = arg10 + arg9
    float eax_9
    char temp3_1
    
    if (arg7 != 0)
        eax_9.b = arg11
        temp3_1 = eax_9.b
        eax_9.b -= 6
    
    if (arg7 != 0 && temp3_1 == 6)
        eax_9.b = 1
    else
        eax_9 = 0f
    
    char var_145 = eax_9.b
    int32_t* i = 8
    int32_t* result_2 = 6
    int32_t var_118 = 1
    char var_12d = 0
    char var_12e = 0
    char var_12f = 0
    eax_9.b = arg11
    int32_t* result
    result.b = (eax_9 i- 1).b - 2
    
    if ((eax_9 i- 1).b u< 2)
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
    
    result.b = arg11
    char temp6 = result.b
    result.b -= 3
    char temp8_1
    
    if (temp6 != 3)
        temp8_1 = result.b
        result.b -= 4
    
    if (temp6 == 3 || temp8_1 == 4)
        var_12f = 1
    
    result.b = arg11
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
        __builtin_memcpy(&var_114, &var_ba4, 0x104)
        char var_156
        int32_t __saved_ebp
        
        if (var_156 != 0)
            j_18 = &__saved_ebp
            result, edx_2 = sub_4bf004(j_18)
            ebx_1.b = result.b ^ 1
        
        if (ebx_1.b == 0)
            int16_t j_16 = 0
            int16_t result_1 = 0
            int16_t var_684_1 = 0
            float j_44 = j_46
            int32_t* i_1 = i
            char var_157
            
            if (arg11 == 1)
                var_157 = 1
            
            char var_478
            int32_t var_374
            int32_t var_168
            int16_t j_17
            
            do
                int32_t var_160
                
                if (var_12f != 0)
                    if (sx.d(result_1) s>= var_160)
                        i_1 = result_2
                    else
                        i_1 = i
                char eax_15 = 0
                int32_t j_8 = sx.d(j_17)
                char var_158
                
                if (j_8 s> 0)
                    int32_t var_10_1 = 1
                    void var_113
                    ebx_1 = &var_113
                    int32_t j
                    
                    do
                        if (var_156 != 0)
                            edx_2 = sx.d(*ebx_1)
                        
                        if (var_156 == 0 || edx_2 == var_118)
                            if (var_158 == 0 && var_157 == 0)
                            label_4bf295:
                                edx_2 = sub_5179dc(&var_478, sub_517b0c(&var_114, var_10_1))
                                eax_15 = 1
                                break
                            
                            edx_2 = sx.d(*(ebx_1 - 1))
                            
                            if (i_1 == edx_2)
                                goto label_4bf295
                            
                            if (*(ebx_1 - 1) == 8 && i_1 == 0xe)
                                goto label_4bf295
                        
                        var_10_1 += 1
                        ebx_1 = &ebx_1[1]
                        j = j_8
                        j_8 -= 1
                    while (j != 1)
                
                if (eax_15 == 0 && j_44 s> 0)
                    int32_t j_9 = sx.d(*(arg3 + 0x100))
                    
                    if (j_9 s> 0)
                        int32_t var_10_2 = 1
                        ebx_1 = arg3 + 1
                        void* var_154_1 = &var_114
                        int32_t j_1
                        
                        do
                            if (var_156 != 0)
                                edx_2 = sx.d(*ebx_1)
                            
                            if (var_156 == 0 || edx_2 == var_118)
                                if ((var_158 != 0 || var_157 != 0) && i_1 != sx.d(*(ebx_1 - 1)))
                                    edx_2 = var_154_1
                                
                                if ((var_158 == 0 && var_157 == 0) || i_1 == sx.d(*(ebx_1 - 1))
                                        || (*edx_2 == 8 && i_1 == 0xe))
                                    sub_5179dc(&var_478, *(ebx_1 - 1))
                                    edx_2 = sub_5179dc(&var_374, *(ebx_1 - 1))
                                    eax_15 = 1
                                    float j_47 = j_44
                                    j_44 -= 1
                                    
                                    if (add_overflow(j_47, 0xffffffff))
                                        sub_403010()
                                        noreturn
                                    
                                    break
                                    break
                            
                            var_10_2 += 1
                            var_154_1 += 4
                            ebx_1 = &ebx_1[1]
                            j_1 = j_9
                            j_9 -= 1
                        while (j_1 != 1)
                
                if (j_44 s< 0 || eax_15 == 0)
                    ebx_1.b = 1
                else
                    ebx_1 = nullptr
                
                if (arg11 == 5 || arg11 - 9 u< 2)
                    if (i_1 == 0xe || (arg11 == 0xa && i_1 == 9))
                    label_4bf3ae:
                        
                        if (i_1 == 9)
                            ebx_1.b = 1
                        else
                            int32_t* i_3
                            i_3, edx_2 = sub_4cc848(i_1)
                            i_1 = i_3
                    else
                        if (sub_4c1e5c() == 0)
                            goto label_4bf3ae
                        
                        if (i_1 != 9)
                            int32_t* i_2
                            i_2, edx_2 = sub_4cc848(i_1)
                            i_1 = i_2
                        else
                            i_1 = 0xe
                
                int32_t eax_21
                eax_21.b = sx.d(result_1) s>= var_168
                ebx_1.b |= eax_21.b
            while (ebx_1.b == 0)
            
            result = sx.d(result_1)
            
            if (result == var_168)
                if (arg11 != 0xa)
                label_4bf409:
                    j_18 = j_44
                    void var_57c
                    __builtin_memcpy(&var_57c, &var_478, 0x104)
                    float j_45 = j_18
                    int32_t ebx_3 = 0
                    int16_t var_47c
                    
                    while (true)
                        result.w = var_47c
                        
                        if (result.w s>= 5)
                            break
                        
                        int32_t temp17_1 = ebx_3
                        ebx_3 += 1
                        
                        if (add_overflow(temp17_1, 1))
                            sub_403010()
                            noreturn
                        
                        if (j_17 s<= 0)
                            result, edx_2 = sub_5179dc(&var_57c, *(arg3 + (sx.d(result.w) << 2) - 4))
                        else
                            result, edx_2 = sub_5179dc(&var_57c, sub_517b0c(&var_114, 1))
                    
                    int32_t var_14c_1 = 0x3f800000
                    char var_373
                    int32_t var_784
                    
                    if (var_145 == 0)
                        if (arg7 != 0 && result_1 s< 5 && ebx_3 s>= 1)
                            var_145 = 1
                            int32_t j_12 = sx.d(result_1)
                            
                            if (j_12 s> 0)
                                int32_t var_10_5 = 1
                                int32_t* var_154_4 = &var_478
                                int32_t j_2
                                
                                do
                                    edx_2 = *var_154_4
                                    
                                    if (sub_5182a4(arg12, edx_2) == 0)
                                        var_145 = 0
                                    
                                    var_10_5 += 1
                                    var_154_4 = &var_154_4[1]
                                    j_2 = j_12
                                    j_12 -= 1
                                while (j_2 != 1)
                        
                        if (var_145 != 0)
                            int32_t var_14c_4 = 0
                            j_18 = j_45
                            __builtin_memcpy(&var_784, arg12, 0x104)
                            j_45 = j_18
                            int32_t j_13 = sx.d(result_1)
                            
                            if (j_13 s> 0)
                                int32_t var_10_6 = 1
                                char* var_154_5 = &var_478
                                int32_t j_3
                                
                                do
                                    sub_517a94(&var_784, *var_154_5)
                                    var_10_6 += 1
                                    var_154_5 = &var_154_5[4]
                                    j_3 = j_13
                                    j_13 -= 1
                                while (j_3 != 1)
                            
                            j_18 = 0f
                            edx_2 = sub_52c3cc(0, 0, &var_784, j_18.b)
                            int32_t j_14 = sx.d(*(arg3 + 0x100))
                            
                            if (j_14 s> 0)
                                int32_t var_10_7 = 1
                                void* var_154_6 = arg3
                                int32_t j_4
                                
                                do
                                    int32_t eax_50 = sub_4cc7ec(*var_154_6)
                                    int32_t eax_52
                                    eax_52, edx_2 = sub_4cc7ec(var_784)
                                    
                                    if (eax_50 s> eax_52)
                                        unimplemented  {fild st0, word [eax+0x100]}
                                        unimplemented  {fdivr st0, dword [0x4c02b4]}
                                        unimplemented  {fadd dword [ebp-0x148]}
                                        float var_14c_5 =
                                            fconvert.s(unimplemented  {fstp dword [ebp-0x148], st0})
                                        unimplemented  {fstp dword [ebp-0x148], st0}
                                    
                                    var_10_7 += 1
                                    var_154_6 += 4
                                    j_4 = j_14
                                    j_14 -= 1
                                while (j_4 != 1)
                    else if (j_16 s>= 1)
                        j_18 = j_45
                        __builtin_memcpy(&var_784, arg3, 0x104)
                        j_45 = j_18
                        edx_2.b = var_373
                        sub_517880(&var_784, edx_2.b)
                        int32_t j_10 = sx.d(j_16)
                        
                        if (j_10 s> 0)
                            int32_t var_10_3 = 1
                            int32_t* var_154_2 = &var_374
                            int32_t j_5
                            
                            do
                                sub_517a94(&var_784, *var_154_2)
                                var_10_3 += 1
                                var_154_2 = &var_154_2[1]
                                j_5 = j_10
                                j_10 -= 1
                            while (j_5 != 1)
                        
                        int32_t var_14c_2 = 0
                        int32_t eax_33
                        eax_33, edx_2 = sub_517c4c(&var_478, var_374)
                        int32_t esi_4 = sx.d(var_684_1)
                        
                        if (esi_4 s>= 0)
                            int32_t j_11 = esi_4 + 1
                            int32_t var_10_4 = 0
                            void var_788
                            void* var_154_3 = &var_788
                            int32_t j_6
                            
                            do
                                if (var_10_4 s> 0)
                                    *(&var_47c + (eax_33 << 2)) = *var_154_3
                                
                                int32_t eax_37
                                eax_37, edx_2 = sub_4c3f8c(&var_478, arg12)
                                
                                if (eax_37 == 1)
                                    int32_t eax_38 = sx.d(var_684_1)
                                    
                                    if (add_overflow(eax_38, 1))
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t var_ba8_1 = eax_38 + 1
                                    unimplemented  {fild st0, dword [ebp-0xba4]}
                                    unimplemented  {fdivr st0, dword [0x4c02b4]}
                                    unimplemented  {fadd dword [ebp-0x148]}
                                    float var_14c_3 =
                                        fconvert.s(unimplemented  {fstp dword [ebp-0x148], st0})
                                    unimplemented  {fstp dword [ebp-0x148], st0}
                                
                                var_10_4 += 1
                                var_154_3 += 4
                                j_6 = j_11
                                j_11 -= 1
                            while (j_6 != 1)
                    float var_138_1 = 0f
                    int16_t top
                    
                    if (arg11 - 9 u< 2)
                        j_18 = &__saved_ebp
                        sub_4be3e0(&var_374, edx_2)
                        unimplemented  {call 0x4be3e0}
                        float j_37 = fconvert.s(unimplemented  {fstp dword [ebp-0x14c], st0})
                        unimplemented  {fstp dword [ebp-0x14c], st0}
                        
                        if (j_16 s>= 2)
                            j_18 = j_37
                            int32_t j_19 = sx.d(j_16)
                            
                            if (add_overflow(j_19, j_45))
                                sub_403010()
                                noreturn
                            
                            sub_4be88c(j_19 i+ j_45, sx.d(*(arg3 + 0x100)), sx.d(j_16), sx.d(j_16), 
                                j_18)
                            unimplemented  {call 0x4be88c}
                            var_138_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                            unimplemented  {fstp dword [ebp-0x134], st0}
                        else if (j_16 == 2)
                            j_18 = &__saved_ebp
                            int32_t j_20 = sx.d(j_16)
                            
                            if (add_overflow(j_20, j_45))
                                sub_403010()
                                noreturn
                            
                            sub_4beb4c(j_20 i+ j_45, sx.d(*(arg3 + 0x100)), 1, 0f, 0f, 0, 0, 0, 1, 1, 
                                j_37)
                            var_138_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                            unimplemented  {fstp dword [ebp-0x134], st0}
                            top += 3
                        else if (j_16 == 1)
                            j_18 = &__saved_ebp
                            int32_t j_21 = sx.d(j_16)
                            
                            if (add_overflow(j_21, j_45))
                                sub_403010()
                                noreturn
                            
                            sub_4beb4c(j_21 i+ j_45, sx.d(*(arg3 + 0x100)), 1, 0f, 0f, 0, 0, 0, 0, 0, 
                                j_37)
                            var_138_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                            unimplemented  {fstp dword [ebp-0x134], st0}
                            top += 3
                        else if (j_16 == 0)
                            var_138_1 = 1f
                    else
                        char var_370
                        
                        if (arg11 != 6)
                            switch (arg11)
                                case 1
                                    var_138_1 = 1f
                                case 2
                                    j_18 = &__saved_ebp
                                    sub_4be3e0(&var_374, edx_2)
                                    unimplemented  {call 0x4be3e0}
                                    float j_43 =
                                        fconvert.s(unimplemented  {fstp dword [ebp-0x14c], st0})
                                    unimplemented  {fstp dword [ebp-0x14c], st0}
                                    int32_t eax_119 = sub_517eb4(arg3, var_478)
                                    
                                    if (j_16 s< 1)
                                        var_138_1 = 1f
                                    else
                                        j_18 = j_43
                                        int32_t j_36 = sx.d(j_16)
                                        
                                        if (add_overflow(j_36, j_45))
                                            sub_403010()
                                            noreturn
                                        
                                        sub_4be88c(j_36 i+ j_45, sx.d(*(arg3 + 0x100)), eax_119, 
                                            sx.d(j_16), j_18)
                                        unimplemented  {call 0x4be88c}
                                        var_138_1 =
                                            fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                                        unimplemented  {fstp dword [ebp-0x134], st0}
                                case 3
                                    j_18 = &__saved_ebp
                                    sub_4be3e0(&var_374, edx_2)
                                    unimplemented  {call 0x4be3e0}
                                    float j_42 =
                                        fconvert.s(unimplemented  {fstp dword [ebp-0x14c], st0})
                                    unimplemented  {fstp dword [ebp-0x14c], st0}
                                    
                                    if (j_16 != 2)
                                        if (j_16 == 1)
                                            int32_t eax_114 = sub_517eb4(arg3, var_374.b)
                                            j_18 = j_42
                                            int32_t j_35 = sx.d(j_16)
                                            
                                            if (add_overflow(j_35, j_45))
                                                sub_403010()
                                                noreturn
                                            
                                            sub_4be88c(j_35 i+ j_45, sx.d(*(arg3 + 0x100)), eax_114, 
                                                sx.d(j_16), j_18)
                                            unimplemented  {call 0x4be88c}
                                            var_138_1 =
                                                fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                                            unimplemented  {fstp dword [ebp-0x134], st0}
                                        else if (j_16 == 0)
                                            var_138_1 = 1f
                                    else if (var_374.b != var_370)
                                        int32_t eax_108 = sub_517eb4(arg3, var_374.b)
                                        int32_t eax_110 = sub_517eb4(arg3, var_370)
                                        j_18 = &__saved_ebp
                                        int32_t j_34 = sx.d(j_16)
                                        
                                        if (add_overflow(j_34, j_45))
                                            sub_403010()
                                            noreturn
                                        
                                        sub_4beb4c(j_34 i+ j_45, sx.d(*(arg3 + 0x100)), eax_108, 0f, 
                                            0f, 0, 0, 0, eax_110, 1, j_42)
                                        var_138_1 =
                                            fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                                        unimplemented  {fstp dword [ebp-0x134], st0}
                                        top += 3
                                    else
                                        int32_t eax_104 = sub_517eb4(arg3, var_374.b)
                                        j_18 = j_42
                                        int32_t j_33 = sx.d(j_16)
                                        
                                        if (add_overflow(j_33, j_45))
                                            sub_403010()
                                            noreturn
                                        
                                        sub_4be88c(j_33 i+ j_45, sx.d(*(arg3 + 0x100)), eax_104, 
                                            sx.d(j_16), j_18)
                                        unimplemented  {call 0x4be88c}
                                        var_138_1 =
                                            fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                                        unimplemented  {fstp dword [ebp-0x134], st0}
                                case 4
                                    j_18 = &__saved_ebp
                                    sub_4be3e0(&var_374, edx_2)
                                    unimplemented  {call 0x4be3e0}
                                    float j_41 =
                                        fconvert.s(unimplemented  {fstp dword [ebp-0x14c], st0})
                                    unimplemented  {fstp dword [ebp-0x14c], st0}
                                    int32_t eax_98 = sub_517eb4(arg3, var_478)
                                    
                                    if (j_16 s< 1)
                                        var_138_1 = 1f
                                    else
                                        j_18 = j_41
                                        int32_t j_32 = sx.d(j_16)
                                        
                                        if (add_overflow(j_32, j_45))
                                            sub_403010()
                                            noreturn
                                        
                                        sub_4be88c(j_32 i+ j_45, sx.d(*(arg3 + 0x100)), eax_98, 
                                            sx.d(j_16), j_18)
                                        unimplemented  {call 0x4be88c}
                                        var_138_1 =
                                            fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                                        unimplemented  {fstp dword [ebp-0x134], st0}
                                case 5
                                    j_18 = &__saved_ebp
                                    sub_4be3e0(&var_374, edx_2)
                                    unimplemented  {call 0x4be3e0}
                                    float j_38 =
                                        fconvert.s(unimplemented  {fstp dword [ebp-0x14c], st0})
                                    unimplemented  {fstp dword [ebp-0x14c], st0}
                                    
                                    if (j_16 != 0)
                                        int32_t eax_67 = sub_517eb4(arg3, var_374.b)
                                        
                                        if (j_16 s>= 2)
                                            j_18 = j_38
                                            int32_t j_25 = sx.d(j_16)
                                            
                                            if (add_overflow(j_25, j_45))
                                                sub_403010()
                                                noreturn
                                            
                                            sub_4be88c(j_25 i+ j_45, sx.d(*(arg3 + 0x100)), eax_67, 
                                                sx.d(j_16), j_18)
                                            unimplemented  {call 0x4be88c}
                                            var_138_1 =
                                                fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                                            unimplemented  {fstp dword [ebp-0x134], st0}
                                        else if (j_16 == 2)
                                            int32_t eax_71 = sub_517eb4(arg3, var_370)
                                            j_18 = &__saved_ebp
                                            int32_t j_26 = sx.d(j_16)
                                            
                                            if (add_overflow(j_26, j_45))
                                                sub_403010()
                                                noreturn
                                            
                                            sub_4beb4c(j_26 i+ j_45, sx.d(*(arg3 + 0x100)), eax_67, 0f, 
                                                0f, 0, 0, 0, eax_71, 1, j_38)
                                            var_138_1 =
                                                fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                                            unimplemented  {fstp dword [ebp-0x134], st0}
                                            top += 3
                                        else if (j_16 == 1)
                                            j_18 = &__saved_ebp
                                            int32_t j_27 = sx.d(j_16)
                                            
                                            if (add_overflow(j_27, j_45))
                                                sub_403010()
                                                noreturn
                                            
                                            sub_4beb4c(j_27 i+ j_45, sx.d(*(arg3 + 0x100)), eax_67, 0f, 
                                                0f, 0, 0, 0, 0, 0, j_38)
                                            var_138_1 =
                                                fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                                            unimplemented  {fstp dword [ebp-0x134], st0}
                                            top += 3
                                    else
                                        var_138_1 = 1f
                                case 7
                                    j_18 = &__saved_ebp
                                    sub_4be3e0(&var_374, edx_2)
                                    unimplemented  {call 0x4be3e0}
                                    float j_40 =
                                        fconvert.s(unimplemented  {fstp dword [ebp-0x14c], st0})
                                    unimplemented  {fstp dword [ebp-0x14c], st0}
                                    
                                    if (j_16 != 2)
                                        if (j_16 == 1)
                                            int32_t eax_93 = sub_517eb4(arg3, var_374.b)
                                            j_18 = j_40
                                            int32_t j_31 = sx.d(j_16)
                                            
                                            if (add_overflow(j_31, j_45))
                                                sub_403010()
                                                noreturn
                                            
                                            sub_4be88c(j_31 i+ j_45, sx.d(*(arg3 + 0x100)), eax_93, 
                                                sx.d(j_16), j_18)
                                            unimplemented  {call 0x4be88c}
                                            var_138_1 =
                                                fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                                            unimplemented  {fstp dword [ebp-0x134], st0}
                                        else if (j_16 == 0)
                                            var_138_1 = 1f
                                    else if (var_374.b != var_370)
                                        int32_t eax_87 = sub_517eb4(arg3, var_374.b)
                                        int32_t eax_89 = sub_517eb4(arg3, var_370)
                                        j_18 = &__saved_ebp
                                        int32_t j_30 = sx.d(j_16)
                                        
                                        if (add_overflow(j_30, j_45))
                                            sub_403010()
                                            noreturn
                                        
                                        sub_4beb4c(j_30 i+ j_45, sx.d(*(arg3 + 0x100)), eax_87, 0f, 0f, 
                                            0, 0, 0, eax_89, 1, j_40)
                                        var_138_1 =
                                            fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                                        unimplemented  {fstp dword [ebp-0x134], st0}
                                        top += 3
                                    else
                                        int32_t eax_83 = sub_517eb4(arg3, var_374.b)
                                        j_18 = j_40
                                        int32_t j_29 = sx.d(j_16)
                                        
                                        if (add_overflow(j_29, j_45))
                                            sub_403010()
                                            noreturn
                                        
                                        sub_4be88c(j_29 i+ j_45, sx.d(*(arg3 + 0x100)), eax_83, 
                                            sx.d(j_16), j_18)
                                        unimplemented  {call 0x4be88c}
                                        var_138_1 =
                                            fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                                        unimplemented  {fstp dword [ebp-0x134], st0}
                                case 8
                                    j_18 = &__saved_ebp
                                    sub_4be3e0(&var_374, edx_2)
                                    unimplemented  {call 0x4be3e0}
                                    float j_39 =
                                        fconvert.s(unimplemented  {fstp dword [ebp-0x14c], st0})
                                    unimplemented  {fstp dword [ebp-0x14c], st0}
                                    int32_t eax_77 = sub_517eb4(arg3, var_478)
                                    
                                    if (j_16 s< 1)
                                        var_138_1 = 1f
                                    else
                                        j_18 = j_39
                                        int32_t j_28 = sx.d(j_16)
                                        
                                        if (add_overflow(j_28, j_45))
                                            sub_403010()
                                            noreturn
                                        
                                        sub_4be88c(j_28 i+ j_45, sx.d(*(arg3 + 0x100)), eax_77, 
                                            sx.d(j_16), j_18)
                                        unimplemented  {call 0x4be88c}
                                        var_138_1 =
                                            fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                                        unimplemented  {fstp dword [ebp-0x134], st0}
                        else if (j_16 != 0)
                            edx_2.b = var_373
                            int32_t eax_58 = sub_517e44(arg3, edx_2.b)
                            
                            if (j_16 s>= 2)
                                j_18 = sx.d(j_16)
                                int32_t j_22 = sx.d(j_16)
                                
                                if (add_overflow(j_22, j_45))
                                    sub_403010()
                                    noreturn
                                
                                sub_4be9f0(j_22 i+ j_45, sx.d(*(arg3 + 0x100)), eax_58, j_18)
                                unimplemented  {call 0x4be9f0}
                                var_138_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                                unimplemented  {fstp dword [ebp-0x134], st0}
                            else if (j_16 == 2)
                                j_18 = &__saved_ebp
                                
                                if (add_overflow(eax_58, 0xffffffff))
                                    sub_403010()
                                    noreturn
                                
                                int32_t j_23 = sx.d(j_16)
                                
                                if (add_overflow(j_23, j_45))
                                    sub_403010()
                                    noreturn
                                
                                sub_4bedc4(j_23 i+ j_45, sx.d(*(arg3 + 0x100)), eax_58, 0f, 0f, 0, 0, 
                                    0, eax_58 - 1, 1)
                                var_138_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                                unimplemented  {fstp dword [ebp-0x134], st0}
                                top += 3
                            else if (j_16 == 1)
                                j_18 = &__saved_ebp
                                int32_t j_24 = sx.d(j_16)
                                
                                if (add_overflow(j_24, j_45))
                                    sub_403010()
                                    noreturn
                                
                                sub_4bedc4(j_24 i+ j_45, sx.d(*(arg3 + 0x100)), eax_58, 0f, 0f, 0, 0, 
                                    0, 0, 0)
                                var_138_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                                unimplemented  {fstp dword [ebp-0x134], st0}
                                top += 3
                        else
                            var_138_1 = 1f
                    
                    if (j_16 == 1)
                        sub_517a94(arg3, var_374)
                    
                    unimplemented  {fld st0, dword [eax]}
                    unimplemented  {fadd dword [ebp-0x134]}
                    long double temp35_1 = fconvert.t(1f)
                    unimplemented  {fcomp st0, dword [0x4c02b4]} f- temp35_1
                    bool c0_1 = unimplemented  {fcomp st0, dword [0x4c02b4]} f< temp35_1
                    bool c2_1 = is_unordered.t(unimplemented  {fcomp st0, dword [0x4c02b4]}, temp35_1)
                    bool c3_1 = unimplemented  {fcomp st0, dword [0x4c02b4]} f== temp35_1
                    unimplemented  {fcomp st0, dword [0x4c02b4]}
                    
                    if (not(test_bit(
                            ((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                                | (top & 7) << 0xb):1.b, 
                            0)))
                        unimplemented  {fld st0, dword [0x4c02b4]}
                        unimplemented  {fsub st0, dword [eax]}
                        var_138_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x134], st0})
                        unimplemented  {fstp dword [ebp-0x134], st0}
                    
                    if (arg7 == 0)
                        unimplemented  {fld st0, dword [eax]}
                        unimplemented  {fadd dword [ebp-0x134]}
                        *arg4 = fconvert.s(unimplemented  {fstp dword [eax], st0})
                        unimplemented  {fstp dword [eax], st0}
                    else if (var_145 == 0)
                        int32_t eax_126 = sub_4c3f8c(&var_57c, arg12)
                        
                        if (eax_126 == 1)
                            unimplemented  {fld st0, dword [eax]}
                            unimplemented  {fadd dword [ebp-0x134]}
                            *arg4 = fconvert.s(unimplemented  {fstp dword [eax], st0})
                            unimplemented  {fstp dword [eax], st0}
                        else if (eax_126 == 0)
                            unimplemented  {fld st0, dword [ebp-0x134]}
                            unimplemented  {fmul st0, dword [0x4c02b8]}
                            unimplemented  {fmul st0, dword [0x4c02bc]}
                            unimplemented  {fadd dword [eax]}
                            *arg4 = fconvert.s(unimplemented  {fstp dword [eax], st0})
                            unimplemented  {fstp dword [eax], st0}
                    else
                        unimplemented  {fld st0, dword [ebp-0x134]}
                        unimplemented  {fmul st0, dword [ebp-0x148]}
                        unimplemented  {fadd dword [eax]}
                        *arg4 = fconvert.s(unimplemented  {fstp dword [eax], st0})
                        unimplemented  {fstp dword [eax], st0}
                    
                    result = *arg4
                    edx_2 = arg4
                    *(edx_2 + 8) = result
                    
                    if (arg8 != 0)
                        unimplemented  {fld st0, tword [0x4c02c0]}
                        long double temp54_1 = fconvert.t(var_138_1)
                        unimplemented  {fcomp st0, dword [ebp-0x134]} f- temp54_1
                        bool c0_2 = unimplemented  {fcomp st0, dword [ebp-0x134]} f< temp54_1
                        bool c2_2 =
                            is_unordered.t(unimplemented  {fcomp st0, dword [ebp-0x134]}, temp54_1)
                        bool c3_2 = unimplemented  {fcomp st0, dword [ebp-0x134]} f== temp54_1
                        unimplemented  {fcomp st0, dword [ebp-0x134]}
                        result.w = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                            | (top & 7) << 0xb
                        
                        if (test_bit(result:1.b, 0))
                            void var_898
                            __builtin_memcpy(&var_898, arg2, 0x104)
                            void var_99c
                            __builtin_memcpy(&var_99c, arg3, 0x104)
                            sub_5177dc(&var_898, &var_374)
                            int32_t j_15 = sx.d(j_16)
                            
                            if (j_15 s> 0)
                                int32_t var_c_14 = 1
                                int32_t* var_154_7 = &var_374
                                int32_t j_7
                                
                                do
                                    sub_517a94(&var_99c, *var_154_7)
                                    var_c_14 += 1
                                    var_154_7 = &var_154_7[1]
                                    j_7 = j_15
                                    j_15 -= 1
                                while (j_7 != 1)
                            
                            char var_cd8
                            sub_4cd498(&var_478, 0, &var_cd8)
                            char eax_137 = var_cd8
                            j_18 = &__saved_ebp
                            void* eax_138
                            eax_138.b = eax_137
                            int16_t var_798
                            int32_t eax_139 = sx.d(var_798)
                            
                            if (add_overflow(5, neg.d(eax_139)))
                                sub_403010()
                                noreturn
                            
                            void var_ce8
                            edx_2 = sub_4be6c0(&var_99c, arg5, arg6, &var_ce8, &var_57c, 5 - eax_139.b, 
                                eax_138, &var_898)
                            int32_t var_794
                            __builtin_memcpy(&var_794, &var_ce8, 0x10)
                            unimplemented  {fld st0, dword [ebp-0x790]}
                            unimplemented  {fmul st0, dword [ebp-0x134]}
                            unimplemented  {fadd dword [eax+0x4]}
                            arg4[1] = fconvert.s(unimplemented  {fstp dword [eax+0x4], st0})
                            unimplemented  {fstp dword [eax+0x4], st0}
                            unimplemented  {fld st0, dword [ebp-0x788]}
                            unimplemented  {fmul st0, dword [ebp-0x134]}
                            unimplemented  {fadd dword [eax+0xc]}
                            result = arg4
                            result[3] = fconvert.s(unimplemented  {fstp dword [eax+0xc], st0})
                            unimplemented  {fstp dword [eax+0xc], st0}
                else
                    edx_2.b = 8
                    result, edx_2 = sub_5182d8(&var_478, edx_2.b)
                    
                    if (result.b != 0)
                        goto label_4bf409
        
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
            
            if (arg11 != 7)
                result, edx_2 = sub_4cc848(i)
                result_2 = result
            else
                result_2 = 8
        
        if (var_12f == 0 && (var_118 s> 4 || var_12d == 0) && var_12e == 0)
            break
    while (i != 0xffffffff)
    
    return result
}
