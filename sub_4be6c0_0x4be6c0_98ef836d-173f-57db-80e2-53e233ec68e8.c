// ============================================================
// 函数名称: sub_4be6c0
// 虚拟地址: 0x4be6c0
// WARP GUID: 98ef836d-173f-57db-80e2-53e233ec68e8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4cc9c8, sub_4bf070, sub_4cd0a0, sub_403010
// [被调用的父级函数]: sub_4bf070
// ============================================================

float __fastcallsub_4be6c0(int32_t arg1, float arg2 @ edx, float arg3 @ eax, int32_t* arg4, int32_t arg5, char arg6, int32_t arg7, void* arg8)
{
    // 第一条实际指令: void var_330
    void var_330
    __builtin_memcpy(&var_330, arg5, 0x104)
    void var_22c
    __builtin_memcpy(&var_22c, arg7, 0x104)
    void var_128
    __builtin_memcpy(&var_128, arg1, 0x104)
    *arg4 = 0x3f800000
    arg4[1] = 0
    arg4[2] = 0x3f800000
    arg4[3] = 0
    char ebx = 0
    int16_t var_334 = 0
    float var_18 = 1f
    float var_24 = 1f
    float result
    
    do
        if (ebx != 0)
            int32_t eax_1 = sub_4cd0a0(ebx)
            
            if (add_overflow(eax_1, 0xffffffff))
                sub_403010()
                noreturn
            
            ebx = sub_4cc9c8(eax_1 - 1)
        else
            ebx = 0xa
        
        int32_t var_454_2 = *(arg8 + 0x2c)
        int16_t var_12c
        int32_t eax_6 = sx.d(var_12c)
        
        if (add_overflow(5, neg.d(eax_6)))
            sub_403010()
            noreturn
        
        int32_t eax_7 = sx.d(var_334)
        int32_t edx_1 = 2 - eax_7
        
        if (add_overflow(2, neg.d(eax_7)))
            sub_403010()
            noreturn
        
        eax_7.b = ebx == arg6
        float result_3
        void var_434
        sub_4bf070(&var_434, &var_22c, &var_128, &result_3, 0f, 1.40129846e-45f, eax_7.b, 0, edx_1, 
            5 - eax_6, ebx, &var_330)
        float result_2 = result_3
        result = result_2
        float result_1 = result
        
        if (arg3 s> 1)
            float var_14_1 = 1f
            result = arg3
            
            if (result s> 0)
                float i
                
                do
                    var_14_1 = fconvert.s(fconvert.t(var_14_1)
                        * fconvert.t(fconvert.s(fconvert.t(1f) - fconvert.t(result_2))))
                    i = result
                    result -= 1
                while (i != 1)
            
            result_2 = fconvert.s(fconvert.t(1f) - fconvert.t(var_14_1))
        
        if (arg2 s> 1)
            float var_20_1 = 1f
            result = arg2
            
            if (result s> 0)
                float i_1
                
                do
                    var_20_1 = fconvert.s(fconvert.t(var_20_1)
                        * fconvert.t(fconvert.s(fconvert.t(1f) - fconvert.t(result_1))))
                    i_1 = result
                    result -= 1
                while (i_1 != 1)
            
            result_1 = fconvert.s(fconvert.t(1f) - fconvert.t(var_20_1))
        
        *arg4 = fconvert.s(fconvert.t(*arg4) - fconvert.t(result_2) * fconvert.t(var_18))
        var_18 = fconvert.s(fconvert.t(var_18) - fconvert.t(var_18) * fconvert.t(result_2))
        arg4[2] = fconvert.s(fconvert.t(arg4[2]) - fconvert.t(result_1) * fconvert.t(var_24))
        var_24 = fconvert.s(fconvert.t(var_24) - fconvert.t(var_24) * fconvert.t(result_1))
    while (ebx != arg6)
    
    return result
}
