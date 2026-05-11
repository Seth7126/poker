// ============================================================
// 函数名称: sub_4fdbc0
// 虚拟地址: 0x4fdbc0
// WARP GUID: a374056e-5a10-5ba5-a04e-a75aadf44904
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_420bf0, sub_420b38, sub_403010
// [被调用的父级函数]: sub_4fe478, sub_4fef20
// ============================================================

void* __fastcallsub_4fdbc0(int32_t arg1, int32_t arg2, int32_t arg3 @ eax, float arg4, float arg5, void* arg6)
{
    // 第一条实际指令: void* result = data_530364
    void* result = data_530364
    
    if (*result != 0)
        return result
    
    if (*(*data_530304 + 0xceb) == 0)
        void* eax_5
        eax_5.b = *(*data_5301f4 + 4)
        
        if (eax_5.b - 3 u>= 2)
            data_5301f4
            char temp2_1 = eax_5.b
            eax_5.b -= 7
            
            if (temp2_1 != 7)
                *(arg6 - 0x10) = fconvert.s(fconvert.t(1f)
                    - (data_4fe07c - fconvert.t(arg5)) * fconvert.t(*(arg6 - 0x18)) * data_4fe140)
            else
                *(arg6 - 0x10) = fconvert.s((data_4fe07c - fconvert.t(arg5) * fconvert.t(1.5f))
                    * fconvert.t(*(arg6 - 0x18)))
                int32_t var_20
                
                if (*(arg6 + 0x10) != 1)
                    int32_t eax_24 = *(data_530598 + 0x3bc)
                    
                    if (add_overflow(eax_24, 0xfffffff4))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(eax_24 - 0xc, 0xa))
                        sub_403010()
                        noreturn
                    
                    *(arg6 - 0x10) = fconvert.s(fconvert.t(1f) - fconvert.t(*(arg6 - 0x10))
                        * fconvert.t(*(arg6 - 0x10)) * data_4fe0e4 / fconvert.t(38f)
                        * float.t(eax_24 - 2) - (data_4fe0f0 - fconvert.t(arg5)) * data_4fe0fc)
                else
                    int32_t eax_14 = *(data_530598 + 0x3bc)
                    
                    if (add_overflow(eax_14, 0xfffffff4))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(eax_14 - 0xc, 0x46))
                        sub_403010()
                        noreturn
                    
                    *(arg6 - 0x10) = fconvert.s(data_4fe0b0 - fconvert.t(*(arg6 - 0x10))
                        * fconvert.t(*(arg6 - 0x10)) * data_4fe0a0 / fconvert.t(38f)
                        * float.t(eax_14 + 0x3a))
                    
                    if (*(arg6 - 0x19) == 0)
                        int32_t var_18_2 = 0x3ffe
                        int32_t var_1c_2 = 0xd9999999
                        var_20 = 0x9999999a
                        int32_t var_24_2 = 0x3ffc
                        int32_t var_28_2 = 0xcccccccc
                        int32_t var_2c_2 = 0xcccccccd
                        var_2c_2.t =
                            sub_420bf0((fconvert.t(arg5) - data_4fe0bc) * data_4fe0c8, -107374184f)
                        *(arg6 - 0x10) = fconvert.s(sub_420b38(var_2c_2, -1.58818684e-23f) + data_4fe0d4
                            - fconvert.t(arg4) * fconvert.t(arg5) * fconvert.t(0.5f))
                    else
                        int32_t var_18_1 = 0x3ffe
                        int32_t var_1c_1 = 0xb3333333
                        __builtin_strncpy(&var_20, "3333", 4)
                        int32_t var_24_1 = 0x3ffe
                        int32_t var_28_1 = 0x80000000
                        int32_t var_2c_1 = 0
                        var_2c_1.t = sub_420bf0((fconvert.t(arg5) - data_4fe0bc) * data_4fe0c8, 0f)
                        *(arg6 - 0x10) = fconvert.s(sub_420b38(var_2c_1, 4.17232506e-08f))
                
                if (data_7a7d98 != 0 && *(arg6 + 0x10) == 0xc)
                    if (arg3 s<= 0)
                        *(arg6 - 0x10) = fconvert.s(fconvert.t(*(arg6 - 0x10)) - data_4fe128)
                    else if (arg2 s>= 0)
                        var_20.t = float.t(arg2) / float.t(arg3) * data_4fe108
                        int32_t var_24_4 = 0x3ffe
                        int32_t var_28_4 = 0xb3333333
                        long double st0_6 = sub_420b38(4.17232506e-08f, var_20)
                        *(arg6 - 0x10) = fconvert.s(fconvert.t(*(arg6 - 0x10))
                            - st0_6 * float.t(*(data_530598 + 0x3bc)) / fconvert.t(45f)
                            - (float.t(*(arg6 + 0xc)) - data_4fe118) / fconvert.t(25f))
                    else
                        var_20.t = float.t(arg2) / float.t(arg3) * data_4fe108
                        int32_t var_24_3 = 0x3ffe
                        int32_t var_28_3 = 0xb3333333
                        *(arg6 - 0x10) = fconvert.s(sub_420b38(4.17232506e-08f, var_20)
                            * float.t(*(data_530598 + 0x3bc)) / fconvert.t(45f)
                            + fconvert.t(*(arg6 - 0x10))
                            - (float.t(*(arg6 + 0xc)) - data_4fe118) / fconvert.t(25f))
                
                *(arg6 - 0x10) = fconvert.s(data_4fe134 + fconvert.t(*(arg6 - 0x10)))
        else
            *(arg6 - 0x10) = fconvert.s(fconvert.t(1f)
                - (data_4fe07c - fconvert.t(arg5)) * fconvert.t(*(arg6 - 0x18)) * data_4fe090)
    else
        *(arg6 - 0x10) = fconvert.s(fconvert.t(1f)
            - (data_4fe07c - fconvert.t(arg5)) * fconvert.t(*(arg6 - 0x18)) * fconvert.t(0.25f))
    
    *(arg6 - 4) = *(arg6 - 0x20)
    
    if (*(*data_530304 + 0xcec) != 0)
        *(arg6 - 0x10) = 0x3f800000
    
    int32_t edx_4 = *(data_530598 + 0x388)
    
    if (edx_4 != 2)
        long double x87_r7_65 = fconvert.t(*(arg6 - 4))
        long double temp5_1 = fconvert.t(1f)
        x87_r7_65 - temp5_1
        void* eax_48
        eax_48.w = (x87_r7_65 < temp5_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_65, temp5_1) ? 1 : 0) << 0xa
            | (x87_r7_65 == temp5_1 ? 1 : 0) << 0xe
        
        if (test_bit(eax_48:1.b, 0))
            data_530598
            
            if (edx_4 == 3)
                return (*data_530518)(*(arg6 - 0x10), *(arg6 - 0x10), *(arg6 - 0x10), *(arg6 - 4))
            
            *(arg6 - 0x10) = fconvert.s(
                fconvert.t(*(arg6 - 0x10)) * fconvert.t(*(arg6 - 4)) * data_4fe14c
                + (fconvert.t(*(arg6 - 0x10)) + fconvert.t(*(arg6 - 4))) * data_4fe134)
            return (*data_530518)(*(arg6 - 0x10), *(arg6 - 0x10), *(arg6 - 0x10), *(arg6 - 0x10))
    
    *(arg6 - 4) =
        fconvert.s(fconvert.t(1f) - (fconvert.t(1f) - fconvert.t(*(arg6 - 4))) * fconvert.t(1.5f))
    *(arg6 - 0x10) = fconvert.s(fconvert.t(*(arg6 - 0x10)) * fconvert.t(*(arg6 - 4)) * data_4fe14c
        + (fconvert.t(*(arg6 - 0x10)) + fconvert.t(*(arg6 - 4))) * data_4fe134)
    return (*data_530518)(*(arg6 - 0x10), *(arg6 - 0x10), *(arg6 - 0x10), 0x3f800000)
}
