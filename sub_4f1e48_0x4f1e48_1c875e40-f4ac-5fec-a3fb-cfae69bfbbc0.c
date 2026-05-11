// ============================================================
// 函数名称: sub_4f1e48
// 虚拟地址: 0x4f1e48
// WARP GUID: 1c875e40-f4ac-5fec-a3fb-cfae69bfbbc0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4ca100, sub_4f28f8, sub_402b3c, sub_402b2c, sub_403010
// [被调用的父级函数]: sub_502b8c, sub_4f2e8c, sub_4ee958, sub_4ee818, sub_503538, sub_4dc3b8, sub_529818
// ============================================================

void* __fastcallsub_4f1e48(int32_t arg1, char arg2, void* arg3 @ eax, float arg4)
{
    // 第一条实际指令: void* result
    void* result
    result.b = *(*data_5301f4 + 4)
    
    if (result.b - 3 u< 2 || result.b == 7)
        int32_t edx_1 = *(arg3 + 0x897c)
        
        if (edx_1 == 1)
            __builtin_memcpy(arg3 + 0x8980, 
                "\x00\x80\x1d\x44\x00\x00\xf0\x41\x00\x00\xa0\x42\x00\x00\xa0\xc1\x00\x00\x40\x40\x00\x00\x"
            "40\x40", 
                0x18)
            
            if (*(*data_5301f4 + 4) == 4)
                *(arg3 + 0x8980) = 0x44278000
                *(arg3 + 0x8984) = 0x42700000
                *(arg3 + 0x8988) = 0x42a00000
            
            result = *data_5301f4
            
            if (*(result + 4) == 7)
                *(arg3 + 0x8980) = fconvert.s(fconvert.t(*(arg3 + 0x8980)) - fconvert.t(60f)
                    - fconvert.t(72f) - fconvert.t(1500f))
                *(arg3 + 0x8984) =
                    fconvert.s(fconvert.t(*(arg3 + 0x8984)) + fconvert.t(100f) + fconvert.t(36f))
                *(arg3 + 0x8988) = fconvert.s(fconvert.t(*(arg3 + 0x8988)) - fconvert.t(720f))
                *(arg3 + 0x898c) = 0xc2a00000
                *(arg3 + 0x8990) = 0xc0c00000
                *(arg3 + 0x8984) = 0x43890000
                *(arg3 + 0x8988) = fconvert.s(fconvert.t(*(arg3 + 0x8988)) - fconvert.t(40f))
                *(arg3 + 0x8980) = fconvert.s(fconvert.t(*(arg3 + 0x8980)) + fconvert.t(20f))
                *(arg3 + 0x8994) = 0xc2700000
        else if (edx_1 s> 1)
            if (add_overflow(edx_1, 0xfffffffe))
                sub_403010()
                noreturn
            
            int32_t edx_4 = *data_5300d0
            
            if (add_overflow(edx_4, 0xfffffffe))
                sub_403010()
                noreturn
            
            float var_18_1 = fconvert.s((float.t(edx_1 - 2) / float.t(edx_4 - 2) - fconvert.t(0.5f))
                * fconvert.t(2f))
            data_5301f4
            
            if (result.b == 7)
                if (sub_4ca100() == 0)
                    var_18_1 = fconvert.s(data_4f27d4 * fconvert.t(var_18_1) - data_4f27bc)
                else
                    var_18_1 = fconvert.s(data_4f27c8
                        * fconvert.t(fconvert.s(data_4f27b0 * fconvert.t(var_18_1) - data_4f27bc)))
            
            void* eax_6
            eax_6.b = *(*data_5301f4 + 4)
            
            if (eax_6.b != 4)
                data_5301f4
                char temp10_1 = eax_6.b
                eax_6.b -= 3
                
                if (temp10_1 == 3)
                    var_18_1 = fconvert.s(data_4f27f8 * fconvert.t(var_18_1) - data_4f27ec)
                    
                    if (arg2 != 0)
                        var_18_1 = fconvert.s(data_4f2804 + fconvert.t(var_18_1))
            else
                var_18_1 = fconvert.s(data_4f27e0 * fconvert.t(var_18_1) - data_4f27bc)
                
                if (arg2 != 0)
                    var_18_1 = fconvert.s(data_4f27ec + fconvert.t(var_18_1))
            
            if (*data_5300d0 == 2)
                var_18_1 = 0f
            
            if (*data_5300d0 == 3)
                var_18_1 = fconvert.s(data_4f2810 * fconvert.t(var_18_1))
            
            if (*data_5300d0 == 4)
                var_18_1 = fconvert.s(data_4f27e0 * fconvert.t(var_18_1))
            
            float var_18_3
            
            if (*data_5300d0 s<= 5)
                var_18_3 = fconvert.s(data_4f27e0 * fconvert.t(var_18_1) + data_4f281c)
            else if (*data_5300d0 s<= 6)
                var_18_3 = fconvert.s(data_4f2828 * fconvert.t(var_18_1) + data_4f2834)
            else if (*data_5300d0 s> 7)
                var_18_3 = fconvert.s(data_4f2858 * fconvert.t(var_18_1) + data_4f2864)
                
                if (*(arg3 + 0x897c) == 2)
                    var_18_3 = fconvert.s(data_4f2870 + fconvert.t(var_18_3))
            else
                var_18_3 = fconvert.s(data_4f2840 * fconvert.t(var_18_1) + data_4f284c)
            
            *(arg3 + 0x898c) = 0x41400000
            
            if (arg2 != 0)
                var_18_3 = fconvert.s(fconvert.t(var_18_3) - data_4f287c)
            
            *(arg3 + 0x8990) =
                fconvert.s(fneg(fconvert.t(var_18_3)) * fconvert.t(70f) + fconvert.t(180f))
            char eax_15
            
            if (*(*data_5301f4 + 4) == 7)
                eax_15 = sub_4ca100()
            
            if (*(*data_5301f4 + 4) != 7 || eax_15 == 0)
                float var_24_2 = 1.29999995f
                *(arg3 + 0x8994) = 0
                long double x87_r7_129 = (sub_402b3c(fconvert.t(var_18_3)) * fconvert.t(1050f)
                    - fconvert.t(var_18_3) * fconvert.t(var_18_3) * fconvert.t(90f)
                    - fconvert.t(var_18_3) * fconvert.t(300f)) * fconvert.t(var_24_2) + fconvert.t(720f)
                    + fconvert.t(0f) + fconvert.t(50f)
                *(arg3 + 0x8980) = fconvert.s(x87_r7_129)
                long double st0_8
                st0_8, result = sub_402b2c(fconvert.t(var_18_3))
                *(arg3 + 0x8988) = fconvert.s((fneg(st0_8) * fconvert.t(1100f)
                    + fconvert.t(var_18_3) * fconvert.t(120f)) * fconvert.t(var_24_2) + fconvert.t(-160f))
                *(arg3 + 0x8984) = fconvert.s(fconvert.t(var_18_3) * fconvert.t(40f) * fconvert.t(0f)
                    + fconvert.t(0f) + fconvert.t(100f) + fconvert.t(25f) + fconvert.t(30f))
            else
                float var_24_1 = fconvert.s(fconvert.t(0.64319998f) * fconvert.t(1.5f))
                float var_20_1 = 0.620000005f
                float var_1c_1 = 0f
                float var_18_4 = fconvert.s(data_4f2894 * fconvert.t(var_18_3))
                float var_10_1 = 0.300000012f
                float var_c_1 = -0.579999983f
                *(arg3 + 0x8994) = 0
                float var_14_1 =
                    fconvert.s(fconvert.t(var_18_4) * fconvert.t(var_20_1) + fconvert.t(var_1c_1))
                *(arg3 + 0x8994) = 0
                long double x87_r7_67 = fconvert.t(var_14_1)
                long double temp14_1 = fconvert.t(var_10_1)
                x87_r7_67 - temp14_1
                int16_t eax_16 = (x87_r7_67 < temp14_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_67, temp14_1) ? 1 : 0) << 0xa
                    | (x87_r7_67 == temp14_1 ? 1 : 0) << 0xe
                
                if (test_bit(eax_16:1.b, 6) || test_bit(eax_16:1.b, 0))
                    long double x87_r7_82 = fconvert.t(var_14_1)
                    long double temp15_1 = fconvert.t(var_c_1)
                    x87_r7_82 - temp15_1
                    
                    if (not(test_bit(
                            ((x87_r7_82 < temp15_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_82, temp15_1) ? 1 : 0) << 0xa
                                | (x87_r7_82 == temp15_1 ? 1 : 0) << 0xe):1.b, 
                            0)))
                        *(arg3 + 0x8980) = fconvert.s(
                            sub_402b3c(fconvert.t(var_10_1)) * fconvert.t(1180f) * fconvert.t(var_24_1)
                            + fconvert.t(680f)
                            + (fconvert.t(var_14_1) - fconvert.t(var_10_1)) * fconvert.t(660f))
                        long double st0_6
                        st0_6, result = sub_402b2c(fconvert.t(var_10_1))
                        *(arg3 + 0x8988) = fconvert.s(
                            fneg(st0_6) * fconvert.t(1010f) * fconvert.t(var_24_1) + fconvert.t(-740f)
                            + (fconvert.t(var_14_1) - fconvert.t(var_10_1)) * fconvert.t(230f))
                        *(arg3 + 0x8994) = fconvert.s(fconvert.t(var_10_1) * fconvert.t(-65f)
                            + fconvert.t(*(arg3 + 0x8994)))
                    else
                        *(arg3 + 0x8980) = fconvert.s(sub_402b3c(fconvert.t(var_14_1)
                            - fconvert.t(var_c_1) + fconvert.t(var_10_1)) * fconvert.t(1180f)
                            * fconvert.t(var_24_1) + fconvert.t(680f)
                            + (fconvert.t(var_c_1) - fconvert.t(var_10_1)) * fconvert.t(660f))
                        long double st0_4
                        st0_4, result = sub_402b2c(fconvert.t(var_14_1) - fconvert.t(var_c_1)
                            + fconvert.t(var_10_1))
                        *(arg3 + 0x8988) = fconvert.s(
                            fneg(st0_4) * fconvert.t(1010f) * fconvert.t(var_24_1) + fconvert.t(-740f)
                            + (fconvert.t(var_c_1) - fconvert.t(var_10_1)) * fconvert.t(230f))
                        *(arg3 + 0x8994) = fconvert.s((fconvert.t(var_14_1) - fconvert.t(var_c_1)
                            + fconvert.t(var_10_1)) * fconvert.t(-65f) + fconvert.t(*(arg3 + 0x8994)))
                else
                    *(arg3 + 0x8980) = fconvert.s(
                        sub_402b3c(fconvert.t(var_14_1)) * fconvert.t(1180f) * fconvert.t(var_24_1)
                        + fconvert.t(680f))
                    long double st0_2
                    st0_2, result = sub_402b2c(fconvert.t(var_14_1))
                    *(arg3 + 0x8988) = fconvert.s(fneg(st0_2) * fconvert.t(1010f) * fconvert.t(var_24_1)
                        + fconvert.t(-740f))
                    *(arg3 + 0x8994) = fconvert.s(fconvert.t(var_14_1) * fconvert.t(-65f)
                        + fconvert.t(*(arg3 + 0x8994)))
                
                *(arg3 + 0x8984) = 0x431b0000
                *(arg3 + 0x898c) = 0xc2a00000
                *(arg3 + 0x8990) = 0xc0c00000
                *(arg3 + 0x8984) = 0x43870000
    else
        int32_t edx_9 = *(arg3 + 0x897c)
        
        if (edx_9 == 1)
            *(arg3 + 0x8980) = 0x44098000
            *(arg3 + 0x8984) = 0
            *(arg3 + 0x8988) = 0x42a00000
            *(arg3 + 0x898c) = 0xc1a00000
            *(arg3 + 0x8990) = 0x40400000
            *(arg3 + 0x8994) = 0x40400000
            result.b = *(*data_5301f4 + 4)
            result.b -= 5
            char temp4_1 = result.b
            result.b -= 2
            
            if (temp4_1 u< 2)
                *(arg3 + 0x8980) = 0x44138000
        else if (edx_9 s> 1)
            float var_18_5
            
            if (*data_5300d0 s<= 2)
                var_18_5 = 0f
            else
                if (add_overflow(edx_9, 0xfffffffe))
                    sub_403010()
                    noreturn
                
                int32_t edx_12 = *data_5300d0
                
                if (add_overflow(edx_12, 0xfffffffe))
                    sub_403010()
                    noreturn
                
                var_18_5 = fconvert.s((float.t(edx_9 - 2) / float.t(edx_12 - 2) - fconvert.t(0.5f))
                    * fconvert.t(2f))
                
                if (*data_5300d0 == 3)
                    var_18_5 = fconvert.s(data_4f2810 * fconvert.t(var_18_5))
                
                if (*data_5300d0 == 4)
                    var_18_5 = fconvert.s(data_4f27e0 * fconvert.t(var_18_5))
                
                data_5301f4
                
                if (result.b == 1 && *data_5300d0 == 3)
                    var_18_5 = fconvert.s(data_4f2810 * fconvert.t(var_18_5) - fconvert.t(0f))
                
                data_5301f4
                
                if (result.b == 5)
                    var_18_5 = fconvert.s(data_4f27e0 * fconvert.t(var_18_5))
            
            *(arg3 + 0x898c) = 0x41400000
            
            if (arg2 != 0)
                var_18_5 = fconvert.s(fconvert.t(var_18_5) - data_4f287c)
            
            *(arg3 + 0x8990) =
                fconvert.s(fneg(fconvert.t(var_18_5)) * fconvert.t(70f) + fconvert.t(180f))
            void* eax_19
            eax_19.b = *(*data_5301f4 + 4)
            eax_19.b -= 5
            char temp11_1 = eax_19.b
            eax_19.b -= 2
            
            if (temp11_1 u< 2)
                var_18_5 = fconvert.s(fconvert.t(var_18_5) - data_4f27ec)
            
            *(arg3 + 0x8994) = 0
            
            if (*(*data_5301f4 + 4) == 1)
                if (*(arg3 + 0x897c) == 3)
                    *(arg3 + 0x8990) = fconvert.s(fconvert.t(*(arg3 + 0x8990)) + fconvert.t(20f))
                
                if (*(arg3 + 0x897c) == 2)
                    *(arg3 + 0x8990) = fconvert.s(fconvert.t(*(arg3 + 0x8990)) - fconvert.t(6f))
                
                if (*(arg3 + 0x897c) - 2 u< 2)
                    *(arg3 + 0x898c) = 0x40e00000
            
            *(arg3 + 0x8980) = fconvert.s(sub_402b3c(fconvert.t(var_18_5)) * fconvert.t(1050f)
                + fconvert.t(720f) - fconvert.t(var_18_5) * fconvert.t(var_18_5) * fconvert.t(90f)
                - fconvert.t(var_18_5) * fconvert.t(300f) + fconvert.t(50f) + fconvert.t(0f))
            *(arg3 + 0x8988) = fconvert.s(fconvert.t(-160f)
                - sub_402b2c(fconvert.t(var_18_5)) * fconvert.t(1100f)
                + fconvert.t(var_18_5) * fconvert.t(120f))
            *(arg3 + 0x8984) = fconvert.s(fconvert.t(var_18_5) * fconvert.t(40f) * fconvert.t(0f)
                + fconvert.t(0f) + fconvert.t(100f) + fconvert.t(25f))
            result.b = *(*data_5301f4 + 4)
            result.b -= 5
            char temp12_1 = result.b
            result.b -= 2
            
            if (temp12_1 u< 2)
                *(arg3 + 0x8980) = fconvert.s(
                    sub_402b3c(fconvert.t(var_18_5)) * data_4f28e8 * fconvert.t(1050f)
                    + fconvert.t(720f) - fconvert.t(var_18_5) * fconvert.t(var_18_5) * fconvert.t(90f)
                    - fconvert.t(var_18_5) * fconvert.t(300f) + fconvert.t(50f) + fconvert.t(0f))
                long double st0_12
                st0_12, result = sub_402b2c(fconvert.t(var_18_5))
                *(arg3 + 0x8988) = fconvert.s(fconvert.t(-160f)
                    - st0_12 * fconvert.t(1f) * fconvert.t(1100f)
                    + fconvert.t(var_18_5) * fconvert.t(120f))
    
    int32_t i_1 = *(arg3 + 0x8978)
    
    if (i_1 s> 0)
        int32_t var_8_1 = 1
        void* ebx_1 = arg3 + 4
        int32_t i
        
        do
            float var_84[0x16]
            result = sub_4f28f8(&var_84, var_8_1, arg3, arg4)
            __builtin_memcpy(ebx_1, &var_84, 0x58)
            var_8_1 += 1
            ebx_1 += 0xd4
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
