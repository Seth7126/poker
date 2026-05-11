// ============================================================
// 函数名称: sub_511230
// 虚拟地址: 0x511230
// WARP GUID: f3a70699-84b9-5886-b152-66050abf4df0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_4068a2, sub_403010
// [被调用的父级函数]: sub_511fd8, sub_527454
// ============================================================

int32_t __convention("regparm")sub_511230(void* arg1, char arg2)
{
    // 第一条实际指令: int32_t result = 0xffffffff
    int32_t result = 0xffffffff
    
    if (*(arg1 + 0x1b4) != 0 && *(arg1 + 0x1e0) == 0)
        if (*(arg1 + 0x1b8) == 8)
            result = 0x64
        else if (arg2 == 0 || *(arg1 + 0x1b8) != 0)
        label_5112c1:
            
            if (arg2 == 0 || *(arg1 + 0x1b8) != 1)
            label_511318:
                
                if (arg2 == 0 || *(arg1 + 0x1b8) != 1)
                label_51136f:
                    
                    if (arg2 == 0 || *(arg1 + 0x1b8) != 0xffffffff)
                    label_5113c4:
                        
                        if (arg2 == 0 || *(arg1 + 0x1b8) != 0xffffffff)
                        label_51141b:
                            
                            if (arg2 == 0 || *(arg1 + 0x1b8) != 2)
                            label_511472:
                                
                                if (arg2 == 0 || *(arg1 + 0x1b8) != 3)
                                label_5114c9:
                                    
                                    if (arg2 == 0 || *(arg1 + 0x1b8) != 4)
                                    label_511520:
                                        
                                        if (arg2 == 0 || *(arg1 + 0x1b8) != 5)
                                        label_511577:
                                            
                                            if (arg2 == 0 || *(arg1 + 0x1b8) != 6)
                                            label_5115c6:
                                                
                                                if (arg2 != 0 && *(arg1 + 0x1b8) == 7)
                                                    int32_t eax_50 = *(arg1 + 0x1c0)
                                                    
                                                    if (add_overflow(eax_50, *(arg1 + 0x1c4)))
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    int32_t eax_52
                                                    int32_t edx_20
                                                    edx_20:eax_52 = sx.q(eax_50 + *(arg1 + 0x1c4))
                                                    uint32_t eax_53 = GetTickCount()
                                                    int32_t var_14_22 =
                                                        sbb.d(edx_20, 0, eax_52 u< eax_53)
                                                    
                                                    if (var_14_22 != 0xffffffff)
                                                        if (var_14_22 s<= 0xffffffff)
                                                            result = 0x64
                                                            *(arg1 + 0x1b8) = 8
                                                    else if (eax_52 - eax_53 u<= 0xffffff9c)
                                                        result = 0x64
                                                        *(arg1 + 0x1b8) = 8
                                            else
                                                int32_t eax_45 = *(arg1 + 0x1c0)
                                                
                                                if (add_overflow(eax_45, *(arg1 + 0x1c4)))
                                                    sub_403010()
                                                    noreturn
                                                
                                                int32_t eax_47
                                                int32_t edx_18
                                                edx_18:eax_47 = sx.q(eax_45 + *(arg1 + 0x1c4))
                                                uint32_t eax_48 = GetTickCount()
                                                int32_t var_14_20 = sbb.d(edx_18, 0, eax_47 u< eax_48)
                                                
                                                if (var_14_20 != 0)
                                                    if (var_14_20 s> 0)
                                                        goto label_5115c6
                                                    
                                                    result = 0
                                                    *(arg1 + 0x1b8) = 7
                                                else
                                                    if (eax_47 - eax_48 u> 0x64)
                                                        goto label_5115c6
                                                    
                                                    result = 0
                                                    *(arg1 + 0x1b8) = 7
                                        else
                                            int32_t eax_40 = *(arg1 + 0x1c0)
                                            
                                            if (add_overflow(eax_40, *(arg1 + 0x1c4)))
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t eax_42
                                            int32_t edx_16
                                            edx_16:eax_42 = sx.q(eax_40 + *(arg1 + 0x1c4))
                                            uint32_t eax_43 = GetTickCount()
                                            int32_t var_14_18 = sbb.d(edx_16, 0, eax_42 u< eax_43)
                                            
                                            if (var_14_18 != 0)
                                                if (var_14_18 s> 0)
                                                    goto label_511577
                                                
                                                result = 1
                                                *(arg1 + 0x1b8) = 6
                                            else
                                                if (eax_42 - eax_43 u> 0x3e8)
                                                    goto label_511577
                                                
                                                result = 1
                                                *(arg1 + 0x1b8) = 6
                                    else
                                        int32_t eax_35 = *(arg1 + 0x1c0)
                                        
                                        if (add_overflow(eax_35, *(arg1 + 0x1c4)))
                                            sub_403010()
                                            noreturn
                                        
                                        int32_t eax_37
                                        int32_t edx_14
                                        edx_14:eax_37 = sx.q(eax_35 + *(arg1 + 0x1c4))
                                        uint32_t eax_38 = GetTickCount()
                                        int32_t var_14_16 = sbb.d(edx_14, 0, eax_37 u< eax_38)
                                        
                                        if (var_14_16 != 0)
                                            if (var_14_16 s> 0)
                                                goto label_511520
                                            
                                            result = 2
                                            *(arg1 + 0x1b8) = 5
                                        else
                                            if (eax_37 - eax_38 u> 0x7d0)
                                                goto label_511520
                                            
                                            result = 2
                                            *(arg1 + 0x1b8) = 5
                                else
                                    int32_t eax_30 = *(arg1 + 0x1c0)
                                    
                                    if (add_overflow(eax_30, *(arg1 + 0x1c4)))
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t eax_32
                                    int32_t edx_12
                                    edx_12:eax_32 = sx.q(eax_30 + *(arg1 + 0x1c4))
                                    uint32_t eax_33 = GetTickCount()
                                    int32_t var_14_14 = sbb.d(edx_12, 0, eax_32 u< eax_33)
                                    
                                    if (var_14_14 != 0)
                                        if (var_14_14 s> 0)
                                            goto label_5114c9
                                        
                                        result = 3
                                        *(arg1 + 0x1b8) = 4
                                    else
                                        if (eax_32 - eax_33 u> 0xbb8)
                                            goto label_5114c9
                                        
                                        result = 3
                                        *(arg1 + 0x1b8) = 4
                            else
                                int32_t eax_25 = *(arg1 + 0x1c0)
                                
                                if (add_overflow(eax_25, *(arg1 + 0x1c4)))
                                    sub_403010()
                                    noreturn
                                
                                int32_t eax_27
                                int32_t edx_10
                                edx_10:eax_27 = sx.q(eax_25 + *(arg1 + 0x1c4))
                                uint32_t eax_28 = GetTickCount()
                                int32_t var_14_12 = sbb.d(edx_10, 0, eax_27 u< eax_28)
                                
                                if (var_14_12 != 0)
                                    if (var_14_12 s> 0)
                                        goto label_511472
                                    
                                    result = 5
                                    *(arg1 + 0x1b8) = 3
                                else
                                    if (eax_27 - eax_28 u> 0x1388)
                                        goto label_511472
                                    
                                    result = 5
                                    *(arg1 + 0x1b8) = 3
                        else
                            int32_t eax_20 = *(arg1 + 0x1c0)
                            
                            if (add_overflow(eax_20, *(arg1 + 0x1c4)))
                                sub_403010()
                                noreturn
                            
                            int32_t eax_22
                            int32_t edx_8
                            edx_8:eax_22 = sx.q(eax_20 + *(arg1 + 0x1c4))
                            uint32_t eax_23 = GetTickCount()
                            int32_t var_14_10 = sbb.d(edx_8, 0, eax_22 u< eax_23)
                            
                            if (var_14_10 != 0)
                                if (var_14_10 s> 0)
                                    goto label_51141b
                                
                                result = 0x3c
                                *(arg1 + 0x1b8) = 0xffffffff
                            else
                                if (eax_22 - eax_23 u> 0xea60)
                                    goto label_51141b
                                
                                result = 0x3c
                                *(arg1 + 0x1b8) = 0xffffffff
                    else
                        int32_t eax_15 = *(arg1 + 0x1c0)
                        
                        if (add_overflow(eax_15, *(arg1 + 0x1c4)))
                            sub_403010()
                            noreturn
                        
                        int32_t eax_17
                        int32_t edx_6
                        edx_6:eax_17 = sx.q(eax_15 + *(arg1 + 0x1c4))
                        uint32_t eax_18 = GetTickCount()
                        int32_t var_14_8 = sbb.d(edx_6, 0, eax_17 u< eax_18)
                        
                        if (var_14_8 != 0)
                            if (var_14_8 s> 0)
                                goto label_5113c4
                            
                            result = 0x39
                            *(arg1 + 0x1b8) = 0
                        else
                            if (eax_17 - eax_18 u> 0xdea8)
                                goto label_5113c4
                            
                            result = 0x39
                            *(arg1 + 0x1b8) = 0
                else
                    int32_t eax_10 = *(arg1 + 0x1c0)
                    
                    if (add_overflow(eax_10, *(arg1 + 0x1c4)))
                        sub_403010()
                        noreturn
                    
                    int32_t eax_12
                    int32_t edx_4
                    edx_4:eax_12 = sx.q(eax_10 + *(arg1 + 0x1c4))
                    uint32_t eax_13 = GetTickCount()
                    int32_t var_14_6 = sbb.d(edx_4, 0, eax_12 u< eax_13)
                    
                    if (var_14_6 != 0)
                        if (var_14_6 s> 0)
                            goto label_51136f
                        
                        result = 0x11
                        *(arg1 + 0x1b8) = 1
                    else
                        if (eax_12 - eax_13 u> 0x4268)
                            goto label_51136f
                        
                        result = 0x11
                        *(arg1 + 0x1b8) = 1
            else
                int32_t eax_5 = *(arg1 + 0x1c0)
                
                if (add_overflow(eax_5, *(arg1 + 0x1c4)))
                    sub_403010()
                    noreturn
                
                int32_t eax_7
                int32_t edx_2
                edx_2:eax_7 = sx.q(eax_5 + *(arg1 + 0x1c4))
                uint32_t eax_8 = GetTickCount()
                int32_t var_14_4 = sbb.d(edx_2, 0, eax_7 u< eax_8)
                
                if (var_14_4 != 0)
                    if (var_14_4 s> 0)
                        goto label_511318
                    
                    result = 0xa
                    *(arg1 + 0x1b8) = 2
                else
                    if (eax_7 - eax_8 u> 0x2710)
                        goto label_511318
                    
                    result = 0xa
                    *(arg1 + 0x1b8) = 2
        else
            int32_t eax = *(arg1 + 0x1c0)
            
            if (add_overflow(eax, *(arg1 + 0x1c4)))
                sub_403010()
                noreturn
            
            int32_t eax_2
            int32_t edx
            edx:eax_2 = sx.q(eax + *(arg1 + 0x1c4))
            uint32_t eax_3 = GetTickCount()
            int32_t var_14_2 = sbb.d(edx, 0, eax_2 u< eax_3)
            
            if (var_14_2 != 0)
                if (var_14_2 s> 0)
                    goto label_5112c1
                
                result = 0x14
                *(arg1 + 0x1b8) = 1
            else
                if (eax_2 - eax_3 u> 0x4e20)
                    goto label_5112c1
                
                result = 0x14
                *(arg1 + 0x1b8) = 1
        
        if (result == 0xffffffff && *(arg1 + 0x1b8) s> 0)
            int32_t eax_55 = *(arg1 + 0x1c0)
            
            if (add_overflow(eax_55, *(arg1 + 0x1c4)))
                sub_403010()
                noreturn
            
            int32_t eax_57
            int32_t edx_22
            edx_22:eax_57 = sx.q(eax_55 + *(arg1 + 0x1c4))
            uint32_t eax_58
            int32_t ecx_1
            eax_58, ecx_1 = GetTickCount()
            bool o_13 = unimplemented  {sbb dword [esp+0x4], edx}
            int32_t result_1 =
                sub_4068a2(ecx_1, sbb.d(edx_22, 0, eax_57 u< eax_58), eax_57 - eax_58, 0x3e8, 0)
            
            if (o_13)
                sub_403010()
                noreturn
            
            result = result_1
            
            if (result s> 0xa)
                return 0xffffffff
    
    return result
}
