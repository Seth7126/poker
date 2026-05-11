// ============================================================
// 函数名称: sub_457104
// 虚拟地址: 0x457104
// WARP GUID: dafda89c-4a67-50d5-b53b-9ef10bc87669
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_457dbc, sub_457cac, sub_456e4c
// [被调用的父级函数]: sub_456ba8
// ============================================================

int32_t __convention("regparm")sub_457104(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* edx = *(arg1 + 0x1ae)
    void* edx = *(arg1 + 0x1ae)
    int32_t eax_1 = *(arg1 + 0x186)
    char ecx_1 = (*(arg1 + 0x18e)).b
    
    if (*(arg1 + 0x110) != 0 && *(edx + 0x28) == 0 && sub_456e4c(arg1) == 0)
        return 0
    
    int32_t var_38_1 = *(edx + 0x14)
    
    if (var_38_1 u<= 0)
        void* var_18_1 = arg1
        int32_t* eax_7 = *(arg1 + 0x14)
        int32_t var_2c = *eax_7
        int32_t ecx_3 = eax_7[1]
        int32_t edx_6 = *(arg1 + 0x192)
        int32_t ebx_1 = *(edx + 0xc)
        int32_t ebp_1 = *(edx + 8)
        void* var_14_1 = edx + 0x10
        int32_t edx_7 = *arg2
        void* eax_12 = *(edx + 0x3c)
        int32_t var_3c_1
        
        for (int32_t i = *(arg1 + 0x182); i s<= eax_1; i = var_3c_1 + 1)
            int32_t var_20
            int32_t var_1c
            int32_t esi_1
            
            if (ebx_1 s< 8)
                if (sub_457cac(ebx_1, ebp_1, &var_2c, 0) == 0)
                    return 0
                
                ebp_1 = var_20
                ebx_1 = var_1c
                
                if (ebx_1 s>= 8)
                    goto label_457221
                
                esi_1 = 1
                goto label_457258
            
        label_457221:
            uint32_t eax_18 = zx.d((ebp_1 s>> (ebx_1.b - 8)).b)
            int32_t esi_2 = *(eax_12 + (eax_18 << 2) + 0xd4)
            uint32_t edi_1
            
            if (esi_2 == 0)
                esi_1 = 9
            label_457258:
                uint32_t eax_21 = sub_457dbc(ebx_1, ebp_1, &var_2c, esi_1, eax_12)
                edi_1 = eax_21
                
                if (eax_21 s< 0)
                    return 0
                
                ebp_1 = var_20
                ebx_1 = var_1c
            else
                ebx_1 -= esi_2
                edi_1 = zx.d(*(eax_12 + eax_18 + 0x4d4))
            
            int32_t esi_4 = edi_1 s>> 4
            int32_t edi_2 = edi_1 & 0xf
            
            if (edi_2 == 0)
                if (esi_4 != 0xf)
                    int32_t edi_4 = 1 << esi_4.b
                    int32_t var_38_2 = edi_4
                    
                    if (esi_4 != 0)
                        if (esi_4 s> ebx_1)
                            if (sub_457cac(ebx_1, ebp_1, &var_2c, esi_4) == 0)
                                return 0
                            
                            ebp_1 = var_20
                            ebx_1 = var_1c
                        
                        ebx_1 -= esi_4
                        var_38_2 += ebp_1 s>> ebx_1.b & (edi_4 - 1)
                    
                    var_38_1 = var_38_2 - 1
                    break
                
                var_3c_1 = i + 0xf
            else
                var_3c_1 = i + esi_4
                
                if (edi_2 s> ebx_1)
                    if (sub_457cac(ebx_1, ebp_1, &var_2c, edi_2) == 0)
                        return 0
                    
                    ebp_1 = var_20
                    ebx_1 = var_1c
                
                ebx_1 -= edi_2
                int32_t esi_7 = ebp_1 s>> ebx_1.b & ((1 << edi_2.b) - 1)
                int16_t edx_15
                
                if (esi_7 s>= *((edi_2 << 2) + &data_52ec04))
                    edx_15 = esi_7.w
                else
                    edx_15 = (*((edi_2 << 2) + &data_52ec44)).w + esi_7.w
                
                *(edx_7 + (*((var_3c_1 << 2) + &data_52eed0) << 1)) = edx_15 << ecx_1
        
        int32_t* eax_34 = *(arg1 + 0x14)
        *eax_34 = var_2c
        eax_34[1] = ecx_3
        *(arg1 + 0x192) = edx_6
        *(edx + 8) = ebp_1
        *(edx + 0xc) = ebx_1
    else
        var_38_1 -= 1
    
    *(edx + 0x14) = var_38_1
    *(edx + 0x28) -= 1
    return 1
}
