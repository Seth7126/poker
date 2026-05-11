// ============================================================
// 函数名称: sub_4be9f0
// 虚拟地址: 0x4be9f0
// WARP GUID: 15d520a7-2fba-59aa-b94b-e11cacd4f28c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4bf070
// ============================================================

long double __fastcallsub_4be9f0(int32_t arg1, int32_t arg2, int32_t arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: float var_14 = 0f
    float var_14 = 0f
    
    if (arg1 s>= arg4)
        int32_t i_1 = arg1 - arg4 + 1
        int32_t j_6 = arg4
        int32_t i
        
        do
            int32_t edi_1 = 1
            int32_t j_3 = j_6
            
            if (j_3 s> 0)
                int32_t esi_1 = 1
                int32_t j
                
                do
                    if (add_overflow(arg1, 1))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(arg1 + 1, neg.d(esi_1)))
                        sub_403010()
                        noreturn
                    
                    bool o_3 = unimplemented  {imul edi}
                    
                    if (o_3)
                        sub_403010()
                        noreturn
                    
                    edi_1 *= arg1 + 1 - esi_1
                    esi_1 += 1
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            int32_t j_4 = j_6
            
            if (j_4 s> 0)
                int32_t esi_2 = 1
                int32_t j_1
                
                do
                    edi_1 = divs.dp.d(sx.q(edi_1), esi_2)
                    esi_2 += 1
                    j_1 = j_4
                    j_4 -= 1
                while (j_1 != 1)
            
            float var_20_1 = 1f
            int32_t j_7 = j_6
            int32_t eax_9 = 0
            
            if (add_overflow(arg1, 0xffffffff))
                sub_403010()
                noreturn
            
            if (arg1 - 1 s>= 0)
                int32_t j_5 = arg1
                int32_t esi_3 = 0
                int32_t j_2
                
                do
                    if (j_7 s<= 0)
                        int32_t edx_10 = arg2 - esi_3
                        
                        if (add_overflow(arg2, neg.d(esi_3)))
                            sub_403010()
                            noreturn
                        
                        int32_t ecx_1 = arg3 - eax_9
                        
                        if (add_overflow(arg3, neg.d(eax_9)))
                            sub_403010()
                            noreturn
                        
                        if (add_overflow(edx_10, neg.d(ecx_1)))
                            sub_403010()
                            noreturn
                        
                        if (add_overflow(arg2, neg.d(esi_3)))
                            sub_403010()
                            noreturn
                        
                        var_20_1 = fconvert.s(float.t(edx_10 - ecx_1) / float.t(arg2 - esi_3)
                            * fconvert.t(var_20_1))
                    else
                        int32_t j_8 = j_7
                        j_7 -= 1
                        
                        if (add_overflow(j_8, 0xffffffff))
                            sub_403010()
                            noreturn
                        
                        if (add_overflow(arg3, neg.d(eax_9)))
                            sub_403010()
                            noreturn
                        
                        if (add_overflow(arg2, neg.d(esi_3)))
                            sub_403010()
                            noreturn
                        
                        var_20_1 = fconvert.s(float.t(arg3 - eax_9) / float.t(arg2 - esi_3)
                            * fconvert.t(var_20_1))
                        int32_t temp17_1 = eax_9
                        eax_9 += 1
                        
                        if (add_overflow(temp17_1, 1))
                            sub_403010()
                            noreturn
                    
                    esi_3 += 1
                    j_2 = j_5
                    j_5 -= 1
                while (j_2 != 1)
            
            var_14 = fconvert.s(float.t(edi_1) * fconvert.t(var_20_1) + fconvert.t(var_14))
            j_6 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return fconvert.t(var_14)
}
