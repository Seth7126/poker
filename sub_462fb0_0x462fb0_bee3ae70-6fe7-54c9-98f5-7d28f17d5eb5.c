// ============================================================
// 函数名称: sub_462fb0
// 虚拟地址: 0x462fb0
// WARP GUID: bee3ae70-6fe7-54c9-98f5-7d28f17d5eb5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_463240, sub_4533f4
// [被调用的父级函数]: sub_462cec
// ============================================================

int32_t __convention("regparm")sub_462fb0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* edx = *(arg1 + 0x14d)
    void* edx = *(arg1 + 0x14d)
    int32_t eax_2 = *(arg1 + 0xe5) - 1
    int32_t i = 0
    void* var_2c = *(arg1 + 0x3c)
    int32_t* var_14 = arg2
    int32_t* var_20 = edx + 0x40
    
    while (*(arg1 + 0x34) s> i)
        *(edx + 8)
        *var_20
        int32_t* eax_8 = (*(*(arg1 + 4) + 0x20))(1, *(var_2c + 0xc))
        uint32_t j_1
        
        if (*(edx + 8) u>= eax_2)
            uint32_t j_2 = *(var_2c + 0xc)
            j_1 = modu.dp.d(0:(*(var_2c + 0x20)), j_2)
            
            if (j_1 == 0)
                j_1 = j_2
        else
            j_1 = *(var_2c + 0xc)
        
        int32_t ecx_7 = *(var_2c + 0x1c)
        int32_t ebx_2 = *(var_2c + 8)
        uint32_t esi_1 = modu.dp.d(0:ecx_7, ebx_2)
        
        if (esi_1 s> 0)
            esi_1 = ebx_2 - esi_1
        
        int32_t var_34_1 = 0
        int32_t* var_1c_1 = eax_8
        
        if (0 s< j_1)
            do
                void* ecx_10 = *var_1c_1
                *var_14
                (*(*(arg1 + 0x15d) + 4))(ecx_7, 0, var_34_1 << 3, ecx_10)
                
                if (esi_1 s> 0)
                    void* var_24_2 = ecx_10 + (ecx_7 << 7)
                    sub_4533f4(var_24_2, 0, esi_1 << 7)
                    void* edx_19 = var_24_2
                    int16_t ecx_14 = *(var_24_2 - 0x80)
                    int32_t eax_26 = 0
                    
                    if (esi_1 s> 0)
                        do
                            *edx_19 = ecx_14
                            eax_26 += 1
                            edx_19 += 0x80
                        while (esi_1 s> eax_26)
                
                var_34_1 += 1
                var_1c_1 = &var_1c_1[1]
            while (var_34_1 s< j_1)
        
        if (*(edx + 8) == eax_2)
            int32_t var_44_2 = ecx_7 + esi_1
            uint32_t temp0_3 = divu.dp.d(0:var_44_2, ebx_2)
            uint32_t j = j_1
            int32_t* var_10_1 = &eax_8[j]
            
            while (*(var_2c + 0xc) s> j)
                int16_t* var_24_3 = *var_10_1
                int32_t esi_2 = var_10_1[-1]
                sub_4533f4(var_24_3, 0, var_44_2 << 7)
                int32_t var_3c_1 = 0
                
                if (0 u< temp0_3)
                    do
                        int32_t eax_35 = 0
                        int32_t ecx_19
                        ecx_19.w = *(esi_2 + (ebx_2 << 7) - 0x80)
                        int16_t* edx_26 = var_24_3
                        
                        if (ebx_2 s> 0)
                            do
                                *edx_26 = ecx_19.w
                                eax_35 += 1
                                edx_26 = &edx_26[0x40]
                            while (ebx_2 s> eax_35)
                        
                        var_24_3 = &var_24_3[ebx_2 * 0x40]
                        esi_2 += ebx_2 << 7
                        var_3c_1 += 1
                    while (var_3c_1 u< temp0_3)
                
                j += 1
                var_10_1 = &var_10_1[1]
        
        var_20 = &var_20[1]
        var_14 = &var_14[1]
        i += 1
        var_2c += 0x54
    
    return sub_463240(arg1)
}
