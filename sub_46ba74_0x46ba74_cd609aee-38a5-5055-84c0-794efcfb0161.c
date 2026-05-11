// ============================================================
// 函数名称: sub_46ba74
// 虚拟地址: 0x46ba74
// WARP GUID: cd609aee-38a5-5055-84c0-794efcfb0161
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_46b394, sub_403010
// [被调用的父级函数]: sub_46c038, sub_46c0d4
// ============================================================

void* __fastcallsub_46ba74(int32_t arg1, void* arg2, int32_t arg3 @ eax, int32_t arg4, float arg5, float arg6, void* arg7)
{
    // 第一条实际指令: void* var_20 = arg2
    void* var_20 = arg2
    float var_48
    
    if (*(arg7 - 0x25) != 0)
        var_48 = fconvert.s(float.t(*(arg7 + 0x10)) / fconvert.t(60f))
    else
        var_48 = fconvert.s(float.t(*(arg7 + 0x10)) / fconvert.t(90f))
    
    float var_3c = fconvert.s(fconvert.t(var_48) / float.t(*(arg7 + 0x18)) * float.t(*(arg7 + 0x14)))
    
    if (*(arg7 + 0x14) s<= 0x96)
        *(arg7 - 0x3c) = 0
    else
        *(arg7 - 0x3c) = 0x3cc5cb76
    
    void* result = arg7
    int32_t esi = *(result - 0x40)
    
    if (esi s>= 0)
        int32_t i_1 = esi + 1
        int32_t ebx_1 = 0
        int32_t i
        
        do
            float var_1c
            float var_1c_1 = fconvert.s(fconvert.t(var_1c) * fconvert.t(0f))
            float var_40_1 = fconvert.s(float.t(ebx_1) / float.t(*(arg7 - 0x40)))
            int32_t eax_10 = *(arg7 - 0x40)
            
            if (add_overflow(eax_10, neg.d(ebx_1)))
                sub_403010()
                noreturn
            
            float var_44_1 = fconvert.s(float.t(eax_10 - ebx_1) / float.t(*(arg7 - 0x40)))
            float var_40_2 = fconvert.s(fconvert.t(var_40_1) * fconvert.t(var_40_1))
            float var_44_2 = fconvert.s(fconvert.t(var_44_1) * fconvert.t(var_44_1))
            
            if (arg3 s<= 0)
                var_1c = fconvert.s(float.t(arg1) * fconvert.t(var_44_2) * fconvert.t(var_3c))
            else
                var_1c = fconvert.s(float.t(arg1) * fconvert.t(var_40_2) * fconvert.t(var_3c))
            
            float var_38_1
            
            if (var_20 s<= 0)
                var_38_1 = fconvert.s(float.t(arg4) * fconvert.t(var_44_2) * fconvert.t(var_48))
            else
                var_38_1 = fconvert.s(float.t(arg4) * fconvert.t(var_40_2) * fconvert.t(var_48))
            
            float var_c_1 = fconvert.s(fconvert.t(arg6) + fconvert.t(var_1c))
            float var_34_1
            float var_30_1
            
            if (*(arg7 - 0x44) s<= 2)
                float var_8_1 = fconvert.s(fconvert.t(arg5) + fconvert.t(var_38_1))
                var_30_1 = fconvert.s((fconvert.t(arg6) + fconvert.t(var_1c)) * float.t(*(arg7 + 0x18))
                    / fconvert.t(497f))
                var_34_1 = fconvert.s((fconvert.t(arg5) + fconvert.t(var_38_1))
                    * float.t(*(arg7 + 0x14)) / fconvert.t(497f))
            else if (*(arg7 - 0x44) != 3)
                float var_8_3 = fconvert.s(fconvert.t(arg5) + fconvert.t(var_38_1))
                long double x87_r7_69 = (
                    fconvert.t(*(arg7 - 0x48)) * fconvert.t(3f) * fconvert.t(2f) * fconvert.t(2f)
                    + fconvert.t(1f)) * fconvert.t(arg6)
                    + fneg(fconvert.t(*(arg7 - 0x48))) * fconvert.t(3f) * fconvert.t(2f)
                var_30_1 = fconvert.s((x87_r7_69 + fconvert.t(var_1c)) * fconvert.t(1f)
                    * float.t(*(arg7 + 0x18)) / fconvert.t(497f))
                long double x87_r7_79 = (
                    fconvert.t(*(arg7 - 0x4c)) * fconvert.t(3f) * fconvert.t(2f) * fconvert.t(2f)
                    + fconvert.t(1f)) * fconvert.t(arg5)
                    + fneg(fconvert.t(*(arg7 - 0x4c))) * fconvert.t(3f) * fconvert.t(2f)
                var_34_1 = fconvert.s((x87_r7_79 + fconvert.t(var_38_1)) * fconvert.t(1f)
                    * float.t(*(arg7 + 0x14)) / fconvert.t(497f))
            else
                float var_8_2 = fconvert.s(fconvert.t(arg5) + fconvert.t(var_38_1))
                long double x87_r7_49 = (
                    fconvert.t(*(arg7 - 0x48)) * fconvert.t(2f) * data_46c014 * fconvert.t(3f)
                    + fconvert.t(1f)) * fconvert.t(arg6)
                    + fneg(fconvert.t(*(arg7 - 0x48))) * fconvert.t(3f) * data_46c014
                var_30_1 = fconvert.s((x87_r7_49 + fconvert.t(var_1c)) * float.t(*(arg7 + 0x18))
                    / fconvert.t(497f))
                long double x87_r7_58 = (
                    fconvert.t(*(arg7 - 0x4c)) * fconvert.t(2f) * data_46c014 * fconvert.t(3f)
                    + fconvert.t(1f)) * fconvert.t(arg5)
                    + fneg(fconvert.t(*(arg7 - 0x4c))) * fconvert.t(3f) * data_46c014
                var_34_1 = fconvert.s((x87_r7_58 + fconvert.t(var_38_1)) * float.t(*(arg7 + 0x14))
                    / fconvert.t(497f))
            
            int32_t __saved_ebp
            
            if (*(arg7 - 0x44) s<= 2)
                int32_t* var_5c_1 = &__saved_ebp
                sub_46b394(0, arg2)
            else if (*(arg7 - 0x44) != 3)
                int32_t* var_5c_3 = &__saved_ebp
                sub_46b394(3, arg2)
            else
                int32_t* var_5c_2 = &__saved_ebp
                sub_46b394(1, arg2)
            
            arg2 = (*data_530368)(var_30_1, 
                fconvert.s(fconvert.t(var_34_1) - fconvert.t(*(arg7 - 0x3c))), 0)
            result = arg7
            
            if (*(result - 0x44) s>= 2)
                float var_2c
                float var_28
                
                if (*(arg7 - 0x44) == 4)
                    int32_t* var_5c_4 = &__saved_ebp
                    sub_46b394(4, arg2)
                    long double x87_r7_92 = ((
                        fconvert.t(*(arg7 - 0x48)) * fconvert.t(12f) * fconvert.t(3f) + fconvert.t(1f))
                        * fconvert.t(arg6) + fneg(fconvert.t(*(arg7 - 0x48))) * fconvert.t(12f)
                        + fconvert.t(var_1c)) * fconvert.t(1f)
                    var_28 = fconvert.s(x87_r7_92 * float.t(*(arg7 + 0x18)) / fconvert.t(497f))
                    long double x87_r7_100 = (
                        fconvert.t(*(arg7 - 0x4c)) * fconvert.t(12f) * fconvert.t(2f) + fconvert.t(1f))
                        * fconvert.t(arg5)
                        + fneg(fconvert.t(*(arg7 - 0x4c))) * fconvert.t(12f) * data_46c02c
                        + fconvert.t(var_38_1)
                    var_2c = fconvert.s(x87_r7_100 * fconvert.t(1f) * float.t(*(arg7 + 0x14))
                        / fconvert.t(497f))
                else if (*(arg7 - 0x44) == 2)
                    int32_t* var_5c_5 = &__saved_ebp
                    sub_46b394(1, arg2)
                    long double x87_r7_109 = (
                        fconvert.t(*(arg7 - 0x48)) * fconvert.t(2f) * fconvert.t(3f) * data_46c014
                        + fconvert.t(1f)) * fconvert.t(arg6)
                        + fneg(fconvert.t(*(arg7 - 0x48))) * fconvert.t(3f) * data_46c014
                    var_28 = fconvert.s((x87_r7_109 + fconvert.t(var_1c)) * float.t(*(arg7 + 0x18))
                        / fconvert.t(497f))
                    long double x87_r7_118 = (
                        fconvert.t(*(arg7 - 0x4c)) * fconvert.t(2f) * fconvert.t(3f) * data_46c014
                        + fconvert.t(1f)) * fconvert.t(arg5)
                        + fneg(fconvert.t(*(arg7 - 0x4c))) * fconvert.t(3f) * data_46c014
                    var_2c = fconvert.s((x87_r7_118 + fconvert.t(var_38_1)) * float.t(*(arg7 + 0x14))
                        / fconvert.t(497f))
                else if (*(arg7 - 0x44) == 3)
                    int32_t* var_5c_6 = &__saved_ebp
                    sub_46b394(2, arg2)
                    long double x87_r7_127 = (
                        fconvert.t(*(arg7 - 0x48)) * fconvert.t(2f) * fconvert.t(2f) * fconvert.t(3f)
                        + fconvert.t(1f)) * fconvert.t(arg6)
                        + fneg(fconvert.t(*(arg7 - 0x48))) * fconvert.t(2f) * fconvert.t(3f)
                    var_28 = fconvert.s((x87_r7_127 + fconvert.t(var_1c)) * float.t(*(arg7 + 0x18))
                        / fconvert.t(497f))
                    long double x87_r7_136 = (
                        fconvert.t(*(arg7 - 0x4c)) * fconvert.t(2f) * fconvert.t(2f) * fconvert.t(3f)
                        + fconvert.t(1f)) * fconvert.t(arg5)
                        + fneg(fconvert.t(*(arg7 - 0x4c))) * fconvert.t(2f) * fconvert.t(3f)
                    var_2c = fconvert.s((x87_r7_136 + fconvert.t(var_38_1)) * float.t(*(arg7 + 0x14))
                        / fconvert.t(497f))
                
                result, arg2 = (*data_530368)(var_28, 
                    fconvert.s(fconvert.t(var_2c) - fconvert.t(*(arg7 - 0x3c))), 0)
            
            if (arg3 s> 0xa)
                break
            
            ebx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
