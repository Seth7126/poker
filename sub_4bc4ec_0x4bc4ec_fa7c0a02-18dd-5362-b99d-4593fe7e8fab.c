// ============================================================
// 函数名称: sub_4bc4ec
// 虚拟地址: 0x4bc4ec
// WARP GUID: fa7c0a02-18dd-5362-b99d-4593fe7e8fab
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4bca48, sub_4cc9c8, sub_4cd0a0, sub_403010
// [被调用的父级函数]: sub_4bca48
// ============================================================

float __fastcallsub_4bc4ec(int32_t arg1, int32_t arg2, float arg3 @ eax, int32_t* arg4, int32_t arg5, char arg6, void* arg7)
{
    // 第一条实际指令: void var_31c
    void var_31c
    __builtin_memcpy(&var_31c, arg5, 0x104)
    void var_218
    __builtin_memcpy(&var_218, arg1, 0x104)
    void var_114
    __builtin_memcpy(&var_114, arg2, 0x104)
    *arg4 = 0x3f800000
    arg4[1] = 0
    char ebx = 0
    int16_t var_320 = 0
    float var_10 = 1f
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
        
        int32_t var_440_1 = *(arg7 + 0x28)
        int16_t var_118
        int32_t eax_6 = sx.d(var_118)
        
        if (add_overflow(5, neg.d(eax_6)))
            sub_403010()
            noreturn
        
        int32_t eax_7 = sx.d(var_320)
        int32_t edx_1 = 2 - eax_7
        
        if (add_overflow(2, neg.d(eax_7)))
            sub_403010()
            noreturn
        
        eax_7.b = ebx == arg6
        float result_1
        void var_420
        sub_4bca48(&var_420, &var_218, &var_114, &result_1, 1.40129846e-45f, eax_7.b, 0, edx_1, 
            5 - eax_6, ebx, &var_31c)
        result = result_1
        float result_2 = result
        
        if (arg3 s> 1)
            float var_c_1 = 1f
            result = arg3
            
            if (result s> 0)
                float i
                
                do
                    var_c_1 = fconvert.s(fconvert.t(var_c_1)
                        * fconvert.t(fconvert.s(fconvert.t(1f) - fconvert.t(result_2))))
                    i = result
                    result -= 1
                while (i != 1)
            
            result_2 = fconvert.s(fconvert.t(1f) - fconvert.t(var_c_1))
        
        *arg4 = fconvert.s(fconvert.t(*arg4) - fconvert.t(result_2) * fconvert.t(var_10))
        var_10 = fconvert.s(fconvert.t(var_10) - fconvert.t(var_10) * fconvert.t(result_2))
    while (ebx != arg6)
    
    return result
}
