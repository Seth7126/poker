// ============================================================
// 函数名称: sub_4bc79c
// 虚拟地址: 0x4bc79c
// WARP GUID: d0a27e86-ad55-5699-9e3a-c8c8307fcf47
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4bc79c, sub_403010
// [被调用的父级函数]: sub_4bca48, sub_4bc79c
// ============================================================

void __fastcallsub_4bc79c(int32_t arg1, int32_t arg2, int32_t arg3 @ eax, long double arg4 @ st0, long double arg5 @ st1, char arg6, char arg7, char arg8, int32_t arg9, char arg10, int32_t arg11)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_20 = ebx
    int32_t esi
    int32_t var_24 = esi
    int32_t* esp = &var_24
    int32_t i = arg1
    int32_t ebx_1 = arg2
    
    if (i == 1)
        float var_8 = fconvert.s(float.t(arg3) / float.t(ebx_1))
    else if (i s>= 2 && arg10 == 0)
        float var_8_1 = 1f
        
        while (i s> 0)
            if (add_overflow(ebx_1, neg.d(arg3)))
                sub_403010()
                noreturn
            
            var_8_1 = fconvert.s(float.t(ebx_1 - arg3) * fconvert.t(var_8_1) / float.t(ebx_1))
            int32_t temp4_1 = ebx_1
            ebx_1 -= 1
            
            if (add_overflow(temp4_1, 0xffffffff))
                sub_403010()
                noreturn
            
            int32_t i_5 = i
            i -= 1
            
            if (add_overflow(i_5, 0xffffffff))
                sub_403010()
                noreturn
        
        float var_8_2 = fconvert.s(fconvert.t(1f) - fconvert.t(var_8_1))
    else
        int32_t var_1c
        
        if (i != 2 || arg10 == 0)
            if (add_overflow(ebx_1, 0xffffffff))
                sub_403010()
                noreturn
            
            var_1c = ebx_1 - 1
            float var_8_4 = fconvert.s(float.t(arg3) / float.t(ebx_1) * float.t(arg9) / float.t(var_1c))
            
            if (arg6 != 0)
                int32_t i_6 = 1
                
                if (arg10 != 0)
                    i_6 = 2
                
                if (arg8 != 0)
                    i_6 = 3
                
                if (arg7 != 0)
                    i_6 = 4
                
                float var_10_1 = 1f
                int32_t i_3 = i_6
                
                if (i_3 s> 0)
                    arg3 = 1
                    int32_t i_1
                    
                    do
                        if (add_overflow(i, 1))
                            sub_403010()
                            noreturn
                        
                        if (add_overflow(i + 1, neg.d(arg3)))
                            sub_403010()
                            noreturn
                        
                        var_10_1 =
                            fconvert.s(float.t(i + 1 - arg3) * fconvert.t(var_10_1) / float.t(arg3))
                        arg3 += 1
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
                
                float var_c_1 = fconvert.s(fconvert.t(1f) / fconvert.t(var_10_1))
                int32_t i_4 = i
                
                if (i_4 s> 0)
                    arg3 = 1
                    int32_t i_2
                    
                    do
                        if (add_overflow(ebx_1, 1))
                            sub_403010()
                            noreturn
                        
                        if (add_overflow(ebx_1 + 1, neg.d(arg3)))
                            sub_403010()
                            noreturn
                        
                        var_c_1 =
                            fconvert.s(float.t(ebx_1 + 1 - arg3) * fconvert.t(var_c_1) / float.t(arg3))
                        arg3 += 1
                        i_2 = i_4
                        i_4 -= 1
                    while (i_2 != 1)
                
                float var_8_5 = fconvert.s(fconvert.t(1f) / fconvert.t(var_c_1))
            else if (arg10 != 0)
                sub_4bc79c(0, 0, 0, 0, 0, 0, 0, arg11)
                float var_c_2 = fconvert.s(arg4)
                var_24 = arg11
                
                if (add_overflow(i, 0xffffffff))
                    sub_403010()
                    noreturn
                
                if (add_overflow(ebx_1, 0xffffffff))
                    sub_403010()
                    noreturn
                
                sub_4bc79c(0, 0, 0, 0, 0, 0, 0)
                esp = &var_1c
                float var_8_6 = fconvert.s((fconvert.t(var_c_2) * fconvert.t(fconvert.s(arg5))
                    + fconvert.t(var_8_4)) / fconvert.t(2f))
        else
            if (add_overflow(ebx_1, 0xffffffff))
                sub_403010()
                noreturn
            
            var_1c = ebx_1 - 1
            float var_8_3 = fconvert.s(float.t(arg3) / float.t(ebx_1) * float.t(arg9) / float.t(var_1c))
    
    unimplemented  {fld st0, dword [ebp-0x4]}
    *esp
    esp[1]
}
