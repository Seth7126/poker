// ============================================================
// 函数名称: sub_40a48c
// 虚拟地址: 0x40a48c
// WARP GUID: e55dab82-687c-555c-99c6-e745cce5e6e8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40a04c, sub_40a1a0, sub_40a108, sub_40a48c, sub_40a1d8, sub_4094dc, sub_40a0c4, sub_40a128, sub_40a384, sub_40a218, sub_40a174, sub_403e1c
// [被调用的父级函数]: sub_40ac00, sub_40a48c
// ============================================================

int32_t __convention("regparm")sub_40a48c(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    void* ebx
    void* var_30 = ebx
    int32_t esi
    int32_t var_34 = esi
    int32_t var_2c = 0
    int32_t var_28 = 0
    int32_t* var_38 = &var_4
    int32_t (* var_3c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1 != 0 && *(arg2 - 0x108) s< 2)
        *(arg2 - 0x108) += 1
        ebx.b = 0x20
        char var_17_1 = 0
        char var_21_1 = 0
        char var_22_1 = 0
        
        while (true)
            char* eax_2
            eax_2.b = *ebp_1[-1]
            
            if (eax_2.b == 0)
                break
            
            *(ebp_1 - 5) = eax_2.b
            ebp_1[-1] += 1
            eax_2.b = *(ebp_1 - 5)
            
            if (not(test_bit(data_52e118, eax_2 & 0xff)))
                void* eax_3
                eax_3.b = *(ebp_1 - 5)
                
                if (eax_3.b - 0x61 u< 0x1a)
                    eax_3.b -= 0x20
                
                if (eax_3.b - 0x41 u< 0x1a)
                    if (eax_3.b == 0x4d && ebx.b == 0x48)
                        eax_3.b = 0x4e
                    
                    ebx = eax_3
                
                int32_t* ecx
                
                if ((eax_3 & 0xff) - 0x22 u<= 0x38)
                    void* eax_6
                    eax_6.b = *((eax_3 & 0xff) + 0x40a532)
                    
                    switch (eax_6)
                        case 1
                            sub_40a174(ebp_1)
                            sub_40a1a0(ebp_1)
                            
                            if (ebp_1[-3] s> 2)
                                int32_t* eax_10 = ebp_1[2]
                                sub_40a128(zx.d(*(ebp_1 - 0xe)), 4, ebp_1)
                                ecx = eax_10
                                continue
                            else
                                int32_t* eax_7 = ebp_1[2]
                                sub_40a128(modu.dp.d(0:(zx.d(*(ebp_1 - 0xe))), 0x64), 2, ebp_1)
                                ecx = eax_7
                                continue
                        case 2
                            sub_40a174(ebp_1)
                            sub_40a1a0(ebp_1)
                            int32_t* eax_12 = ebp_1[2]
                            int32_t* var_48_1 = ebp_1
                            int32_t edx_6
                            edx_6, ebx, ebp_1 = sub_40a218(ebp_1[-3], &ebp_1[-9], ebp_1)
                            sub_40a108(ebp_1[-9], edx_6)
                            ecx = eax_12
                            continue
                        case 3
                            sub_40a174(ebp_1)
                            sub_40a1a0(ebp_1)
                            int32_t* eax_15 = ebp_1[2]
                            int32_t* var_48_2 = ebp_1
                            int32_t edx_8
                            edx_8, ebx, ebp_1 = sub_40a384(ebp_1[-3], &ebp_1[-0xa], ebp_1)
                            sub_40a108(ebp_1[-0xa], edx_8)
                            ecx = eax_15
                            continue
                        case 4
                            sub_40a174(ebp_1)
                            int32_t edx_9 = sub_40a1a0(ebp_1)
                            int32_t eax_19 = ebp_1[-3] - 1
                            
                            if (eax_19 u< 2)
                                int32_t* eax_21 = ebp_1[2]
                                sub_40a128(zx.d(ebp_1[-4].w), ebp_1[-3], ebp_1)
                                ecx = eax_21
                                continue
                            else if (eax_19 == 2)
                                int32_t* eax_23 = ebp_1[2]
                                sub_40a108((&data_531518)[zx.d(ebp_1[-4].w)], edx_9)
                                ecx = eax_23
                                continue
                            else
                                int32_t* eax_26 = ebp_1[2]
                                sub_40a108(*((zx.d(ebp_1[-4].w) << 2) + &data_531548), edx_9)
                                ecx = eax_26
                                continue
                        case 5
                            sub_40a174(ebp_1)
                            int32_t eax_30 = ebp_1[-3] - 1
                            
                            if (eax_30 u< 2)
                                sub_40a1a0(ebp_1)
                                int32_t* eax_34 = ebp_1[2]
                                sub_40a128(zx.d(*(ebp_1 - 0x12)), ebp_1[-3], ebp_1)
                                ecx = eax_34
                                continue
                            else if (eax_30 == 2)
                                int32_t* eax_36 = ebp_1[2]
                                void* eax_37 = ebp_1[2]
                                int32_t eax_38
                                int32_t edx_12
                                eax_38, edx_12 = sub_40a04c(*(eax_37 + 8), *(eax_37 + 0xc))
                                sub_40a108(*((eax_38 << 2) + &data_531578), edx_12)
                                ecx = eax_36
                                continue
                            else if (eax_30 == 3)
                                int32_t* eax_40 = ebp_1[2]
                                void* eax_41 = ebp_1[2]
                                int32_t eax_42
                                int32_t edx_13
                                eax_42, edx_13 = sub_40a04c(*(eax_41 + 8), *(eax_41 + 0xc))
                                sub_40a108(*((eax_42 << 2) + &data_531594), edx_13)
                                ecx = eax_40
                                continue
                            else if (eax_30 == 4)
                                int32_t* eax_44 = ebp_1[2]
                                data_531500
                                sub_40a48c(eax_44)
                                ecx = eax_44
                                continue
                            else
                                int32_t* eax_46 = ebp_1[2]
                                data_531504
                                sub_40a48c(eax_46)
                                ecx = eax_46
                                continue
                        case 6
                            sub_40a174(ebp_1)
                            sub_40a1d8(ebp_1)
                            int32_t* ecx_14 = ebp_1
                            *(ebp_1 - 0x1f) = 0
                            char* esi_1 = ebp_1[-1]
                            void* eax_48
                            
                            while (true)
                                eax_48.b = *esi_1
                                
                                if (eax_48.b == 0)
                                    break
                                
                                if (not(test_bit(data_52e118, eax_48 & 0xff)))
                                    eax_48.b = *esi_1
                                    
                                    if (eax_48 s> 0x48)
                                        if (eax_48 == 0x61)
                                        label_40a7df:
                                            
                                            if (*(ebp_1 - 0x1f) == 0)
                                                eax_48, ecx_14 = sub_4094dc(esi_1, "AM/PM", 5)
                                                
                                                if (eax_48 == 0)
                                                    *(ebp_1 - 0x1e) = 1
                                                else
                                                    eax_48, ecx_14 = sub_4094dc(esi_1, 0x40abe4, 3)
                                                    
                                                    if (eax_48 == 0)
                                                        *(ebp_1 - 0x1e) = 1
                                                    else
                                                        eax_48, ecx_14 = sub_4094dc(esi_1, "AMPM", 4)
                                                        
                                                        if (eax_48 == 0)
                                                            *(ebp_1 - 0x1e) = 1
                                                
                                                break
                                        else if (eax_48 == 0x68)
                                            break
                                    else
                                        if (eax_48 == 0x48)
                                            break
                                        
                                        void* temp12_1
                                        
                                        if (eax_48 != 0x22)
                                            temp12_1 = eax_48 - 0x22
                                        
                                        if (eax_48 == 0x22 || temp12_1 == 5)
                                            eax_48.b = *(ebp_1 - 0x1f)
                                            eax_48.b ^= 1
                                            *(ebp_1 - 0x1f) = eax_48.b
                                        else if (eax_48 == 0x41)
                                            goto label_40a7df
                                    
                                    esi_1 = &esi_1[1]
                                else
                                    if (esi_1[1] == 0)
                                        break
                                    
                                    esi_1 = &esi_1[2]
                            
                            eax_48.w = *(ebp_1 - 0x16)
                            
                            if (*(ebp_1 - 0x1e) != 0)
                                if (eax_48.w == 0)
                                    eax_48.w = 0xc
                                else if (eax_48.w u> 0xc)
                                    eax_48.w -= 0xc
                            
                            if (ebp_1[-3] s> 2)
                                ebp_1[-3] = 2
                            
                            int32_t* edx_14 = ebp_1[2]
                            sub_40a128(zx.d(eax_48.w), ebp_1[-3], ecx_14)
                            ecx = edx_14
                            continue
                        case 7
                            sub_40a174(ebp_1)
                            sub_40a1d8(ebp_1)
                            
                            if (ebp_1[-3] s> 2)
                                ebp_1[-3] = 2
                            
                            int32_t* eax_53 = ebp_1[2]
                            sub_40a128(zx.d(ebp_1[-6].w), ebp_1[-3], ebp_1)
                            ecx = eax_53
                            continue
                        case 8
                            sub_40a174(ebp_1)
                            sub_40a1d8(ebp_1)
                            
                            if (ebp_1[-3] s> 2)
                                ebp_1[-3] = 2
                            
                            int32_t* eax_55 = ebp_1[2]
                            sub_40a128(zx.d(*(ebp_1 - 0x1a)), ebp_1[-3], ebp_1)
                            ecx = eax_55
                            continue
                        case 9
                            sub_40a174(ebp_1)
                            
                            if (ebp_1[-3] != 1)
                                int32_t* eax_59 = ebp_1[2]
                                data_531518
                                sub_40a48c(eax_59)
                                ecx = eax_59
                                continue
                            else
                                int32_t* eax_57 = ebp_1[2]
                                data_531514
                                sub_40a48c(eax_57)
                                ecx = eax_57
                                continue
                        case 0xa
                            sub_40a174(ebp_1)
                            sub_40a1d8(ebp_1)
                            
                            if (ebp_1[-3] s> 3)
                                ebp_1[-3] = 3
                            
                            int32_t* eax_61 = ebp_1[2]
                            sub_40a128(zx.d(ebp_1[-7].w), ebp_1[-3], ebp_1)
                            ecx = eax_61
                            continue
                        case 0xb
                            sub_40a1d8(ebp_1)
                            void* esi_4 = ebp_1[-1] - 1
                            int32_t eax_64
                            void* ecx_22
                            eax_64, ecx_22 = sub_4094dc(esi_4, "AM/PM", 5)
                            
                            if (eax_64 != 0)
                                int32_t eax_68
                                void* ecx_23
                                eax_68, ecx_23 = sub_4094dc(esi_4, 0x40abe4, 3)
                                
                                if (eax_68 != 0)
                                    int32_t eax_72
                                    int32_t edx_19
                                    eax_72, edx_19 = sub_4094dc(esi_4, "AMPM", 4)
                                    
                                    if (eax_72 != 0)
                                        if (sub_4094dc(esi_4, "AAAA", 4) != 0)
                                            int32_t eax_84
                                            void* ecx_25
                                            eax_84, ecx_25 = sub_4094dc(esi_4, 0x40abf8, 3)
                                            
                                            if (eax_84 != 0)
                                                int32_t* eax_89 = ebp_1[2]
                                                sub_40a0c4(ebp_1 - 5, 1, ecx_25)
                                                ecx = eax_89
                                                continue
                                            else
                                                sub_40a1a0(ebp_1)
                                                int32_t* eax_85 = ebp_1[2]
                                                void* eax_86 = ebp_1[2]
                                                int32_t eax_87
                                                int32_t edx_21
                                                eax_87, edx_21 =
                                                    sub_40a04c(*(eax_86 + 8), *(eax_86 + 0xc))
                                                sub_40a108(*((eax_87 << 2) + &data_531578), edx_21)
                                                ecx = eax_85
                                                ebp_1[-1] += 2
                                                continue
                                        else
                                            sub_40a1a0(ebp_1)
                                            int32_t* eax_79 = ebp_1[2]
                                            void* eax_80 = ebp_1[2]
                                            int32_t eax_81
                                            int32_t edx_20
                                            eax_81, edx_20 = sub_40a04c(*(eax_80 + 8), *(eax_80 + 0xc))
                                            sub_40a108(*((eax_81 << 2) + &data_531594), edx_20)
                                            ecx = eax_79
                                            ebp_1[-1] += 3
                                            continue
                                    else
                                        if (*(ebp_1 - 0x16) u>= 0xc)
                                            int32_t* eax_75 = ebp_1[2]
                                            sub_40a108(data_531510, edx_19)
                                            ecx = eax_75
                                        else
                                            int32_t* eax_73 = ebp_1[2]
                                            sub_40a108(data_53150c, edx_19)
                                            ecx = eax_73
                                        
                                        ebp_1[-1] += 3
                                        *(ebp_1 - 0x1e) = 1
                                        continue
                                else
                                    if (*(ebp_1 - 0x16) u>= 0xc)
                                        esi_4 += 2
                                    
                                    int32_t* eax_69 = ebp_1[2]
                                    sub_40a0c4(esi_4, 1, ecx_23)
                                    ecx = eax_69
                                    ebp_1[-1] += 2
                                    *(ebp_1 - 0x1e) = 1
                                    continue
                            else
                                if (*(ebp_1 - 0x16) u>= 0xc)
                                    esi_4 += 3
                                
                                int32_t* eax_65 = ebp_1[2]
                                sub_40a0c4(esi_4, 2, ecx_22)
                                ecx = eax_65
                                ebp_1[-1] += 4
                                *(ebp_1 - 0x1e) = 1
                                continue
                        case 0xc
                            sub_40a174(ebp_1)
                            data_531500
                            sub_40a48c(ebp_1[2])
                            sub_40a1d8(ebp_1)
                            ecx = ebp_1
                            
                            if (*(ebp_1 - 0x16) == 0 && ebp_1[-6].w == 0 && *(ebp_1 - 0x1a) == 0)
                                continue
                            
                            int32_t var_44_51 = ebp_1[2]
                            sub_40a0c4(0x40abfc, 1, ecx)
                            int32_t* eax_94 = ebp_1[2]
                            data_531518
                            sub_40a48c(eax_94)
                            ecx = eax_94
                            continue
                        case 0xd
                            int32_t* eax_96 = ebp_1[2]
                            sub_40a0c4(&data_5314fd, 1, ecx)
                            ecx = eax_96
                            continue
                        case 0xe
                            int32_t* eax_97 = ebp_1[2]
                            sub_40a0c4(&data_531508, 1, ecx)
                            ecx = eax_97
                            continue
                        case 0xf
                            int32_t esi_5 = ebp_1[-1]
                            
                            while (true)
                                char* eax_100
                                eax_100.b = *ebp_1[-1]
                                
                                if (eax_100.b == 0)
                                    break
                                
                                if (eax_100.b == *(ebp_1 - 5))
                                    break
                                
                                if (test_bit(data_52e118, eax_100 & 0xff))
                                    ebp_1[-1] += 1
                                    
                                    if (*ebp_1[-1] == 0)
                                        break
                                
                                ebp_1[-1] += 1
                            
                            int32_t* eax_101 = ebp_1[2]
                            sub_40a0c4(esi_5, ebp_1[-1] - esi_5, ecx)
                            ecx = eax_101
                            
                            if (*ebp_1[-1] == 0)
                                continue
                            else
                                ebp_1[-1] += 1
                                continue
                
                int32_t* eax_104 = ebp_1[2]
                sub_40a0c4(ebp_1 - 5, 1, ecx)
                ecx = eax_104
            else
                if (*ebp_1[-1] == 0)
                    break
                
                ebp_1[-1] += 1
                ebx.b = 0x20
        
        void* eax_106 = ebp_1[2]
        *(eax_106 - 0x108) -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_38_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_40abd4
    return sub_403e1c(&ebp_1[-0xa], 2)
}
