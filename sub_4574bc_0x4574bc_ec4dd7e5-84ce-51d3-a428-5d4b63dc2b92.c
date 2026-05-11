// ============================================================
// 函数名称: sub_4574bc
// 虚拟地址: 0x4574bc
// WARP GUID: ec4dd7e5-84ce-51d3-a428-5d4b63dc2b92
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_457dbc, sub_457cac, sub_456e4c
// [被调用的父级函数]: sub_456ba8
// ============================================================

int32_t __convention("regparm")sub_4574bc(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* var_160 = arg1
    int32_t* var_160 = arg1
    void* edx = *(var_160 + 0x1ae)
    int32_t eax_1 = *(var_160 + 0x186)
    char eax_2 = (*(var_160 + 0x18e)).b
    int32_t edx_2 = 1 << eax_2
    int32_t eax_3 = 0xffffffff << eax_2
    
    if (var_160[0x44] != 0 && *(edx + 0x28) == 0 && sub_456e4c(var_160) == 0)
        return 0
    
    int32_t* var_118_1 = var_160
    int32_t* eax_8 = var_160[5]
    int32_t var_12c = *eax_8
    int32_t ecx_4 = eax_8[1]
    int32_t edx_6 = *(var_160 + 0x192)
    int32_t ebx_1 = *(edx + 0xc)
    int32_t esi_1 = *(edx + 8)
    void* var_114_1 = edx + 0x10
    int32_t var_148_1 = *(edx + 0x14)
    int32_t eax_13 = *arg2
    void* ecx_7 = *(edx + 0x3c)
    int32_t i = 0
    int32_t var_14c_1 = *(var_160 + 0x182)
    int32_t var_120
    int32_t var_11c
    
    if (var_148_1 == 0)
        void* var_130_1 = &(&var_160)[0x14]
        void* var_134_1 = (var_14c_1 << 2) + &data_52eed0
        
        while (var_14c_1 s<= eax_1)
            int32_t ebp_1
            
            if (ebx_1 s< 8)
                if (sub_457cac(ebx_1, esi_1, &var_12c, 0) == 0)
                    goto label_4578d2
                
                esi_1 = var_120
                ebx_1 = var_11c
                
                if (ebx_1 s>= 8)
                    goto label_457609
                
                ebp_1 = 1
                goto label_457640
            
        label_457609:
            uint32_t eax_19 = zx.d((esi_1 s>> (ebx_1.b - 8)).b)
            int32_t ebp_2 = *(ecx_7 + (eax_19 << 2) + 0xd4)
            uint32_t edi_1
            
            if (ebp_2 == 0)
                ebp_1 = 9
            label_457640:
                uint32_t eax_22 = sub_457dbc(ebx_1, esi_1, &var_12c, ebp_1, ecx_7)
                edi_1 = eax_22
                
                if (eax_22 s< 0)
                    goto label_4578d2
                
                esi_1 = var_120
                ebx_1 = var_11c
            else
                ebx_1 -= ebp_2
                edi_1 = zx.d(*(ecx_7 + eax_19 + 0x4d4))
            
            int32_t ebp_4 = edi_1 s>> 4
            int32_t edi_2 = edi_1 & 0xf
            
            if (edi_2 != 0)
                if (edi_2 != 1)
                    *(*var_160 + 0x14) = 0x72
                    (*(*var_160 + 4))()
                
                if (ebx_1 s< 1)
                    if (sub_457cac(ebx_1, esi_1, &var_12c, 1) == 0)
                        goto label_4578d2
                    
                    esi_1 = var_120
                    ebx_1 = var_11c
                
                ebx_1 -= 1
                
                if (((esi_1 s>> ebx_1.b).b & 1) == 0)
                    edi_2 = eax_3
                else
                    edi_2 = edx_2
            else if (ebp_4 != 0xf)
                int32_t edi_4 = 1 << ebp_4.b
                var_148_1 = edi_4
                
                if (ebp_4 == 0)
                    break
                
                if (ebp_4 s> ebx_1)
                    if (sub_457cac(ebx_1, esi_1, &var_12c, ebp_4) == 0)
                        goto label_4578d2
                    
                    esi_1 = var_120
                    ebx_1 = var_11c
                
                ebx_1 -= ebp_4
                var_148_1 += esi_1 s>> ebx_1.b & (edi_4 - 1)
                break
            
            do
                int16_t* eax_36 = *var_134_1 * 2 + eax_13
                
                if (*eax_36 == 0)
                    int32_t temp1_1 = ebp_4
                    ebp_4 -= 1
                    
                    if (temp1_1 - 1 s< 0)
                        break
                else
                    if (ebx_1 s< 1)
                        if (sub_457cac(ebx_1, esi_1, &var_12c, 1) == 0)
                            goto label_4578d2
                        
                        esi_1 = var_120
                        ebx_1 = var_11c
                    
                    ebx_1 -= 1
                    
                    if (((esi_1 s>> ebx_1.w.b).w.b & 1) != 0)
                        int16_t eax_40 = *eax_36
                        
                        if ((sx.d(eax_40) & edx_2) == 0)
                            if (eax_40 s< 0)
                                *eax_36 += eax_3.w
                            else
                                *eax_36 += edx_2.w
                
                var_14c_1 += 1
                var_134_1 += 4
            while (var_14c_1 s<= eax_1)
            
            if (edi_2 != 0)
                int32_t eax_42 = *var_134_1
                *(eax_13 + (eax_42 << 1)) = edi_2.w
                *var_130_1 = eax_42
                i += 1
                var_130_1 += 4
            
            var_14c_1 += 1
            var_134_1 += 4
    
    if (var_148_1 u<= 0)
        goto label_457885
    
    if (var_14c_1 s> eax_1)
    label_45787e:
        var_148_1 -= 1
    label_457885:
        int32_t* eax_52 = var_160[5]
        *eax_52 = var_12c
        eax_52[1] = ecx_4
        *(var_160 + 0x192) = edx_6
        *(edx + 8) = esi_1
        *(edx + 0xc) = ebx_1
        *(edx + 0x14) = var_148_1
        *(edx + 0x28) -= 1
        return 1
    
    while (true)
        int16_t* eax_46 = *((var_14c_1 << 2) + &data_52eed0) * 2 + eax_13
        
        if (*eax_46 != 0)
            if (ebx_1 s< 1)
                if (sub_457cac(ebx_1, esi_1, &var_12c, 1) == 0)
                    break
                
                esi_1 = var_120
                ebx_1 = var_11c
            
            ebx_1 -= 1
            
            if (((esi_1 s>> ebx_1.w.b).w.b & 1) != 0)
                int16_t eax_50 = *eax_46
                
                if ((sx.d(eax_50) & edx_2) == 0)
                    if (eax_50 s< 0)
                        *eax_46 += eax_3.w
                    else
                        *eax_46 += edx_2.w
        
        var_14c_1 += 1
        
        if (var_14c_1 s> eax_1)
            goto label_45787e
    
    label_4578d2:
    void* eax_56 = &(&var_160)[i + 0x14]
    
    while (i s> 0)
        i -= 1
        eax_56 -= 4
        *(eax_13 + (*eax_56 << 1)) = 0
    
    return 0
}
