// ============================================================
// 函数名称: sub_46ce9c
// 虚拟地址: 0x46ce9c
// WARP GUID: d7a498f4-83f9-5bca-9891-52eecd081be1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_46d5f4
// ============================================================

void* __fastcallsub_46ce9c(int32_t arg1, int32_t arg2, int32_t arg3 @ eax, int32_t arg4, float arg5, float arg6, void* arg7)
{
    // 第一条实际指令: int32_t* esi_1 = arg7 - 0x28
    int32_t* esi_1 = arg7 - 0x28
    float var_4c_1 = fconvert.s((fconvert.t(10f) / float.t(*(arg7 + 0x14)) + fconvert.t(0.5f))
        * fconvert.t(fconvert.s(float.t(*(arg7 + 0x10)) / fconvert.t(100f))))
    float var_3c = fconvert.s(fconvert.t(var_4c_1) / float.t(*(arg7 + 0x18)) * float.t(*(arg7 + 0x14)))
    long double x87_r7_9 = fconvert.t(arg6)
    long double temp1 = fconvert.t(0f)
    x87_r7_9 - temp1
    void* eax_3
    eax_3.w = (x87_r7_9 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_9, temp1) ? 1 : 0) << 0xa
        | (x87_r7_9 == temp1 ? 1 : 0) << 0xe
    
    if (not(test_bit(eax_3:1.b, 6)))
        *(arg7 - 4) = *(arg7 - 8)
    else
        long double x87_r7_10 = fconvert.t(arg5)
        long double temp2_1 = fconvert.t(0f)
        x87_r7_10 - temp2_1
        eax_3.w = (x87_r7_10 < temp2_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_10, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_10 == temp2_1 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax_3:1.b, 6)))
            *(arg7 - 4) = *(arg7 - 8)
        else
            *(arg7 - 4) = 2
    
    void* result = *(arg7 - 4)
    
    if (result s>= 0)
        void* i_1 = result + 1
        int32_t edi_1 = 0
        void* i
        
        do
            float var_40_1 = fconvert.s(float.t(edi_1) / float.t(*(arg7 - 4)))
            int32_t eax_11 = *(arg7 - 4)
            
            if (add_overflow(eax_11, neg.d(edi_1)))
                sub_403010()
                noreturn
            
            float var_44_1 = fconvert.s(float.t(eax_11 - edi_1) / float.t(*(arg7 - 4)))
            float var_40_2 = fconvert.s(fconvert.t(var_40_1) * fconvert.t(var_40_1))
            float var_44_2 = fconvert.s(fconvert.t(var_44_1) * fconvert.t(var_44_1))
            float var_34_1
            
            if (arg3 s<= 0)
                var_34_1 = fconvert.s(float.t(arg1) * fconvert.t(var_44_2) * fconvert.t(var_3c))
            else
                var_34_1 = fconvert.s(float.t(arg1) * fconvert.t(var_40_2) * fconvert.t(var_3c))
            
            float var_38_1
            
            if (arg2 s<= 0)
                var_38_1 = fconvert.s(float.t(arg4) * fconvert.t(var_44_2) * fconvert.t(var_4c_1))
            else
                var_38_1 = fconvert.s(float.t(arg4) * fconvert.t(var_40_2) * fconvert.t(var_4c_1))
            
            long double x87_r7_31 = fconvert.t(arg6)
            long double temp4_1 = fconvert.t(0f)
            x87_r7_31 - temp4_1
            void* eax_13
            eax_13.w = (x87_r7_31 < temp4_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_31, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_31 == temp4_1 ? 1 : 0) << 0xe
            
            if (test_bit(eax_13:1.b, 6) || test_bit(eax_13:1.b, 0))
                long double x87_r7_32 = fconvert.t(arg5)
                long double temp5_1 = fconvert.t(0f)
                x87_r7_32 - temp5_1
                eax_13.w = (x87_r7_32 < temp5_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_32, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_32 == temp5_1 ? 1 : 0) << 0xe
                
                if (test_bit(eax_13:1.b, 6) || test_bit(eax_13:1.b, 0))
                    if (edi_1 != 1)
                        arg6 = 0f
                        arg5 = 0f
                    else
                        arg6 = fconvert.s((fconvert.t(-5f) / float.t(*(arg7 + 0x18)) - data_46d550)
                            * data_46d55c)
                        arg5 = fconvert.s(fconvert.t(-5f) / float.t(*(arg7 + 0x14)) - data_46d550)
            
            float var_30_1
            float var_28_1
            float var_24_1
            
            if (*(arg7 - 0xc) s> 2)
                var_30_1 = fconvert.s(fconvert.t(arg5) + fconvert.t(var_38_1))
                long double x87_r7_59 = (
                    (fconvert.t(*(arg7 - 0x10)) * fconvert.t(2f) + fconvert.t(1f)) * fconvert.t(arg6)
                    + fneg(fconvert.t(*(arg7 - 0x10))) + fconvert.t(var_34_1)) * fconvert.t(1f)
                    * float.t(*(arg7 + 0x18)) / fconvert.t(497f)
                var_24_1 = fconvert.s(x87_r7_59)
                long double x87_r7_67 = (
                    (fconvert.t(*(arg7 - 0x14)) * fconvert.t(2f) + fconvert.t(1f)) * fconvert.t(arg5)
                    + fneg(fconvert.t(*(arg7 - 0x14))) + fconvert.t(var_38_1)) * fconvert.t(1f)
                    * float.t(*(arg7 + 0x14)) / fconvert.t(497f)
                var_28_1 = fconvert.s(x87_r7_67)
            else
                var_30_1 = fconvert.s(fconvert.t(arg5) + fconvert.t(var_38_1))
                var_24_1 = fconvert.s((fconvert.t(arg6) + fconvert.t(var_34_1))
                    * float.t(*(arg7 + 0x18)) / fconvert.t(497f))
                var_28_1 = fconvert.s((fconvert.t(arg5) + fconvert.t(var_38_1))
                    * float.t(*(arg7 + 0x14)) / fconvert.t(497f))
            
            __builtin_memcpy(esi_1, *(arg7 - 0x18) + 0x1078, 0x10)
            __builtin_memcpy(arg7 - 0x38, *(arg7 - 0x18) + 0x1088, 0x10)
            *esi_1 = 0x3f800000
            esi_1[1] = 0x3f800000
            esi_1[2] = 0x3f800000
            __builtin_strncpy(arg7 - 0x38, "ff&?", 4)
            __builtin_strncpy(arg7 - 0x34, "ff&?", 4)
            __builtin_strncpy(arg7 - 0x30, "ff&?", 4)
            
            if (*(arg7 - 0xc) == 1)
                float var_54_1
                float var_50_1
                
                if (*(arg7 - 0x39) == 0)
                    var_50_1 = fconvert.s(data_46d574 * fconvert.t(var_30_1) + data_46d580)
                    var_54_1 = fconvert.s((fconvert.t(1f) - fconvert.t(var_30_1)) * data_46d574)
                else
                    var_50_1 = var_30_1
                    var_54_1 = fconvert.s(fconvert.t(1f) - fconvert.t(var_30_1))
                
                *(arg7 - 0x40) = fconvert.s((data_46d58c * fconvert.t(var_50_1) + data_46d598)
                    * fconvert.t(esi_1[3]))
                *(arg7 - 0x4c) = fconvert.s(fconvert.t(*esi_1) * fconvert.t(var_50_1)
                    + fconvert.t(*(arg7 - 0x38)) * fconvert.t(var_54_1))
                *(arg7 - 0x48) = fconvert.s(fconvert.t(esi_1[1]) * fconvert.t(var_50_1)
                    + fconvert.t(*(arg7 - 0x34)) * fconvert.t(var_54_1))
                *(arg7 - 0x44) = fconvert.s(fconvert.t(esi_1[2]) * fconvert.t(var_50_1)
                    + fconvert.t(*(arg7 - 0x30)) * fconvert.t(var_54_1))
                (*data_530518)(*(arg7 - 0x4c), *(arg7 - 0x48), *(arg7 - 0x44), 
                    fconvert.s(fconvert.t(*(arg7 - 0x40)) * fconvert.t(*(arg7 + 0xc))))
            else if (*(arg7 - 0xc) != 2)
                *(arg7 - 0x40) = fconvert.s(((fconvert.t(1f) - fconvert.t(var_30_1)) * data_46d5b0
                    + data_46d5bc + (fconvert.t(arg6) + fconvert.t(var_34_1)) * data_46d5c8) * data_46d5d4)
                *(arg7 - 0x4c) = fconvert.s(fconvert.t(*esi_1) * fconvert.t(0f)
                    + fconvert.t(*(arg7 - 0x38)) * fconvert.t(0f))
                *(arg7 - 0x48) = fconvert.s(fconvert.t(esi_1[1]) * fconvert.t(0f)
                    + fconvert.t(*(arg7 - 0x34)) * fconvert.t(0f))
                *(arg7 - 0x44) = fconvert.s(fconvert.t(esi_1[2]) * fconvert.t(0f)
                    + fconvert.t(*(arg7 - 0x30)) * fconvert.t(0f))
                (*data_530518)(*(arg7 - 0x4c), *(arg7 - 0x48), *(arg7 - 0x44), 
                    fconvert.s(fconvert.t(*(arg7 - 0x40)) * fconvert.t(*(arg7 + 0xc))))
            else
                *(arg7 - 0x4c) = fconvert.s(fconvert.t(*esi_1) * fconvert.t(0f)
                    + fconvert.t(*(arg7 - 0x38)) * fconvert.t(0f))
                *(arg7 - 0x48) = fconvert.s(fconvert.t(esi_1[1]) * fconvert.t(0f)
                    + fconvert.t(*(arg7 - 0x34)) * fconvert.t(0f))
                *(arg7 - 0x44) = fconvert.s(fconvert.t(esi_1[2]) * fconvert.t(0f)
                    + fconvert.t(*(arg7 - 0x30)) * fconvert.t(0f))
                (*data_530518)(*(arg7 - 0x4c), *(arg7 - 0x48), *(arg7 - 0x44), 
                    fconvert.s(data_46d5a4 * fconvert.t(*(arg7 + 0xc))))
            
            (*data_530368)(var_24_1, var_28_1, 0)
            result = arg7
            
            if (*(result - 0xc) s>= 2)
                float var_18_1
                float var_14_1
                
                if (*(arg7 - 0xc) != 3)
                    (*data_530518)(0, 0, 0, fconvert.s(data_46d5e8 * fconvert.t(*(arg7 + 0xc))))
                    long double x87_r7_159 = ((fconvert.t(*(arg7 - 0x10)) * fconvert.t(2f)
                        + fconvert.t(1f)) * fconvert.t(arg6) + fneg(fconvert.t(*(arg7 - 0x10)))
                        + fconvert.t(var_34_1)) * fconvert.t(1f) * float.t(*(arg7 + 0x18))
                        / fconvert.t(497f)
                    var_14_1 = fconvert.s(x87_r7_159)
                    long double x87_r7_167 = ((fconvert.t(*(arg7 - 0x14)) * fconvert.t(2f)
                        + fconvert.t(1f)) * fconvert.t(arg5) + fneg(fconvert.t(*(arg7 - 0x14)))
                        + fconvert.t(var_38_1)) * fconvert.t(1f) * float.t(*(arg7 + 0x14))
                        / fconvert.t(497f)
                    var_18_1 = fconvert.s(x87_r7_167)
                else
                    long double x87_r7_126 = ((
                        fconvert.t(*(arg7 - 0x10)) * fconvert.t(12f) * fconvert.t(3f) + fconvert.t(1f))
                        * fconvert.t(arg6) + fneg(fconvert.t(*(arg7 - 0x10))) * fconvert.t(12f)
                        + fconvert.t(var_34_1)) * fconvert.t(1f)
                    var_14_1 = fconvert.s(x87_r7_126 * float.t(*(arg7 + 0x18)) / fconvert.t(497f))
                    long double x87_r7_134 = (
                        fconvert.t(*(arg7 - 0x14)) * fconvert.t(12f) * fconvert.t(2f) + fconvert.t(1f))
                        * fconvert.t(arg5)
                        + fneg(fconvert.t(*(arg7 - 0x14))) * fconvert.t(12f) * data_46d55c
                        + fconvert.t(var_38_1)
                    var_18_1 = fconvert.s(x87_r7_134 * fconvert.t(1f) * float.t(*(arg7 + 0x14))
                        / fconvert.t(497f))
                    *(arg7 - 0x4c) = fconvert.s(fconvert.t(*esi_1) * fconvert.t(0f)
                        + fconvert.t(*(arg7 - 0x38)) * fconvert.t(0f))
                    *(arg7 - 0x48) = fconvert.s(fconvert.t(esi_1[1]) * fconvert.t(0f)
                        + fconvert.t(*(arg7 - 0x34)) * fconvert.t(0f))
                    *(arg7 - 0x44) = fconvert.s(fconvert.t(esi_1[2]) * fconvert.t(0f)
                        + fconvert.t(*(arg7 - 0x30)) * fconvert.t(0f))
                    *(arg7 - 0x40) = fconvert.s(fconvert.t(esi_1[3]) * fconvert.t(0f))
                    (*data_530518)(*(arg7 - 0x4c), *(arg7 - 0x48), *(arg7 - 0x44), 
                        fconvert.s(fconvert.t(*(arg7 - 0x40)) * fconvert.t(*(arg7 + 0xc))))
                
                result = (*data_530368)(var_14_1, var_18_1, 0)
            
            if (arg3 s> 0xa)
                break
            
            edi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
