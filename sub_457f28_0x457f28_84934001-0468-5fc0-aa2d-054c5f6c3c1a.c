// ============================================================
// 函数名称: sub_457f28
// 虚拟地址: 0x457f28
// WARP GUID: 84934001-0468-5fc0-aa2d-054c5f6c3c1a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_457cac, sub_457ec0, sub_457dbc
// [被调用的父级函数]: sub_4583c4
// ============================================================

int32_t __convention("regparm")sub_457f28(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* edx = *(arg1 + 0x1ae)
    void* edx = *(arg1 + 0x1ae)
    
    if (*(arg1 + 0x110) != 0 && *(edx + 0x24) == 0 && sub_457ec0(arg1) == 0)
        return 0
    
    void* var_28_1 = arg1
    int32_t* eax_5 = *(arg1 + 0x14)
    int32_t var_3c = *eax_5
    int32_t ecx_2 = eax_5[1]
    int32_t edx_3 = *(arg1 + 0x192)
    int32_t ebx_1 = *(edx + 0xc)
    int32_t edi_1 = *(edx + 8)
    void* var_24_1 = edx + 0x10
    int32_t var_20[0x4]
    __builtin_memcpy(&var_20, edx + 0x14, 0x10)
    int32_t edi_2 = edi_1
    int32_t i = 0
    void* var_40_1 = arg1 + 0x15a
    int32_t* var_44_1 = arg2
    
    while (*(arg1 + 0x156) s> i)
        int16_t* ecx_5 = *var_44_1
        int32_t edx_7 = *var_40_1
        void* ebp_1 = *(arg1 + (edx_7 << 2) + 0x13e)
        void* ecx_7 = *(edx + (*(ebp_1 + 0x14) << 2) + 0x28)
        void* ecx_8 = *(edx + (*(ebp_1 + 0x18) << 2) + 0x38)
        int32_t var_50_1
        int32_t var_30
        int32_t var_2c
        
        if (ebx_1 s< 8)
            if (sub_457cac(ebx_1, edi_2, &var_3c, 0) == 0)
                return 0
            
            edi_2 = var_30
            ebx_1 = var_2c
            
            if (ebx_1 s>= 8)
                goto label_45805b
            
            var_50_1 = 1
            goto label_45809f
        
    label_45805b:
        uint32_t eax_19 = zx.d((edi_2 s>> (ebx_1.b - 8)).b)
        int32_t edx_12 = *(ecx_7 + (eax_19 << 2) + 0xd4)
        uint32_t esi_3
        
        if (edx_12 == 0)
            var_50_1 = 9
        label_45809f:
            uint32_t eax_22 = sub_457dbc(ebx_1, edi_2, &var_3c, var_50_1, ecx_7)
            esi_3 = eax_22
            
            if (eax_22 s< 0)
                return 0
            
            edi_2 = var_30
            ebx_1 = var_2c
        else
            ebx_1 -= edx_12
            esi_3 = zx.d(*(ecx_7 + eax_19 + 0x4d4))
        
        if (esi_3 != 0)
            if (esi_3 s> ebx_1)
                if (sub_457cac(ebx_1, edi_2, &var_3c, esi_3) == 0)
                    return 0
                
                edi_2 = var_30
                ebx_1 = var_2c
            
            ebx_1 -= esi_3
            uint32_t eax_27 = edi_2 s>> ebx_1.b & ((1 << esi_3.b) - 1)
            uint32_t edx_19
            
            if (eax_27 s>= *((esi_3 << 2) + &data_52ec84))
                edx_19 = eax_27
            else
                edx_19 = *((esi_3 << 2) + &data_52ecc4) + eax_27
            
            esi_3 = edx_19
        
        if (*(ebp_1 + 0x30) != 0)
            int32_t esi_4 = esi_3 + var_20[edx_7]
            var_20[edx_7] = esi_4
            *ecx_5 = esi_4.w
        
        if (*(ebp_1 + 0x30) == 0 || *(ebp_1 + 0x24) s<= 1)
            int32_t ebp_3
            
            for (int32_t j = 1; j s< 0x40; j = ebp_3 + 1)
                int32_t var_48_1
                
                if (ebx_1 s< 8)
                    if (sub_457cac(ebx_1, edi_2, &var_3c, 0) == 0)
                        return 0
                    
                    edi_2 = var_30
                    ebx_1 = var_2c
                    
                    if (ebx_1 s>= 8)
                        goto label_4582a6
                    
                    var_48_1 = 1
                    goto label_4582ea
                
            label_4582a6:
                uint32_t eax_50 = zx.d((edi_2 s>> (ebx_1.b - 8)).b)
                int32_t edx_32 = *(ecx_8 + (eax_50 << 2) + 0xd4)
                uint32_t esi_8
                
                if (edx_32 == 0)
                    var_48_1 = 9
                label_4582ea:
                    uint32_t eax_53 = sub_457dbc(ebx_1, edi_2, &var_3c, var_48_1, ecx_8)
                    esi_8 = eax_53
                    
                    if (eax_53 s< 0)
                        return 0
                    
                    edi_2 = var_30
                    ebx_1 = var_2c
                else
                    ebx_1 -= edx_32
                    esi_8 = zx.d(*(ecx_8 + eax_50 + 0x4d4))
                
                int32_t eax_55 = esi_8 s>> 4
                int32_t esi_9 = esi_8 & 0xf
                
                if (esi_9 == 0)
                    if (eax_55 != 0xf)
                        break
                    
                    ebp_3 = j + 0xf
                else
                    ebp_3 = j + eax_55
                    
                    if (esi_9 s> ebx_1)
                        if (sub_457cac(ebx_1, edi_2, &var_3c, esi_9) == 0)
                            return 0
                        
                        edi_2 = var_30
                        ebx_1 = var_2c
                    
                    ebx_1 -= esi_9
        else
            int32_t ebp_2
            
            for (int32_t j_1 = 1; j_1 s< 0x40; j_1 = ebp_2 + 1)
                int32_t var_4c_1
                
                if (ebx_1 s< 8)
                    if (sub_457cac(ebx_1, edi_2, &var_3c, 0) == 0)
                        return 0
                    
                    edi_2 = var_30
                    ebx_1 = var_2c
                    
                    if (ebx_1 s>= 8)
                        goto label_45817b
                    
                    var_4c_1 = 1
                    goto label_4581bf
                
            label_45817b:
                uint32_t eax_34 = zx.d((edi_2 s>> (ebx_1.b - 8)).b)
                int32_t edx_22 = *(ecx_8 + (eax_34 << 2) + 0xd4)
                uint32_t esi_5
                
                if (edx_22 == 0)
                    var_4c_1 = 9
                label_4581bf:
                    uint32_t eax_37 = sub_457dbc(ebx_1, edi_2, &var_3c, var_4c_1, ecx_8)
                    esi_5 = eax_37
                    
                    if (eax_37 s< 0)
                        return 0
                    
                    edi_2 = var_30
                    ebx_1 = var_2c
                else
                    ebx_1 -= edx_22
                    esi_5 = zx.d(*(ecx_8 + eax_34 + 0x4d4))
                
                int32_t eax_39 = esi_5 s>> 4
                int32_t esi_6 = esi_5 & 0xf
                
                if (esi_6 == 0)
                    if (eax_39 != 0xf)
                        break
                    
                    ebp_2 = j_1 + 0xf
                else
                    ebp_2 = j_1 + eax_39
                    
                    if (esi_6 s> ebx_1)
                        if (sub_457cac(ebx_1, edi_2, &var_3c, esi_6) == 0)
                            return 0
                        
                        edi_2 = var_30
                        ebx_1 = var_2c
                    
                    ebx_1 -= esi_6
                    int32_t eax_44 = edi_2 s>> ebx_1.b & ((1 << esi_6.b) - 1)
                    int16_t edx_29
                    
                    if (eax_44 s>= *((esi_6 << 2) + &data_52ec84))
                        edx_29 = eax_44.w
                    else
                        edx_29 = (*((esi_6 << 2) + &data_52ecc4)).w + eax_44.w
                    
                    ecx_5[*((ebp_2 << 2) + &data_52eed0)] = edx_29
        
        i += 1
        var_40_1 += 4
        var_44_1 = &var_44_1[1]
    
    int32_t* eax_59 = *(arg1 + 0x14)
    *eax_59 = var_3c
    eax_59[1] = ecx_2
    *(arg1 + 0x192) = edx_3
    *(edx + 8) = edi_2
    *(edx + 0xc) = ebx_1
    __builtin_memcpy(edx + 0x14, &var_20, 0x10)
    *(edx + 0x24) -= 1
    return 1
}
