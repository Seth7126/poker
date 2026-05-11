// ============================================================
// 函数名称: sub_4fe2cc
// 虚拟地址: 0x4fe2cc
// WARP GUID: 9fb9dac1-5456-50ba-83da-f8e404bd3025
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4fe478, sub_4fef20
// ============================================================

long double __stdcallsub_4fe2cc(char arg1 @ eax, float arg2, float arg3, float arg4, void* arg5)
{
    // 第一条实际指令: arg2 = fconvert.s((fconvert.t(1f) - fconvert.t(*(arg5 - 0x28))) * fconvert.t(arg2))
    arg2 = fconvert.s((fconvert.t(1f) - fconvert.t(*(arg5 - 0x28))) * fconvert.t(arg2))
    
    if (*(arg5 - 0x19) != 0)
        arg4 = fconvert.s(fconvert.t(1f) - fconvert.t(arg4))
    
    float var_8
    
    if (*(arg5 - 0x29) == 0)
        arg2 = fconvert.s((fconvert.t(1f) - fconvert.t(*(arg5 + 0x24)) * fconvert.t(arg4))
            * fconvert.t(arg2))
        
        if (arg1 == 1)
            var_8 = 0f
        else if (arg1 == 2)
            float var_c_3 = fconvert.s((fconvert.t(-0.5f) + fconvert.t(arg3)) * fconvert.t(2f))
            var_8 = fconvert.s(fneg(fconvert.t(var_c_3)) * fconvert.t(var_c_3) * fconvert.t(var_c_3)
                * fconvert.t(arg2) * fconvert.t(arg2) / fconvert.t(400f) / fconvert.t(16f))
        else if (arg1 == 3)
            float var_c_4 = fconvert.s((fconvert.t(-0.5f) + fconvert.t(arg3)) * fconvert.t(2f))
            var_8 = fconvert.s(fconvert.t(var_c_4) * fconvert.t(var_c_4) * fconvert.t(arg2)
                / fconvert.t(100f))
            
            if (*(arg5 - 0x19) != 0)
                var_8 = fconvert.s(fneg(fconvert.t(var_8)))
    else
        arg2 = fconvert.s((fconvert.t(1f) - fconvert.t(*(arg5 + 0x24)) * fconvert.t(arg3))
            * fconvert.t(arg2) * fconvert.t(*(arg5 + 0x34)) / fconvert.t(*(arg5 + 0x30)))
        
        if (arg1 == 1)
            float var_c_1 = fconvert.s((fconvert.t(-0.5f) + fconvert.t(arg4)) * fconvert.t(2f))
            var_8 = fconvert.s(fneg(fconvert.t(var_c_1)) * fconvert.t(var_c_1) * fconvert.t(var_c_1)
                * fconvert.t(arg2) * fconvert.t(arg2) / fconvert.t(400f) / fconvert.t(16f))
        else if (arg1 == 2)
            var_8 = 0f
        else if (arg1 == 3)
            float var_c_2 = fconvert.s((fconvert.t(-0.5f) + fconvert.t(arg4)) * fconvert.t(2f))
            var_8 = fconvert.s(fconvert.t(var_c_2) * fconvert.t(var_c_2) * fconvert.t(arg2)
                / fconvert.t(100f))
            
            if (*(arg5 - 0x19) != 0)
                var_8 = fconvert.s(fneg(fconvert.t(var_8)))
    
    return fconvert.t(var_8)
}
