// ============================================================
// 函数名称: sub_459ccc
// 虚拟地址: 0x459ccc
// WARP GUID: 83d82ba7-45a9-5fb3-8a62-a7be1a874d93
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45a09c, sub_45a2fc
// ============================================================

int32_t* __convention("regparm")sub_459ccc(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_c = edi
    int32_t eax_1 = *(*(arg1 + 0x1be) + 0x18)
    int32_t var_4c = *arg2
    int32_t var_48 = arg2[1]
    int32_t i_5 = arg2[2]
    int32_t i_6 = arg2[3]
    int32_t* var_3c = arg2[4]
    int32_t i_7 = arg2[5]
    
    if (var_48 s> var_4c)
        int32_t edx_4 = var_4c
        int32_t* var_30_1 = eax_1 + (edx_4 << 2)
        
        while (edx_4 s<= var_48)
            int32_t i_8 = i_5
            
            if (i_8 s<= i_6)
                while (true)
                    int16_t* ecx_8 = *var_30_1 + (i_8 << 6) + var_3c * 2
                    int32_t* eax_13 = var_3c
                    
                    if (i_7 s>= eax_13)
                        while (true)
                            edi.w = *ecx_8
                            ecx_8 = &ecx_8[1]
                            
                            if (edi.w != 0)
                                var_4c = edx_4
                                *arg2 = edx_4
                                break
                            
                            eax_13 += 1
                            
                            if (i_7 s< eax_13)
                                goto label_459d84
                        
                        break
                    
                label_459d84:
                    i_8 += 1
                    
                    if (i_8 s> i_6)
                        goto label_459d8b
                
                break
            
        label_459d8b:
            edx_4 += 1
            var_30_1 = &var_30_1[1]
    
    if (var_48 s> var_4c)
        int32_t edx_5 = var_48
        int32_t* var_28_1 = eax_1 + (edx_5 << 2)
        
        while (edx_5 s>= var_4c)
            int32_t i_9 = i_5
            
            if (i_9 s<= i_6)
                while (true)
                    int16_t* ecx_14 = *var_28_1 + (i_9 << 6) + var_3c * 2
                    int32_t* eax_22 = var_3c
                    
                    if (i_7 s>= eax_22)
                        while (true)
                            edi.w = *ecx_14
                            ecx_14 = &ecx_14[1]
                            
                            if (edi.w != 0)
                                var_48 = edx_5
                                arg2[1] = edx_5
                                break
                            
                            eax_22 += 1
                            
                            if (i_7 s< eax_22)
                                goto label_459e03
                        
                        break
                    
                label_459e03:
                    i_9 += 1
                    
                    if (i_9 s> i_6)
                        goto label_459e0a
                
                break
            
        label_459e0a:
            edx_5 -= 1
            var_28_1 = &var_28_1[-1]
    
    if (i_6 s> i_5)
        for (int32_t i = i_5; i s<= i_6; i += 1)
            int32_t edx_6 = var_4c
            int32_t* var_24_1 = eax_1 + (edx_6 << 2)
            
            if (edx_6 s<= var_48)
                while (true)
                    int16_t* ecx_19 = *var_24_1 + (i << 6) + var_3c * 2
                    int32_t* eax_30 = var_3c
                    
                    if (i_7 s>= eax_30)
                        while (true)
                            edi.w = *ecx_19
                            ecx_19 = &ecx_19[1]
                            
                            if (edi.w != 0)
                                i_5 = i
                                arg2[2] = i
                                break
                            
                            eax_30 += 1
                            
                            if (i_7 s< eax_30)
                                goto label_459e78
                        
                        break
                    
                label_459e78:
                    edx_6 += 1
                    var_24_1 = &var_24_1[1]
                    
                    if (edx_6 s> var_48)
                        goto label_459e84
                
                break
            
        label_459e84:
    
    if (i_6 s> i_5)
        for (int32_t i_1 = i_6; i_1 s>= i_5; i_1 -= 1)
            int32_t edx_8 = var_4c
            int32_t* var_20_1 = eax_1 + (edx_8 << 2)
            
            if (edx_8 s<= var_48)
                while (true)
                    int16_t* ecx_23 = *var_20_1 + (i_1 << 6) + var_3c * 2
                    int32_t* eax_38 = var_3c
                    
                    if (i_7 s>= eax_38)
                        while (true)
                            edi.w = *ecx_23
                            ecx_23 = &ecx_23[1]
                            
                            if (edi.w != 0)
                                i_6 = i_1
                                arg2[3] = i_1
                                break
                            
                            eax_38 += 1
                            
                            if (i_7 s< eax_38)
                                goto label_459eed
                        
                        break
                    
                label_459eed:
                    edx_8 += 1
                    var_20_1 = &var_20_1[1]
                    
                    if (edx_8 s> var_48)
                        goto label_459ef9
                
                break
            
        label_459ef9:
    
    if (i_7 s> var_3c)
        for (int32_t* i_2 = var_3c; i_7 s>= i_2; i_2 += 1)
            int32_t edx_9 = var_4c
            int32_t* var_1c_1 = eax_1 + (edx_9 << 2)
            
            if (edx_9 s<= var_48)
                while (true)
                    int16_t* ecx_29 = *var_1c_1 + (i_5 << 6) + i_2 * 2
                    int32_t i_10 = i_5
                    
                    if (i_10 s<= i_6)
                        while (*ecx_29 == 0)
                            i_10 += 1
                            ecx_29 = &ecx_29[0x20]
                            
                            if (i_10 s> i_6)
                                goto label_459f5e
                        
                        var_3c = i_2
                        arg2[4] = i_2
                        break
                    
                label_459f5e:
                    edx_9 += 1
                    var_1c_1 = &var_1c_1[1]
                    
                    if (edx_9 s> var_48)
                        goto label_459f6a
                
                break
            
        label_459f6a:
    
    if (i_7 s> var_3c)
        for (int32_t i_3 = i_7; i_3 s>= var_3c; i_3 -= 1)
            int32_t edx_11 = var_4c
            int32_t* var_18_1 = eax_1 + (edx_11 << 2)
            
            if (edx_11 s<= var_48)
                while (true)
                    int16_t* ecx_35 = *var_18_1 + (i_5 << 6) + i_3 * 2
                    int32_t i_11 = i_5
                    
                    if (i_11 s<= i_6)
                        while (*ecx_35 == 0)
                            i_11 += 1
                            ecx_35 = &ecx_35[0x20]
                            
                            if (i_11 s> i_6)
                                goto label_459fcb
                        
                        i_7 = i_3
                        arg2[5] = i_3
                        break
                    
                label_459fcb:
                    edx_11 += 1
                    var_18_1 = &var_18_1[1]
                    
                    if (edx_11 s> var_48)
                        goto label_459fd7
                
                break
            
        label_459fd7:
    
    int32_t eax_42 = (var_48 - var_4c) << 3
    int32_t ecx_39 = (i_7 - var_3c) * 0x10
    int32_t edx_16 = (i_6 - i_5) * 0xc
    arg2[6] = eax_42 * eax_42 + edx_16 * edx_16 + ecx_39 * ecx_39
    int32_t var_38 = 0
    int32_t edx_19 = var_4c
    int32_t* result = eax_1 + (edx_19 << 2)
    int32_t* result_2 = result
    
    while (edx_19 s<= var_48)
        int32_t i_4 = i_5
        result = result_2
        int32_t* result_1 = result
        
        for (; i_4 s<= i_6; i_4 += 1)
            int16_t* ecx_45 = *result_1 + (i_4 << 6) + var_3c * 2
            result = var_3c
            
            while (i_7 s>= result)
                if (*ecx_45 != 0)
                    var_38 += 1
                
                result += 1
                ecx_45 = &ecx_45[1]
        
        edx_19 += 1
        result_2 = &result_2[1]
    
    arg2[7] = var_38
    return result
}
