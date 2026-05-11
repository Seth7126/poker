// ============================================================
// 函数名称: sub_45bd90
// 虚拟地址: 0x45bd90
// WARP GUID: 87b4fc07-4e33-5b13-8caf-23cf21884387
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4602b8
// [被调用的父级函数]: sub_45b630
// ============================================================

int32_t __convention("regparm")sub_45bd90(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* edx = *(arg1 + 0x19e)
    void* edx = *(arg1 + 0x19e)
    int32_t eax_2 = *(arg1 + 0x132) - 1
    int32_t i
    void* var_e0_1
    
    while (true)
        if (*(arg1 + 0x94) s>= *(arg1 + 0x8c) && *(*(arg1 + 0x1a6) + 0x14) == 0)
            int32_t edx_2
            
            if (*(arg1 + 0x94) == *(arg1 + 0x8c))
                edx_2 = 1
                
                if (*(arg1 + 0x182) != 0)
                    edx_2 = 0
            
            if (*(arg1 + 0x94) != *(arg1 + 0x8c) || *(arg1 + 0x90) u<= *(arg1 + 0x98) + edx_2)
                if ((**(arg1 + 0x1a6))(arg1, arg2, edx, eax_2) == 0)
                    return 0
                
                continue
        
        i = 0
        var_e0_1 = *(arg1 + 0xd4)
        break
    
    while (*(arg1 + 0x20) s> i)
        if (*(var_e0_1 + 0x30) != 0)
            uint32_t var_100_1
            uint32_t var_fc_1
            int32_t var_d4_1
            
            if (*(arg1 + 0x98) u>= eax_2)
                var_100_1 = modu.dp.d(0:(*(var_e0_1 + 0x20)), *(var_e0_1 + 0xc))
                
                if (var_100_1 == 0)
                    var_100_1 = *(var_e0_1 + 0xc)
                
                var_fc_1 = var_100_1
                var_d4_1 = 1
            else
                var_100_1 = *(var_e0_1 + 0xc)
                var_fc_1 = var_100_1 * 2
                var_d4_1 = 0
            
            int32_t* var_f8_2
            int32_t var_d8_1
            
            if (*(arg1 + 0x98) u<= 0)
                *(edx + (i << 2) + 0x48)
                var_f8_2 = (*(*(arg1 + 4) + 0x20))(0, var_fc_1)
                var_d8_1 = 1
            else
                *(arg1 + 0x98)
                *(var_e0_1 + 0xc)
                *(edx + (i << 2) + 0x48)
                var_f8_2 =
                    (*(*(arg1 + 4) + 0x20))(0, var_fc_1 + *(var_e0_1 + 0xc)) + (*(var_e0_1 + 0xc) << 2)
                var_d8_1 = 0
            
            void* edx_24 = *(edx + 0x70) + i * 0x18
            int16_t* edx_25 = *(var_e0_1 + 0x4c)
            uint32_t eax_28 = zx.d(*edx_25)
            uint32_t ecx_22 = zx.d(edx_25[1])
            uint32_t edx_27 = zx.d(edx_25[8])
            uint32_t eax_30 = zx.d(edx_25[0x10])
            uint32_t ecx_24 = zx.d(edx_25[9])
            uint32_t edx_29 = zx.d(edx_25[2])
            int32_t ecx_26 = *(*(arg1 + 0x1b2) + (i << 2) + 4)
            int32_t var_e8_1 = *(arg2 + (i << 2))
            int32_t var_104_1 = 0
            int32_t* var_8c_1 = var_f8_2
            
            if (0 s< var_100_1)
                do
                    void* var_f4_1 = *var_8c_1
                    void* var_f0_1
                    
                    if (var_d8_1 == 0 || var_104_1 != 0)
                        var_f0_1 = var_8c_1[-1]
                    else
                        var_f0_1 = var_f4_1
                    
                    void* var_ec_1
                    
                    if (var_d4_1 == 0 || var_100_1 - 1 != var_104_1)
                        var_ec_1 = var_8c_1[1]
                    else
                        var_ec_1 = var_f4_1
                    
                    int32_t ecx_32 = sx.d(*var_f0_1)
                    int32_t var_a8_1 = ecx_32
                    int32_t var_ac_1 = ecx_32
                    int32_t var_b0_1 = ecx_32
                    int32_t edx_37 = sx.d(*var_f4_1)
                    int32_t var_a0_1 = edx_37
                    int32_t var_a4_1 = edx_37
                    int32_t esi_1 = edx_37
                    int32_t edx_38 = sx.d(*var_ec_1)
                    int32_t var_94_1 = edx_38
                    int32_t var_98_1 = edx_38
                    int32_t var_9c_1 = edx_38
                    int32_t var_e4_1 = 0
                    int32_t eax_41 = *(var_e0_1 + 0x1c) - 1
                    int32_t var_110_1 = 0
                    
                    if (0 u<= eax_41)
                        do
                            void var_88
                            sub_4602b8(var_f4_1, &var_88, 1)
                            
                            if (var_110_1 u< eax_41)
                                var_a8_1 = sx.d(*(var_f0_1 + 0x80))
                                var_a0_1 = sx.d(*(var_f4_1 + 0x80))
                                var_94_1 = sx.d(*(var_ec_1 + 0x80))
                            
                            int32_t ebx_3 = *(edx_24 + 4)
                            int16_t var_86
                            
                            if (ebx_3 != 0 && var_86 == 0)
                                int32_t ecx_40 = (esi_1 - var_a0_1) * eax_28 * 0x24
                                int32_t eax_50
                                
                                if (ecx_40 s< 0)
                                    int32_t eax_56 =
                                        divs.dp.d(sx.q((ecx_22 << 7) - ecx_40), ecx_22 << 8)
                                    
                                    if (ebx_3 s> 0 && eax_56 s>= 1 << ebx_3.b)
                                        eax_56 = (1 << ebx_3.b) - 1
                                    
                                    eax_50 = neg.d(eax_56)
                                else
                                    eax_50 = divs.dp.d(sx.q((ecx_22 << 7) + ecx_40), ecx_22 << 8)
                                    
                                    if (ebx_3 s> 0 && eax_50 s>= 1 << ebx_3.b)
                                        eax_50 = (1 << ebx_3.b) - 1
                                
                                var_86 = eax_50.w
                            
                            int32_t ebx_4 = *(edx_24 + 8)
                            int16_t var_78
                            
                            if (ebx_4 != 0 && var_78 == 0)
                                int32_t ecx_49 = (var_ac_1 - var_98_1) * eax_28 * 0x24
                                int32_t eax_65
                                
                                if (ecx_49 s< 0)
                                    int32_t eax_71 =
                                        divs.dp.d(sx.q((edx_27 << 7) - ecx_49), edx_27 << 8)
                                    
                                    if (ebx_4 s> 0 && eax_71 s>= 1 << ebx_4.b)
                                        eax_71 = (1 << ebx_4.b) - 1
                                    
                                    eax_65 = neg.d(eax_71)
                                else
                                    eax_65 = divs.dp.d(sx.q((edx_27 << 7) + ecx_49), edx_27 << 8)
                                    
                                    if (ebx_4 s> 0 && eax_65 s>= 1 << ebx_4.b)
                                        eax_65 = (1 << ebx_4.b) - 1
                                
                                var_78 = eax_65.w
                            
                            int32_t ebx_5 = *(edx_24 + 0xc)
                            int16_t var_68
                            
                            if (ebx_5 != 0 && var_68 == 0)
                                int32_t ecx_56 = (var_ac_1 + var_98_1 - var_a4_1 * 2) * eax_28 * 9
                                int32_t eax_81
                                
                                if (ecx_56 s< 0)
                                    int32_t eax_87 =
                                        divs.dp.d(sx.q((eax_30 << 7) - ecx_56), eax_30 << 8)
                                    
                                    if (ebx_5 s> 0 && eax_87 s>= 1 << ebx_5.b)
                                        eax_87 = (1 << ebx_5.b) - 1
                                    
                                    eax_81 = neg.d(eax_87)
                                else
                                    eax_81 = divs.dp.d(sx.q((eax_30 << 7) + ecx_56), eax_30 << 8)
                                    
                                    if (ebx_5 s> 0 && eax_81 s>= 1 << ebx_5.b)
                                        eax_81 = (1 << ebx_5.b) - 1
                                
                                var_68 = eax_81.w
                            
                            int32_t ebx_6 = *(edx_24 + 0x10)
                            int16_t var_76
                            
                            if (ebx_6 != 0 && var_76 == 0)
                                int32_t ecx_63 =
                                    (var_b0_1 - var_a8_1 - var_9c_1 + var_94_1) * eax_28 * 5
                                int32_t eax_98
                                
                                if (ecx_63 s< 0)
                                    int32_t eax_104 =
                                        divs.dp.d(sx.q((ecx_24 << 7) - ecx_63), ecx_24 << 8)
                                    
                                    if (ebx_6 s> 0 && eax_104 s>= 1 << ebx_6.b)
                                        eax_104 = (1 << ebx_6.b) - 1
                                    
                                    eax_98 = neg.d(eax_104)
                                else
                                    eax_98 = divs.dp.d(sx.q((ecx_24 << 7) + ecx_63), ecx_24 << 8)
                                    
                                    if (ebx_6 s> 0 && eax_98 s>= 1 << ebx_6.b)
                                        eax_98 = (1 << ebx_6.b) - 1
                                
                                var_76 = eax_98.w
                            
                            int32_t ebx_7 = *(edx_24 + 0x14)
                            int16_t var_84
                            
                            if (ebx_7 != 0 && var_84 == 0)
                                int32_t ecx_70 = (esi_1 + var_a0_1 - var_a4_1 * 2) * eax_28 * 9
                                int32_t eax_112
                                
                                if (ecx_70 s< 0)
                                    int32_t eax_118 =
                                        divs.dp.d(sx.q((edx_29 << 7) - ecx_70), edx_29 << 8)
                                    
                                    if (ebx_7 s> 0 && eax_118 s>= 1 << ebx_7.b)
                                        eax_118 = (1 << ebx_7.b) - 1
                                    
                                    eax_112 = neg.d(eax_118)
                                else
                                    eax_112 = divs.dp.d(sx.q((edx_29 << 7) + ecx_70), edx_29 << 8)
                                    
                                    if (ebx_7 s> 0 && eax_112 s>= 1 << ebx_7.b)
                                        eax_112 = (1 << ebx_7.b) - 1
                                
                                var_84 = eax_112.w
                            
                            ecx_26(var_e4_1, var_e8_1)
                            var_b0_1 = var_ac_1
                            var_ac_1 = var_a8_1
                            esi_1 = var_a4_1
                            var_a4_1 = var_a0_1
                            var_9c_1 = var_98_1
                            var_98_1 = var_94_1
                            var_f4_1 += 0x80
                            var_f0_1 += 0x80
                            var_ec_1 += 0x80
                            var_e4_1 += *(var_e0_1 + 0x24)
                            var_110_1 += 1
                        while (var_110_1 u<= eax_41)
                    
                    var_e8_1 += *(var_e0_1 + 0x24) << 2
                    var_104_1 += 1
                    var_8c_1 = &var_8c_1[1]
                while (var_104_1 s< var_100_1)
        
        i += 1
        var_e0_1 += 0x54
    
    *(arg1 + 0x98) += 1
    
    if (*(arg1 + 0x98) u>= *(arg1 + 0x132))
        return 4
    
    return 3
}
