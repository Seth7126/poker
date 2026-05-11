// ============================================================
// 函数名称: sub_46af40
// 虚拟地址: 0x46af40
// WARP GUID: c56acfd8-b49e-511d-bdce-586e32482219
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_46b1f4
// ============================================================

void* __fastcallsub_46af40(int32_t arg1, int32_t arg2, int32_t arg3 @ eax, int32_t arg4, float arg5, float arg6, void* arg7)
{
    // 第一条实际指令: float var_38 = fconvert.s(float.t(*(arg7 + 0x18)) / fconvert.t(90f) * data_46b194)
    float var_38 = fconvert.s(float.t(*(arg7 + 0x18)) / fconvert.t(90f) * data_46b194)
    
    if (*(arg7 + 0x1c) s> 0x96)
        var_38 = fconvert.s(fconvert.t(var_38) / fconvert.t(2f))
    
    float var_28 = fconvert.s(fconvert.t(var_38) / float.t(*(arg7 + 0x20)) * float.t(*(arg7 + 0x1c)))
    void* result = arg7
    int32_t esi = *(result - 4)
    
    if (esi s>= 0)
        int32_t i_1 = esi + 1
        int32_t ebx_1 = 0
        int32_t i
        
        do
            float var_2c_1 = fconvert.s(float.t(ebx_1) / float.t(*(arg7 - 4)))
            int32_t eax_6 = *(arg7 - 4)
            
            if (add_overflow(eax_6, neg.d(ebx_1)))
                sub_403010()
                noreturn
            
            float var_30_1 = fconvert.s(float.t(eax_6 - ebx_1) / float.t(*(arg7 - 4)))
            float var_2c_2 = fconvert.s(fconvert.t(var_2c_1) * fconvert.t(var_2c_1))
            float var_30_2 = fconvert.s(fconvert.t(var_30_1) * fconvert.t(var_30_1))
            float var_20_1
            
            if (arg3 s<= 0)
                var_20_1 = fconvert.s(float.t(arg1) * fconvert.t(var_30_2) * fconvert.t(var_28))
            else
                var_20_1 = fconvert.s(float.t(arg1) * fconvert.t(var_2c_2) * fconvert.t(var_28))
            
            float var_24_1
            
            if (arg2 s<= 0)
                var_24_1 = fconvert.s(float.t(arg4) * fconvert.t(var_30_2) * fconvert.t(var_38))
            else
                var_24_1 = fconvert.s(float.t(arg4) * fconvert.t(var_2c_2) * fconvert.t(var_38))
            
            float var_18_1 = fconvert.s((fconvert.t(arg6) + fconvert.t(var_20_1)) * data_46b1a4)
            float var_10_1 = fconvert.s((fconvert.t(arg6) + fconvert.t(var_20_1))
                * float.t(*(arg7 + 0x20)) / fconvert.t(639f))
            float var_14_1 = fconvert.s((fconvert.t(arg5) + fconvert.t(var_24_1))
                * float.t(*(arg7 + 0x1c)) / fconvert.t(639f))
            float var_34_1 = fconvert.s(
                fconvert.t(fconvert.s((fconvert.t(arg5) + fconvert.t(var_24_1)) * data_46b1a4))
                * fconvert.t(*(arg7 + 0x28)) * data_46b1a4 + fconvert.t(*(arg7 + 0x30)) - data_46b1b4
                + data_46b1c0)
            
            if (*(arg7 - 5) != 0)
                long double x87_r7_54 = ((fconvert.t(arg5) + fconvert.t(var_24_1))
                    * (fconvert.t(1f) - (fconvert.t(arg6) + fconvert.t(var_20_1))) * data_46b1d0
                    + data_46b1dc) * fconvert.t(*(arg7 + 0x14)) * fconvert.t(2f)
                    * fconvert.t(*(*(arg7 - 0xc) + 0x10c4))
                (*data_530518)(*(*(arg7 - 0xc) + 0x10b8), *(*(arg7 - 0xc) + 0x10bc), 
                    *(*(arg7 - 0xc) + 0x10c0), fconvert.s(x87_r7_54))
            
            if (*(arg7 - 0x10) != 0)
                (*data_5307f8)(
                    fconvert.s(fconvert.t(var_18_1) * fconvert.t(*(arg7 + 0x2c)) * data_46b1a4
                        + data_46b1e8 + fconvert.t(*(arg7 + 0x34))), 
                    var_34_1)
            
            result = (*data_530368)(var_10_1, var_14_1, 0)
            ebx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
