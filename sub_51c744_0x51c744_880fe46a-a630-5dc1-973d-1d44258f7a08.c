// ============================================================
// 函数名称: sub_51c744
// 虚拟地址: 0x51c744
// WARP GUID: 880fe46a-a630-5dc1-973d-1d44258f7a08
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_51b7b4, sub_51b7e0, sub_403010
// [被调用的父级函数]: sub_4f9658, sub_50003c, sub_5044a0
// ============================================================

int32_t __fastcallsub_51c744(int32_t arg1, int32_t arg2, void* arg3 @ eax, float* arg4, char arg5, int16_t arg6)
{
    // 第一条实际指令: int32_t edi = arg1
    int32_t edi = arg1
    int32_t esi = arg2
    
    if (esi s< 1)
        esi = 1
        edi = 1
    else
        int32_t eax_2 = *(*data_52ffd0 + 0x3cfc)
        
        if (add_overflow(eax_2, 0x14))
            sub_403010()
            noreturn
        
        if (esi s> eax_2 + 0x14 || edi s< 1 || edi s> 0x14)
            esi = 1
            edi = 1
    
    float var_10 = 104f
    
    if (*(*data_5301f4 + 4) == 4)
        var_10 = fconvert.s(data_51cbc0 * fconvert.t(104f))
        int32_t eax_7 = *(data_530598 + 0xc)
        
        if (eax_7 == 1)
            var_10 = fconvert.s(data_51cbcc * fconvert.t(var_10))
        
        data_530598
        
        if (eax_7 == 2)
            var_10 = fconvert.s(data_51cbc0 * fconvert.t(var_10))
    
    *arg4 = fconvert.s(float.t(edi) * fconvert.t(var_10) + fconvert.t(0f))
    arg4[1] = 0
    arg4[2] = 0
    arg4[3] = 0
    arg4[4] = 0x3f000000
    arg4[5] = 0
    arg4[7] = 0
    arg4[8] = 0
    arg4[0x14] = edi
    arg4[0x13] = esi
    
    if (*(*data_52ffd0 + 0x3d00) == 0)
        bool o_2 = unimplemented  {imul eax, esi, 0x41}
        
        if (o_2)
            sub_403010()
            noreturn
        
        *(arg3 + esi * 0x104 + (edi << 2) - 0x102) = arg6
    
    float var_24
    char var_1d
    
    if (*(*data_5301f4 + 4) == 4)
        var_1d = 0
        var_24 = 0f
        arg4[2] = 0
        bool o_3 = unimplemented  {imul eax, esi, 0x41}
        
        if (o_3)
            sub_403010()
            noreturn
        
        int32_t i_2 = sx.d(*(*data_52ffd0 + esi * 0x104))
        
        if (i_2 s> 0)
            int32_t i_1 = i_2
            int32_t var_18_1 = 1
            int32_t i
            
            do
                bool o_4 = unimplemented  {imul eax, esi, 0x41}
                
                if (o_4)
                    sub_403010()
                    noreturn
                
                int32_t eax_17 = sx.d(*(*data_52ffd0 + esi * 0x104 + (var_18_1 << 2) - 0x102))
                
                if (eax_17 s> 0)
                    bool o_5 = unimplemented  {imul edx, eax, 0x35}
                    
                    if (o_5)
                        sub_403010()
                        noreturn
                    
                    if (*(data_5301b0 + eax_17 * 0xd4 + 0x60f64) != 0)
                        bool o_6 = unimplemented  {imul edx, eax, 0x35}
                        
                        if (o_6)
                            sub_403010()
                            noreturn
                        
                        if (*(data_5301b0 + eax_17 * 0xd4 + 0x60f65) != 1)
                            bool o_7 = unimplemented  {imul edx, esi, 0x41}
                            
                            if (o_7)
                                sub_403010()
                                noreturn
                            
                            if (*(arg3 + esi * 0x104) s>= 7 && *(*data_52ffd0 + esi + 0x498c) == 0)
                                var_1d = 1
                                bool o_8 = unimplemented  {imul eax, eax, 0x35}
                                
                                if (o_8)
                                    sub_403010()
                                    noreturn
                                
                                var_24 = fconvert.s(fconvert.t(1f)
                                    * fconvert.t(*(data_5301b0 + eax_17 * 0xd4 + 0x60f68)))
                
                var_18_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    float var_c
    
    if (edi != 1)
        bool o_9 = unimplemented  {imul eax, esi, 0x41}
        
        if (o_9)
            sub_403010()
            noreturn
        
        int32_t eax_19
        eax_19.w = *(arg3 + esi * 0x104)
        
        if (eax_19.w s> 0x69)
            if (add_overflow(edi, 0xffffffff))
                sub_403010()
                noreturn
            
            bool o_12 = unimplemented  {imul edx, esi, 0x41}
            
            if (o_12)
                sub_403010()
                noreturn
            
            int32_t eax_22 = sx.d(eax_19.w)
            
            if (add_overflow(eax_22, 0xffffffff))
                sub_403010()
                noreturn
            
            var_c = fconvert.s((float.t(edi - 1) - fconvert.t(0f)) / float.t(eax_22 - 1))
        else
            if (add_overflow(edi, 0xffffffff))
                sub_403010()
                noreturn
            
            var_c = fconvert.s((float.t(edi - 1) - fconvert.t(0f)) * data_51cbe0)
    else
        var_c = 0f
    
    *arg4 = fconvert.s(fconvert.t(var_c) * fconvert.t(var_10))
    
    if (*(*data_5301f4 + 4) == 4)
        if (*(*data_52ffd0 + 0x3d00) != 0 && esi == *(*data_52ffd0 + 0x3d14)
                && sub_51b7b4(*data_52ffd0) != 0)
            *arg4 = fconvert.s((fconvert.t(1f) - fconvert.t(*(*data_52ffd0 + 0x3d0c)))
                * fconvert.t(var_c) * fconvert.t(var_10))
            arg4[2] = fconvert.s(fconvert.t(var_c) * fconvert.t(var_10) / fconvert.t(8f)
                * fconvert.t(*(*data_52ffd0 + 0x3d0c)))
        
        bool o_14 = unimplemented  {imul eax, esi, 0x41}
        
        if (o_14)
            sub_403010()
            noreturn
        
        if (*(*data_52ffd0 + esi * 0x104) s>= 7)
            if (var_1d != 0)
                *arg4 = fconvert.s(fconvert.t(*arg4) * fconvert.t(var_24))
                arg4[2] = fconvert.s(fconvert.t(var_c) * fconvert.t(var_10) / fconvert.t(8f)
                    * (fconvert.t(1f) - fconvert.t(var_24)) + fconvert.t(arg4[2]))
            else
                *arg4 = 0f
                arg4[2] = fconvert.s(fconvert.t(var_c) * fconvert.t(var_10) / fconvert.t(8f)
                    + fconvert.t(arg4[2]))
    
    if (*(arg3 + 0x3d00) != 0 && esi == *(arg3 + 0x3d14) && sub_51b7e0(*data_52ffd0, edi) != 0
            && *(arg3 + 0x3d01) != 0 && sub_51b7e0(*data_52ffd0, *(arg3 + 0x3d04)) != 0 && arg5 == 0)
        arg4[2] = 0x42200000
    
    bool o_15 = unimplemented  {imul eax, ecx, 0x9391}
    
    if (o_15)
        sub_403010()
        noreturn
    
    int32_t temp1_1 = mods.dp.d(sx.q(mods.dp.d(sx.q(esi * 0x9391), 0x2dd)), 9)
    
    if (add_overflow(temp1_1, 0xfffffffb))
        sub_403010()
        noreturn
    
    arg4[1] = fconvert.s(float.t(temp1_1 - 5) * data_51cbf0 + fconvert.t(arg4[1]))
    bool o_17 = unimplemented  {imul eax, ecx, 0xbaa1}
    
    if (o_17)
        sub_403010()
        noreturn
    
    int32_t temp1_3 = mods.dp.d(sx.q(mods.dp.d(sx.q(esi * 0xbaa1), 0x2db)), 7)
    
    if (add_overflow(temp1_3, 0xfffffffd))
        sub_403010()
        noreturn
    
    *arg4 = fconvert.s(float.t(temp1_3 - 3) * data_51cbf0 + fconvert.t(*arg4))
    bool o_19 = unimplemented  {imul eax, ecx, 0xe1b1}
    
    if (o_19)
        sub_403010()
        noreturn
    
    int32_t eax_61
    int32_t edx_34
    edx_34:eax_61 = sx.q(mods.dp.d(sx.q(esi * 0xe1b1), 0x395))
    int32_t temp1_5 = mods.dp.d(edx_34:eax_61, 0xb)
    
    if (not(add_overflow(temp1_5, 0xfffffffd)))
        arg4[5] = fconvert.s(float.t(temp1_5 - 3) * data_51cbfc + fconvert.t(arg4[5]))
        return divs.dp.d(edx_34:eax_61, 0xb)
    
    sub_403010()
    noreturn
}
