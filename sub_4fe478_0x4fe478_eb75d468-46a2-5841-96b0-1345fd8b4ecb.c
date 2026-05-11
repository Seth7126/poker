// ============================================================
// 函数名称: sub_4fe478
// 虚拟地址: 0x4fe478
// WARP GUID: eb75d468-46a2-5841-96b0-1345fd8b4ecb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4fe2cc, sub_4fe1d4, sub_4fe250, sub_4fe158, sub_4ee6b0, sub_4fdbc0, sub_402b4c, sub_4fd9fc, sub_403010
// [被调用的父级函数]: sub_4ffdd0, sub_4ffb38
// ============================================================

void __stdcallsub_4fe478(float arg1, float arg2, float arg3, float arg4, void* arg5)
{
    // 第一条实际指令: int32_t ebx = 4
    int32_t ebx = 4
    
    if (*(arg5 + 0x10) != 1)
        int32_t eax_6 = *(*data_530304 + 0xdc0)
        
        if (eax_6 == 1)
            ebx = 2
        
        data_530304
        
        if (eax_6 == 2)
            ebx = 3
        
        data_530304
        
        if (eax_6 == 3)
            ebx = 4
        
        data_530304
        
        if (eax_6 == 4)
            ebx = 6
        
        data_530304
        
        if (eax_6 == 5)
            ebx = 0xc
    else
        int32_t eax_3 = *(*data_530304 + 0xdc0)
        
        if (eax_3 == 1)
            ebx = 2
        
        data_530304
        
        if (eax_3 == 2)
            ebx = 5
        
        data_530304
        
        if (eax_3 == 3)
            ebx = 6
        
        data_530304
        
        if (eax_3 == 4)
            ebx = 0xa
        
        data_530304
        
        if (eax_3 == 5)
            ebx = 0x10
    
    if (*data_530144 == 0)
        int32_t temp1_1 = ebx
        ebx += 2
        
        if (add_overflow(temp1_1, 2))
            sub_403010()
            noreturn
    
    int16_t eax_11
    
    if (*(arg5 + 0x10) s>= 0)
        eax_11 = (*(arg5 + 0x10)).w
    else
        int32_t eax_10 = *(arg5 + 0x10)
        eax_11 = (neg.d(eax_10)).w
        
        if (neg.d(eax_10) == 0x80000000)
            sub_403010()
            noreturn
    
    int16_t edx_11
    
    if (*(arg5 + 0xc) s>= 0)
        edx_11 = (*(arg5 + 0xc)).w
    else
        int32_t edx_10 = *(arg5 + 0xc)
        edx_11 = (neg.d(edx_10)).w
        
        if (neg.d(edx_10) == 0x80000000)
            sub_403010()
            noreturn
    
    if (*data_530364 != 2 || *(arg5 + 0x10) != 1)
        bool o_4 = unimplemented  {imul ecx, ecx, 0x2345}
        
        if (o_4)
            sub_403010()
            noreturn
        
        int32_t esi_1 = sx.d(edx_11) * 0x35
        bool o_5 = unimplemented  {imul esi, ecx, 0x35}
        
        if (o_5)
            sub_403010()
            noreturn
        
        if (*(data_5301b0 + sx.d(eax_11) * 0x8d14 + (esi_1 << 2) - 0x8d8c) == 0)
        label_4fe600:
            
            if (data_52fe9c != 0)
                if (ebx s> 3)
                    ebx = 3
                
                if (*(*data_530304 + 0xdfb) != 0 && ebx s> 2)
                    ebx = 2
        else
            bool o_6 = unimplemented  {imul eax, eax, 0x2345}
            
            if (o_6)
                sub_403010()
                noreturn
            
            if (*(data_5301b0 + sx.d(eax_11) * 0x8d14 + (esi_1 << 2) - 0x8d8b) != 1)
                goto label_4fe600
    
    if (ebx s> 1)
        int32_t eax_19 = *(arg5 + 0x10)
        
        if (eax_19 == 1 || eax_19 == 0xb)
            int32_t temp7_1 = ebx
            ebx += 1
            
            if (add_overflow(temp7_1, 1))
                sub_403010()
                noreturn
    
    if (*(arg5 + 0x10) s> 0xa)
    label_4fe664:
        
        if (data_7a7d98 == 0 || *(arg5 + 0x10) != 0xc)
            *(arg5 + 0x10)
            bool o_8 = unimplemented  {imul eax, dword [eax+0x10], 0x2345}
            
            if (o_8)
                sub_403010()
                noreturn
            
            *(arg5 + 0xc)
            bool o_9 = unimplemented  {imul edx, dword [edx+0xc], 0x35}
            
            if (o_9)
                sub_403010()
                noreturn
            
            if (*(data_5301b0 + *(arg5 + 0x10) * 0x8d14 + *(arg5 + 0xc) * 0xd4 - 0x8d8c) == 0)
                ebx = 1
    else if (sub_4ee6b0(*(arg5 + 0x10)) != 0)
        goto label_4fe664
    
    if (*data_530364 == 2 && sub_4ee6b0(*(arg5 + 0x10)) != 0 && *(arg5 + 0x10) == 0xb)
        *(arg5 + 0x10)
        bool o_10 = unimplemented  {imul eax, dword [eax+0x10], 0x2345}
        
        if (o_10)
            sub_403010()
            noreturn
        
        *(arg5 + 0xc)
        bool o_11 = unimplemented  {imul edx, dword [edx+0xc], 0x35}
        
        if (o_11)
            sub_403010()
            noreturn
        
        if (*(data_5301b0 + *(arg5 + 0x10) * 0x8d14 + *(arg5 + 0xc) * 0xd4 - 0x8d8c) == 0
                && *(*data_530304 + 0xdfa) != 0 && *data_530740 s<= 4)
            float var_14_1 = fconvert.s((fconvert.t(arg4) + fconvert.t(0f)) * fconvert.t(*(arg5 + 0x34))
                / fconvert.t(497f))
            float var_18_1 = fconvert.s((fconvert.t(arg4) + fconvert.t(1f)) * fconvert.t(*(arg5 + 0x34))
                / fconvert.t(497f))
            float var_8_1 = fconvert.s((data_4feee0 + fconvert.t(arg3)) * fconvert.t(*(arg5 + 0x30))
                / fconvert.t(497f))
            float var_c_1 = fconvert.s((data_4feeec + fconvert.t(arg3)) * fconvert.t(*(arg5 + 0x30))
                / fconvert.t(497f))
            int32_t var_30
            sub_4fe250(var_30, var_8_1, var_14_1, arg5)
            sub_4fe250(var_30, var_8_1, var_18_1, arg5)
            sub_4fe250(var_30, var_c_1, var_14_1, arg5)
            sub_4fe250(var_30, var_c_1, var_18_1, arg5)
    
    if (ebx s< 0)
        return 
    
    int32_t i_1 = ebx + 1
    int32_t edi_2 = 0
    int32_t i
    
    do
        if (*(arg5 - 0x29) != 0)
            float var_28_1 = fconvert.s(fconvert.t(arg2) / float.t(ebx) * float.t(edi_2))
            float var_20_1 = fconvert.s(fconvert.t(arg4) + fconvert.t(var_28_1))
            float var_8_2 = fconvert.s((fconvert.t(arg3) + fconvert.t(0f)) * fconvert.t(*(arg5 + 0x30))
                / fconvert.t(497f))
            float var_c_2 = fconvert.s((fconvert.t(arg3) + fconvert.t(1f)) * fconvert.t(*(arg5 + 0x30))
                / fconvert.t(497f))
            float var_30_3
            float var_10_1
            
            if (ebx != 1)
                void* eax_106
                eax_106.b = 1
                var_10_1 = fconvert.s(sub_4fe2cc(eax_106.b, *(arg5 + 0x28), 1f, var_20_1, arg5)
                    + (fconvert.t(arg4) + fconvert.t(var_28_1)) * fconvert.t(*(arg5 - 0x30))
                    / fconvert.t(497f))
                void* eax_109
                eax_109.b = 3
                var_30_3 = fconvert.s(sub_4fe2cc(eax_109.b, *(arg5 + 0x28), 1f, var_20_1, arg5))
            else
                var_10_1 = fconvert.s((fconvert.t(arg4) + fconvert.t(var_28_1))
                    * fconvert.t(*(arg5 - 0x30)) / fconvert.t(497f))
                var_30_3 = 0f
            
            if (*data_530364 == 2)
                sub_4fe1d4(var_30_3, var_c_2, var_10_1, arg5)
            else
                if (*data_530364 == 3)
                    (*data_5307f8)(fconvert.s(fconvert.t(1f) - fconvert.t(var_20_1)), 0x3f800000)
                    sub_4fd9fc(1f, arg5)
                else if (*(arg5 - 0x2a) == 0)
                    sub_4fdbc0((*data_5307f8)(var_20_1, 0x3f800000), 
                        sub_402b4c((data_4fef08 + fconvert.t(var_20_1)) * fconvert.t(var_30_3)
                            * fconvert.t(500f) * float.t(ebx)), 
                        ebx, var_20_1, 1f, arg5)
                else
                    sub_4fdbc0((*data_5307f8)(fconvert.s(fconvert.t(1f) - fconvert.t(var_20_1)), 0), 
                        sub_402b4c((data_4feef8 - fconvert.t(var_20_1) + fconvert.t(1f))
                            * fconvert.t(var_30_3) * fconvert.t(500f) * float.t(ebx)), 
                        ebx, fconvert.s(fconvert.t(1f) - fconvert.t(var_20_1)), 0f, arg5)
                
                (*data_530368)(var_10_1, var_c_2, var_30_3)
            
            float var_30_4
            float var_10_2
            
            if (ebx != 1)
                void* eax_131
                eax_131.b = 1
                var_10_2 = fconvert.s(sub_4fe2cc(eax_131.b, *(arg5 + 0x28), 0f, var_20_1, arg5)
                    + (fconvert.t(arg4) + fconvert.t(var_28_1)) * fconvert.t(*(arg5 - 0x30))
                    / fconvert.t(497f))
                void* eax_134
                eax_134.b = 3
                var_30_4 = fconvert.s(sub_4fe2cc(eax_134.b, *(arg5 + 0x28), 0f, var_20_1, arg5))
            else
                var_10_2 = fconvert.s((fconvert.t(arg4) + fconvert.t(var_28_1))
                    * fconvert.t(*(arg5 - 0x30)) / fconvert.t(497f))
                var_30_4 = 0f
            
            if (*data_530364 == 2)
                sub_4fe158(var_30_4, var_8_2, var_10_2, arg5)
            else
                if (*data_530364 == 3)
                    (*data_5307f8)(fconvert.s(fconvert.t(1f) - fconvert.t(var_20_1)), 0)
                    sub_4fd9fc(0f, arg5)
                else if (*(arg5 - 0x2a) == 0)
                    sub_4fdbc0((*data_5307f8)(var_20_1, 0), 
                        sub_402b4c((data_4fef08 + fconvert.t(var_20_1) + fconvert.t(1f))
                            * fconvert.t(var_30_4) * fconvert.t(500f) * float.t(ebx)), 
                        ebx, var_20_1, 0f, arg5)
                else
                    sub_4fdbc0(
                        (*data_5307f8)(fconvert.s(fconvert.t(1f) - fconvert.t(var_20_1)), 0x3f800000), 
                        sub_402b4c((data_4feef8 - fconvert.t(var_20_1)) * fconvert.t(var_30_4)
                            * fconvert.t(500f) * float.t(ebx)), 
                        ebx, fconvert.s(fconvert.t(1f) - fconvert.t(var_20_1)), 1f, arg5)
                
                (*data_530368)(var_10_2, var_8_2, var_30_4)
        else
            float var_2c_1 = fconvert.s(fconvert.t(arg1) / float.t(ebx) * float.t(edi_2))
            float var_24_1 = fconvert.s(fconvert.t(arg3) + fconvert.t(var_2c_1))
            float var_30_1
            float var_1c_1
            
            if (ebx != 1)
                void* eax_52
                eax_52.b = 2
                var_1c_1 = fconvert.s(sub_4fe2cc(eax_52.b, *(arg5 + 0x28), var_24_1, 0f, arg5)
                    + (fconvert.t(arg3) + fconvert.t(var_2c_1)) * fconvert.t(*(arg5 + 0x30))
                    / fconvert.t(497f))
                void* eax_55
                eax_55.b = 3
                var_30_1 = fconvert.s(sub_4fe2cc(eax_55.b, *(arg5 + 0x28), var_24_1, 0f, arg5))
            else
                var_1c_1 = fconvert.s((fconvert.t(arg3) + fconvert.t(var_2c_1))
                    * fconvert.t(*(arg5 + 0x30)) / fconvert.t(497f))
                var_30_1 = 0f
            
            float var_14_2 = fconvert.s((fconvert.t(arg4) + fconvert.t(0f)) * fconvert.t(*(arg5 + 0x34))
                / fconvert.t(497f))
            float var_18_2 = fconvert.s((fconvert.t(arg4) + fconvert.t(1f)) * fconvert.t(*(arg5 + 0x34))
                / fconvert.t(497f))
            
            if (*data_530364 == 2)
                sub_4fe1d4(var_30_1, var_1c_1, var_14_2, arg5)
            else
                if (*data_530364 == 3)
                    (*data_5307f8)(0x3f800000, var_24_1)
                    sub_4fd9fc(var_24_1, arg5)
                else if (*(arg5 - 0x2a) == 0)
                    sub_4fdbc0((*data_5307f8)(0, var_24_1), 
                        sub_402b4c((data_4feef8 - fconvert.t(var_24_1)) * fconvert.t(var_30_1)
                            * fconvert.t(500f) * float.t(ebx)), 
                        ebx, 0f, var_24_1, arg5)
                else
                    sub_4fdbc0(
                        (*data_5307f8)(0x3f800000, fconvert.s(fconvert.t(1f) - fconvert.t(var_24_1))), 
                        sub_402b4c((data_4feef8 + fconvert.t(var_24_1)) * fconvert.t(var_30_1)
                            * fconvert.t(500f) * float.t(ebx)), 
                        ebx, 1f, fconvert.s(fconvert.t(1f) - fconvert.t(var_24_1)), arg5)
                
                (*data_530368)(var_14_2, var_1c_1, var_30_1)
            
            float var_30_2
            float var_1c_2
            
            if (ebx != 1)
                void* eax_79
                eax_79.b = 2
                var_1c_2 = fconvert.s(sub_4fe2cc(eax_79.b, *(arg5 + 0x28), var_24_1, 1f, arg5)
                    + (fconvert.t(arg3) + fconvert.t(var_2c_1)) * fconvert.t(*(arg5 + 0x30))
                    / fconvert.t(497f))
                void* eax_82
                eax_82.b = 3
                var_30_2 = fconvert.s(sub_4fe2cc(eax_82.b, *(arg5 + 0x28), var_24_1, 1f, arg5))
            else
                var_1c_2 = fconvert.s((fconvert.t(arg3) + fconvert.t(var_2c_1))
                    * fconvert.t(*(arg5 + 0x30)) / fconvert.t(497f))
                var_30_2 = 0f
            
            if (*data_530364 == 2)
                sub_4fe158(var_30_2, var_1c_2, var_18_2, arg5)
            else
                if (*data_530364 == 3)
                    (*data_5307f8)(0, var_24_1)
                    sub_4fd9fc(var_24_1, arg5)
                else if (*(arg5 - 0x2a) == 0)
                    sub_4fdbc0((*data_5307f8)(0x3f800000, var_24_1), 
                        sub_402b4c((data_4fef14 - fconvert.t(var_24_1)) * fconvert.t(var_30_2)
                            * fconvert.t(500f) * float.t(ebx)), 
                        ebx, 1f, var_24_1, arg5)
                else
                    sub_4fdbc0((*data_5307f8)(0, fconvert.s(fconvert.t(1f) - fconvert.t(var_24_1))), 
                        sub_402b4c((data_4fef08 + fconvert.t(var_24_1)) * fconvert.t(var_30_2)
                            * fconvert.t(500f) * float.t(ebx)), 
                        ebx, 0f, fconvert.s(fconvert.t(1f) - fconvert.t(var_24_1)), arg5)
                
                (*data_530368)(var_18_2, var_1c_2, var_30_2)
        
        edi_2 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)
}
