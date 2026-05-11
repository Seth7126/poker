// ============================================================
// 函数名称: sub_4d41ec
// 虚拟地址: 0x4d41ec
// WARP GUID: 3820cc1c-539e-57b6-a27e-511873c141b0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4ca100, sub_4cf404, sub_402b3c, sub_4cb8e8, sub_4d5b64, sub_402b2c, sub_403010
// [被调用的父级函数]: sub_4d3e30, sub_4ca054, sub_4d2a58, sub_4c1120, sub_4d36c4, sub_4dc3b8, sub_4d4f4c
// ============================================================

float* __fastcallsub_4d41ec(int32_t arg1, int32_t arg2, char arg3 @ eax, float* arg4, char arg5, int32_t arg6, char arg7)
{
    // 第一条实际指令: int32_t edi = arg2
    int32_t edi = arg2
    __builtin_memset(arg4, 0, 0x18)
    float* result = nullptr
    
    if (arg3 != 2)
        if (arg3 == 3 || (arg3 == 1 && arg1 == 9))
            result = sub_4ca100()
        
        if ((arg3 == 3 || (arg3 == 1 && arg1 == 9)) && result.b == 0)
            int32_t eax_14 = edi * 5
            bool o_8 = unimplemented  {imul eax, edi, 0x5}
            
            if (o_8)
                sub_403010()
                noreturn
            
            if (add_overflow(eax_14, 0xffffffec))
                sub_403010()
                noreturn
            
            *arg4 = fconvert.s(float.t(eax_14 - 0x14))
            
            if (neg.d(edi) == 0x80000000)
                sub_403010()
                noreturn
            
            arg4[1] = fconvert.s((float.t(neg.d(edi)) + fconvert.t(3.5f)) * fconvert.t(90f))
            
            if (sub_4cb8e8() != 0 && edi == 5)
                arg4[1] = fconvert.s(fconvert.t(arg4[1]) - fconvert.t(15f))
            
            int32_t i = 1
            int32_t esi_1 = 0x532f88
            
            do
                int32_t eax_22 = (sub_4d5b64(edi) & 0x7f) * 0xd4f
                bool o_11 = unimplemented  {imul eax, eax, 0xd4f}
                
                if (o_11)
                    sub_403010()
                    noreturn
                
                bool o_12 = unimplemented  {imul edx, dword [ebp-0x8], 0x2e9c}
                
                if (o_12)
                    sub_403010()
                    noreturn
                
                __builtin_memcpy(esi_1 + arg1 * 0x174e0 + (eax_22 << 2) - 0x14008, arg4, 0x18)
                int32_t eax_26 = (sub_4d5b64(edi) & 0x7f) * 0xd4f
                bool o_13 = unimplemented  {imul eax, eax, 0xd4f}
                
                if (o_13)
                    sub_403010()
                    noreturn
                
                bool o_14 = unimplemented  {imul edx, dword [ebp-0x8], 0x2e9c}
                
                if (o_14)
                    sub_403010()
                    noreturn
                
                result = esi_1 + arg1 * 0x174e0 + (eax_26 << 2) - 0x14008
                bool o_15 = unimplemented  {imul edx, dword [ebp-0x1c], 0x5a}
                
                if (o_15)
                    sub_403010()
                    noreturn
                
                *result = fconvert.s(fconvert.t(*result) - float.t(i * 0x5a))
                i += 1
                esi_1 += 0x18
            while (i != 3)
            
            if (edi == 0xa)
                *arg4 = 125f
                arg4[1] = 0xc3610000
        else if (arg3 == 1)
            if (sub_4ca100() != 0)
                if (edi - 1 u>= 2)
                    *arg4 =
                        fconvert.s((float.t(edi) - fconvert.t(3.5f) - data_4d4eb8) * fconvert.t(90f))
                    
                    if (sub_4cb8e8() != 0 && edi == 5)
                        *arg4 = fconvert.s((float.t(edi) + data_4d4eac - fconvert.t(3.5f) - data_4d4eb8)
                            * fconvert.t(90f))
                    
                    arg4[1] = 0xc2340000
                else
                    if (add_overflow(edi, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    *arg4 = fconvert.s((float.t(edi - 1) - data_4d4eb8) * fconvert.t(90f))
                    arg4[1] = 0x42340000
            else if (edi - 1 u>= 2)
                *arg4 = fconvert.s((float.t(edi) - fconvert.t(3.5f) - data_4d4ea0) * fconvert.t(90f))
                
                if (sub_4cb8e8() != 0 && edi == 5)
                    *arg4 = fconvert.s((float.t(edi) + data_4d4eac - fconvert.t(3.5f) - data_4d4ea0)
                        * fconvert.t(90f))
                
                arg4[1] = 0xc2340000
            else
                if (add_overflow(edi, 0xffffffff))
                    sub_403010()
                    noreturn
                
                *arg4 = fconvert.s((float.t(edi - 1) - data_4d4ea0) * fconvert.t(90f))
                arg4[1] = 0x42340000
            
            if (arg1 == 9)
                *arg4 = fconvert.s(fconvert.t(*arg4) + fconvert.t(25f))
                arg4[1] = fconvert.s(fconvert.t(arg4[1]) + fconvert.t(120f))
            else if (arg1 == 0xa)
                *arg4 = fconvert.s(data_4d4e64 * fconvert.t(*arg4))
                arg4[1] = fconvert.s(data_4d4e64 * fconvert.t(arg4[1]))
            
            result = edi - 0xa
            
            if (edi == 0xa)
                *arg4 = -50f
                arg4[1] = 0xc3200000
                result = sub_4ca100()
                *arg4 = -25f
                arg4[1] = 0xc3200000
                
                if (arg1 == 1)
                    *arg4 = 380f
                    arg4[1] = 0x43160000
                else if (arg1 == 9)
                    *arg4 = 50f
                    arg4[1] = 0xc2d20000
            
            if (arg1 s> 0xffffffff)
                if (arg1 != 1)
                    int32_t var_10_2 = 0xc2200000
                else
                    int32_t var_10_1 = 0xc2200000
                
                if (arg7 != 0)
                    int32_t i_1 = 1
                    int32_t var_2c_1 = 0x532f88
                    
                    do
                        int32_t eax_44 = (sub_4d5b64(edi) & 0x7f) * 0xd4f
                        bool o_18 = unimplemented  {imul eax, eax, 0xd4f}
                        
                        if (o_18)
                            sub_403010()
                            noreturn
                        
                        bool o_19 = unimplemented  {imul edx, dword [ebp-0x8], 0x2e9c}
                        
                        if (o_19)
                            sub_403010()
                            noreturn
                        
                        __builtin_memcpy(var_2c_1 + arg1 * 0x174e0 + (eax_44 << 2) - 0x14008, arg4, 
                            0x18)
                        int32_t eax_48 = (sub_4d5b64(edi) & 0x7f) * 0xd4f
                        bool o_20 = unimplemented  {imul eax, eax, 0xd4f}
                        
                        if (o_20)
                            sub_403010()
                            noreturn
                        
                        bool o_21 = unimplemented  {imul edx, dword [ebp-0x8], 0x2e9c}
                        
                        if (o_21)
                            sub_403010()
                            noreturn
                        
                        if (sub_4d5b64(edi) != 0)
                            if (sub_4d5b64(edi) != 1)
                                if (sub_4d5b64(edi) != 2)
                                    if (sub_4d5b64(edi) != 3)
                                        if (sub_4d5b64(edi) == 4)
                                            if (arg1 != 0xa)
                                                if (arg1 != 1)
                                                    if (i_1 == 1)
                                                        *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2)
                                                            - 0x14004) = fconvert.s(fconvert.t(*(var_2c_1
                                                            + arg1 * 0x174e0 + (eax_48 << 2)
                                                            - 0x14004)) + fconvert.t(102f))
                                                        *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2)
                                                            - 0x14008) = fconvert.s(fconvert.t(*(var_2c_1
                                                            + arg1 * 0x174e0 + (eax_48 << 2)
                                                            - 0x14008)) + fconvert.t(63f))
                                                    else if (i_1 == 2)
                                                        *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2)
                                                            - 0x14004) = fconvert.s(fconvert.t(*(var_2c_1
                                                            + arg1 * 0x174e0 + (eax_48 << 2)
                                                            - 0x14004)) + fconvert.t(22f))
                                                        *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2)
                                                            - 0x14008) = fconvert.s(fconvert.t(*(var_2c_1
                                                            + arg1 * 0x174e0 + (eax_48 << 2)
                                                            - 0x14008)) + fconvert.t(103f))
                                                else if (i_1 == 1)
                                                    *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2)
                                                        - 0x14004) = fconvert.s(fconvert.t(*(var_2c_1
                                                        + arg1 * 0x174e0 + (eax_48 << 2) - 0x14004))
                                                        + fconvert.t(102f) + fconvert.t(100f))
                                                    *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2)
                                                        - 0x14008) = fconvert.s(fconvert.t(*(var_2c_1
                                                        + arg1 * 0x174e0 + (eax_48 << 2) - 0x14008))
                                                        - fconvert.t(63f) - fconvert.t(10f))
                                                else if (i_1 == 2)
                                                    *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2)
                                                        - 0x14004) = fconvert.s(fconvert.t(*(var_2c_1
                                                        + arg1 * 0x174e0 + (eax_48 << 2) - 0x14004))
                                                        + fconvert.t(22f) + fconvert.t(185f))
                                                    *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2)
                                                        - 0x14008) = fconvert.s(fconvert.t(*(var_2c_1
                                                        + arg1 * 0x174e0 + (eax_48 << 2) - 0x14008))
                                                        - fconvert.t(103f) - fconvert.t(70f))
                                            else if (i_1 == 1)
                                                *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2)
                                                    - 0x14004) = *(var_2c_1 + arg1 * 0x174e0
                                                    + (eax_48 << 2) - 0x14004)
                                                *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2)
                                                    - 0x14008) = fconvert.s(fconvert.t(*(var_2c_1
                                                    + arg1 * 0x174e0 + (eax_48 << 2) - 0x14008))
                                                    + fconvert.t(86f))
                                            else if (i_1 == 2)
                                                *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2)
                                                    - 0x14004) = fconvert.s(fconvert.t(*(var_2c_1
                                                    + arg1 * 0x174e0 + (eax_48 << 2) - 0x14004))
                                                    - fconvert.t(110f))
                                                *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2)
                                                    - 0x14008) = fconvert.s(fconvert.t(*(var_2c_1
                                                    + arg1 * 0x174e0 + (eax_48 << 2) - 0x14008))
                                                    + fconvert.t(63f) + fconvert.t(35f))
                                    else if (i_1 == 1)
                                        *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2) - 0x14004) =
                                            fconvert.s(fconvert.t(
                                            *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2) - 0x14004))
                                            - fconvert.t(74f))
                                        *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2) - 0x14008) =
                                            fconvert.s(fconvert.t(
                                            *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2) - 0x14008))
                                            + fconvert.t(33f))
                                else
                                    *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2) - 0x14004) = fconvert.s(
                                        fconvert.t(
                                        *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2) - 0x14004))
                                        - fconvert.t(74f))
                                    *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2) - 0x14008) = fconvert.s(
                                        fconvert.t(
                                        *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2) - 0x14008))
                                        + fconvert.t(33f))
                            else if (i_1 == 1)
                                *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2) - 0x14008) = fconvert.s(
                                    fconvert.t(*(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2) - 0x14008))
                                    + fconvert.t(95f))
                                *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2) - 0x14004) = fconvert.s(
                                    fconvert.t(*(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2) - 0x14004))
                                    - fconvert.t(24f) + fconvert.t(20f))
                            else if (i_1 == 2)
                                *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2) - 0x14008) = fconvert.s(
                                    fconvert.t(*(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2) - 0x14008))
                                    + fconvert.t(58f))
                                *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2) - 0x14004) = fconvert.s(
                                    fconvert.t(*(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2) - 0x14004))
                                    + fconvert.t(56f))
                        else if (i_1 == 1)
                            *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2) - 0x14008) = fconvert.s(
                                fconvert.t(*(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2) - 0x14008))
                                - fconvert.t(95f))
                            *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2) - 0x14004) = fconvert.s(
                                fconvert.t(*(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2) - 0x14004))
                                - fconvert.t(24f))
                        else if (i_1 == 2)
                            *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2) - 0x14008) = fconvert.s(
                                fconvert.t(*(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2) - 0x14008))
                                - fconvert.t(58f))
                            *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2) - 0x14004) = fconvert.s(
                                fconvert.t(*(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2) - 0x14004))
                                + fconvert.t(56f))
                        
                        float eax_111 = *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2) - 0x14008)
                        float eax_113 = *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2) - 0x14004)
                        
                        if (arg1 s>= 1 && *data_5300d0 s>= arg1)
                            *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2) - 0x14008) = fconvert.s(
                                sub_402b2c(fconvert.t(-40f) / fconvert.t(180f) * data_4d4f18)
                                * fconvert.t(eax_111)
                                - sub_402b3c(fconvert.t(-40f) / fconvert.t(180f) * data_4d4f18)
                                * fconvert.t(eax_113))
                            long double x87_r7_160 =
                                sub_402b3c(fconvert.t(-40f) / fconvert.t(180f) * data_4d4f18)
                                * fconvert.t(eax_111)
                            *(var_2c_1 + arg1 * 0x174e0 + (eax_48 << 2) - 0x14004) = fconvert.s(
                                sub_402b2c(fconvert.t(-40f) / fconvert.t(180f) * data_4d4f18)
                                * fconvert.t(eax_113) + x87_r7_160)
                        
                        i_1 += 1
                        var_2c_1 += 0x18
                    while (i_1 != 3)
                
                if (arg7 != 0 || arg6 == 0)
                    float var_10_3 = fconvert.s(fconvert.t(-40f) - fconvert.t(10f))
                    float eax_122 = *arg4
                    result = arg4[1]
                    float result_1 = result
                    
                    if (arg1 s>= 1)
                        result = *data_5300d0
                        
                        if (result s>= arg1)
                            *arg4 = fconvert.s(
                                sub_402b2c(fconvert.t(var_10_3) / fconvert.t(180f) * data_4d4f18)
                                * fconvert.t(eax_122)
                                - sub_402b3c(fconvert.t(var_10_3) / fconvert.t(180f) * data_4d4f18)
                                * fconvert.t(result_1))
                            long double x87_r7_184 =
                                sub_402b3c(fconvert.t(var_10_3) / fconvert.t(180f) * data_4d4f18)
                                * fconvert.t(eax_122)
                            long double st0_13
                            st0_13, result =
                                sub_402b2c(fconvert.t(var_10_3) / fconvert.t(180f) * data_4d4f18)
                            arg4[1] = fconvert.s(st0_13 * fconvert.t(result_1) + x87_r7_184)
                else
                    int32_t eax_121 = (sub_4d5b64(edi) & 0x7f) * 0xd4f
                    bool o_22 = unimplemented  {imul eax, eax, 0xd4f}
                    
                    if (o_22)
                        sub_403010()
                        noreturn
                    
                    bool o_23 = unimplemented  {imul edx, dword [ebp-0x8], 0x2e9c}
                    
                    if (o_23)
                        sub_403010()
                        noreturn
                    
                    result = arg1 * 0x174e0 + &data_532f70 + (eax_121 << 2)
                    bool o_24 = unimplemented  {imul edx, esi, 0x3}
                    
                    if (o_24)
                        sub_403010()
                        noreturn
                    
                    __builtin_memcpy(arg4, &result[arg6 * 6 - 0x5002], 0x18)
        else if (arg3 == 0)
            if (arg7 == 0)
                result = edi * 0x2e9c
                bool o_25 = unimplemented  {imul eax, edi, 0x2e9c}
                
                if (o_25)
                    sub_403010()
                    noreturn
                
                __builtin_memcpy(arg4, &(&data_532f3c)[result * 2], 0x18)
            else if (edi == 9)
                *arg4 = -650f
                arg4[1] = 0xc3c80000
            else if (edi != 0xa)
                result = edi * 0x2e9c
                bool o_26 = unimplemented  {imul eax, edi, 0x2e9c}
                
                if (o_26)
                    sub_403010()
                    noreturn
                
                *arg4 = fconvert.s(fconvert.t(*((result << 3) + &data_532f54)) - fconvert.t(500f)
                    - fconvert.t(100f) + fconvert.t(18f) + fconvert.t(80f))
                arg4[1] = fconvert.s(fneg(fconvert.t(*((result << 3) + &data_532f5c)))
                    - fconvert.t(250f) - fconvert.t(170f) + fconvert.t(35f))
                *arg4 = fconvert.s(data_4d4f34 * fconvert.t(*arg4))
                arg4[1] = fconvert.s(data_4d4f34 * fconvert.t(arg4[1]))
                
                if (edi == 1)
                    *arg4 = fconvert.s(fconvert.t(*((result << 3) + &data_532f54)) - fconvert.t(300f)
                        - fconvert.t(110f) - fconvert.t(30f))
                    arg4[1] = fconvert.s(fneg(fconvert.t(*((result << 3) + &data_532f5c)))
                        - fconvert.t(320f) - fconvert.t(60f))
            else
                *arg4 = -260f
                arg4[1] = 0x440e8000
    else
        if (arg1 == 9 || arg1 == 0xa || arg5 != 0)
            if (arg6 == 1)
                int32_t temp2_1 = edi
                edi -= 0x21
                
                if (add_overflow(temp2_1, 0xffffffdf))
                    sub_403010()
                    noreturn
            else if (arg6 == 2)
                int32_t temp4_1 = edi
                edi -= 0x42
                
                if (add_overflow(temp4_1, 0xffffffbe))
                    sub_403010()
                    noreturn
        else if (arg6 == 1)
            int32_t temp8_1 = edi
            edi -= 0x42
            
            if (add_overflow(temp8_1, 0xffffffbe))
                sub_403010()
                noreturn
        else if (arg6 == 2)
            int32_t temp11_1 = edi
            edi -= 0x84
            
            if (add_overflow(temp11_1, 0xffffff7c))
                sub_403010()
                noreturn
        
        int32_t var_24_1 = 0
        float var_1c_1 = fconvert.s(fconvert.t(1f) * fconvert.t(*(data_530598 + 0x10)))
        
        if (arg6 == 0x28)
            arg4[2] = fconvert.s(fconvert.t(var_1c_1) * fconvert.t(0f) * data_4d4dcc * data_4d4dd8
                * fconvert.t(502f))
        else if (arg6 != 3)
            if (sub_4cb8e8() != 0)
                if (sub_4cb8e8() != 0)
                    arg4[2] =
                        fconvert.s(float.t(edi) * fconvert.t(var_1c_1) * data_4d4e24 * fconvert.t(502f))
            else
                arg4[2] = fconvert.s(float.t(edi) * fconvert.t(var_1c_1) * data_4d4de8 * data_4d4dd8
                    * fconvert.t(502f))
        else
            arg4[2] = fconvert.s(float.t(edi) * fconvert.t(var_1c_1) * data_4d4dcc * data_4d4dd8
                * fconvert.t(502f))
        
        result = *data_530304
        
        if (*(result + 0xdfb) == 0)
            if (edi s> 0)
                *arg4 =
                    fconvert.s(sub_4cf404(edi, arg1, 0) * fconvert.t(4f) * data_4d4e34 - data_4d4e40)
                bool o_5 = unimplemented  {imul eax, edi, 0x3}
                
                if (o_5)
                    sub_403010()
                    noreturn
                
                arg4[1] = fconvert.s(
                    sub_4cf404(edi * 3, arg1, 0) * fconvert.t(3f) * fconvert.t(2f) * data_4d4dd8
                    - data_4d4e54)
                *arg4 = fconvert.s(sub_4cf404(divs.dp.d(sx.q(edi), 5), arg1, 0) * fconvert.t(4f)
                    * fconvert.t(1.5f) * data_4d4e64 - data_4d4e70)
                bool o_6 = unimplemented  {imul eax, eax, 0x3}
                
                if (o_6)
                    sub_403010()
                    noreturn
                
                arg4[1] = fconvert.s(sub_4cf404(divs.dp.d(sx.q(edi), 3) * 3, arg1, 0) * fconvert.t(3f)
                    * fconvert.t(2f) * data_4d4e64 - data_4d4e7c)
            
            bool o_7 = unimplemented  {imul eax, edi, 0x2}
            
            if (o_7)
                sub_403010()
                noreturn
            
            long double st0_5
            st0_5, result = sub_4cf404(edi * 2, arg1, 0)
            arg4[5] = fconvert.s(st0_5 * fconvert.t(27f) - fconvert.t(18f) - fconvert.t(60f))
    
    return result
}
