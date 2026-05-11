// ============================================================
// 函数名称: sub_4fef20
// 虚拟地址: 0x4fef20
// WARP GUID: 3421ce33-91e4-506b-9132-53e243b1d709
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4fe2cc, sub_4ee7d8, sub_4fe158, sub_4fdbc0, sub_402b4c, sub_4fd9fc, sub_403010
// [被调用的父级函数]: sub_4ffdd0, sub_4ffb38
// ============================================================

void __fastcallsub_4fef20(int32_t arg1, int32_t arg2, int32_t arg3 @ eax, int32_t arg4, float arg5, float arg6, void* arg7)
{
    // 第一条实际指令: int32_t ebx = 4
    int32_t ebx = 4
    int32_t eax_2 = *(*data_530304 + 0xdc0)
    
    if (eax_2 == 1)
        ebx = 1
    
    data_530304
    
    if (eax_2 == 2)
        ebx = 2
    
    data_530304
    
    if (eax_2 == 3)
        ebx = 3
    
    data_530304
    
    if (eax_2 == 4)
        ebx = 4
    
    data_530304
    
    if (eax_2 == 5)
        ebx = 5
    
    if (*data_530144 == 0)
        int32_t temp1_1 = ebx
        ebx += 1
        
        if (add_overflow(temp1_1, 1))
            sub_403010()
            noreturn
    
    if (data_52fe9c != 0 && ebx s> 2)
        ebx = 2
    
    int32_t eax_5 = *(arg7 + 0x10)
    
    if (eax_5 == 1 || eax_5 == 0xb)
        int32_t temp3_1 = ebx
        ebx += 1
        
        if (add_overflow(temp3_1, 1))
            sub_403010()
            noreturn
    
    if (*(arg7 + 0x10) == 0xb)
        *(arg7 + 0x10)
        int32_t eax_10 = *(arg7 + 0x10) * 0x2345
        bool o_3 = unimplemented  {imul eax, dword [eax+0x10], 0x2345}
        
        if (o_3)
            sub_403010()
            noreturn
        
        if (*(data_5301b0 + (eax_10 << 2) - 0x39c) s> *(arg7 + 0xc))
            *(arg7 + 0xc)
            bool o_4 = unimplemented  {imul edx, dword [edx+0xc], 0x35}
            
            if (o_4)
                sub_403010()
                noreturn
            
            if (*(data_5301b0 + (eax_10 << 2) + *(arg7 + 0xc) * 0xd4 - 0x8d8c) == 0 && ebx s> 4)
                ebx = 4
    
    float var_3c = fconvert.s(fconvert.t(*(arg7 + 0x2c)) / fconvert.t(100f))
    float var_2c =
        fconvert.s(fconvert.t(var_3c) / fconvert.t(*(arg7 + 0x34)) * fconvert.t(*(arg7 + 0x30)))
    
    if (ebx s< 0)
        return 
    
    int32_t i_1 = ebx + 1
    int32_t esi_1 = 0
    int32_t i
    
    do
        float var_30_1 = fconvert.s(float.t(esi_1) / float.t(ebx))
        
        if (add_overflow(ebx, neg.d(esi_1)))
            sub_403010()
            noreturn
        
        float var_34_1 = fconvert.s(float.t(ebx - esi_1) / float.t(ebx))
        float var_30_2 = fconvert.s(fconvert.t(var_30_1) * fconvert.t(var_30_1))
        
        if (esi_1 == 1 && sub_4ee7d8() != 0)
            void* eax_20
            eax_20.b = *(*data_5301f4 + 4)
            char temp8_1 = eax_20.b
            eax_20.b -= 2
            
            if (temp8_1 == 2)
                (*data_5306a4)(0, 0, 0x147ae148, 0xbfe947ae, 0, 0)
        
        float var_34_2 = fconvert.s(fconvert.t(var_34_1) * fconvert.t(var_34_1))
        float var_24_1
        
        if (arg3 s<= 0)
            var_24_1 = fconvert.s(float.t(arg1) * fconvert.t(var_34_2) * fconvert.t(var_2c))
        else
            var_24_1 = fconvert.s(float.t(arg1) * fconvert.t(var_30_2) * fconvert.t(var_2c))
        
        float var_28_1
        
        if (arg2 s<= 0)
            var_28_1 = fconvert.s(float.t(arg4) * fconvert.t(var_34_2) * fconvert.t(var_3c))
        else
            var_28_1 = fconvert.s(float.t(arg4) * fconvert.t(var_30_2) * fconvert.t(var_3c))
        
        float var_1c_1 = fconvert.s(fconvert.t(arg6) + fconvert.t(var_24_1))
        float var_20_1 = fconvert.s(fconvert.t(arg5) + fconvert.t(var_28_1))
        float var_38_1
        float var_18_1
        float var_14_1
        
        if (ebx != 1)
            void* eax_26
            eax_26.b = 1
            var_14_1 = fconvert.s(sub_4fe2cc(eax_26.b, *(arg7 + 0x28), var_20_1, var_1c_1, arg7)
                + (fconvert.t(arg6) + fconvert.t(var_24_1)) * fconvert.t(*(arg7 - 0x30))
                / fconvert.t(497f))
            void* eax_29
            eax_29.b = 2
            var_18_1 = fconvert.s(sub_4fe2cc(eax_29.b, *(arg7 + 0x28), var_20_1, var_1c_1, arg7)
                + (fconvert.t(arg5) + fconvert.t(var_28_1)) * fconvert.t(*(arg7 + 0x30))
                / fconvert.t(497f))
            void* eax_32
            eax_32.b = 3
            var_38_1 = fconvert.s(sub_4fe2cc(eax_32.b, *(arg7 + 0x28), var_20_1, var_1c_1, arg7))
        else
            var_14_1 = fconvert.s((fconvert.t(arg6) + fconvert.t(var_24_1)) * fconvert.t(*(arg7 - 0x30))
                / fconvert.t(497f))
            var_18_1 = fconvert.s((fconvert.t(arg5) + fconvert.t(var_28_1)) * fconvert.t(*(arg7 + 0x30))
                / fconvert.t(497f))
            var_38_1 = 0f
        
        if (*data_530364 == 2)
            sub_4fe158(var_38_1, var_18_1, var_14_1, arg7)
        else
            if (*data_530364 == 3)
                (*data_5307f8)(fconvert.s(fconvert.t(1f) - fconvert.t(var_1c_1)), var_20_1)
                sub_4fd9fc(var_20_1, arg7)
            else if (*(arg7 - 0x2a) == 0)
                sub_4fdbc0((*data_5307f8)(var_1c_1, var_20_1), 
                    sub_402b4c((data_4ff354 + fconvert.t(var_1c_1) + fconvert.t(1f)
                        - fconvert.t(var_20_1)) * fconvert.t(var_38_1) * fconvert.t(500f) * float.t(ebx)), 
                    ebx, var_1c_1, var_20_1, arg7)
            else
                sub_4fdbc0(
                    (*data_5307f8)(fconvert.s(fconvert.t(1f) - fconvert.t(var_1c_1)), 
                        fconvert.s(fconvert.t(1f) - fconvert.t(var_20_1))), 
                    sub_402b4c((data_4ff344 - fconvert.t(var_1c_1) + fconvert.t(var_20_1))
                    * fconvert.t(var_38_1) * fconvert.t(500f) * float.t(ebx)), ebx, 
                    fconvert.s(fconvert.t(1f) - fconvert.t(var_1c_1)), 
                    fconvert.s(fconvert.t(1f) - fconvert.t(var_20_1)), arg7)
            
            (*data_530368)(var_14_1, var_18_1, var_38_1)
        
        esi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)
}
