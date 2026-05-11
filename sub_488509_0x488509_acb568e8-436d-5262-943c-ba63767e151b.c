// ============================================================
// 函数名称: sub_488509
// 虚拟地址: 0x488509
// WARP GUID: acb568e8-436d-5262-943c-ba63767e151b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_46ae30, sub_46c038, sub_4042c0, sub_402e28, sub_469d58, sub_47a7ec, sub_40423c, sub_46d5f4, sub_40401c, sub_482da8, sub_402b4c, sub_46c3d0, sub_404280, sub_403010, sub_403008, sub_48c214, sub_403e1c, sub_403e90, sub_404078, sub_402b3c, sub_402c90, sub_404188, sub_48c0c8, sub_403fb0, sub_47c0f0, sub_402bc0, sub_482828, sub_46a708, sub_4040c4, sub_48bae4, sub_408e80, sub_46fd7c, sub_402b90, sub_46a50c, sub_403fa0, sub_403df8, sub_4822b4, sub_48c290, sub_48b3d8, sub_479f44, sub_402e88, sub_40287c, sub_48156c, sub_47a86c, sub_4028c0, sub_484dfc
// [被调用的父级函数]: 无
// ============================================================

void*sub_488509(int32_t* arg1 @ ebp, int32_t arg2 @ esi, int32_t arg3 @ edi, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t var_4 = *(arg1[-0x26] + 0x84)
    int32_t var_4 = *(arg1[-0x26] + 0x84)
    int32_t eax = arg1[-5]
    
    if (add_overflow(eax, 8))
        sub_403010()
        noreturn
    
    if (add_overflow(eax + 8, arg1[-0x13]))
        sub_403010()
        noreturn
    
    arg1[-0x29] = eax + 8 + arg1[-0x13]
    float var_8 = fconvert.s(float.t(arg1[-0x29]))
    int32_t eax_3 = arg1[-6]
    
    if (add_overflow(eax_3, arg1[-0x14]))
        sub_403010()
        noreturn
    
    arg1[-0x5a] = eax_3 + arg1[-0x14]
    float var_c = fconvert.s(float.t(arg1[-0x5a]))
    int16_t top = 0
    int32_t var_10 = *(arg1[-0x26] + 0x68)
    int32_t var_14 = 5
    float var_1c = *(arg1[-0x26] + 0x110)
    int32_t eax_8 = sx.d(*(arg1[-0x24] + 2))
    int32_t edx_1 = sx.d(*(arg1[-0x26] + 2))
    int32_t eax_9 = eax_8 + edx_1
    
    if (add_overflow(eax_8, edx_1))
        sub_403010()
        noreturn
    
    void* edx_2 = arg1[-0x26]
    int32_t eax_10 = eax_9 + *(edx_2 + 0x5c)
    
    if (add_overflow(eax_9, *(edx_2 + 0x5c)))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_10, 0xffffffec))
        sub_403010()
        noreturn
    
    int32_t ecx
    sub_403fb0(ecx, arg1[-9])
    int32_t entry_ebx
    sub_48c290(entry_ebx, arg1[-0xc4], arg1[-0xb], &arg1[-0xc3], 0, 0, eax_10 - 0x14, var_1c, 0f)
    
    while (true)
        int32_t ecx_2 = sub_4042c0(&arg1[-0x10], 1, 1)
        
        while (true)
            if (arg1[-0x17] == 0)
                if (arg1[-0x1f] == 0 || *(arg1[-0x26] + 0xee) != 0xfff9)
                label_488802:
                    
                    if (arg1[-0x1f] != 0)
                        if (add_overflow(arg2, 0x3e8))
                            sub_403010()
                            noreturn
                        
                        int32_t ecx_6
                        void* ebp
                        ecx_6, entry_ebx, ebp = sub_469d58(entry_ebx, entry_ebx + 0xac8, 0xff, 
                            &arg1[-0xad], arg1[-8], arg1[-3], arg2 + 0x3e8)
                        sub_40401c(ecx_6, ebp - 0x2b4)
                        void** eax_62
                        eax_62, arg1 = sub_479f44(nullptr, *(ebp - 0x328))
                        int32_t ecx_7 = sub_402e28(entry_ebx + 0xbc8, eax_62)
                        
                        if (arg1[-0x14] s> 0 || *(arg1[-0x26] + 0x5c) != 0x267)
                            int32_t var_4_6 = *(arg1[-0x26] + 0x84)
                            int32_t eax_85 = arg1[-5]
                            
                            if (add_overflow(eax_85, 8))
                                sub_403010()
                                noreturn
                            
                            if (add_overflow(eax_85 + 8, arg1[-0x13]))
                                sub_403010()
                                noreturn
                            
                            arg1[-0x29] = eax_85 + 8 + arg1[-0x13]
                            unimplemented  {fild st0, dword [ebp-0xa4]}
                            float var_8_5 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            int32_t eax_88 = arg1[-6]
                            
                            if (add_overflow(eax_88, arg1[-0x14]))
                                sub_403010()
                                noreturn
                            
                            arg1[-0x5a] = eax_88 + arg1[-0x14]
                            unimplemented  {fild st0, dword [ebp-0x168]}
                            float var_c_5 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            int32_t var_10_5 = *(arg1[-0x26] + 0x68)
                            int32_t var_14_4 = 2
                            float var_1c_4 = *(arg1[-0x26] + 0x110)
                            int32_t eax_93 = sx.d(*(arg1[-0x24] + 2))
                            int32_t edx_28 = sx.d(*(arg1[-0x26] + 2))
                            int32_t eax_94 = eax_93 + edx_28
                            
                            if (add_overflow(eax_93, edx_28))
                                sub_403010()
                                noreturn
                            
                            void* edx_29 = arg1[-0x26]
                            int32_t eax_95 = eax_94 + *(edx_29 + 0x5c)
                            
                            if (add_overflow(eax_94, *(edx_29 + 0x5c)))
                                sub_403010()
                                noreturn
                            
                            if (add_overflow(eax_95, 0xffffffec))
                                sub_403010()
                                noreturn
                            
                            int32_t ecx_10 = sub_40401c(ecx_7, entry_ebx + 0xbc8)
                            int32_t eax_98 = arg1[-0xcf]
                            sub_403fb0(ecx_10, arg1[-9])
                            sub_48c290(entry_ebx, arg1[-0xd0], arg1[-0xb], &arg1[-0xce], eax_98, 0, 
                                eax_95 - 0x14, var_1c_4, 0f)
                        else
                            unimplemented  {fld st0, dword [eax+0x84]}
                            unimplemented  {fmul st0, dword [0x48ac68]}
                            float var_4_5 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            int32_t eax_65 = arg1[-5]
                            
                            if (add_overflow(eax_65, 8))
                                sub_403010()
                                noreturn
                            
                            int32_t eax_67 = eax_65 + 8 + arg1[-0x13]
                            
                            if (add_overflow(eax_65 + 8, arg1[-0x13]))
                                sub_403010()
                                noreturn
                            
                            if (add_overflow(eax_67, 0xfffffff6))
                                sub_403010()
                                noreturn
                            
                            arg1[-0x29] = eax_67 - 0xa
                            unimplemented  {fild st0, dword [ebp-0xa4]}
                            float var_8_4 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            int32_t eax_69 = arg1[-6]
                            int32_t eax_70 = eax_69 + arg1[-0x14]
                            
                            if (add_overflow(eax_69, arg1[-0x14]))
                                sub_403010()
                                noreturn
                            
                            if (add_overflow(eax_70, 0xa))
                                sub_403010()
                                noreturn
                            
                            arg1[-0x5a] = eax_70 + 0xa
                            unimplemented  {fild st0, dword [ebp-0x168]}
                            float var_c_4 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            int32_t var_10_4 = *(arg1[-0x26] + 0x68)
                            int32_t var_14_3 = 2
                            float var_1c_3 = *(arg1[-0x26] + 0x110)
                            int32_t eax_75 = sx.d(*(arg1[-0x24] + 2))
                            int32_t edx_22 = sx.d(*(arg1[-0x26] + 2))
                            int32_t eax_76 = eax_75 + edx_22
                            
                            if (add_overflow(eax_75, edx_22))
                                sub_403010()
                                noreturn
                            
                            void* edx_23 = arg1[-0x26]
                            int32_t eax_77 = eax_76 + *(edx_23 + 0x5c)
                            
                            if (add_overflow(eax_76, *(edx_23 + 0x5c)))
                                sub_403010()
                                noreturn
                            
                            if (add_overflow(eax_77, 0xffffffec))
                                sub_403010()
                                noreturn
                            
                            int32_t ecx_8 = sub_40401c(ecx_7, entry_ebx + 0xbc8)
                            int32_t eax_80 = arg1[-0xcc]
                            sub_403fb0(ecx_8, arg1[-9])
                            sub_48c290(entry_ebx, arg1[-0xcd], arg1[-0xb], &arg1[-0xcb], eax_80, 0, 
                                eax_77 - 0x14, var_1c_3, 0f)
                    else if (arg1[-0x14] s> 0 || *(arg1[-0x26] + 0x5c) != 0x267)
                        int32_t var_4_8 = *(arg1[-0x26] + 0x84)
                        int32_t eax_121 = arg1[-5]
                        
                        if (add_overflow(eax_121, 8))
                            sub_403010()
                            noreturn
                        
                        if (add_overflow(eax_121 + 8, arg1[-0x13]))
                            sub_403010()
                            noreturn
                        
                        arg1[-0x29] = eax_121 + 8 + arg1[-0x13]
                        unimplemented  {fild st0, dword [ebp-0xa4]}
                        float var_8_7 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        int32_t eax_124 = arg1[-6]
                        
                        if (add_overflow(eax_124, arg1[-0x14]))
                            sub_403010()
                            noreturn
                        
                        arg1[-0x5a] = eax_124 + arg1[-0x14]
                        unimplemented  {fild st0, dword [ebp-0x168]}
                        float var_c_7 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        int32_t var_10_7 = *(arg1[-0x26] + 0x68)
                        int32_t var_14_6 = 2
                        float var_1c_6 = *(arg1[-0x26] + 0x110)
                        int32_t eax_129 = sx.d(*(arg1[-0x24] + 2))
                        int32_t edx_39 = sx.d(*(arg1[-0x26] + 2))
                        int32_t eax_130 = eax_129 + edx_39
                        
                        if (add_overflow(eax_129, edx_39))
                            sub_403010()
                            noreturn
                        
                        void* edx_40 = arg1[-0x26]
                        int32_t eax_131 = eax_130 + *(edx_40 + 0x5c)
                        
                        if (add_overflow(eax_130, *(edx_40 + 0x5c)))
                            sub_403010()
                            noreturn
                        
                        if (add_overflow(eax_131, 0xffffffec))
                            sub_403010()
                            noreturn
                        
                        sub_403fb0(ecx_2, arg1[-9])
                        sub_48c290(entry_ebx, arg1[-0xd4], arg1[-0xb], &arg1[-0xd3], 0, 0, 
                            eax_131 - 0x14, var_1c_6, 0f)
                    else
                        unimplemented  {fld st0, dword [eax+0x84]}
                        unimplemented  {fmul st0, dword [0x48ac68]}
                        float var_4_7 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        int32_t eax_103 = arg1[-5]
                        
                        if (add_overflow(eax_103, 8))
                            sub_403010()
                            noreturn
                        
                        int32_t eax_105 = eax_103 + 8 + arg1[-0x13]
                        
                        if (add_overflow(eax_103 + 8, arg1[-0x13]))
                            sub_403010()
                            noreturn
                        
                        if (add_overflow(eax_105, 0xfffffff6))
                            sub_403010()
                            noreturn
                        
                        arg1[-0x29] = eax_105 - 0xa
                        unimplemented  {fild st0, dword [ebp-0xa4]}
                        float var_8_6 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        int32_t eax_107 = arg1[-6]
                        int32_t eax_108 = eax_107 + arg1[-0x14]
                        
                        if (add_overflow(eax_107, arg1[-0x14]))
                            sub_403010()
                            noreturn
                        
                        if (add_overflow(eax_108, 0xa))
                            sub_403010()
                            noreturn
                        
                        arg1[-0x5a] = eax_108 + 0xa
                        unimplemented  {fild st0, dword [ebp-0x168]}
                        float var_c_6 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        int32_t var_10_6 = *(arg1[-0x26] + 0x68)
                        int32_t var_14_5 = 2
                        float var_1c_5 = *(arg1[-0x26] + 0x110)
                        int32_t eax_113 = sx.d(*(arg1[-0x24] + 2))
                        int32_t edx_34 = sx.d(*(arg1[-0x26] + 2))
                        int32_t eax_114 = eax_113 + edx_34
                        
                        if (add_overflow(eax_113, edx_34))
                            sub_403010()
                            noreturn
                        
                        void* edx_35 = arg1[-0x26]
                        int32_t eax_115 = eax_114 + *(edx_35 + 0x5c)
                        
                        if (add_overflow(eax_114, *(edx_35 + 0x5c)))
                            sub_403010()
                            noreturn
                        
                        if (add_overflow(eax_115, 0xffffffec))
                            sub_403010()
                            noreturn
                        
                        sub_403fb0(ecx_2, arg1[-9])
                        sub_48c290(entry_ebx, arg1[-0xd2], arg1[-0xb], &arg1[-0xd1], 0, 0, 
                            eax_115 - 0x14, var_1c_5, 0f)
                else
                    sub_404280(1, 1, arg1[-0x1f], &arg1[-0xc5])
                    int32_t eax_20
                    eax_20, ecx_2 = sub_408e80(arg1[-0xc5])
                    int32_t edx_6 = sx.d(*(arg1[-0x26] + 0x74))
                    
                    if (add_overflow(eax_20, neg.d(edx_6)))
                        sub_403010()
                        noreturn
                    
                    if (eax_20 - edx_6 != arg1[-0x11] || arg1[-0x11] s<= 0)
                        goto label_488802
                    
                    int32_t var_4_2 = *(arg1[-0x26] + 0x84)
                    int32_t eax_23 = arg1[-5]
                    
                    if (add_overflow(eax_23, 8))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(eax_23 + 8, arg1[-0x13]))
                        sub_403010()
                        noreturn
                    
                    arg1[-0x29] = eax_23 + 8 + arg1[-0x13]
                    unimplemented  {fild st0, dword [ebp-0xa4]}
                    float var_8_1 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t eax_26 = arg1[-6]
                    
                    if (add_overflow(eax_26, arg1[-0x14]))
                        sub_403010()
                        noreturn
                    
                    arg1[-0x5a] = eax_26 + arg1[-0x14]
                    unimplemented  {fild st0, dword [ebp-0x168]}
                    float var_c_1 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t var_10_1 = *(arg1[-0x26] + 0x68)
                    int32_t var_14_1 = 5
                    float var_1c_1 = *(arg1[-0x26] + 0x110)
                    int32_t eax_31 = sx.d(*(arg1[-0x24] + 2))
                    int32_t edx_8 = sx.d(*(arg1[-0x26] + 2))
                    int32_t eax_32 = eax_31 + edx_8
                    
                    if (add_overflow(eax_31, edx_8))
                        sub_403010()
                        noreturn
                    
                    void* edx_9 = arg1[-0x26]
                    int32_t eax_33 = eax_32 + *(edx_9 + 0x5c)
                    
                    if (add_overflow(eax_32, *(edx_9 + 0x5c)))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(eax_33, 0xffffffec))
                        sub_403010()
                        noreturn
                    
                    sub_403fb0(ecx_2, arg1[-9])
                    int32_t ecx_4 = sub_48c290(entry_ebx, arg1[-0xc7], arg1[-0xb], &arg1[-0xc6], 0, 0, 
                        eax_33 - 0x14, var_1c_1, 0f)
                    int32_t var_4_3 = *(arg1[-0x26] + 0x84)
                    int32_t eax_39 = arg1[-5]
                    
                    if (add_overflow(eax_39, 8))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(eax_39 + 8, arg1[-0x13]))
                        sub_403010()
                        noreturn
                    
                    arg1[-0x29] = eax_39 + 8 + arg1[-0x13]
                    unimplemented  {fild st0, dword [ebp-0xa4]}
                    float var_8_2 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t eax_42 = arg1[-6]
                    
                    if (add_overflow(eax_42, arg1[-0x14]))
                        sub_403010()
                        noreturn
                    
                    arg1[-0x5a] = eax_42 + arg1[-0x14]
                    unimplemented  {fild st0, dword [ebp-0x168]}
                    float var_c_2 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t var_10_2 = *(arg1[-0x26] + 0x68)
                    int32_t var_14_2 = 2
                    float var_1c_2 = *(arg1[-0x26] + 0x110)
                    int32_t eax_47 = sx.d(*(arg1[-0x24] + 2))
                    int32_t edx_13 = sx.d(*(arg1[-0x26] + 2))
                    int32_t eax_48 = eax_47 + edx_13
                    
                    if (add_overflow(eax_47, edx_13))
                        sub_403010()
                        noreturn
                    
                    void* edx_14 = arg1[-0x26]
                    int32_t eax_49 = eax_48 + *(edx_14 + 0x5c)
                    
                    if (add_overflow(eax_48, *(edx_14 + 0x5c)))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(eax_49, 0xffffffec))
                        sub_403010()
                        noreturn
                    
                    sub_403fb0(ecx_4, arg1[-9])
                    sub_48c290(entry_ebx, arg1[-0xc9], arg1[-0xb], &arg1[-0xc8], 0, 0, eax_49 - 0x14, 
                        var_1c_2, 0f)
            
            arg1[-0x1c] = 0
            
            while (arg1[-0x10] != 0)
                int32_t eax_181 = arg1[-0x1c]
                int32_t eax_182 = eax_181 + arg1[-0x11]
                
                if (add_overflow(eax_181, arg1[-0x11]))
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_182, 1))
                    sub_403010()
                    noreturn
                
                if (eax_182 + 1 s> sx.d(*(arg1[-0x26] + 0x76)))
                    break
                
                int32_t temp30_1 = arg1[-0x1c]
                arg1[-0x1c] += 1
                
                if (add_overflow(temp30_1, 1))
                    sub_403010()
                    noreturn
                
                int32_t var_4_9 = *(arg1[-0x26] + 0x84)
                int32_t eax_137 = arg1[-5]
                
                if (add_overflow(eax_137, 8))
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_137 + 8, arg1[-0x13]))
                    sub_403010()
                    noreturn
                
                arg1[-0x29] = eax_137 + 8 + arg1[-0x13]
                unimplemented  {fild st0, dword [ebp-0xa4]}
                float var_8_8 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                int32_t eax_140 = arg1[-0x11]
                
                if (add_overflow(eax_140, 0xffffffff))
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_140 - 1, arg1[-0x1c]))
                    sub_403010()
                    noreturn
                
                int32_t eax_143 = (eax_140 - 1 + arg1[-0x1c]) * 0x18
                bool o_53 = unimplemented  {imul eax, eax, 0x18}
                
                if (o_53)
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_143, 5))
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_143 + 5, arg1[-6]))
                    sub_403010()
                    noreturn
                
                arg1[-0x5a] = eax_143 + 5 + arg1[-6]
                unimplemented  {fild st0, dword [ebp-0x168]}
                float var_c_8 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                int32_t var_10_8 = *(arg1[-0x26] + 0x68)
                int32_t var_14_7 = 5
                int32_t eax_149 = sx.d(*(arg1[-0x24] + 2))
                int32_t edx_44 = sx.d(*(arg1[-0x26] + 2))
                int32_t eax_150 = eax_149 + edx_44
                
                if (add_overflow(eax_149, edx_44))
                    sub_403010()
                    noreturn
                
                void* edx_45 = arg1[-0x26]
                int32_t eax_151 = eax_150 + *(edx_45 + 0x5c)
                
                if (add_overflow(eax_150, *(edx_45 + 0x5c)))
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_151, 0xffffffec))
                    sub_403010()
                    noreturn
                
                sub_48c290(entry_ebx, arg1[-0x10], arg1[-0xb], &arg1[-0xd5], 0, (arg1[-0x1c]).b, 
                    eax_151 - 0x14, *(arg1[-0x26] + 0x110), 0f)
                int32_t var_4_10 = *(arg1[-0x26] + 0x84)
                int32_t eax_157 = arg1[-5]
                
                if (add_overflow(eax_157, 8))
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_157 + 8, arg1[-0x13]))
                    sub_403010()
                    noreturn
                
                arg1[-0x29] = eax_157 + 8 + arg1[-0x13]
                unimplemented  {fild st0, dword [ebp-0xa4]}
                float var_8_9 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                int32_t eax_160 = arg1[-0x11]
                
                if (add_overflow(eax_160, 0xffffffff))
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_160 - 1, arg1[-0x1c]))
                    sub_403010()
                    noreturn
                
                int32_t eax_163 = (eax_160 - 1 + arg1[-0x1c]) * 0x18
                bool o_63 = unimplemented  {imul eax, eax, 0x18}
                
                if (o_63)
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_163, 5))
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_163 + 5, arg1[-6]))
                    sub_403010()
                    noreturn
                
                arg1[-0x5a] = eax_163 + 5 + arg1[-6]
                unimplemented  {fild st0, dword [ebp-0x168]}
                float var_c_9 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                int32_t var_10_9 = *(arg1[-0x26] + 0x68)
                int32_t var_14_8 = 2
                int32_t eax_169 = sx.d(*(arg1[-0x24] + 2))
                int32_t edx_48 = sx.d(*(arg1[-0x26] + 2))
                int32_t eax_170 = eax_169 + edx_48
                
                if (add_overflow(eax_169, edx_48))
                    sub_403010()
                    noreturn
                
                void* edx_49 = arg1[-0x26]
                int32_t eax_171 = eax_170 + *(edx_49 + 0x5c)
                
                if (add_overflow(eax_170, *(edx_49 + 0x5c)))
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_171, 0xffffffec))
                    sub_403010()
                    noreturn
                
                sub_48c290(entry_ebx, arg1[-0x10], arg1[-0xb], &arg1[-0xd6], 0, (arg1[-0x1c]).b, 
                    eax_171 - 0x14, *(arg1[-0x26] + 0x110), 0f)
                sub_403e90(&arg1[-0x10], arg1[-0xd6])
                sub_404280(1, 1, arg1[-0x10], &arg1[-0xd7])
                sub_404188(arg1[-0xd7], 0x48acb8)
                
                if (eax_171 == 0x14)
                    sub_4042c0(&arg1[-0x10], 1, 1)
            
            if (arg1[-0x1c] s> 0)
                int32_t eax_185 = sx.d(*(arg1[-0x26] + 0x7e))
                
                if (add_overflow(eax_185, arg1[-8]))
                    sub_403010()
                    noreturn
                
                arg1[-0x19] = eax_185 + arg1[-8]
                arg1[-0x1c]
                int32_t eax_189 = sx.d(*(arg1[-0x26] + 0x7e)) * arg1[-0x1c]
                bool o_72 = unimplemented  {imul dword [ebp-0x70]}
                
                if (o_72)
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_189, arg1[-8]))
                    sub_403010()
                    noreturn
                
                arg1[-0x1a] = eax_189 + arg1[-8]
                arg1[-0x1b] = mods.dp.d(sx.q(arg1[-8]), sx.d(*(arg1[-0x26] + 0x7e)))
            
            long double st0
            
            while (true)
                arg1[-7] += 1
                int32_t temp15_1 = arg1[-0x27]
                arg1[-0x27] -= 1
                
                if (temp15_1 == 1)
                    while (true)
                        if (*arg1[-0x26] == 7)
                            int32_t eax_439 = sx.d(*(arg1[-0x26] + 0x88)) - 1
                            
                            if (eax_439 u> 0x75)
                                sub_403008()
                                noreturn
                            
                            bool o_137 = unimplemented  {imul eax, eax, 0x23}
                            
                            if (o_137)
                                sub_403010()
                                noreturn
                            
                            if (*(arg1[-0x24] + (eax_439 + 1) * 0x118 - 0xf2) != 0)
                                int32_t eax_444 = sx.d(*(arg1[-0x26] + 0x88)) - 1
                                
                                if (eax_444 u> 0x75)
                                    sub_403008()
                                    noreturn
                                
                                bool o_138 = unimplemented  {imul eax, eax, 0x23}
                                
                                if (o_138)
                                    sub_403010()
                                    noreturn
                                
                                int32_t eax_446
                                eax_446.w = *(arg1[-0x24] + (eax_444 + 1) * 0x118 - 0x82)
                                int32_t edx_139 = sx.d(*(arg1[-0x26] + 0x88)) - 1
                                
                                if (edx_139 u> 0x75)
                                    sub_403008()
                                    noreturn
                                
                                bool o_139 = unimplemented  {imul edx, edx, 0x23}
                                
                                if (o_139)
                                    sub_403010()
                                    noreturn
                                
                                eax_446.b = eax_446.w s< *(arg1[-0x24] + (edx_139 + 1) * 0x118 - 0xc)
                                *(arg1[-0x26] + 6) = eax_446.b
                            
                            int32_t eax_449 = sx.d(*(arg1[-0x26] + 0x88)) - 1
                            
                            if (eax_449 u> 0x75)
                                sub_403008()
                                noreturn
                            
                            bool o_140 = unimplemented  {imul eax, eax, 0x23}
                            
                            if (o_140)
                                sub_403010()
                                noreturn
                            
                            if (*(arg1[-0x24] + (eax_449 + 1) * 0x118 - 0xf8) == 0x11)
                                int32_t eax_454 = sx.d(*(arg1[-0x26] + 0x88)) - 1
                                
                                if (eax_454 u> 0x75)
                                    sub_403008()
                                    noreturn
                                
                                bool o_141 = unimplemented  {imul eax, eax, 0x23}
                                
                                if (o_141)
                                    sub_403010()
                                    noreturn
                                
                                if (*(arg1[-0x24] + (eax_454 + 1) * 0x118 - 0xf2) != 0)
                                    *(arg1[-0x26] + 6) = 1
                            
                            int32_t eax_460 = sx.d(*(arg1[-0x26] + 0x88)) - 1
                            
                            if (eax_460 u> 0x75)
                                sub_403008()
                                noreturn
                            
                            bool o_142 = unimplemented  {imul eax, eax, 0x23}
                            
                            if (o_142)
                                sub_403010()
                                noreturn
                            
                            int32_t eax_462
                            eax_462.w = *(arg1[-0x24] + (eax_460 + 1) * 0x118 - 0x82)
                            int32_t edx_148 = sx.d(*(arg1[-0x26] + 0x88)) - 1
                            
                            if (edx_148 u> 0x75)
                                sub_403008()
                                noreturn
                            
                            bool o_143 = unimplemented  {imul edx, edx, 0x23}
                            
                            if (o_143)
                                sub_403010()
                                noreturn
                            
                            if (eax_462.w s< *(arg1[-0x24] + (edx_148 + 1) * 0x118 - 0xc))
                                int32_t eax_465 = sx.d(*(arg1[-0x26] + 0x88)) - 1
                                
                                if (eax_465 u> 0x75)
                                    sub_403008()
                                    noreturn
                                
                                bool o_144 = unimplemented  {imul eax, eax, 0x23}
                                
                                if (o_144)
                                    sub_403010()
                                    noreturn
                                
                                int32_t edi_1
                                
                                if (*(arg1[-0x24] + (eax_465 + 1) * 0x118 - 0xf8) != 0x11)
                                label_489eb6:
                                    int32_t eax_476 = sx.d(*(arg1[-0x26] + 0x88)) - 1
                                    
                                    if (eax_476 u> 0x75)
                                        sub_403008()
                                        noreturn
                                    
                                    bool o_146 = unimplemented  {imul eax, eax, 0x23}
                                    
                                    if (o_146)
                                        sub_403010()
                                        noreturn
                                    
                                    if (*(arg1[-0x24] + (eax_476 + 1) * 0x118 - 0xf8) != 0x11)
                                        if (*(arg1[-0x26] + 0x70) == 0)
                                            edi_1 = *(entry_ebx + 0x8d8)
                                        else
                                            edi_1 = *(entry_ebx + 0x8dc)
                                    else if (*(arg1[-0x26] + 0x70) == 0)
                                        edi_1 = *(entry_ebx + 0x8e0)
                                    else
                                        edi_1 = *(entry_ebx + 0x8e4)
                                else
                                    int32_t eax_470 = sx.d(*(arg1[-0x26] + 0x88)) - 1
                                    
                                    if (eax_470 u> 0x75)
                                        sub_403008()
                                        noreturn
                                    
                                    bool o_145 = unimplemented  {imul eax, eax, 0x23}
                                    
                                    if (o_145)
                                        sub_403010()
                                        noreturn
                                    
                                    if (*(arg1[-0x24] + (eax_470 + 1) * 0x118 - 0xa) s>= 0)
                                        goto label_489eb6
                                    
                                    if (*(arg1[-0x26] + 0x70) == 0)
                                        edi_1 = *(entry_ebx + 0x918)
                                    else
                                        edi_1 = *(entry_ebx + 0x914)
                                
                                int32_t ecx_48 = arg1[-5]
                                
                                if (add_overflow(ecx_48, 2))
                                    sub_403010()
                                    noreturn
                                
                                sub_48156c(ecx_48 + 2, edi_1, entry_ebx, 0x3f800000, 
                                    *(arg1[-0x26] + 0x110), 1, *(arg1[-0x26] + 0x68), 0f, 0, 
                                    arg1[-0xb], *(arg1[-0x26] + 0x60), *(arg1[-0x26] + 0x5c), arg1[-6])
                                void* eax_490
                                eax_490.w = *(arg1[-0x26] + 0x56)
                                
                                if (eax_490.w - 1 u< 2)
                                    int32_t eax_492 = arg1[-6]
                                    int32_t eax_494 = *(arg1[-0x26] + 0x5c)
                                    int32_t eax_496 = *(arg1[-0x26] + 0x60)
                                    int32_t eax_497 = arg1[-0xb]
                                    float var_1c_18 = *(arg1[-0x26] + 0x68)
                                    unimplemented  {fld st0, dword [ebx+0xa6c]}
                                    unimplemented  {fdiv st0, dword [0x48abe4]}
                                    unimplemented  {fld st0, tword [0x48abac]}
                                    unimplemented  {fmulp st1, st0}
                                    unimplemented  {fmulp st1, st0}
                                    unimplemented  {fmul st0, dword [0x48abbc]}
                                    st0 = sub_402b3c(st0)
                                    unimplemented  {call 0x402b3c}
                                    unimplemented  {fld st0, tword [0x48abe8]}
                                    unimplemented  {fmulp st1, st0}
                                    unimplemented  {fmulp st1, st0}
                                    unimplemented  {fld st0, tword [0x48abf4]}
                                    unimplemented  {faddp st1, st0}
                                    unimplemented  {faddp st1, st0}
                                    unimplemented  {fmul st0, dword [eax+0x110]}
                                    float var_24_6 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                    unimplemented  {fstp dword [esp], st0}
                                    int32_t ecx_50 = arg1[-5]
                                    
                                    if (add_overflow(ecx_50, 2))
                                        sub_403010()
                                        noreturn
                                    
                                    sub_48156c(ecx_50 + 2, 0xfffffffe, entry_ebx, 0x3f800000, var_24_6, 
                                        1, var_1c_18, 0f, 0, eax_497, eax_496, eax_494, eax_492)
                        else if (*arg1[-0x26] == 9)
                            int32_t eax_503 = sx.d(*(arg1[-0x26] + 0x88)) - 1
                            
                            if (eax_503 u> 0x75)
                                sub_403008()
                                noreturn
                            
                            bool o_149 = unimplemented  {imul eax, eax, 0x23}
                            
                            if (o_149)
                                sub_403010()
                                noreturn
                            
                            if (*(arg1[-0x24] + (eax_503 + 1) * 0x118 - 0xf8) == 0x11)
                                *(arg1[-0x26] + 6) = 1
                            
                            unimplemented  {fild st0, dword [eax+0x5c]}
                            
                            if (sx.d(*(arg1[-0x26] + 0x88)) - 1 u> 0x75)
                                sub_403008()
                                noreturn
                            
                            bool o_150 = unimplemented  {imul eax, eax, 0x23}
                            
                            if (o_150)
                                sub_403010()
                                noreturn
                            
                            unimplemented  {fild st0, word [edx+eax*8-0x14]}
                            unimplemented  {fdivp st1, st0}
                            unimplemented  {fdivp st1, st0}
                            int32_t eax_511
                            int32_t edx_156
                            eax_511, edx_156 = sub_402b4c(st0)
                            
                            if (eax_511 s>> 0x1f != edx_156)
                                sub_403008()
                                noreturn
                            
                            *(arg1[-0x26] + 0x64) = eax_511
                            int32_t eax_518 = *(arg1[-0x26] + 0x60)
                            
                            if (add_overflow(eax_518, 0xfffffffe))
                                sub_403010()
                                noreturn
                            
                            int32_t ecx_52 = arg1[-5]
                            
                            if (add_overflow(ecx_52, 2))
                                sub_403010()
                                noreturn
                            
                            int32_t eax_523 = sx.d(*(arg1[-0x26] + 0x74))
                            
                            if (add_overflow(ecx_52 + 2, eax_523))
                                sub_403010()
                                noreturn
                            
                            sub_482828(ecx_52 + 2 + eax_523, *(entry_ebx + 0x8f0), entry_ebx, 
                                *(arg1[-0x26] + 0x110), 0, arg1[-0xb], eax_518 - 2, 
                                *(arg1[-0x26] + 0x64), arg1[-6])
                            void* eax_525
                            eax_525.w = *(arg1[-0x26] + 0x56)
                            
                            if (eax_525.w - 1 u< 2)
                                int32_t eax_527 = arg1[-6]
                                int32_t eax_529 = *(arg1[-0x26] + 0x64)
                                int32_t eax_531 = *(arg1[-0x26] + 0x60)
                                
                                if (add_overflow(eax_531, 0xfffffffe))
                                    sub_403010()
                                    noreturn
                                
                                int32_t eax_533 = arg1[-0xb]
                                unimplemented  {fld st0, dword [eax+0x68]}
                                unimplemented  {fmul st0, dword [0x48acc0]}
                                float var_1c_19 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                unimplemented  {fstp dword [esp], st0}
                                unimplemented  {fld st0, dword [ebx+0xa6c]}
                                unimplemented  {fdiv st0, dword [0x48abe4]}
                                unimplemented  {fld st0, tword [0x48abac]}
                                unimplemented  {fmulp st1, st0}
                                unimplemented  {fmulp st1, st0}
                                unimplemented  {fmul st0, dword [0x48abbc]}
                                st0 = sub_402b3c(st0)
                                unimplemented  {call 0x402b3c}
                                unimplemented  {fld st0, tword [0x48abe8]}
                                unimplemented  {fmulp st1, st0}
                                unimplemented  {fmulp st1, st0}
                                unimplemented  {fld st0, tword [0x48abf4]}
                                unimplemented  {faddp st1, st0}
                                unimplemented  {faddp st1, st0}
                                unimplemented  {fmul st0, dword [eax+0x110]}
                                float var_24_7 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                unimplemented  {fstp dword [esp], st0}
                                int32_t ecx_55 = arg1[-5]
                                
                                if (add_overflow(ecx_55, 2))
                                    sub_403010()
                                    noreturn
                                
                                int32_t eax_535 = sx.d(*(arg1[-0x26] + 0x74))
                                
                                if (add_overflow(ecx_55 + 2, eax_535))
                                    sub_403010()
                                    noreturn
                                
                                sub_48156c(ecx_55 + 2 + eax_535, 0xfffffffe, entry_ebx, 0x3f800000, 
                                    var_24_7, 1, var_1c_19, 0f, 0, eax_533, eax_531 - 2, eax_529, 
                                    eax_527)
                        else if (*arg1[-0x26] == 8)
                            int32_t eax_540 = sx.d(*(arg1[-0x26] + 0x88)) - 1
                            
                            if (eax_540 u> 0x75)
                                sub_403008()
                                noreturn
                            
                            bool o_157 = unimplemented  {imul eax, eax, 0x23}
                            
                            if (o_157)
                                sub_403010()
                                noreturn
                            
                            if (*(arg1[-0x24] + (eax_540 + 1) * 0x118 - 0xf2) != 0)
                                int32_t eax_545 = sx.d(*(arg1[-0x26] + 0x88)) - 1
                                
                                if (eax_545 u> 0x75)
                                    sub_403008()
                                    noreturn
                                
                                bool o_158 = unimplemented  {imul eax, eax, 0x23}
                                
                                if (o_158)
                                    sub_403010()
                                    noreturn
                                
                                int32_t eax_547
                                eax_547.w = *(arg1[-0x24] + (eax_545 + 1) * 0x118 - 0x82)
                                int32_t edx_163 = sx.d(*(arg1[-0x26] + 0x88)) - 1
                                
                                if (edx_163 u> 0x75)
                                    sub_403008()
                                    noreturn
                                
                                bool o_159 = unimplemented  {imul edx, edx, 0x23}
                                
                                if (o_159)
                                    sub_403010()
                                    noreturn
                                
                                eax_547.b = eax_547.w s< *(arg1[-0x24] + (edx_163 + 1) * 0x118 - 0xc)
                                *(arg1[-0x26] + 6) = eax_547.b
                            
                            int32_t eax_550 = sx.d(*(arg1[-0x26] + 0x88)) - 1
                            
                            if (eax_550 u> 0x75)
                                sub_403008()
                                noreturn
                            
                            bool o_160 = unimplemented  {imul eax, eax, 0x23}
                            
                            if (o_160)
                                sub_403010()
                                noreturn
                            
                            if (*(arg1[-0x24] + (eax_550 + 1) * 0x118 - 0xf8) == 0x11)
                                *(arg1[-0x26] + 6) = 1
                            
                            int32_t eax_556 = sx.d(*(arg1[-0x26] + 0x88)) - 1
                            
                            if (eax_556 u> 0x75)
                                sub_403008()
                                noreturn
                            
                            bool o_161 = unimplemented  {imul eax, eax, 0x23}
                            
                            if (o_161)
                                sub_403010()
                                noreturn
                            
                            int32_t eax_558
                            eax_558.w = *(arg1[-0x24] + (eax_556 + 1) * 0x118 - 0x82)
                            int32_t edx_171 = sx.d(*(arg1[-0x26] + 0x88)) - 1
                            
                            if (edx_171 u> 0x75)
                                sub_403008()
                                noreturn
                            
                            bool o_162 = unimplemented  {imul edx, edx, 0x23}
                            
                            if (o_162)
                                sub_403010()
                                noreturn
                            
                            if (eax_558.w s< *(arg1[-0x24] + (edx_171 + 1) * 0x118 - 0xc))
                                int32_t eax_561 = sx.d(*(arg1[-0x26] + 0x88)) - 1
                                
                                if (eax_561 u> 0x75)
                                    sub_403008()
                                    noreturn
                                
                                bool o_163 = unimplemented  {imul eax, eax, 0x23}
                                
                                if (o_163)
                                    sub_403010()
                                    noreturn
                                
                                if (*(arg1[-0x24] + (eax_561 + 1) * 0x118 - 0xc) s> 0
                                        && *(arg1[-0x26] + 7) != 0)
                                    int32_t eax_567 = sx.d(*(arg1[-0x26] + 0x88)) - 1
                                    
                                    if (eax_567 u> 0x75)
                                        sub_403008()
                                        noreturn
                                    
                                    bool o_164 = unimplemented  {imul eax, eax, 0x23}
                                    
                                    if (o_164)
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t eax_570 = *(arg1[-0x24] + (eax_567 + 1) * 0x118 - 0x98)
                                    
                                    if (add_overflow(eax_570, 0xffffffc6))
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t edx_178 = sx.d(*(arg1[-0x26] + 0x88)) - 1
                                    
                                    if (edx_178 u> 0x75)
                                        sub_403008()
                                        noreturn
                                    
                                    bool o_166 = unimplemented  {imul edx, edx, 0x23}
                                    
                                    if (o_166)
                                        sub_403010()
                                        noreturn
                                    
                                    bool o_167 = unimplemented  {imul edx}
                                    
                                    if (o_167)
                                        sub_403010()
                                        noreturn
                                    
                                    arg1[-0x29] = (eax_570 - 0x3a)
                                        * sx.d(*(arg1[-0x24] + (edx_178 + 1) * 0x118 - 0x82))
                                    unimplemented  {fild st0, dword [ebp-0xa4]}
                                    
                                    if (sx.d(*(arg1[-0x26] + 0x88)) - 1 u> 0x75)
                                        sub_403008()
                                        noreturn
                                    
                                    bool o_168 = unimplemented  {imul eax, eax, 0x23}
                                    
                                    if (o_168)
                                        sub_403010()
                                        noreturn
                                    
                                    unimplemented  {fild st0, word [edx+eax*8-0xc]}
                                    unimplemented  {fdivp st1, st0}
                                    unimplemented  {fdivp st1, st0}
                                    int32_t eax_577
                                    int32_t edx_182
                                    eax_577, edx_182 = sub_402b4c(st0)
                                    
                                    if (eax_577 s>> 0x1f != edx_182)
                                        sub_403008()
                                        noreturn
                                    
                                    *(arg1[-0x26] + 0x64) = eax_577
                                
                                int32_t eax_581 = sx.d(*(arg1[-0x26] + 0x74))
                                
                                if (add_overflow(eax_581, arg1[-6]))
                                    sub_403010()
                                    noreturn
                                
                                int32_t ecx_61 = arg1[-5]
                                
                                if (add_overflow(ecx_61, 0))
                                    sub_403010()
                                    noreturn
                                
                                sub_482828(ecx_61, *(entry_ebx + 0x8f0), entry_ebx, 
                                    *(arg1[-0x26] + 0x110), 0, arg1[-0xb], *(arg1[-0x26] + 0x64), 
                                    *(arg1[-0x26] + 0x5c), eax_581 + arg1[-6])
                                void* eax_590
                                eax_590.w = *(arg1[-0x26] + 0x56)
                                
                                if (eax_590.w - 1 u< 2)
                                    int32_t eax_593 = sx.d(*(arg1[-0x26] + 0x74))
                                    int32_t eax_594 = eax_593 + arg1[-6]
                                    
                                    if (add_overflow(eax_593, arg1[-6]))
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t eax_596 = *(arg1[-0x26] + 0x5c)
                                    int32_t eax_598 = *(arg1[-0x26] + 0x64)
                                    int32_t eax_599 = arg1[-0xb]
                                    unimplemented  {fld st0, dword [eax+0x68]}
                                    unimplemented  {fmul st0, dword [0x48acc0]}
                                    float var_1c_20 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                    unimplemented  {fstp dword [esp], st0}
                                    unimplemented  {fld st0, dword [ebx+0xa6c]}
                                    unimplemented  {fdiv st0, dword [0x48abe4]}
                                    unimplemented  {fld st0, tword [0x48abac]}
                                    unimplemented  {fmulp st1, st0}
                                    unimplemented  {fmulp st1, st0}
                                    unimplemented  {fmul st0, dword [0x48abbc]}
                                    st0 = sub_402b3c(st0)
                                    unimplemented  {call 0x402b3c}
                                    unimplemented  {fld st0, tword [0x48abe8]}
                                    unimplemented  {fmulp st1, st0}
                                    unimplemented  {fmulp st1, st0}
                                    unimplemented  {fld st0, tword [0x48abf4]}
                                    unimplemented  {faddp st1, st0}
                                    unimplemented  {faddp st1, st0}
                                    unimplemented  {fmul st0, dword [eax+0x110]}
                                    float var_24_8 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                    unimplemented  {fstp dword [esp], st0}
                                    int32_t ecx_63 = arg1[-5]
                                    
                                    if (add_overflow(ecx_63, 0))
                                        sub_403010()
                                        noreturn
                                    
                                    sub_48156c(ecx_63, 0xfffffffb, entry_ebx, 0x3f800000, var_24_8, 1, 
                                        var_1c_20, 0f, 0, eax_599, eax_598, eax_596, eax_594)
                        
                        if (*arg1[-0x26] == 0xc)
                            int32_t var_4_36 = arg1[-6]
                            sub_4822b4(arg1[-5], *(entry_ebx + 0x8b4), entry_ebx, 
                                *(arg1[-0x26] + 0x110), (*(arg1[-0x26] + 0x68)).b, 0, arg1[-0xb], 
                                *(arg1[-0x26] + 0x60), *(arg1[-0x26] + 0x5c))
                            void* eax_611
                            eax_611.w = *(arg1[-0x26] + 0x56)
                            
                            if (eax_611.w - 1 u< 2 || *(arg1[-0x26] + 0x71) != 0)
                                int32_t eax_614 = arg1[-6]
                                int32_t eax_616 = *(arg1[-0x26] + 0x5c)
                                int32_t eax_618 = *(arg1[-0x26] + 0x60)
                                int32_t eax_619 = arg1[-0xb]
                                float var_1c_22 = *(arg1[-0x26] + 0x68)
                                unimplemented  {fld st0, dword [ebx+0xa6c]}
                                unimplemented  {fdiv st0, dword [0x48abe4]}
                                unimplemented  {fld st0, tword [0x48abac]}
                                unimplemented  {fmulp st1, st0}
                                unimplemented  {fmulp st1, st0}
                                unimplemented  {fmul st0, dword [0x48abbc]}
                                st0 = sub_402b3c(st0)
                                unimplemented  {call 0x402b3c}
                                unimplemented  {fld st0, tword [0x48abe8]}
                                unimplemented  {fmulp st1, st0}
                                unimplemented  {fmulp st1, st0}
                                unimplemented  {fld st0, tword [0x48abf4]}
                                unimplemented  {faddp st1, st0}
                                unimplemented  {faddp st1, st0}
                                unimplemented  {fmul st0, dword [eax+0x110]}
                                float var_24_9 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                unimplemented  {fstp dword [esp], st0}
                                sub_48156c(arg1[-5], 0xfffffffe, entry_ebx, 0x3f800000, var_24_9, 1, 
                                    var_1c_22, 0f, 0, eax_619, eax_618, eax_616, eax_614)
                            
                            if (*(arg1[-0x26] + 0x74) s> 0)
                                int32_t temp97_1 = arg1[-5]
                                arg1[-5] += 4
                                
                                if (add_overflow(temp97_1, 4))
                                    sub_403010()
                                    noreturn
                            
                            void* eax_623
                            eax_623.w = *(arg1[-0x26] + 0x56)
                            
                            if ((eax_623.w - 1 u< 2 || *(arg1[-0x26] + 0x71) != 0)
                                    && *(entry_ebx + 0x990) != 0 && *(arg1[-0x26] + 0x71) != 0)
                                int32_t eax_627 = arg1[-6]
                                
                                if (add_overflow(eax_627, 6))
                                    sub_403010()
                                    noreturn
                                
                                int32_t eax_629 = arg1[-0xb]
                                float var_1c_23 = *(arg1[-0x26] + 0x68)
                                float var_24_10 = *(arg1[-0x26] + 0x110)
                                int32_t ecx_67 = sx.d(*(arg1[-0x26] + 0x72))
                                int32_t eax_635 = sx.d(*(arg1[-0x26] + 0x74))
                                
                                if (add_overflow(ecx_67, neg.d(eax_635)))
                                    sub_403010()
                                    noreturn
                                
                                int32_t edx_186 = sx.d(*(arg1[-0x26] + 0x74))
                                
                                if (add_overflow(edx_186, 1))
                                    sub_403010()
                                    noreturn
                                
                                sub_404280(ecx_67 - eax_635, edx_186 + 1, arg1[-0x1e], &arg1[-0xed])
                                arg1 = sub_46fd7c(entry_ebx, arg1[-0xed])
                                unimplemented  {fld st0, tword [0x48acf4]}
                                unimplemented  {fmulp st1, st0}
                                unimplemented  {fmulp st1, st0}
                                unimplemented  {fmul st0, dword [ebx+0xe4c]}
                                unimplemented  {fild st0, dword [ebp-0x14]}
                                unimplemented  {faddp st1, st0}
                                unimplemented  {faddp st1, st0}
                                int32_t eax_639
                                int32_t edx_189
                                eax_639, edx_189 = sub_402b4c(st0)
                                top += 1
                                bool o_177 = unimplemented  {adc edx, 0x0}
                                
                                if (o_177)
                                    sub_403010()
                                    noreturn
                                
                                if ((eax_639 + 3) s>> 0x1f != adc.d(edx_189, 0, eax_639 u>= 0xfffffffd))
                                    sub_403008()
                                    noreturn
                                
                                sub_48156c(eax_639 + 3, 0xfffffffc, entry_ebx, 0x3f800000, var_24_10, 
                                    1, var_1c_23, 0f, 0, eax_629, 0x12, 4, eax_627 + 6)
                            
                            *(arg1[-0x26] + 0x71)
                            sub_403e90(&arg1[-0x10], arg1[-0x1e])
                            
                            if (sub_404078(arg1[-0x10]) s> sx.d(*(arg1[-0x26] + 0x78)))
                                arg1[-7] = 0
                            
                            int32_t eax_649 = sub_404078(arg1[-0x10])
                            int32_t edx_195 = sx.d(*(arg1[-0x26] + 0x74))
                            
                            if (add_overflow(edx_195, 1))
                                sub_403010()
                                noreturn
                            
                            int32_t ecx_71 = sx.d(*(arg1[-0x26] + 0x7a))
                            
                            if (add_overflow(edx_195 + 1, ecx_71))
                                sub_403010()
                                noreturn
                            
                            if (eax_649 s>= edx_195 + 1 + ecx_71)
                                arg1[-7] = 1
                            
                            if (sub_404078(arg1[-0x10]) s< sx.d(*(arg1[-0x26] + 0x74)))
                                int32_t eax_654 = sub_404078(arg1[-0x10]) + 0x8000
                                
                                if (eax_654 u> 0xffff)
                                    sub_403008()
                                    noreturn
                                
                                *(arg1[-0x26] + 0x74) = eax_654.w - 0x8000
                            
                            int32_t edx_201 = sx.d(*(arg1[-0x26] + 0x74))
                            
                            if (add_overflow(edx_201, 1))
                                sub_403010()
                                noreturn
                            
                            sub_404280(sx.d(*(arg1[-0x26] + 0x7a)), edx_201 + 1, arg1[-0x10], 
                                &arg1[-0x10])
                            
                            while (true)
                                int32_t edi_4
                                arg1, edi_4 = sub_46fd7c(entry_ebx, arg1[-0x10])
                                unimplemented  {fmul st0, dword [0x48ac20]}
                                unimplemented  {fadd dword [0x48ad00]}
                                arg1[-0x29] = edi_4
                                unimplemented  {fild st0, dword [ebp-0xa4]}
                                unimplemented  {faddp st1, st0}
                                unimplemented  {faddp st1, st0}
                                unimplemented  {fadd dword [0x48ad04]}
                                unimplemented  {fild st0, dword [eax+0x5c]}
                                unimplemented  {fcompp } f- unimplemented  {fcompp }
                                bool c0_8 = unimplemented  {fcompp } f< unimplemented  {fcompp }
                                bool c2_8 =
                                    is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp })
                                bool c3_8 = unimplemented  {fcompp } f== unimplemented  {fcompp }
                                unimplemented  {fcompp }
                                unimplemented  {fcompp }
                                top += 1
                                
                                if (not(test_bit(
                                        ((c0_8 ? 1 : 0) << 8 | (c2_8 ? 1 : 0) << 0xa
                                            | (c3_8 ? 1 : 0) << 0xe | (top & 7) << 0xb):1.b, 
                                        0)))
                                    break
                                
                                sub_4042c0(&arg1[-0x10], sub_404078(arg1[-0x10]), 1)
                                arg1[-7] = 1
                            
                            int32_t var_4_40 = *(arg1[-0x26] + 0x84)
                            unimplemented  {fild st0, dword [ebp-0x14]}
                            float var_8_30 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            int32_t eax_666 = arg1[-6]
                            
                            if (add_overflow(eax_666, 6))
                                sub_403010()
                                noreturn
                            
                            arg1[-0x29] = eax_666 + 6
                            unimplemented  {fild st0, dword [ebp-0xa4]}
                            float var_c_28 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            int32_t var_10_29 = *(arg1[-0x26] + 0x68)
                            int32_t var_14_15 = 2
                            sub_48c290(entry_ebx, arg1[-0x10], arg1[-0xb], &arg1[-0xee], 0, 0, 0f, 
                                *(arg1[-0x26] + 0x110), 0f)
                            
                            if (arg1[-7] == 1)
                                unimplemented  {fld st0, tword [0x48ad08]}
                                unimplemented  {fmul st0, dword [eax+0x84]}
                                float var_4_41 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                unimplemented  {fstp dword [esp], st0}
                                arg1 = sub_46fd7c(entry_ebx, arg1[-0x10])
                                unimplemented  {fmul st0, dword [0x48ac20]}
                                unimplemented  {fild st0, dword [ebp-0x14]}
                                unimplemented  {faddp st1, st0}
                                unimplemented  {faddp st1, st0}
                                unimplemented  {fadd dword [0x48ac78]}
                                float var_8_31 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                unimplemented  {fstp dword [esp], st0}
                                unimplemented  {fld st0, dword [eax+0x84]}
                                unimplemented  {fmul st0, dword [0x48ad14]}
                                int32_t eax_673
                                int32_t edx_207
                                eax_673, edx_207 = sub_402b4c(st0)
                                int32_t eax_674 = arg1[-6]
                                
                                if (add_overflow(eax_674, 6))
                                    sub_403010()
                                    noreturn
                                
                                int32_t eax_676
                                int32_t edx_208
                                edx_208:eax_676 = sx.q(eax_674 + 6)
                                bool o_183 = unimplemented  {adc edx, dword [esp+0x4]}
                                
                                if (o_183)
                                    sub_403010()
                                    noreturn
                                
                                arg1[-0x5e] = eax_676 + eax_673
                                arg1[-0x5d] = adc.d(edx_208, edx_207, eax_676 + eax_673 u< eax_676)
                                unimplemented  {fild st0, qword [ebp-0x178]}
                                float var_c_30 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                unimplemented  {fstp dword [esp], st0}
                                top += 1
                                int32_t var_10_31 = *(arg1[-0x26] + 0x68)
                                int32_t var_14_16 = 2
                                sub_48c290(entry_ebx, &data_48ad20, arg1[-0xb], &arg1[-0xef], 0, 0, 0f, 
                                    *(arg1[-0x26] + 0x110), 0f)
                            
                            if (*(arg1[-0x26] + 0x74) s> 0)
                                unimplemented  {fld st0, tword [0x48ad08]}
                                unimplemented  {fmul st0, dword [eax+0x84]}
                                float var_4_42 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                unimplemented  {fstp dword [esp], st0}
                                int32_t eax_683 = arg1[-5]
                                
                                if (add_overflow(eax_683, 0xfffffffc))
                                    sub_403010()
                                    noreturn
                                
                                arg1[-0x29] = eax_683 - 4
                                unimplemented  {fild st0, dword [ebp-0xa4]}
                                float var_8_32 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                unimplemented  {fstp dword [esp], st0}
                                unimplemented  {fld st0, dword [eax+0x84]}
                                unimplemented  {fmul st0, dword [0x48ad14]}
                                int32_t eax_685
                                int32_t edx_210
                                eax_685, edx_210 = sub_402b4c(st0)
                                int32_t eax_686 = arg1[-6]
                                
                                if (add_overflow(eax_686, 6))
                                    sub_403010()
                                    noreturn
                                
                                int32_t eax_688
                                int32_t edx_211
                                edx_211:eax_688 = sx.q(eax_686 + 6)
                                bool o_186 = unimplemented  {adc edx, dword [esp+0x4]}
                                
                                if (o_186)
                                    sub_403010()
                                    noreturn
                                
                                arg1[-0x5e] = eax_688 + eax_685
                                arg1[-0x5d] = adc.d(edx_211, edx_210, eax_688 + eax_685 u< eax_688)
                                unimplemented  {fild st0, qword [ebp-0x178]}
                                float var_c_32 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                unimplemented  {fstp dword [esp], st0}
                                int32_t var_10_33 = *(arg1[-0x26] + 0x68)
                                int32_t var_14_17 = 2
                                sub_48c290(entry_ebx, &data_48ad20, arg1[-0xb], &arg1[-0xf0], 0, 0, 0f, 
                                    *(arg1[-0x26] + 0x110), 0f)
                        
                        int32_t eax_905
                        int32_t ecx_91
                        int32_t edx_237
                        int32_t edx_238
                        int32_t edi_10
                        bool c_18
                        
                        while (true)
                            arg1[-3] += 1
                            int32_t temp70_1 = arg1[-0x25]
                            arg1[-0x25] -= 1
                            
                            if (temp70_1 == 1)
                                int32_t eax_885
                                
                                while (true)
                                    *(entry_ebx + 0x9cc) = 0
                                    
                                    while (true)
                                        arg2 += 1
                                        int32_t temp89_1 = arg1[-0x23]
                                        arg1[-0x23] -= 1
                                        
                                        if (temp89_1 == 1)
                                            int32_t i
                                            
                                            do
                                                arg1[-2] += 1
                                                
                                                if (arg1[-2] == 4)
                                                    if (*(entry_ebx + 0x89c) != 0)
                                                        int32_t var_4_43 = 0x32d
                                                        sub_48b3d8(0xffffffff, 0xfffffffe, entry_ebx, 
                                                            1f, 1, 0, 1, 0x261)
                                                    
                                                    (*data_53051c)(0x203)
                                                    TEB* fsbase
                                                    fsbase->NtTib.ExceptionList = 0x203
                                                    sub_403e1c(&arg1[-0xf0], 0x43)
                                                    sub_403e1c(&arg1[-0x6d], 0xf)
                                                    sub_403e1c(&arg1[-0x5c], 2)
                                                    sub_403e1c(&arg1[-0x59], 7)
                                                    sub_403e1c(&arg1[-0x1f], 3)
                                                    sub_403df8(&arg1[-0x18])
                                                    sub_403df8(&arg1[-0x10])
                                                    *arg1
                                                    return &arg1[-0x10]
                                                
                                                i = *(entry_ebx + 0xab4)
                                            while (i s<= 0)
                                            
                                            arg1[-0x23] = i
                                            arg2 = 1
                                        
                                        if (arg1[-2] != 3 || arg2 != *(entry_ebx + 0x10d8))
                                            if (arg2 == *(entry_ebx + 0x10d8) || arg1[-2] != 2)
                                            label_484f2f:
                                                
                                                if (arg1[-2] != 1)
                                                    continue
                                                else
                                                    bool o_188 = unimplemented  {imul eax, esi, 0x1038}
                                                    
                                                    if (o_188)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    if (*(*(entry_ebx + 0xab0) + arg2 * 0x81c0 + 0x8139)
                                                            != 0)
                                                        continue
                                            else
                                                bool o_187 = unimplemented  {imul eax, esi, 0x1038}
                                                
                                                if (o_187)
                                                    sub_403010()
                                                    noreturn
                                                
                                                if (*(*(entry_ebx + 0xab0) + arg2 * 0x81c0 + 0x8139)
                                                        == 0)
                                                    goto label_484f2f
                                        
                                        bool o_189 = unimplemented  {imul eax, esi, 0x1038}
                                        
                                        if (o_189)
                                            sub_403010()
                                            noreturn
                                        
                                        char* eax_708 = *(entry_ebx + 0xab0) + arg2 * 0x81c0 + 0x813c
                                        int32_t ecx_77
                                        ecx_77.b = *eax_708
                                        int32_t ecx_79 = sub_402c90(eax_708, 0x48ab78, ecx_77 + 1)
                                        
                                        if (ecx_77 == 0xffffffff)
                                            bool o_190 = unimplemented  {imul eax, esi, 0x1038}
                                            
                                            if (o_190)
                                                sub_403010()
                                                noreturn
                                            
                                            char eax_711
                                            eax_711, ecx_79 = sub_484dfc(ecx_79, 
                                                *(entry_ebx + 0xab0) + arg2 * 0x81c0 + 0x81a8)
                                            
                                            if (eax_711 == 0)
                                                continue
                                        
                                        if (arg2 != *(entry_ebx + 0x8a0))
                                            bool o_191 = unimplemented  {imul eax, esi, 0x1038}
                                            
                                            if (o_191)
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t eax_712
                                            eax_712.b = *(*(entry_ebx + 0xab0) + arg2 * 0x81c0 + 0x8139)
                                            
                                            if (eax_712.b != 0)
                                                bool o_192 = unimplemented  {imul eax, esi, 0x1038}
                                                
                                                if (o_192)
                                                    sub_403010()
                                                    noreturn
                                                
                                                char eax_715
                                                eax_715, ecx_79 = sub_484dfc(ecx_79, 
                                                    *(entry_ebx + 0xab0) + arg2 * 0x81c0 + 0x81a8)
                                                
                                                if (eax_715 == 0)
                                                    continue
                                        
                                        bool o_193 = unimplemented  {imul eax, esi, 0x1038}
                                        
                                        if (o_193)
                                            sub_403010()
                                            noreturn
                                        
                                        if (*(*(entry_ebx + 0xab0) + arg2 * 0x81c0) != 0)
                                            bool o_194 = unimplemented  {imul eax, esi, 0x1038}
                                            
                                            if (o_194)
                                                sub_403010()
                                                noreturn
                                            
                                            if (*(*(entry_ebx + 0xab0) + arg2 * 0x81c0 + 1) != 0)
                                                break
                                        
                                        bool o_195 = unimplemented  {imul eax, esi, 0x1038}
                                        
                                        if (o_195)
                                            sub_403010()
                                            noreturn
                                        
                                        if (sub_484dfc(ecx_79, 
                                                *(entry_ebx + 0xab0) + arg2 * 0x81c0 + 0x81a8) != 0)
                                            break
                                    
                                    bool o_196 = unimplemented  {imul eax, esi, 0x1038}
                                    
                                    if (o_196)
                                        sub_403010()
                                        noreturn
                                    
                                    arg1[-0x24] = *(entry_ebx + 0xab0) + arg2 * 0x81c0
                                    char* eax_724 = arg1[-0x24] + 0x813c
                                    int32_t ecx_80
                                    ecx_80.b = *eax_724
                                    sub_402c90(eax_724, 0x48ab7c, ecx_80 + 1)
                                    
                                    if (ecx_80 == 0xffffffff)
                                        *(entry_ebx + 0x9cc) = 1
                                    
                                    bool o_197 = unimplemented  {imul eax, esi, 0x1038}
                                    
                                    if (o_197)
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t eax_725
                                    eax_725.b = *(*(entry_ebx + 0xab0) + arg2 * 0x81c0 + 0x8139)
                                    char temp178_1 = eax_725.b
                                    eax_725.b -= 1
                                    eax_725.b = temp178_1 u< 1
                                    eax_725.b ^= 1
                                    *(entry_ebx + 0x97c) = eax_725.b
                                    eax_725.b = *(arg1 - 1)
                                    eax_725.b ^= 1
                                    
                                    if (eax_725.b != 0)
                                        (*data_5304ac)(0x2300, 0x2200, 0x2100)
                                    
                                    (*data_530810)()
                                    unimplemented  {fld st0, dword [ebx+0x978]}
                                    long double temp188_1 = fconvert.t(18f)
                                    unimplemented  {fcomp st0, dword [0x48ab80]} f- temp188_1
                                    bool c0_9 =
                                        unimplemented  {fcomp st0, dword [0x48ab80]} f< temp188_1
                                    bool c2_9 = is_unordered.t(
                                        unimplemented  {fcomp st0, dword [0x48ab80]}, temp188_1)
                                    bool c3_9 =
                                        unimplemented  {fcomp st0, dword [0x48ab80]} f== temp188_1
                                    unimplemented  {fcomp st0, dword [0x48ab80]}
                                    int16_t eax_730 = (c0_9 ? 1 : 0) << 8 | (c2_9 ? 1 : 0) << 0xa
                                        | (c3_9 ? 1 : 0) << 0xe | (top & 7) << 0xb
                                    
                                    if (not(test_bit(eax_730:1.b, 6)) && not(test_bit(eax_730:1.b, 0)))
                                        *(entry_ebx + 0x978) = 0
                                    
                                    (*data_53006c)(0xde1)
                                    (*data_53006c)(0xb50)
                                    
                                    if (*(arg1 - 1) != 1)
                                        (*data_530034)(0xbe2)
                                    
                                    if ((data_5320b8 | *(arg1 - 1)) != 0)
                                        (*data_53006c)(0xbe2)
                                    
                                    if (*(arg1 - 1) != 1)
                                        (*data_530334)(0x302, 0x303)
                                    
                                    if (*(arg1 - 1) != 1)
                                        (*data_5306a4)(0xe560419, 0xbfe9b22d, 0xf5c28f5c, 0x3fe35c28, 
                                            0x66666666, 0xbffe6666)
                                        sub_47c0f0(entry_ebx)
                                        int32_t var_4_44 = 0
                                        int32_t var_8_33 = 0
                                        int32_t eax_746 = sx.d(*(arg1[-0x24] + 4))
                                        
                                        if (neg.d(eax_746) == 0x80000000)
                                            sub_403010()
                                            noreturn
                                        
                                        arg1[-0x29] = neg.d(eax_746)
                                        unimplemented  {fild st0, dword [ebp-0xa4]}
                                        unimplemented  {fdiv st0, dword [0x48ab84]}
                                        unimplemented  {fstp qword [esp], st0}
                                        unimplemented  {fild st0, word [eax+0x2]}
                                        unimplemented  {fdiv st0, dword [0x48ab84]}
                                        unimplemented  {fstp qword [esp], st0}
                                        (*data_5306a4)(0xe560419)
                                        
                                        if (arg2 == *(entry_ebx + 0x8a0)
                                                || *(arg1[-0x24] + 0x8139) == 0)
                                            __builtin_memcpy(arg1[-0x24] + 0xc, entry_ebx + 0x1088, 
                                                0x10)
                                        else
                                            __builtin_memcpy(arg1[-0x24] + 0xc, entry_ebx + 0x1078, 
                                                0x10)
                                        
                                        unimplemented  {fld st0, dword [eax+0x18]}
                                        unimplemented  {fmul st0, dword [eax+0x81b8]}
                                        float var_4_47 =
                                            fconvert.s(unimplemented  {fstp dword [esp], st0})
                                        unimplemented  {fstp dword [esp], st0}
                                        (*data_530518)(*(arg1[-0x24] + 0xc), *(arg1[-0x24] + 0x10), 
                                            *(arg1[-0x24] + 0x14), var_4_47)
                                        int32_t eax_760 = sx.d(*(arg1[-0x24] + 2))
                                        int32_t edx_228 = sx.d(*(arg1[-0x24] + 6))
                                        int32_t edx_229 = edx_228 s>> 1
                                        bool c_16 = unimplemented  {sar edx, 0x1}
                                        
                                        if (edx_228 s>> 1 s< 0)
                                            edx_229 = adc.d(edx_229, 0, c_16)
                                        
                                        if (add_overflow(eax_760, edx_229))
                                            sub_403010()
                                            noreturn
                                        
                                        sub_46ae30(eax_760 + edx_229 s< 0x17c, arg2, entry_ebx, 
                                            *(arg1[-0x24] + 0x81b8))
                                        
                                        if (*(arg1[-0x24] + 0x81a6) s> 0 && *(entry_ebx + 0x10c8) == 3)
                                            sub_46c3d0(sx.d(*(arg1[-0x24] + 2)), 0, entry_ebx, 
                                                *(arg1[-0x24] + 0x81b8), sx.d(*(arg1[-0x24] + 8)), 
                                                sx.d(*(arg1[-0x24] + 6)), sx.d(*(arg1[-0x24] + 4)))
                                        else if (*(arg1[-0x24] + 0x81a6) s<= 0
                                                || *(entry_ebx + 0x10c8) != 2)
                                            if (*(arg1[-0x24] + 0x81a2) != 0)
                                                __builtin_memcpy(arg1[-0x24] + 0xc, entry_ebx + 0x1088, 
                                                    0x10)
                                                (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 
                                                    *(arg1[-0x24] + 0x18))
                                                
                                                if (*(entry_ebx + 0xce9) == 0)
                                                    (*data_530034)(0xde1)
                                                
                                                int32_t eax_820 = sx.d(*(arg1[-0x24] + 0x81a2))
                                                
                                                if (eax_820 s< 0)
                                                    sub_403008()
                                                    noreturn
                                                
                                                (*data_53036c)(0xde1, eax_820)
                                                (*data_52ffd4)(7)
                                                (*data_5307f8)(0, 0)
                                                int32_t eax_828 = sx.d(*(arg1[-0x24] + 8))
                                                
                                                if (neg.d(eax_828) == 0x80000000)
                                                    sub_403010()
                                                    noreturn
                                                
                                                arg1[-0x29] = neg.d(eax_828)
                                                unimplemented  {fild st0, dword [ebp-0xa4]}
                                                unimplemented  {fdiv st0, dword [0x48ab88]}
                                                float var_8_40 =
                                                    fconvert.s(unimplemented  {fstp dword [esp], st0})
                                                unimplemented  {fstp dword [esp], st0}
                                                (*data_530368)(0, var_8_40, 0)
                                                (*data_5307f8)(0x3f800000, 0)
                                                int32_t eax_835 = sx.d(*(arg1[-0x24] + 8))
                                                
                                                if (neg.d(eax_835) == 0x80000000)
                                                    sub_403010()
                                                    noreturn
                                                
                                                arg1[-0x29] = neg.d(eax_835)
                                                unimplemented  {fild st0, dword [ebp-0xa4]}
                                                unimplemented  {fdiv st0, dword [0x48ab88]}
                                                float var_8_41 =
                                                    fconvert.s(unimplemented  {fstp dword [esp], st0})
                                                unimplemented  {fstp dword [esp], st0}
                                                unimplemented  {fild st0, word [eax+0x6]}
                                                unimplemented  {fdiv st0, dword [0x48ab88]}
                                                float var_c_39 =
                                                    fconvert.s(unimplemented  {fstp dword [esp], st0})
                                                unimplemented  {fstp dword [esp], st0}
                                                (*data_530368)(var_c_39, var_8_41, 0)
                                                (*data_5307f8)(0x3f800000, 0x3f800000)
                                                unimplemented  {fild st0, word [eax+0x6]}
                                                unimplemented  {fdiv st0, dword [0x48ab88]}
                                                float var_c_40 =
                                                    fconvert.s(unimplemented  {fstp dword [esp], st0})
                                                unimplemented  {fstp dword [esp], st0}
                                                (*data_530368)(var_c_40, 0, 0)
                                                (*data_5307f8)(0, 0x3f800000)
                                                (*data_530368)(0, 0, 0)
                                                (*data_530a08)()
                                                (*data_53006c)(0xde1)
                                            else
                                                (*data_52ffd4)(7)
                                                int32_t eax_798 = sx.d(*(arg1[-0x24] + 8))
                                                
                                                if (neg.d(eax_798) == 0x80000000)
                                                    sub_403010()
                                                    noreturn
                                                
                                                arg1[-0x29] = neg.d(eax_798)
                                                unimplemented  {fild st0, dword [ebp-0xa4]}
                                                unimplemented  {fdiv st0, dword [0x48ab88]}
                                                float var_8_38 =
                                                    fconvert.s(unimplemented  {fstp dword [esp], st0})
                                                unimplemented  {fstp dword [esp], st0}
                                                (*data_530368)(0, var_8_38, 0)
                                                int32_t eax_803 = sx.d(*(arg1[-0x24] + 8))
                                                
                                                if (neg.d(eax_803) == 0x80000000)
                                                    sub_403010()
                                                    noreturn
                                                
                                                arg1[-0x29] = neg.d(eax_803)
                                                unimplemented  {fild st0, dword [ebp-0xa4]}
                                                unimplemented  {fdiv st0, dword [0x48ab88]}
                                                float var_8_39 =
                                                    fconvert.s(unimplemented  {fstp dword [esp], st0})
                                                unimplemented  {fstp dword [esp], st0}
                                                unimplemented  {fild st0, word [eax+0x6]}
                                                unimplemented  {fdiv st0, dword [0x48ab88]}
                                                float var_c_37 =
                                                    fconvert.s(unimplemented  {fstp dword [esp], st0})
                                                unimplemented  {fstp dword [esp], st0}
                                                (*data_530368)(var_c_37, var_8_39, 0)
                                                unimplemented  {fild st0, word [eax+0x6]}
                                                unimplemented  {fdiv st0, dword [0x48ab88]}
                                                float var_c_38 =
                                                    fconvert.s(unimplemented  {fstp dword [esp], st0})
                                                unimplemented  {fstp dword [esp], st0}
                                                (*data_530368)(var_c_38, 0, 0)
                                                (*data_530368)(0, 0, 0)
                                                (*data_530a08)()
                                        else if (*(arg1[-0x24] + 2) != 0x1e0)
                                            int32_t var_4_51 = 0
                                            int32_t var_8_37 = sx.d(*(arg1[-0x24] + 6))
                                            int32_t var_c_36 = sx.d(*(arg1[-0x24] + 8))
                                            bool o_202 = unimplemented  {imul eax, eax, 0x3}
                                            
                                            if (o_202)
                                                sub_403010()
                                                noreturn
                                            
                                            arg1 = sub_46c038(entry_ebx, 0xfffffff9, 0, 0f, 
                                                *(arg1[-0x24] + 0x81b8), 
                                                sx.d(*(arg1[-0x24] + 0x81a6)) * 3)
                                        else
                                            int32_t var_4_50 = 0
                                            int32_t eax_776 = sx.d(*(arg1[-0x24] + 6))
                                            
                                            if (add_overflow(eax_776, 0x64))
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t var_8_36 = eax_776 + 0x64
                                            int32_t var_c_35 = sx.d(*(arg1[-0x24] + 8))
                                            bool o_201 = unimplemented  {imul eax, eax, 0x3}
                                            
                                            if (o_201)
                                                sub_403010()
                                                noreturn
                                            
                                            arg1 = sub_46c038(entry_ebx, 0xfffffff9, 0, 0f, 
                                                *(arg1[-0x24] + 0x81b8), 
                                                sx.d(*(arg1[-0x24] + 0x81a6)) * 3)
                                        
                                        if (*(arg1[-0x24] + 0x813c) != 0)
                                            sub_40287c(1, 1, arg1[-0x24] + 0x813c, &arg1[-0x43])
                                            int32_t ecx_84
                                            ecx_84.b = arg1[-0x43].b
                                            sub_402c90(&arg1[-0x43], 0x48ab78, ecx_84 + 1)
                                            
                                            if (ecx_84 != 0xffffffff)
                                                (*data_530a08)()
                                        
                                        (*data_53006c)(0xbe2)
                                        
                                        if (*(entry_ebx + 0xce9) == 0)
                                            (*data_530034)(0xde1)
                                        
                                        if (*(entry_ebx + 0xcf4) == 0)
                                            (*data_530034)(0xb50)
                                        
                                        if (*(arg1[-0x24] + 0x81a4) != 0 && *(arg1[-0x24] + 6) != 0
                                                && *(arg1[-0x24] + 8) != 0)
                                            unimplemented  {fild st0, word [eax+0x6]}
                                            unimplemented  {fld st0, tword [0x48ab8c]}
                                            unimplemented  {fmulp st1, st0}
                                            unimplemented  {fmulp st1, st0}
                                            int32_t eax_867
                                            int32_t edx_231
                                            eax_867, edx_231 = sub_402b4c(st0)
                                            bool o_207 = unimplemented  {adc edx, 0x0}
                                            
                                            if (o_207)
                                                sub_403010()
                                                noreturn
                                            
                                            if ((eax_867 + 6) s>> 0x1f
                                                    != adc.d(edx_231, 0, eax_867 u>= 0xfffffffa))
                                                sub_403008()
                                                noreturn
                                            
                                            int32_t var_4_57 = eax_867 + 6
                                            unimplemented  {fild st0, word [eax+0x8]}
                                            unimplemented  {fld st0, tword [0x48ab98]}
                                            unimplemented  {fmulp st1, st0}
                                            unimplemented  {fmulp st1, st0}
                                            int32_t eax_871
                                            int32_t edx_233
                                            eax_871, edx_233 = sub_402b4c(st0)
                                            
                                            if (eax_871 s>> 0x1f != edx_233)
                                                sub_403008()
                                                noreturn
                                            
                                            int32_t ecx_86
                                            
                                            if (*(arg1[-0x24] + 0x813c) != 0)
                                                sub_40287c(1, 1, arg1[-0x24] + 0x813c, &arg1[-0x43])
                                                ecx_86.b = arg1[-0x43].b
                                                sub_402c90(&arg1[-0x43], 0x48ab78, ecx_86 + 1)
                                            
                                            char eax_879
                                            
                                            if (*(arg1[-0x24] + 0x813c) != 0 && ecx_86 != 0xffffffff)
                                                eax_879 = 1
                                            else
                                                eax_879 = 0
                                            
                                            sub_48b3d8(sx.d(*(arg1[-0x24] + 4)), 
                                                sx.d(*(arg1[-0x24] + 2)), entry_ebx, 
                                                *(arg1[-0x24] + 0x81b8), 1, eax_879, 0, eax_871)
                                    
                                    eax_885 = sx.d(*(arg1[-0x24] + 0x8130))
                                    
                                    if (eax_885 s> 0)
                                        break
                                
                                arg1[-0x25] = eax_885
                                arg1[-3] = 1
                            
                            int32_t eax_887 = arg1[-3] - 1
                            
                            if (eax_887 u> 0x75)
                                sub_403008()
                                noreturn
                            
                            int32_t edi_9 = (eax_887 + 1) * 0x23
                            bool o_208 = unimplemented  {imul edi, eax, 0x23}
                            
                            if (o_208)
                                sub_403010()
                                noreturn
                            
                            char* eax_890 = arg1[-0x24] + (edi_9 << 3) - 0xf0
                            int32_t ecx_89
                            ecx_89.b = *eax_890
                            ecx_91 = sub_402c90(eax_890, 0x48aba4, ecx_89 + 1)
                            
                            if (ecx_89 != 0xffffffff)
                                if (arg1[-3] - 1 u> 0x75)
                                    sub_403008()
                                    noreturn
                                
                                if (*(arg1[-0x24] + (edi_9 << 3) - 0xf8) != 2)
                                    int32_t eax_895 = arg1[-3] - 1
                                    
                                    if (eax_895 u> 0x75)
                                        sub_403008()
                                        noreturn
                                    
                                    edi_10 = (eax_895 + 1) * 0x23
                                    bool o_209 = unimplemented  {imul edi, eax, 0x23}
                                    
                                    if (o_209)
                                        sub_403010()
                                        noreturn
                                    
                                    if (*(arg1[-0x24] + (edi_10 << 3) - 0xf1) == 0)
                                        if (arg1[-3] - 1 u> 0x75)
                                            sub_403008()
                                            noreturn
                                        
                                        char eax_902
                                        eax_902, ecx_91 =
                                            sub_484dfc(ecx_91, arg1[-0x24] + (edi_10 << 3) + 8)
                                        
                                        if (eax_902 == 0)
                                            continue
                                    
                                    eax_905 = sx.d(*(arg1[-0x24] + 2))
                                    edx_237 = sx.d(*(arg1[-0x24] + 6))
                                    edx_238 = edx_237 s>> 1
                                    c_18 = unimplemented  {sar edx, 0x1}
                                    break
                        
                        if (edx_237 s>> 1 s< 0)
                            edx_238 = adc.d(edx_238, 0, c_18)
                        
                        if (add_overflow(eax_905, edx_238))
                            sub_403010()
                            noreturn
                        
                        ecx_91.b = eax_905 + edx_238 s< 0x17c
                        int32_t eax_908 = sub_46ae30(ecx_91.b, arg2, entry_ebx, *(arg1[-0x24] + 0x81b8))
                        int32_t edx_241 = sx.d(*(arg1[-0x24] + 2))
                        
                        if (add_overflow(eax_908, edx_241))
                            sub_403010()
                            noreturn
                        
                        arg1[-5] = eax_908 + edx_241
                        arg1[-6] = sx.d(*(arg1[-0x24] + 4))
                        
                        if (arg1[-3] - 1 u> 0x75)
                            sub_403008()
                            noreturn
                        
                        arg1[-0x26] = arg1[-0x24] + (edi_10 << 3) - 0xf8
                        void* ebp_9 = sub_47a7ec(arg1[-3], &arg1[-0x1e], 0)
                        arg1 = sub_47a86c(*(ebp_9 - 0xc), ebp_9 - 0x7c, 0)
                        
                        if (*arg1[-0x26] != 0xa || *(arg1[-0x26] + 0xf0) != 8
                                || *(arg1[-0x24] + 8) s< 0x168 || *(entry_ebx + 0x10c8) != 3)
                            int32_t eax_936 = sx.d(*(arg1[-0x26] + 2))
                            int32_t temp172_1 = arg1[-5]
                            arg1[-5] += eax_936
                            
                            if (add_overflow(temp172_1, eax_936))
                                sub_403010()
                                noreturn
                        else
                            int32_t eax_924 = sx.d(*(arg1[-0x26] + 2))
                            
                            if (add_overflow(eax_924, arg1[-5]))
                                sub_403010()
                                noreturn
                            
                            int32_t eax_926
                            int32_t edx_244
                            edx_244:eax_926 = sx.q(eax_924 + arg1[-5])
                            int32_t eax_928 = sx.d(*(arg1[-0x26] + 4))
                            int32_t edx_246 = sx.d(*(arg1[-0x24] + 4))
                            
                            if (add_overflow(eax_928, edx_246))
                                sub_403010()
                                noreturn
                            
                            arg1[-0x29] = eax_928 + edx_246
                            unimplemented  {fild st0, dword [ebp-0xa4]}
                            unimplemented  {fdiv st0, dword [0x48aba8]}
                            unimplemented  {fld st0, tword [0x48abac]}
                            unimplemented  {fmulp st1, st0}
                            unimplemented  {fmulp st1, st0}
                            st0 = sub_402b3c(st0)
                            unimplemented  {call 0x402b3c}
                            unimplemented  {fmul st0, dword [0x48abb8]}
                            int32_t eax_930
                            int32_t edx_247
                            eax_930, edx_247 = sub_402b4c(st0)
                            int32_t var_8_47 = eax_926 - eax_930
                            bool o_214 = unimplemented  {adc edx, 0x0}
                            
                            if (o_214)
                                sub_403010()
                                noreturn
                            
                            if ((var_8_47 + 0xa) s>> 0x1f != adc.d(
                                    sbb.d(edx_244, edx_247, eax_926 u< eax_930), 0, 
                                    var_8_47 u>= 0xfffffff6))
                                sub_403008()
                                noreturn
                            
                            arg1[-5] = var_8_47 + 0xa
                        
                        int32_t eax_938 = sx.d(*(arg1[-0x26] + 4))
                        int32_t temp177_1 = arg1[-6]
                        arg1[-6] += eax_938
                        
                        if (add_overflow(temp177_1, eax_938))
                            sub_403010()
                            noreturn
                        
                        if (*(entry_ebx + 0x9b4) == arg1[-3] && arg2 == *(entry_ebx + 0x9b8)
                                && *(entry_ebx + 0x9b0) != 0)
                            *(arg1[-0x26] + 0x56) = 1
                        
                        arg1[-0xb] = sx.d(*(arg1[-0x26] + 0x56))
                        arg1[-0xe] = sx.d(*(arg1[-0x26] + 0x56))
                        
                        if (*(arg1[-0x26] + 6) == 0)
                            arg1[-0xb] = 3
                            arg1[-0xe] = 3
                        else if (arg2 != *(entry_ebx + 0x8a0) && *(arg1[-0x24] + 0x8139) != 0)
                            arg1[-0xb] = 3
                            arg1[-0xe] = 3
                        
                        if (*arg1[-0x26] == 6 && *(arg1[-0x26] + 0xfa) != 0)
                            int32_t eax_950 = arg1[-3] - 1
                            
                            if (eax_950 u> 0x75)
                                sub_403008()
                                noreturn
                            
                            bool o_217 = unimplemented  {imul eax, eax, 0x23}
                            
                            if (o_217)
                                sub_403010()
                                noreturn
                            
                            int32_t eax_955 = arg1[-3] - 1
                            
                            if (eax_955 u> 0x75)
                                sub_403008()
                                noreturn
                            
                            bool o_218 = unimplemented  {imul eax, eax, 0x23}
                            
                            if (o_218)
                                sub_403010()
                                noreturn
                            
                            void* edi_11 = arg1[-0x26]
                            arg1[-3]
                            *(edi_11 + 0xfc)
                            (*(edi_11 + 0xf8))(sx.d(*(arg1[-0x24] + (eax_955 + 1) * 0x118 - 0xf4)), 
                                sx.d(*(arg1[-0x24] + (eax_950 + 1) * 0x118 - 0xf6)))
                        
                        char* eax_960
                        eax_960.b = *arg1[-0x26]
                        char temp228_1 = eax_960.b
                        eax_960.b -= 0x13
                        
                        if (temp228_1 != 0x13)
                            char* eax_984
                            eax_984.b = *arg1[-0x26]
                            
                            if (eax_984.b == 0)
                            label_485c88:
                                
                                if (*(arg1[-0x26] + 0x88) s> 0)
                                    int32_t eax_988 = sx.d(*(arg1[-0x26] + 0x88)) - 1
                                    
                                    if (eax_988 u> 0x75)
                                        sub_403008()
                                        noreturn
                                    
                                    bool o_219 = unimplemented  {imul eax, eax, 0x23}
                                    
                                    if (o_219)
                                        sub_403010()
                                        noreturn
                                    
                                    if (*(arg1[-0x24] + (eax_988 + 1) * 0x118 - 0xf8) == 0x11)
                                        sub_402bc0(&arg1[-0x4a], 0x48abc0)
                                        int32_t eax_994 = sx.d(*(arg1[-0x26] + 0x88)) - 1
                                        
                                        if (eax_994 u> 0x75)
                                            sub_403008()
                                            noreturn
                                        
                                        bool o_220 = unimplemented  {imul eax, eax, 0x23}
                                        
                                        if (o_220)
                                            sub_403010()
                                            noreturn
                                        
                                        sub_40401c(
                                            sub_402b90(&arg1[-0x4a], 
                                                arg1[-0x24] + (eax_994 + 1) * 0x118 - 0xf0, 0x1b), 
                                            &arg1[-0x4a])
                                
                                int32_t edi_12
                                
                                if (*arg1[-0x26] != 0 || *(arg1[-0x26] + 0xf0) != 0)
                                    char temp250_1
                                    
                                    if (*arg1[-0x26] != 0xa)
                                        void* eax_1002
                                        eax_1002.b = *(arg1[-0x26] + 0xf0)
                                        eax_1002.b -= 0x15
                                        temp250_1 = eax_1002.b
                                        eax_1002.b -= 5
                                    
                                    if (*arg1[-0x26] != 0xa && temp250_1 u>= 5)
                                        edi_12 = *(entry_ebx + 0x8c4)
                                    else
                                        edi_12 = sx.d(*(arg1[-0x26] + 0xee))
                                        
                                        if (*(arg1[-0x26] + 0xf0) == 8)
                                            edi_12 = 0xfffffffe
                                        
                                        if (*(arg1[-0x26] + 0xf0) == 0xb)
                                            edi_12 = 0xfffffffe
                                        
                                        if (*(arg1[-0x26] + 0xf0) == 4)
                                            edi_12 = sx.d(*(entry_ebx + 0x938))
                                        else if (*(arg1[-0x26] + 0xf0) != 0xd)
                                            void* eax_1008
                                            eax_1008.b = *(arg1[-0x26] + 0xf0)
                                            
                                            if (eax_1008.b - 1 u< 3)
                                                edi_12 = sx.d(*(entry_ebx + 0x936))
                                            else if (*(arg1[-0x26] + 0xf0) == 5)
                                                edi_12 = sx.d(*(entry_ebx + 0x93a))
                                            else if (*(arg1[-0x26] + 0xf0) == 6)
                                                edi_12 = sx.d(*(entry_ebx + 0x93e))
                                            else if (*(arg1[-0x26] + 0xf0) == 0xe)
                                                edi_12 = *(entry_ebx + 0x8d8)
                                            else if (*(arg1[-0x26] + 0xf0) == 0xf)
                                                edi_12 = *(entry_ebx + 0x8dc)
                                            else if (*(arg1[-0x26] + 0xf0) == 0x10)
                                                edi_12 = *(entry_ebx + 0x8e8)
                                            else if (*(arg1[-0x26] + 0xf0) == 0x11)
                                                edi_12 = *(entry_ebx + 0x8ec)
                                            else if (*(arg1[-0x26] + 0xf0) == 0x12)
                                                edi_12 = *(entry_ebx + 0x8f4)
                                            else if (*(arg1[-0x26] + 0xf0) == 0x14)
                                                edi_12 = *(entry_ebx + 0x8fc)
                                            else if (*(arg1[-0x26] + 0xf0) == 0x17)
                                                edi_12 = *(entry_ebx + 0x908)
                                            else if (*(arg1[-0x26] + 0xf0) == 0x16)
                                                edi_12 = *(entry_ebx + 0x904)
                                            else if (*(arg1[-0x26] + 0xf0) == 0x15)
                                                edi_12 = *(entry_ebx + 0x900)
                                            else if (*(arg1[-0x26] + 0xf0) == 0x19)
                                                edi_12 = *(entry_ebx + 0x910)
                                            else if (*(arg1[-0x26] + 0xf0) == 0x18)
                                                edi_12 = *(entry_ebx + 0x90c)
                                            else if (*(arg1[-0x26] + 0xf0) == 0x13)
                                                edi_12 = *(entry_ebx + 0x8f8)
                                            else if (*(arg1[-0x26] + 0xf0) == 0x1a)
                                                edi_12 = *(entry_ebx + 0x914)
                                            else if (*(arg1[-0x26] + 0xf0) == 0x1b)
                                                edi_12 = *(entry_ebx + 0x918)
                                            else if (*(arg1[-0x26] + 0xf0) == 0xc)
                                                edi_12 = *(entry_ebx + 0x8c4)
                                        else
                                            edi_12 = sx.d(*(entry_ebx + 0x93a))
                                else
                                    edi_12 = *(entry_ebx + 0x8c0)
                                
                                if (*(arg1[-0x26] + 0x56) == 1 && *(arg1[-0x26] + 6) != 0)
                                    arg1[-0xb] = 0
                                
                                if (edi_12 s> 0xffffffff)
                                    void* eax_1029
                                    eax_1029.b = *(arg1[-0x26] + 0xf0)
                                    eax_1029.b -= 9
                                    char temp265_1 = eax_1029.b
                                    eax_1029.b -= 2
                                    
                                    if (temp265_1 u>= 2)
                                        sub_404188(arg1[-0x1e], 0x48abd0)
                                        
                                        if (temp265_1 != 2)
                                            if (*(entry_ebx + 0x900) u> 0xff)
                                                sub_403008()
                                                noreturn
                                            
                                            int32_t edx_264 = *(entry_ebx + 0x90c)
                                            
                                            if (edx_264 u> 0xff)
                                                sub_403008()
                                                noreturn
                                            
                                            int32_t eax_1067
                                            eax_1067:1.b = 0x20
                                            sub_402e88(eax_1067.w, edx_264.b, &arg1[-0x52])
                                            bool c_21 = edi_12 u< 0xff
                                            
                                            if (edi_12 == 0xff || c_21)
                                                c_21 = test_bit(arg1[-0x52], edi_12)
                                            
                                            if (not(c_21))
                                                sub_48156c(arg1[-5], edi_12, entry_ebx, 0x3f800000, 
                                                    *(arg1[-0x26] + 0x110), 0, *(arg1[-0x26] + 0x68), 
                                                    0f, 0, arg1[-0xb], *(arg1[-0x26] + 0x60), 
                                                    *(arg1[-0x26] + 0x5c), arg1[-6])
                                            else
                                                sub_48156c(arg1[-5], edi_12, entry_ebx, 0x3f800000, 
                                                    *(arg1[-0x26] + 0x110), 0, *(arg1[-0x26] + 0x68), 
                                                    0f, 0, arg1[-0xb], 0x2d, 0x2d, arg1[-6])
                                        else
                                            sub_48156c(arg1[-5], edi_12, entry_ebx, 0x3f800000, 
                                                *(arg1[-0x26] + 0x110), 0, *(arg1[-0x26] + 0x68), -7f, 
                                                0, sx.d(*(arg1[-0x26] + 0x56)), *(arg1[-0x26] + 0x60), 
                                                *(arg1[-0x26] + 0x5c), arg1[-6])
                                    else
                                        void* eax_1030
                                        eax_1030.b = *(arg1[-0x26] + 0xf0)
                                        eax_1030.b -= 9
                                        char temp273_1 = eax_1030.b
                                        eax_1030.b -= 2
                                        
                                        if (temp273_1 u< 2)
                                            (*data_530810)()
                                            (*data_5306a4)(0x851eb852, 0xbfe451eb, 0xb4395810, 
                                                0x3fde76c8, 0, 0xbff80000)
                                            
                                            if (*(arg1[-0x26] + 0xf0) == 0xa)
                                                arg1[-0x22] = 0
                                                
                                                if (*(arg1[-0x26] + 0x56) == 1)
                                                    arg1[-0x22] = 0x3b23d70a
                                                
                                                void* eax_1037
                                                eax_1037.w = *(arg1[-0x26] + 0x56)
                                                
                                                if (eax_1037.w - 2 u< 2)
                                                    arg1[-0x22] = 0x3b23d70a
                                                
                                                int32_t var_4_65 = 0
                                                int32_t var_8_51 = 0
                                                unimplemented  {fld st0, dword [ebp-0x88]}
                                                unimplemented  {fstp qword [esp], st0}
                                                unimplemented  {fld st0, dword [ebp-0x88]}
                                                unimplemented  {fchs }
                                                unimplemented  {fstp qword [esp], st0}
                                                (*data_5306a4)(0x851eb852)
                                            
                                            int32_t var_4_66 = 0
                                            int32_t var_8_52 = 0
                                            int32_t eax_1041 = arg1[-6]
                                            
                                            if (neg.d(eax_1041) == 0x80000000)
                                                sub_403010()
                                                noreturn
                                            
                                            arg1[-0x29] = neg.d(eax_1041)
                                            unimplemented  {fild st0, dword [ebp-0xa4]}
                                            unimplemented  {fdiv st0, dword [0x48abc4]}
                                            unimplemented  {fstp qword [esp], st0}
                                            unimplemented  {fild st0, dword [ebp-0x14]}
                                            unimplemented  {fdiv st0, dword [0x48abc4]}
                                            unimplemented  {fstp qword [esp], st0}
                                            (*data_5306a4)(0x851eb852)
                                            
                                            if (*(arg1[-0x26] + 0x74) != 0x4d)
                                                sub_46a708(*(arg1[-0x26] + 0x5c), edi_12, entry_ebx, 0, 
                                                    0, *(arg1[-0x26] + 0x110), *(arg1[-0x26] + 0x60))
                                            else
                                                sub_46a50c(*(arg1[-0x26] + 0x5c), edi_12, entry_ebx, 0, 
                                                    0, *(arg1[-0x26] + 0x110), *(arg1[-0x26] + 0x60))
                                    
                                    if (edi_12 == 0xfffffffe)
                                        int32_t eax_1084 = sx.d(*(arg1[-0x24] + 0x8136))
                                        int32_t temp289_1 = arg1[-3]
                                        
                                        if (eax_1084 == temp289_1)
                                            sub_404280(1, 1, arg1[-0x1e], &arg1[-0x53])
                                            sub_404188(arg1[-0x53], 0x48abdc)
                                            
                                            if (eax_1084 != temp289_1)
                                                int32_t eax_1088 = arg1[-6]
                                                int32_t eax_1090 = sx.d(*(arg1[-0x26] + 0x76))
                                                int32_t eax_1092 = sx.d(*(arg1[-0x26] + 0x72))
                                                int32_t eax_1094 = sx.d(*(arg1[-0x26] + 0x78))
                                                unimplemented  {fild st0, dword [ebp-0x2c]}
                                                float var_18_5 =
                                                    fconvert.s(unimplemented  {fstp dword [esp], st0})
                                                unimplemented  {fstp dword [esp], st0}
                                                float var_1c_30 = *(arg1[-0x26] + 0x68)
                                                float var_24_14 = *(arg1[-0x26] + 0x110)
                                                int32_t eax_1098 = sx.d(*(arg1[-0x24] + 2))
                                                int32_t edx_268 = sx.d(*(arg1[-0x26] + 2))
                                                
                                                if (add_overflow(eax_1098, edx_268))
                                                    sub_403010()
                                                    noreturn
                                                
                                                int32_t eax_1100
                                                int32_t edx_269
                                                edx_269:eax_1100 = sx.q(eax_1098 + edx_268)
                                                unimplemented  {fild st0, word [eax+0x76]}
                                                unimplemented  {fdiv st0, dword [0x48abe0]}
                                                int32_t eax_1101
                                                int32_t edx_270
                                                eax_1101, edx_270 = sub_402b4c(st0)
                                                int32_t var_30_6 = eax_1100 - eax_1101
                                                
                                                if (var_30_6 s>> 0x1f !=
                                                        sbb.d(edx_269, edx_270, eax_1100 u< eax_1101))
                                                    sub_403008()
                                                    noreturn
                                                
                                                sub_48156c(var_30_6, *(entry_ebx + 0x11c8), entry_ebx, 
                                                    0x3f800000, var_24_14, 4, var_1c_30, var_18_5, 0, 
                                                    eax_1094, eax_1092, eax_1090, eax_1088)
                                
                                if (*(arg1[-0x26] + 6) != 0)
                                    void* eax_1107
                                    eax_1107.b = *(arg1[-0x26] + 0xf0)
                                    char temp272_1 = eax_1107.b
                                    eax_1107.b -= 8
                                    
                                    if (temp272_1 != 8)
                                        char temp281_1 = eax_1107.b
                                        eax_1107.b -= 3
                                        
                                        if (temp281_1 != 3)
                                            void* eax_1108
                                            eax_1108.w = *(arg1[-0x26] + 0x56)
                                            
                                            if (eax_1108.w - 1 u< 2)
                                                sub_404188(arg1[-0x1e], 0x48abd0)
                                                
                                                if (eax_1108.w != 3)
                                                    int32_t eax_1111 = arg1[-6]
                                                    int32_t eax_1113 = *(arg1[-0x26] + 0x5c)
                                                    int32_t eax_1115 = *(arg1[-0x26] + 0x60)
                                                    int32_t eax_1116 = arg1[-0xb]
                                                    float var_1c_31 = *(arg1[-0x26] + 0x68)
                                                    unimplemented  {fld st0, dword [ebx+0xa6c]}
                                                    unimplemented  {fdiv st0, dword [0x48abe4]}
                                                    unimplemented  {fld st0, tword [0x48abac]}
                                                    unimplemented  {fmulp st1, st0}
                                                    unimplemented  {fmulp st1, st0}
                                                    unimplemented  {fmul st0, dword [0x48abbc]}
                                                    st0 = sub_402b3c(st0)
                                                    unimplemented  {call 0x402b3c}
                                                    unimplemented  {fld st0, tword [0x48abe8]}
                                                    unimplemented  {fmulp st1, st0}
                                                    unimplemented  {fmulp st1, st0}
                                                    unimplemented  {fld st0, tword [0x48abf4]}
                                                    unimplemented  {faddp st1, st0}
                                                    unimplemented  {faddp st1, st0}
                                                    unimplemented  {fmul st0, dword [eax+0x110]}
                                                    float var_24_15 = fconvert.s(unimplemented  {fstp 
                                                        dword [esp], st0})
                                                    unimplemented  {fstp dword [esp], st0}
                                                    sub_48156c(arg1[-5], 0xfffffffe, entry_ebx, 
                                                        0x3f800000, var_24_15, 0, var_1c_31, 0f, 0, 
                                                        eax_1116, eax_1115, eax_1113, eax_1111)
                                
                                arg1[-0x17] = 0
                                
                                if (*(arg1[-0x26] + 0x88) s> 0)
                                    int32_t eax_1122 = sx.d(*(arg1[-0x26] + 0x88)) - 1
                                    
                                    if (eax_1122 u> 0x75)
                                        sub_403008()
                                        noreturn
                                    
                                    bool o_223 = unimplemented  {imul eax, eax, 0x23}
                                    
                                    if (o_223)
                                        sub_403010()
                                        noreturn
                                    
                                    if (*(arg1[-0x24] + (eax_1122 + 1) * 0x118 - 0xf8) == 0x11)
                                        arg1[-0x17] = 1
                                        unimplemented  {fild st0, dword [ebp-0x14]}
                                        unimplemented  {fild st0, dword [eax+0x5c]}
                                        unimplemented  {fdiv st0, dword [0x48abbc]}
                                        unimplemented  {faddp st1, st0}
                                        unimplemented  {faddp st1, st0}
                                        unimplemented  {fsub st0, dword [0x48ac00]}
                                        int32_t eax_1125
                                        int32_t edx_274
                                        eax_1125, edx_274 = sub_402b4c(st0)
                                        
                                        if (eax_1125 s>> 0x1f != edx_274)
                                            sub_403008()
                                            noreturn
                                        
                                        arg1[-5] = eax_1125
                                        int32_t temp319_1 = arg1[-6]
                                        arg1[-6] -= 2
                                        
                                        if (add_overflow(temp319_1, 0xfffffffe))
                                            sub_403010()
                                            noreturn
                                
                                void* eax_1128
                                eax_1128.b = *(arg1[-0x26] + 0xf0)
                                char temp280_1 = eax_1128.b
                                eax_1128.b -= 8
                                char temp286_1
                                
                                if (temp280_1 != 8)
                                    temp286_1 = eax_1128.b
                                    eax_1128.b -= 3
                                
                                if (temp280_1 != 8 && temp286_1 != 3)
                                    sub_403e90(&arg1[-0x18], arg1[-0x1e])
                                    
                                    if (*(arg1[-0x26] + 0xf0) == 0xc)
                                        void* edx_281 = arg1[-0x18]
                                        
                                        if (0 u>= *(edx_281 - 4))
                                            sub_403008()
                                            noreturn
                                        
                                        char eax_1160 = *edx_281
                                        
                                        if (eax_1160 == 0x3f)
                                        label_4866d7:
                                            void* edx_282 = arg1[-0x18]
                                            
                                            if (0 u>= *(edx_282 - 4))
                                                sub_403008()
                                                noreturn
                                            
                                            if (*edx_282 != 0x3f)
                                                void* edx_283 = arg1[-0x18]
                                                
                                                if (0 u>= *(edx_283 - 4))
                                                    sub_403008()
                                                    noreturn
                                                
                                                char eax_1162 = *edx_283
                                                char temp372_1
                                                
                                                if (eax_1162 != 0x47)
                                                    temp372_1 = eax_1162 - 0x47
                                                
                                                if (eax_1162 == 0x47 || temp372_1 == 7)
                                                    int32_t temp371_1 = arg1[-5]
                                                    arg1[-5] += 3
                                                    
                                                    if (add_overflow(temp371_1, 3))
                                                        sub_403010()
                                                        noreturn
                                            else
                                                int32_t temp354_1 = arg1[-5]
                                                arg1[-5] += 4
                                                
                                                if (add_overflow(temp354_1, 4))
                                                    sub_403010()
                                                    noreturn
                                                
                                                int32_t temp362_1 = arg1[-6]
                                                arg1[-6] -= 1
                                                
                                                if (add_overflow(temp362_1, 0xffffffff))
                                                    sub_403010()
                                                    noreturn
                                        else
                                            if (eax_1160 == 0x47)
                                                goto label_4866d7
                                            
                                            if (eax_1160 == 0x4e)
                                                goto label_4866d7
                                            
                                            if (eax_1160 + 0x77 u< 2)
                                                goto label_4866d7
                                            
                                            if (*(entry_ebx + 0xcc8) != 2)
                                                if (add_overflow(sub_408e80(arg1[-0x18]), 0x97))
                                                    sub_403010()
                                                    noreturn
                                                
                                                sub_403fa0()
                                            else
                                                if (add_overflow(sub_408e80(arg1[-0x18]), 0x9b))
                                                    sub_403010()
                                                    noreturn
                                                
                                                sub_403fa0()
                                        
                                        int32_t temp387_1 = arg1[-5]
                                        arg1[-5] -= 9
                                        
                                        if (add_overflow(temp387_1, 0xfffffff7))
                                            sub_403010()
                                            noreturn
                                        
                                        int32_t temp398_1 = arg1[-6]
                                        arg1[-6] -= 2
                                        
                                        if (add_overflow(temp398_1, 0xfffffffe))
                                            sub_403010()
                                            noreturn
                                    
                                    int32_t temp306_1 = *(arg1[-0x26] + 0x60)
                                    
                                    if (temp306_1 s<= 0x23)
                                        sub_404280(1, 1, arg1[-0x1e], &arg1[-0x57])
                                        sub_404188(arg1[-0x57], 0x48ac0c)
                                    
                                    if (temp306_1 s> 0x23 || temp306_1 == 0x23)
                                        sub_404280(1, 1, arg1[-0x1e], &arg1[-0x58])
                                        sub_404188(arg1[-0x58], 0x48ac0c)
                                        
                                        if (temp306_1 == 0x23)
                                            sub_4042c0(&arg1[-0x18], 1, 1)
                                        
                                        if (*(entry_ebx + 0x900) u> 0xff)
                                            sub_403008()
                                            noreturn
                                        
                                        int32_t edx_288 = *(entry_ebx + 0x90c)
                                        
                                        if (edx_288 u> 0xff)
                                            sub_403008()
                                            noreturn
                                        
                                        int32_t eax_1177
                                        eax_1177:1.b = 0x20
                                        int32_t ecx_111 =
                                            sub_402e88(eax_1177.w, edx_288.b, &arg1[-0x52])
                                        bool c_23 = edi_12 u< 0xff
                                        
                                        if (edi_12 == 0xff || c_23)
                                            c_23 = test_bit(arg1[-0x52], edi_12)
                                        
                                        if (not(c_23))
                                            int32_t var_4_82 = *(arg1[-0x26] + 0x84)
                                            sub_40401c(ecx_111, arg1[-0x26] + 8)
                                            arg1 = sub_46fd7c(entry_ebx, arg1[-0x5c])
                                            unimplemented  {fld st0, dword [0x48ac10]}
                                            unimplemented  {fmul st0, dword [eax+0x84]}
                                            unimplemented  {fmulp st1, st0}
                                            unimplemented  {fmulp st1, st0}
                                            unimplemented  {fild st0, dword [eax+0x5c]}
                                            unimplemented  {fdiv st0, dword [0x48abbc]}
                                            unimplemented  {fsubrp st1, st0}
                                            unimplemented  {fsubrp st1, st0}
                                            int32_t eax_1192
                                            int32_t edx_293
                                            eax_1192, edx_293 = sub_402b4c(st0)
                                            int32_t eax_1193 = arg1[-5]
                                            
                                            if (add_overflow(eax_1193, 0xfffffffb))
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t eax_1195
                                            int32_t edx_294
                                            edx_294:eax_1195 = sx.q(eax_1193 - 5)
                                            bool o_239 = unimplemented  {adc edx, dword [esp+0x4]}
                                            
                                            if (o_239)
                                                sub_403010()
                                                noreturn
                                            
                                            arg1[-0x5e] = eax_1195 + eax_1192
                                            arg1[-0x5d] =
                                                adc.d(edx_294, edx_293, eax_1195 + eax_1192 u< eax_1195)
                                            unimplemented  {fild st0, qword [ebp-0x178]}
                                            float var_8_64 =
                                                fconvert.s(unimplemented  {fstp dword [esp], st0})
                                            unimplemented  {fstp dword [esp], st0}
                                            int32_t eax_1197 = arg1[-6]
                                            
                                            if (add_overflow(eax_1197, 0xa))
                                                sub_403010()
                                                noreturn
                                            
                                            arg1[-0x29] = eax_1197 + 0xa
                                            unimplemented  {fild st0, dword [ebp-0xa4]}
                                            float var_c_54 =
                                                fconvert.s(unimplemented  {fstp dword [esp], st0})
                                            unimplemented  {fstp dword [esp], st0}
                                            top += 1
                                            int32_t var_10_51 = *(arg1[-0x26] + 0x68)
                                            int32_t var_14_24 = 2
                                            sub_48c290(entry_ebx, arg1[-0x18], arg1[-0xe], 
                                                &arg1[-0x5b], 0, 0, 0f, *(arg1[-0x26] + 0x110), 
                                                arg1[-0x17])
                                        else
                                            int32_t var_4_81 = *(arg1[-0x26] + 0x84)
                                            int32_t eax_1180 = arg1[-5]
                                            
                                            if (add_overflow(eax_1180, 0x2d))
                                                sub_403010()
                                                noreturn
                                            
                                            arg1[-0x29] = eax_1180 + 0x2d
                                            unimplemented  {fild st0, dword [ebp-0xa4]}
                                            float var_8_62 =
                                                fconvert.s(unimplemented  {fstp dword [esp], st0})
                                            unimplemented  {fstp dword [esp], st0}
                                            int32_t eax_1182 = arg1[-6]
                                            
                                            if (add_overflow(eax_1182, 0xc))
                                                sub_403010()
                                                noreturn
                                            
                                            arg1[-0x5a] = eax_1182 + 0xc
                                            unimplemented  {fild st0, dword [ebp-0x168]}
                                            float var_c_52 =
                                                fconvert.s(unimplemented  {fstp dword [esp], st0})
                                            unimplemented  {fstp dword [esp], st0}
                                            int32_t var_10_50 = *(arg1[-0x26] + 0x68)
                                            int32_t var_14_23 = 2
                                            sub_48c290(entry_ebx, arg1[-0x18], arg1[-0xe], 
                                                &arg1[-0x59], 0, 0, 0f, *(arg1[-0x26] + 0x110), 
                                                arg1[-0x17])
                                    else if (*(arg1[-0x26] + 0x60) s<= 0x1e)
                                        int32_t var_4_84 = *(arg1[-0x26] + 0x84)
                                        int32_t eax_1216 = arg1[-5]
                                        
                                        if (add_overflow(eax_1216, 8))
                                            sub_403010()
                                            noreturn
                                        
                                        arg1[-0x29] = eax_1216 + 8
                                        unimplemented  {fild st0, dword [ebp-0xa4]}
                                        float var_8_66 =
                                            fconvert.s(unimplemented  {fstp dword [esp], st0})
                                        unimplemented  {fstp dword [esp], st0}
                                        int32_t eax_1218 = arg1[-6]
                                        
                                        if (add_overflow(eax_1218, 5))
                                            sub_403010()
                                            noreturn
                                        
                                        arg1[-0x5a] = eax_1218 + 5
                                        unimplemented  {fild st0, dword [ebp-0x168]}
                                        float var_c_56 =
                                            fconvert.s(unimplemented  {fstp dword [esp], st0})
                                        unimplemented  {fstp dword [esp], st0}
                                        int32_t var_10_53 = *(arg1[-0x26] + 0x68)
                                        int32_t var_14_26 = 2
                                        sub_48c290(entry_ebx, arg1[-0x18], arg1[-0xe], &arg1[-0x60], 0, 
                                            0, 0f, *(arg1[-0x26] + 0x110), arg1[-0x17])
                                    else
                                        int32_t var_4_83 = *(arg1[-0x26] + 0x84)
                                        int32_t eax_1206 = arg1[-5]
                                        
                                        if (add_overflow(eax_1206, 6))
                                            sub_403010()
                                            noreturn
                                        
                                        arg1[-0x29] = eax_1206 + 6
                                        unimplemented  {fild st0, dword [ebp-0xa4]}
                                        float var_8_65 =
                                            fconvert.s(unimplemented  {fstp dword [esp], st0})
                                        unimplemented  {fstp dword [esp], st0}
                                        int32_t eax_1208 = arg1[-6]
                                        
                                        if (add_overflow(eax_1208, 7))
                                            sub_403010()
                                            noreturn
                                        
                                        arg1[-0x5a] = eax_1208 + 7
                                        unimplemented  {fild st0, dword [ebp-0x168]}
                                        float var_c_55 =
                                            fconvert.s(unimplemented  {fstp dword [esp], st0})
                                        unimplemented  {fstp dword [esp], st0}
                                        int32_t var_10_52 = *(arg1[-0x26] + 0x68)
                                        int32_t var_14_25 = 2
                                        sub_48c290(entry_ebx, arg1[-0x18], arg1[-0xe], &arg1[-0x5f], 0, 
                                            0, 0f, *(arg1[-0x26] + 0x110), arg1[-0x17])
                                else
                                    sub_403e90(&arg1[-0x18], arg1[-0x1e])
                                    void* edx_276 = arg1[-0x18]
                                    
                                    if (0 u>= *(edx_276 - 4))
                                        sub_403008()
                                        noreturn
                                    
                                    if (*edx_276 == 0x21)
                                        sub_4042c0(&arg1[-0x18], 1, 1)
                                    
                                    if (*(arg1[-0x26] + 0xf0) == 8)
                                        int32_t eax_1133 = sx.d(*(arg1[-0x26] + 0x76))
                                        int32_t temp317_1 = arg1[-5]
                                        arg1[-5] += eax_1133
                                        
                                        if (add_overflow(temp317_1, eax_1133))
                                            sub_403010()
                                            noreturn
                                    
                                    if (arg1[-0xe] == 1)
                                        int32_t var_4_76 = *(arg1[-0x26] + 0x84)
                                        unimplemented  {fild st0, dword [ebp-0x14]}
                                        float var_8_59 =
                                            fconvert.s(unimplemented  {fstp dword [esp], st0})
                                        unimplemented  {fstp dword [esp], st0}
                                        int32_t eax_1135 = arg1[-6]
                                        
                                        if (add_overflow(eax_1135, 0xa))
                                            sub_403010()
                                            noreturn
                                        
                                        arg1[-0x29] = eax_1135 + 0xa
                                        unimplemented  {fild st0, dword [ebp-0xa4]}
                                        float var_c_49 =
                                            fconvert.s(unimplemented  {fstp dword [esp], st0})
                                        unimplemented  {fstp dword [esp], st0}
                                        int32_t var_10_47 = *(arg1[-0x26] + 0x68)
                                        int32_t var_14_20 = 5
                                        sub_48c290(entry_ebx, arg1[-0x18], nullptr, &arg1[-0x54], 0, 0, 
                                            0f, *(arg1[-0x26] + 0x110), arg1[-0x17])
                                    
                                    if (arg1[-0xe] == 2)
                                        int32_t var_4_77 = *(arg1[-0x26] + 0x84)
                                        unimplemented  {fild st0, dword [ebp-0x14]}
                                        float var_8_60 =
                                            fconvert.s(unimplemented  {fstp dword [esp], st0})
                                        unimplemented  {fstp dword [esp], st0}
                                        int32_t eax_1143 = arg1[-6]
                                        
                                        if (add_overflow(eax_1143, 0xa))
                                            sub_403010()
                                            noreturn
                                        
                                        arg1[-0x29] = eax_1143 + 0xa
                                        unimplemented  {fild st0, dword [ebp-0xa4]}
                                        float var_c_50 =
                                            fconvert.s(unimplemented  {fstp dword [esp], st0})
                                        unimplemented  {fstp dword [esp], st0}
                                        int32_t var_10_48 = *(arg1[-0x26] + 0x68)
                                        int32_t var_14_21 = 5
                                        sub_48c290(entry_ebx, arg1[-0x18], arg1[-0xe], &arg1[-0x55], 0, 
                                            0, 0f, *(arg1[-0x26] + 0x110), arg1[-0x17])
                                    
                                    int32_t var_4_78 = *(arg1[-0x26] + 0x84)
                                    unimplemented  {fild st0, dword [ebp-0x14]}
                                    float var_8_61 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                    unimplemented  {fstp dword [esp], st0}
                                    int32_t eax_1151 = arg1[-6]
                                    
                                    if (add_overflow(eax_1151, 0xa))
                                        sub_403010()
                                        noreturn
                                    
                                    arg1[-0x29] = eax_1151 + 0xa
                                    unimplemented  {fild st0, dword [ebp-0xa4]}
                                    float var_c_51 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                    unimplemented  {fstp dword [esp], st0}
                                    int32_t var_10_49 = *(arg1[-0x26] + 0x68)
                                    int32_t var_14_22 = 2
                                    sub_48c290(entry_ebx, arg1[-0x18], arg1[-0xe], &arg1[-0x56], 0, 0, 
                                        0f, *(arg1[-0x26] + 0x110), arg1[-0x17])
                                
                                if (*(arg1[-0x26] + 0xf0) != 0 && *(arg1[-0x26] + 0x56) != 0
                                        && *(arg1[-0x26] + 6) != 0)
                                    (*data_53006c)(0xde1)
                                    (*data_530034)(0xbe2)
                                    (*data_53006c)(0xb50)
                                    (*data_530334)(0x302, 0x303)
                                    int32_t ecx_116 = (*data_5306a4)(0x5937dca2, 0x3fa0134a, 
                                        0x5937dca2, 0x3fc0134a, 0, 0)
                                    void* edx_299 = arg1[-0x26]
                                    sub_40401c(ecx_116, edx_299 + 0x22)
                                    sub_404280(1, 1, arg1[-0x10], &arg1[-0x61])
                                    sub_404188(arg1[-0x61], 0x48ac0c)
                                    
                                    if (edx_299 == 0xffffffde)
                                        sub_4042c0(&arg1[-0x10], 1, 1)
                                    
                                    if (arg1[-0x10] != 0)
                                        int32_t var_4_86 = 0
                                        sub_46fd7c(entry_ebx, arg1[-0x10])
                                        unimplemented  {fld st0, tword [0x48ac14]}
                                        unimplemented  {fmulp st1, st0}
                                        unimplemented  {fmulp st1, st0}
                                        int32_t eax_1244
                                        int32_t edx_302
                                        eax_1244, edx_302 = sub_402b4c(st0)
                                        top += 1
                                        bool o_245 = unimplemented  {adc edx, 0x0}
                                        
                                        if (o_245)
                                            sub_403010()
                                            noreturn
                                        
                                        if ((eax_1244 + 0x14) s>> 0x1f
                                                != adc.d(edx_302, 0, eax_1244 u>= 0xffffffec))
                                            sub_403008()
                                            noreturn
                                        
                                        int32_t var_8_68 = eax_1244 + 0x14
                                        int32_t var_c_57 = 0x1e
                                        int32_t var_10_54 = 0x14
                                        entry_ebx, arg1 = sub_46d5f4(entry_ebx, 0, 0f, 0, 0x3f800000)
                                    
                                    (*data_5306a4)(0x8d4fdf3b, 0x3f826e97, 0x5937dca2, 0x3f90134a, 0, 0)
                                    (*data_530334)(0x302, 1)
                                    (*data_53006c)(0xb50)
                                    (*data_530034)(0xde1)
                                    (*data_530034)(0xbe2)
                                    (*data_530334)(0, 0x301)
                                    (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 0x3f800000)
                                    int32_t eax_1263 = *(entry_ebx + 0x8c8)
                                    
                                    if (eax_1263 s< 0)
                                        sub_403008()
                                        noreturn
                                    
                                    int32_t ecx_117 = (*data_53036c)(0xde1, eax_1263)
                                    int32_t var_4_88 = 0x3e99999a
                                    arg1 = sub_48c0c8(entry_ebx, arg1[-0x10], ecx_117, 0, 0x3f800000)
                                    (*data_530034)(0xde1)
                            else
                                char temp240_1 = eax_984.b
                                eax_984.b -= 0xa
                                
                                if (temp240_1 == 0xa)
                                    goto label_485c88
                                
                                if (*arg1[-0x26] == 4)
                                    int32_t edi_13
                                    
                                    if (*(arg1[-0x26] + 0x70) == 0)
                                        edi_13 = *(entry_ebx + 0x8d0)
                                    else
                                        edi_13 = *(entry_ebx + 0x8d4)
                                    
                                    sub_48156c(arg1[-5], edi_13, entry_ebx, 0x3f800000, 
                                        *(arg1[-0x26] + 0x110), 1, *(arg1[-0x26] + 0x68), 0f, 0, 
                                        arg1[-0xb], 0x19, 0x19, arg1[-6])
                                    void* eax_1276
                                    eax_1276.w = *(arg1[-0x26] + 0x56)
                                    
                                    if (eax_1276.w - 1 u< 2)
                                        int32_t eax_1278 = arg1[-6]
                                        int32_t eax_1280 = *(arg1[-0x26] + 0x5c)
                                        
                                        if (add_overflow(eax_1280, 0xffffffe0))
                                            sub_403010()
                                            noreturn
                                        
                                        int32_t eax_1282 = arg1[-0xb]
                                        float var_1c_40 = *(arg1[-0x26] + 0x68)
                                        unimplemented  {fld st0, dword [ebx+0xa6c]}
                                        unimplemented  {fdiv st0, dword [0x48abe4]}
                                        unimplemented  {fld st0, tword [0x48abac]}
                                        unimplemented  {fmulp st1, st0}
                                        unimplemented  {fmulp st1, st0}
                                        unimplemented  {fmul st0, dword [0x48abbc]}
                                        long double st0_1 = sub_402b3c(st0)
                                        unimplemented  {call 0x402b3c}
                                        unimplemented  {fld st0, tword [0x48abe8]}
                                        unimplemented  {fmulp st1, st0}
                                        unimplemented  {fmulp st1, st0}
                                        unimplemented  {fld st0, tword [0x48abf4]}
                                        unimplemented  {faddp st1, st0}
                                        unimplemented  {faddp st1, st0}
                                        unimplemented  {fmul st0, dword [eax+0x110]}
                                        float var_24_17 =
                                            fconvert.s(unimplemented  {fstp dword [esp], st0})
                                        unimplemented  {fstp dword [esp], st0}
                                        int32_t ecx_119 = arg1[-5]
                                        
                                        if (add_overflow(ecx_119, 0x1f))
                                            sub_403010()
                                            noreturn
                                        
                                        sub_48156c(ecx_119 + 0x1f, 0xfffffffe, entry_ebx, 0x3f800000, 
                                            var_24_17, 1, var_1c_40, 0f, 0, eax_1282, 0x19, 
                                            eax_1280 - 0x20, eax_1278)
                                        int32_t eax_1285 = arg1[-6]
                                        int32_t eax_1286 = arg1[-0xb]
                                        float var_1c_41 = *(arg1[-0x26] + 0x68)
                                        unimplemented  {fld st0, dword [ebx+0xa6c]}
                                        unimplemented  {fdiv st0, dword [0x48abe4]}
                                        unimplemented  {fld st0, tword [0x48abac]}
                                        unimplemented  {fmulp st1, st0}
                                        unimplemented  {fmulp st1, st0}
                                        unimplemented  {fmul st0, dword [0x48abbc]}
                                        st0 = sub_402b3c(st0_1)
                                        unimplemented  {call 0x402b3c}
                                        unimplemented  {fld st0, tword [0x48abe8]}
                                        unimplemented  {fmulp st1, st0}
                                        unimplemented  {fmulp st1, st0}
                                        unimplemented  {fld st0, tword [0x48abf4]}
                                        unimplemented  {faddp st1, st0}
                                        unimplemented  {faddp st1, st0}
                                        unimplemented  {fmul st0, dword [eax+0x110]}
                                        float var_24_18 =
                                            fconvert.s(unimplemented  {fstp dword [esp], st0})
                                        unimplemented  {fstp dword [esp], st0}
                                        sub_48156c(arg1[-5], 0xfffffffe, entry_ebx, 0x3f800000, 
                                            var_24_18, 1, var_1c_41, 0f, 0, eax_1286, 0x19, 0x19, 
                                            eax_1285)
                                    
                                    arg1 = sub_46fd7c(entry_ebx, arg1[-0x1e])
                                    unimplemented  {fmul st0, dword [0x48ac20]}
                                    unimplemented  {fadd dword [0x48ac24]}
                                    int32_t eax_1290
                                    int32_t edx_307
                                    eax_1290, edx_307 = sub_402b4c(st0)
                                    
                                    if (eax_1290 s>> 0x1f != edx_307)
                                        sub_403008()
                                        noreturn
                                    
                                    *(arg1[-0x26] + 0x5c) = eax_1290
                                    int32_t var_4_93 = *(arg1[-0x26] + 0x84)
                                    int32_t eax_1294 = arg1[-5]
                                    
                                    if (add_overflow(eax_1294, 0xf))
                                        sub_403010()
                                        noreturn
                                    
                                    if (add_overflow(eax_1294 + 0xf, 0xf))
                                        sub_403010()
                                        noreturn
                                    
                                    arg1[-0x29] = eax_1294 + 0x1e
                                    unimplemented  {fild st0, dword [ebp-0xa4]}
                                    float var_8_70 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                    unimplemented  {fstp dword [esp], st0}
                                    int32_t eax_1297 = arg1[-6]
                                    
                                    if (add_overflow(eax_1297, 4))
                                        sub_403010()
                                        noreturn
                                    
                                    arg1[-0x5a] = eax_1297 + 4
                                    unimplemented  {fild st0, dword [ebp-0x168]}
                                    float var_c_58 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                    unimplemented  {fstp dword [esp], st0}
                                    top += 1
                                    int32_t var_10_58 = *(arg1[-0x26] + 0x68)
                                    int32_t var_14_27 = 2
                                    sub_48c290(entry_ebx, arg1[-0x1e], arg1[-0xe], &arg1[-0x62], 0, 0, 
                                        0f, *(arg1[-0x26] + 0x110), 0f)
                        else if (*(arg1[-0x26] + 0x76) != 0)
                            if (*(arg1[-0x26] + 0x5c) s> 0)
                                int32_t var_4_64 = *(arg1[-0x26] + 0x5c)
                                int32_t var_8_50 = *(arg1[-0x26] + 0x60)
                                unimplemented  {fild st0, word [eax+0xee]}
                                unimplemented  {fild st0, word [eax+0x76]}
                                unimplemented  {fdivp st1, st0}
                                unimplemented  {fdivp st1, st0}
                                int32_t eax_977
                                int32_t edx_255
                                eax_977, edx_255 = sub_402b4c(st0)
                                
                                if (eax_977 s>> 0x1f != edx_255)
                                    sub_403008()
                                    noreturn
                                
                                int32_t var_c_44 = eax_977
                                int32_t var_10_41 = sx.d(*(arg1[-0x26] + 0x58))
                                sub_48bae4(arg1[-6], arg1[-5], entry_ebx, *(arg1[-0x26] + 0x110), 1, 1, 
                                    0)
                        else if (*(arg1[-0x26] + 0x5c) s> 0)
                            int32_t var_4_63 = *(arg1[-0x26] + 0x5c)
                            int32_t var_8_49 = *(arg1[-0x26] + 0x60)
                            unimplemented  {fild st0, word [eax+0xee]}
                            unimplemented  {fdiv st0, dword [0x48abbc]}
                            int32_t eax_967
                            int32_t edx_253
                            eax_967, edx_253 = sub_402b4c(st0)
                            
                            if (eax_967 s>> 0x1f != edx_253)
                                sub_403008()
                                noreturn
                            
                            int32_t var_c_42 = eax_967
                            int32_t var_10_40 = 1
                            sub_48bae4(arg1[-6], arg1[-5], entry_ebx, *(arg1[-0x26] + 0x110), 1, 1, 0)
                        
                        if (*arg1[-0x26] == 0x12)
                            int32_t var_4_94 = *(arg1[-0x26] + 0x5c)
                            sub_48b3d8(arg1[-6], arg1[-5], entry_ebx, *(arg1[-0x26] + 0x110), 0, 1, 1, 
                                *(arg1[-0x26] + 0x60))
                        
                        char* eax_1310
                        eax_1310.b = *arg1[-0x26]
                        
                        if (eax_1310.b - 1 u< 2 || eax_1310.b == 0x12)
                            if (*arg1[-0x26] == 0x12)
                                arg1 = sub_46fd7c(entry_ebx, arg1[-0x1e])
                                unimplemented  {fld st0, dword [0x48abe0]}
                                unimplemented  {fmul st0, dword [eax+0x84]}
                                unimplemented  {fmulp st1, st0}
                                unimplemented  {fmulp st1, st0}
                                unimplemented  {fild st0, dword [eax+0x5c]}
                                unimplemented  {fdiv st0, dword [0x48abbc]}
                                unimplemented  {fsubrp st1, st0}
                                unimplemented  {fsubrp st1, st0}
                                int32_t eax_1314
                                int32_t edx_312
                                eax_1314, edx_312 = sub_402b4c(st0)
                                top += 1
                                int32_t eax_1315 = arg1[-5]
                                
                                if (add_overflow(eax_1315, 0xffffffec))
                                    sub_403010()
                                    noreturn
                                
                                int32_t eax_1317
                                int32_t edx_313
                                edx_313:eax_1317 = sx.q(eax_1315 - 0x14)
                                int32_t eax_1318 = eax_1317 + eax_1314
                                bool o_252 = unimplemented  {adc edx, dword [esp+0x4]}
                                
                                if (o_252)
                                    sub_403010()
                                    noreturn
                                
                                if (eax_1318 s>> 0x1f
                                        != adc.d(edx_313, edx_312, eax_1317 + eax_1314 u< eax_1317))
                                    sub_403008()
                                    noreturn
                                
                                arg1[-5] = eax_1318
                            
                            if (*(arg1[-0x26] + 0x88) s> 0)
                                int32_t eax_1324 = sx.d(*(arg1[-0x26] + 0x88)) - 1
                                
                                if (eax_1324 u> 0x75)
                                    sub_403008()
                                    noreturn
                                
                                bool o_253 = unimplemented  {imul eax, eax, 0x23}
                                
                                if (o_253)
                                    sub_403010()
                                    noreturn
                                
                                if (*(arg1[-0x24] + (eax_1324 + 1) * 0x118 - 0xf8) == 0x11)
                                    int32_t edx_318 = sx.d(*(arg1[-0x26] + 0x88)) - 1
                                    
                                    if (edx_318 u> 0x75)
                                        sub_403008()
                                        noreturn
                                    
                                    bool o_254 = unimplemented  {imul edx, edx, 0x23}
                                    
                                    if (o_254)
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t ecx_124 = arg1[-0x24]
                                    sub_40401c(ecx_124, ecx_124 + (edx_318 + 1) * 0x118 - 0xf0)
                            
                            sub_403e90(&arg1[-0x10], arg1[-0x1e])
                            arg1[-0x11] = 0
                            
                            if (sub_404078(arg1[-0x1e]) s> 0)
                                while (true)
                                    int32_t edi_14 = *(arg1[-0x26] + 0x5c)
                                    
                                    if (sub_404078(arg1[-0x10]) s< *(arg1[-0x26] + 0x5c))
                                        edi_14 = sub_404078(arg1[-0x10])
                                    
                                    int32_t edi_16
                                    
                                    while (true)
                                        void* eax_1336 = arg1[-0x10]
                                        
                                        if (edi_14 - 1 u>= *(eax_1336 - 4))
                                            sub_403008()
                                            noreturn
                                        
                                        edi_16 = edi_14
                                        
                                        if (*(eax_1336 + edi_16 - 1) == 0x20)
                                            if (add_overflow(edi_16, 1))
                                                sub_403010()
                                                noreturn
                                            
                                            sub_404280(1, edi_16 + 1, arg1[-0x10], &arg1[-0x63])
                                            sub_404188(arg1[-0x63], 0x48ac30)
                                            
                                            if (edi_16 != 0xffffffff)
                                                if (add_overflow(edi_16, 1))
                                                    sub_403010()
                                                    noreturn
                                                
                                                sub_404280(1, edi_16 + 1, arg1[-0x10], &arg1[-0x64])
                                                sub_404188(arg1[-0x64], 0x48ac3c)
                                                
                                                if (edi_16 != 0xffffffff)
                                                    break
                                        
                                        if (edi_16 s<= 1)
                                            break
                                        
                                        edi_14 = edi_16 - 1
                                        
                                        if (add_overflow(edi_16, 0xffffffff))
                                            sub_403010()
                                            noreturn
                                    
                                    if (edi_16 s<= 1)
                                        edi_16 = *(arg1[-0x26] + 0x5c)
                                    
                                    if (sub_404078(arg1[-0x10]) s< *(arg1[-0x26] + 0x5c))
                                        edi_16 = sub_404078(arg1[-0x10])
                                    
                                    void* eax_1348 = nullptr
                                    void* edi_17
                                    int16_t temp356_1
                                    bool cond:29_1
                                    
                                    while (true)
                                        void* temp329_1 = eax_1348
                                        eax_1348 += 1
                                        
                                        if (add_overflow(temp329_1, 1))
                                            sub_403010()
                                            noreturn
                                        
                                        if (edi_16 s> eax_1348)
                                            void* edx_329 = arg1[-0x10]
                                            
                                            if (eax_1348 - 1 u>= *(edx_329 - 4))
                                                sub_403008()
                                                noreturn
                                            
                                            if (*(edx_329 + eax_1348 - 1) != 0xd)
                                                continue
                                        
                                        edi_17 = eax_1348
                                        temp356_1 = *(arg1[-0x26] + 0x74)
                                        cond:29_1 = temp356_1 != 1
                                        break
                                    
                                    if (temp356_1 == 1)
                                        int32_t eax_1353 = sx.d(*(arg1[-0x24] + 2))
                                        int32_t edx_331 = sx.d(*(arg1[-0x24] + 6))
                                        int32_t edx_332 = edx_331 s>> 1
                                        bool c_27 = unimplemented  {sar edx, 0x1}
                                        
                                        if (edx_331 s>> 1 s< 0)
                                            edx_332 = adc.d(edx_332, 0, c_27)
                                        
                                        if (add_overflow(eax_1353, edx_332))
                                            sub_403010()
                                            noreturn
                                        
                                        int32_t eax_1357
                                        int32_t edx_334
                                        edx_334:eax_1357 = sx.q(sub_46ae30(eax_1353 + edx_332 s< 0x17c, 
                                            arg2, entry_ebx, *(arg1[-0x26] + 0x110)))
                                        unimplemented  {fild st0, word [eax+0x6]}
                                        unimplemented  {fdiv st0, dword [0x48abbc]}
                                        int32_t eax_1358
                                        int32_t edx_335
                                        eax_1358, edx_335 = sub_402b4c(st0)
                                        int32_t eax_1361
                                        int32_t edx_336
                                        edx_336:eax_1361 = sx.q(*(arg1[-0x24] + 2))
                                        int32_t eax_1362 = eax_1361 + eax_1358
                                        bool o_260 = unimplemented  {adc edx, dword [esp+0x4]}
                                        
                                        if (o_260)
                                            sub_403010()
                                            noreturn
                                        
                                        bool o_261 = unimplemented  {sbb edx, 0x0}
                                        
                                        if (o_261)
                                            sub_403010()
                                            noreturn
                                        
                                        int32_t eax_1364 = eax_1362 - 0x14 + eax_1357
                                        int32_t edx_339 = adc.d(
                                            sbb.d(
                                                adc.d(edx_336, edx_335, 
                                                    eax_1361 + eax_1358 u< eax_1361), 
                                                0, eax_1362 u< 0x14), 
                                            edx_334, eax_1362 - 0x14 + eax_1357 u< eax_1362 - 0x14)
                                        bool o_262 = unimplemented  {adc edx, dword [esp+0x4]}
                                        
                                        if (o_262)
                                            sub_403010()
                                            noreturn
                                        
                                        int32_t eax_1365 = eax_1364 s>> 0x1f
                                        cond:29_1 = eax_1365 != edx_339
                                        
                                        if (eax_1365 != edx_339)
                                            sub_403008()
                                            noreturn
                                        
                                        arg1[-5] = eax_1364
                                        sub_4040c4(&arg1[-0x1e], U"!", arg1[-0x1e])
                                    
                                    sub_403e90(&arg1[-0x18], arg1[-0x1e])
                                    sub_404280(1, 1, arg1[-0x1e], &arg1[-0x65])
                                    sub_404188(arg1[-0x65], 0x48ac0c)
                                    
                                    if (not(cond:29_1))
                                        sub_4042c0(&arg1[-0x18], 1, 1)
                                        arg1 = sub_46fd7c(entry_ebx, arg1[-0x18])
                                        unimplemented  {fld st0, tword [0x48ac40]}
                                        unimplemented  {fmul st0, dword [eax+0x84]}
                                        unimplemented  {fmulp st1, st0}
                                        unimplemented  {fmulp st1, st0}
                                        int32_t eax_1374
                                        int32_t edx_342
                                        eax_1374, edx_342 = sub_402b4c(st0)
                                        top += 1
                                        int32_t eax_1376
                                        int32_t edx_343
                                        edx_343:eax_1376 = sx.q(arg1[-5])
                                        int32_t eax_1377 = eax_1376 + eax_1374
                                        bool o_263 = unimplemented  {adc edx, dword [esp+0x4]}
                                        
                                        if (o_263)
                                            sub_403010()
                                            noreturn
                                        
                                        if (eax_1377 s>> 0x1f != adc.d(edx_343, edx_342, 
                                                eax_1376 + eax_1374 u< eax_1376))
                                            sub_403008()
                                            noreturn
                                        
                                        arg1[-5] = eax_1377
                                        sub_403e90(&arg1[-0x10], arg1[-0x18])
                                        edi_17 = sub_404078(arg1[-0x10])
                                    
                                    if (*(arg1[-0x26] + 0xee) == 0x7b && sub_404078(arg1[-0x10]) s> 3)
                                        (*data_53006c)(0xde1)
                                        (*data_530034)(0xbe2)
                                        (*data_53006c)(0xb50)
                                        (*data_530334)(0x302, 0x303)
                                        arg1[-0x22] = 0x3f4ccccd
                                        int32_t eax_1394 = arg1[-5]
                                        
                                        if (add_overflow(eax_1394, 0xc))
                                            sub_403010()
                                            noreturn
                                        
                                        arg1[-0x29] = eax_1394 + 0xc
                                        unimplemented  {fild st0, dword [ebp-0xa4]}
                                        float var_4_105 =
                                            fconvert.s(unimplemented  {fstp dword [esp], st0})
                                        unimplemented  {fstp dword [esp], st0}
                                        int32_t eax_1396 = arg1[-6]
                                        
                                        if (add_overflow(eax_1396, 0xffffffed))
                                            sub_403010()
                                            noreturn
                                        
                                        arg1[-0x5a] = eax_1396 - 0x13
                                        unimplemented  {fild st0, dword [ebp-0x168]}
                                        float var_8_75 =
                                            fconvert.s(unimplemented  {fstp dword [esp], st0})
                                        unimplemented  {fstp dword [esp], st0}
                                        sub_48c214(entry_ebx)
                                        
                                        if (*(arg1[-0x26] + 6) != 0)
                                            int32_t var_4_107 = 0
                                            sub_4040c4(&arg1[-0x67], arg1[-0x10], "  ")
                                            void* ebp_10
                                            ebp_10, edi_17 = sub_46fd7c(entry_ebx, arg1[-0x67])
                                            unimplemented  {fld st0, tword [0x48ac58]}
                                            unimplemented  {fmulp st1, st0}
                                            unimplemented  {fmulp st1, st0}
                                            int32_t eax_1408
                                            int32_t edx_351
                                            eax_1408, edx_351 = sub_402b4c(st0)
                                            top += 1
                                            
                                            if (eax_1408 s>> 0x1f != edx_351)
                                                sub_403008()
                                                noreturn
                                            
                                            int32_t var_8_79 = eax_1408
                                            int32_t var_c_61 = 0x1b
                                            arg1 = sub_46c038(entry_ebx, 0, 0, 0f, 
                                                *(*(ebp_10 - 0x98) + 0x110), 0x14)
                                        else
                                            int32_t var_4_106 = 0
                                            sub_4040c4(&arg1[-0x66], arg1[-0x10], "  ")
                                            edi_17 = sub_46fd7c(entry_ebx, arg1[-0x66])
                                            unimplemented  {fld st0, tword [0x48ac58]}
                                            unimplemented  {fmulp st1, st0}
                                            unimplemented  {fmulp st1, st0}
                                            int32_t eax_1402
                                            int32_t edx_348
                                            eax_1402, edx_348 = sub_402b4c(st0)
                                            
                                            if (eax_1402 s>> 0x1f != edx_348)
                                                sub_403008()
                                                noreturn
                                            
                                            int32_t var_8_77 = eax_1402
                                            int32_t var_c_60 = 0x1b
                                            unimplemented  {fld st0, dword [eax+0x110]}
                                            unimplemented  {fmul st0, dword [0x48ac64]}
                                            int32_t var_14_28 =
                                                fconvert.s(unimplemented  {fstp dword [esp], st0})
                                            unimplemented  {fstp dword [esp], st0}
                                            top += 1
                                            arg1 = sub_46c038(entry_ebx, 0, 0, 0f, var_14_28, 0x14)
                                        
                                        (*data_530034)(0xde1)
                                    
                                    int16_t eax_1416
                                    
                                    if (*arg1[-0x26] == 1 && arg1[-3] == 1)
                                        unimplemented  {fld st0, dword [eax+0x84]}
                                        long double temp411_1 = fconvert.t(1.5f)
                                        unimplemented  {fcomp st0, dword [0x48ac68]} f- temp411_1
                                        bool c0_10 =
                                            unimplemented  {fcomp st0, dword [0x48ac68]} f< temp411_1
                                        bool c2_10 = is_unordered.t(
                                            unimplemented  {fcomp st0, dword [0x48ac68]}, temp411_1)
                                        bool c3_10 =
                                            unimplemented  {fcomp st0, dword [0x48ac68]} f== temp411_1
                                        unimplemented  {fcomp st0, dword [0x48ac68]}
                                        eax_1416 = (c0_10 ? 1 : 0) << 8 | (c2_10 ? 1 : 0) << 0xa
                                            | (c3_10 ? 1 : 0) << 0xe | (top & 7) << 0xb
                                    
                                    if (*arg1[-0x26] != 1 || arg1[-3] != 1 || test_bit(eax_1416:1.b, 6)
                                            || test_bit(eax_1416:1.b, 0))
                                        int32_t var_4_110 = *(arg1[-0x26] + 0x84)
                                        int32_t eax_1450 = arg1[-5]
                                        
                                        if (add_overflow(eax_1450, 0xf))
                                            sub_403010()
                                            noreturn
                                        
                                        arg1[-0x29] = eax_1450 + 0xf
                                        unimplemented  {fild st0, dword [ebp-0xa4]}
                                        float var_8_82 =
                                            fconvert.s(unimplemented  {fstp dword [esp], st0})
                                        unimplemented  {fstp dword [esp], st0}
                                        int32_t eax_1452 = arg1[-6]
                                        
                                        if (add_overflow(eax_1452, 8))
                                            sub_403010()
                                            noreturn
                                        
                                        arg1[-0x11]
                                        int32_t edx_360 = arg1[-0x11] * 0x14
                                        bool o_280 = unimplemented  {imul edx, dword [ebp-0x44], 0x14}
                                        
                                        if (o_280)
                                            sub_403010()
                                            noreturn
                                        
                                        if (add_overflow(eax_1452 + 8, edx_360))
                                            sub_403010()
                                            noreturn
                                        
                                        arg1[-0x5a] = eax_1452 + 8 + edx_360
                                        unimplemented  {fild st0, dword [ebp-0x168]}
                                        float var_c_64 =
                                            fconvert.s(unimplemented  {fstp dword [esp], st0})
                                        unimplemented  {fstp dword [esp], st0}
                                        int32_t var_10_62 = *(arg1[-0x26] + 0x68)
                                        int32_t var_14_32 = 0
                                        float var_1c_45 = *(arg1[-0x26] + 0x110)
                                        int32_t eax_1458 = sx.d(*(arg1[-0x24] + 2))
                                        int32_t edx_362 = sx.d(*(arg1[-0x24] + 6))
                                        int32_t eax_1459 = eax_1458 + edx_362
                                        
                                        if (add_overflow(eax_1458, edx_362))
                                            sub_403010()
                                            noreturn
                                        
                                        if (add_overflow(eax_1459, 0xfffffff1))
                                            sub_403010()
                                            noreturn
                                        
                                        sub_404280(edi_17, 1, arg1[-0x10], &arg1[-0x6d])
                                        sub_48c290(entry_ebx, arg1[-0x6d], arg1[-0xb], &arg1[-0x6c], 0, 
                                            0, eax_1459 - 0xf, var_1c_45, 0f)
                                    else
                                        int32_t var_4_108 = *(arg1[-0x26] + 0x84)
                                        int32_t eax_1418 = arg1[-5]
                                        
                                        if (add_overflow(eax_1418, 0xf))
                                            sub_403010()
                                            noreturn
                                        
                                        arg1[-0x29] = eax_1418 + 0xf
                                        unimplemented  {fild st0, dword [ebp-0xa4]}
                                        float var_8_80 =
                                            fconvert.s(unimplemented  {fstp dword [esp], st0})
                                        unimplemented  {fstp dword [esp], st0}
                                        int32_t eax_1420 = arg1[-6]
                                        
                                        if (add_overflow(eax_1420, 8))
                                            sub_403010()
                                            noreturn
                                        
                                        arg1[-0x11]
                                        int32_t edx_352 = arg1[-0x11] * 0x14
                                        bool o_268 = unimplemented  {imul edx, dword [ebp-0x44], 0x14}
                                        
                                        if (o_268)
                                            sub_403010()
                                            noreturn
                                        
                                        if (add_overflow(eax_1420 + 8, edx_352))
                                            sub_403010()
                                            noreturn
                                        
                                        arg1[-0x5a] = eax_1420 + 8 + edx_352
                                        unimplemented  {fild st0, dword [ebp-0x168]}
                                        float var_c_62 =
                                            fconvert.s(unimplemented  {fstp dword [esp], st0})
                                        unimplemented  {fstp dword [esp], st0}
                                        int32_t var_10_60 = *(arg1[-0x26] + 0x68)
                                        int32_t var_14_30 = 6
                                        float var_1c_43 = *(arg1[-0x26] + 0x110)
                                        int32_t eax_1426 = sx.d(*(arg1[-0x24] + 2))
                                        int32_t edx_354 = sx.d(*(arg1[-0x24] + 6))
                                        int32_t eax_1427 = eax_1426 + edx_354
                                        
                                        if (add_overflow(eax_1426, edx_354))
                                            sub_403010()
                                            noreturn
                                        
                                        if (add_overflow(eax_1427, 0xfffffff1))
                                            sub_403010()
                                            noreturn
                                        
                                        sub_404280(edi_17, 1, arg1[-0x10], &arg1[-0x69])
                                        sub_48c290(entry_ebx, arg1[-0x69], arg1[-0xb], &arg1[-0x68], 0, 
                                            0, eax_1427 - 0xf, var_1c_43, 0f)
                                        int32_t var_4_109 = *(arg1[-0x26] + 0x84)
                                        int32_t eax_1434 = arg1[-5]
                                        
                                        if (add_overflow(eax_1434, 0xf))
                                            sub_403010()
                                            noreturn
                                        
                                        arg1[-0x29] = eax_1434 + 0xf
                                        unimplemented  {fild st0, dword [ebp-0xa4]}
                                        float var_8_81 =
                                            fconvert.s(unimplemented  {fstp dword [esp], st0})
                                        unimplemented  {fstp dword [esp], st0}
                                        int32_t eax_1436 = arg1[-6]
                                        
                                        if (add_overflow(eax_1436, 8))
                                            sub_403010()
                                            noreturn
                                        
                                        arg1[-0x11]
                                        int32_t edx_356 = arg1[-0x11] * 0x14
                                        bool o_274 = unimplemented  {imul edx, dword [ebp-0x44], 0x14}
                                        
                                        if (o_274)
                                            sub_403010()
                                            noreturn
                                        
                                        if (add_overflow(eax_1436 + 8, edx_356))
                                            sub_403010()
                                            noreturn
                                        
                                        arg1[-0x5a] = eax_1436 + 8 + edx_356
                                        unimplemented  {fild st0, dword [ebp-0x168]}
                                        float var_c_63 =
                                            fconvert.s(unimplemented  {fstp dword [esp], st0})
                                        unimplemented  {fstp dword [esp], st0}
                                        int32_t var_10_61 = *(arg1[-0x26] + 0x68)
                                        int32_t var_14_31 = 8
                                        float var_1c_44 = *(arg1[-0x26] + 0x110)
                                        int32_t eax_1442 = sx.d(*(arg1[-0x24] + 2))
                                        int32_t edx_358 = sx.d(*(arg1[-0x24] + 6))
                                        int32_t eax_1443 = eax_1442 + edx_358
                                        
                                        if (add_overflow(eax_1442, edx_358))
                                            sub_403010()
                                            noreturn
                                        
                                        if (add_overflow(eax_1443, 0xfffffff1))
                                            sub_403010()
                                            noreturn
                                        
                                        sub_404280(edi_17, 1, arg1[-0x10], &arg1[-0x6b])
                                        sub_48c290(entry_ebx, arg1[-0x6b], arg1[-0xb], &arg1[-0x6a], 0, 
                                            0, eax_1443 - 0xf, var_1c_44, 0f)
                                    
                                    int32_t temp447_1 = arg1[-0x11]
                                    arg1[-0x11] += 1
                                    
                                    if (add_overflow(temp447_1, 1))
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t eax_1467 = sub_404078(arg1[-0x10])
                                    
                                    if (add_overflow(eax_1467, neg.d(edi_17)))
                                        sub_403010()
                                        noreturn
                                    
                                    if (add_overflow(edi_17, 1))
                                        sub_403010()
                                        noreturn
                                    
                                    sub_404280(eax_1467 - edi_17, edi_17 + 1, arg1[-0x10], &arg1[-0x10])
                                    
                                    if (sub_404078(arg1[-0x10]) s<= 0)
                                        break
                            
                            *(arg1[-0x26] + 0x60) = arg1[-0x11]
                        
                        if (*arg1[-0x26] == 0x11 && *(arg1[-0x26] + 0xee) s< 0)
                            void* edi_18 = arg1[-0x26] + 8
                            __builtin_strncpy(edi_18, "\t#HL", 4)
                            int32_t* edi_19 = edi_18 + 4
                            void* const esi_4 = "_Image"
                            *edi_19 = *esi_4
                            edi_19[1].w = *(esi_4 + 4)
                            arg1[-0xd] = *(arg1[-0x26] + 0x64)
                            int32_t eax_1477 = arg1[-3]
                            
                            if (add_overflow(eax_1477, 3))
                                sub_403010()
                                noreturn
                            
                            if (eax_1477 + 2 u> 0x75)
                                sub_403008()
                                noreturn
                            
                            bool o_288 = unimplemented  {imul eax, eax, 0x23}
                            
                            if (o_288)
                                sub_403010()
                                noreturn
                            
                            arg1[-0xb] = sx.d(*(arg1[-0x24] + (eax_1477 + 3) * 0x118 - 0xa2))
                            int32_t eax_1483 = arg1[-6]
                            
                            if (add_overflow(eax_1483, 2))
                                sub_403010()
                                noreturn
                            
                            int32_t eax_1486 = *(arg1[-0x26] + 0x5c)
                            
                            if (add_overflow(eax_1486, 0x14))
                                sub_403010()
                                noreturn
                            
                            arg1[-0x29] = eax_1486 + 0x14
                            unimplemented  {fild st0, dword [ebp-0xa4]}
                            unimplemented  {fmul st0, dword [eax+0x68]}
                            int32_t eax_1488
                            int32_t edx_368
                            eax_1488, edx_368 = sub_402b4c(st0)
                            
                            if (eax_1488 s>> 0x1f != edx_368)
                                sub_403008()
                                noreturn
                            
                            int32_t eax_1491 = arg1[-0xd]
                            int32_t eax_1492 = arg1[-0xb]
                            int32_t eax_1494 = sx.d(*(arg1[-0x26] + 0x74))
                            
                            if (add_overflow(eax_1494, 0xffffffff))
                                sub_403010()
                                noreturn
                            
                            arg1[-0x5a] = eax_1494 - 1
                            unimplemented  {fild st0, dword [ebp-0x168]}
                            unimplemented  {fild st0, word [eax+0xe4]}
                            unimplemented  {fdivp st1, st0}
                            unimplemented  {fdivp st1, st0}
                            float var_14_33 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            unimplemented  {fild st0, word [eax+0x74]}
                            unimplemented  {fild st0, word [eax+0xe4]}
                            unimplemented  {fdivp st1, st0}
                            unimplemented  {fdivp st1, st0}
                            float var_18_14 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            int32_t var_1c_46 = *(arg1[-0x26] + 0x110)
                            unimplemented  {fld st0, dword [0x48ac78]}
                            unimplemented  {fsub st0, dword [eax+0x68]}
                            unimplemented  {fild st0, dword [eax+0x5c]}
                            unimplemented  {fmulp st1, st0}
                            unimplemented  {fmulp st1, st0}
                            unimplemented  {fdiv st0, dword [0x48abbc]}
                            int32_t eax_1497
                            int32_t edx_369
                            eax_1497, edx_369 = sub_402b4c(st0)
                            int32_t eax_1498 = arg1[-5]
                            
                            if (add_overflow(eax_1498, 0xa))
                                sub_403010()
                                noreturn
                            
                            int32_t eax_1500
                            int32_t edx_370
                            edx_370:eax_1500 = sx.q(eax_1498 + 0xa)
                            int32_t eax_1501 = eax_1500 + eax_1497
                            bool o_293 = unimplemented  {adc edx, dword [esp+0x4]}
                            
                            if (o_293)
                                sub_403010()
                                noreturn
                            
                            if (eax_1501 s>> 0x1f
                                    != adc.d(edx_370, edx_369, eax_1500 + eax_1497 u< eax_1500))
                                sub_403008()
                                noreturn
                            
                            int32_t edx_372 = sx.d(*(arg1[-0x26] + 0xee))
                            
                            if (neg.d(edx_372) == 0x80000000)
                                sub_403010()
                                noreturn
                            
                            sub_482da8(eax_1501, neg.d(edx_372), entry_ebx, var_1c_46, var_18_14, 
                                var_14_33, eax_1492, eax_1491, eax_1488, eax_1483 + 2)
                        else if (*arg1[-0x26] == 0x11 && *(arg1[-0x26] + 0xee) s> 0)
                            arg1[-0xd] = *(arg1[-0x26] + 0x64)
                            arg1[-0xb] = sx.d(*(arg1[-0x26] + 0x56))
                            int32_t eax_1512 = arg1[-6]
                            int32_t eax_1513 = eax_1512 - arg1[-0xd]
                            
                            if (add_overflow(eax_1512, neg.d(arg1[-0xd])))
                                sub_403010()
                                noreturn
                            
                            if (add_overflow(eax_1513, 0xfffffff6))
                                sub_403010()
                                noreturn
                            
                            int32_t eax_1516 = *(arg1[-0x26] + 0x5c)
                            
                            if (add_overflow(eax_1516, 0x14))
                                sub_403010()
                                noreturn
                            
                            arg1[-0x29] = eax_1516 + 0x14
                            unimplemented  {fild st0, dword [ebp-0xa4]}
                            unimplemented  {fmul st0, dword [eax+0x68]}
                            int32_t eax_1518
                            int32_t edx_374
                            eax_1518, edx_374 = sub_402b4c(st0)
                            
                            if (eax_1518 s>> 0x1f != edx_374)
                                sub_403008()
                                noreturn
                            
                            int32_t eax_1521 = arg1[-0xd]
                            int32_t eax_1522 = arg1[-0xb]
                            int32_t eax_1524 = sx.d(*(arg1[-0x26] + 0x74))
                            
                            if (add_overflow(eax_1524, 0xffffffff))
                                sub_403010()
                                noreturn
                            
                            arg1[-0x5a] = eax_1524 - 1
                            unimplemented  {fild st0, dword [ebp-0x168]}
                            unimplemented  {fild st0, word [eax+0xe4]}
                            unimplemented  {fdivp st1, st0}
                            unimplemented  {fdivp st1, st0}
                            float var_14_34 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            unimplemented  {fild st0, word [eax+0x74]}
                            unimplemented  {fild st0, word [eax+0xe4]}
                            unimplemented  {fdivp st1, st0}
                            unimplemented  {fdivp st1, st0}
                            float var_18_15 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            int32_t var_1c_47 = *(arg1[-0x26] + 0x110)
                            unimplemented  {fld st0, dword [0x48ac78]}
                            unimplemented  {fsub st0, dword [eax+0x68]}
                            unimplemented  {fild st0, dword [eax+0x5c]}
                            unimplemented  {fmulp st1, st0}
                            unimplemented  {fmulp st1, st0}
                            unimplemented  {fdiv st0, dword [0x48abbc]}
                            int32_t eax_1527
                            int32_t edx_375
                            eax_1527, edx_375 = sub_402b4c(st0)
                            int32_t eax_1528 = arg1[-5]
                            
                            if (add_overflow(eax_1528, 0xa))
                                sub_403010()
                                noreturn
                            
                            int32_t eax_1530
                            int32_t edx_376
                            edx_376:eax_1530 = sx.q(eax_1528 + 0xa)
                            int32_t eax_1531 = eax_1530 + eax_1527
                            bool o_300 = unimplemented  {adc edx, dword [esp+0x4]}
                            
                            if (o_300)
                                sub_403010()
                                noreturn
                            
                            if (eax_1531 s>> 0x1f
                                    != adc.d(edx_376, edx_375, eax_1530 + eax_1527 u< eax_1530))
                                sub_403008()
                                noreturn
                            
                            sub_482da8(eax_1531, sx.d(*(arg1[-0x26] + 0xee)), entry_ebx, var_1c_47, 
                                var_18_15, var_14_34, eax_1522, eax_1521, eax_1518, eax_1513 - 0xa)
                        
                        char* eax_1536
                        eax_1536.b = *arg1[-0x26]
                        eax_1536.b -= 0xd
                        char temp269_1 = eax_1536.b
                        eax_1536.b -= 3
                        
                        if (temp269_1 u>= 3)
                            char temp275_1 = eax_1536.b
                            eax_1536.b -= 1
                            
                            if (temp275_1 != 1)
                                continue
                        
                        if (*(arg1[-0x26] + 0xee) s< 0 && *arg1[-0x26] == 0x11)
                            continue
                        
                        if (*arg1[-0x26] == 0x11)
                            entry_ebx, arg1 = sub_469d58(entry_ebx, arg1[-0x26] + 8, 0x19, 
                                &arg1[-0xad], sx.d(*(arg1[-0x26] + 0x74)), arg1[-3], arg2)
                            arg1[-0xc] = *(arg1[-0x26] + 0x5c)
                            
                            if (*(arg1[-0x26] + 0x56) != 2)
                            label_487bdd:
                                int32_t eax_1561 = arg1[-0xc]
                                
                                if (add_overflow(eax_1561, 0xffffffea))
                                    sub_403010()
                                    noreturn
                                
                                if (add_overflow(eax_1561 - 0x16, 0xfffffff8))
                                    sub_403010()
                                    noreturn
                                
                                int32_t ecx_140 = arg1[-5]
                                
                                if (add_overflow(ecx_140, 0x20))
                                    sub_403010()
                                    noreturn
                                
                                if (add_overflow(ecx_140 + 0x20, 4))
                                    sub_403010()
                                    noreturn
                                
                                sub_48156c(ecx_140 + 0x24, 0xffffffff, entry_ebx, 0x3f800000, 
                                    *(arg1[-0x26] + 0x110), 0, *(arg1[-0x26] + 0x68), 0f, 0, 0, 0x19, 
                                    eax_1561 - 0x1e, arg1[-6])
                            else
                                bool o_301 = unimplemented  {imul eax, esi, 0x1038}
                                
                                if (o_301)
                                    sub_403010()
                                    noreturn
                                
                                int32_t edx_381 = arg1[-3]
                                
                                if (add_overflow(edx_381, 3))
                                    sub_403010()
                                    noreturn
                                
                                if (sx.d(*(*(entry_ebx + 0xab0) + arg2 * 0x81c0 + 0x8130))
                                        s< edx_381 + 3)
                                    goto label_487bdd
                                
                                bool o_303 = unimplemented  {imul eax, esi, 0x1038}
                                
                                if (o_303)
                                    sub_403010()
                                    noreturn
                                
                                int32_t edx_384 = arg1[-3]
                                
                                if (add_overflow(edx_384, 3))
                                    sub_403010()
                                    noreturn
                                
                                if (edx_384 + 2 u> 0x75)
                                    sub_403008()
                                    noreturn
                                
                                bool o_305 = unimplemented  {imul edx, edx, 0x23}
                                
                                if (o_305)
                                    sub_403010()
                                    noreturn
                                
                                if (*(*(entry_ebx + 0xab0) + arg2 * 0x81c0 + (edx_384 + 3) * 0x118
                                        - 0xa2) != 2)
                                    goto label_487bdd
                                
                                int32_t eax_1554 = arg1[-0xc]
                                
                                if (add_overflow(eax_1554, 0xffffffea))
                                    sub_403010()
                                    noreturn
                                
                                if (add_overflow(eax_1554 - 0x16, 0xfffffff8))
                                    sub_403010()
                                    noreturn
                                
                                int32_t ecx_137 = arg1[-5]
                                
                                if (add_overflow(ecx_137, 0x20))
                                    sub_403010()
                                    noreturn
                                
                                if (add_overflow(ecx_137 + 0x20, 4))
                                    sub_403010()
                                    noreturn
                                
                                sub_48156c(ecx_137 + 0x24, 0xffffffff, entry_ebx, 0x3f800000, 
                                    *(arg1[-0x26] + 0x110), 0, *(arg1[-0x26] + 0x68), 0f, 0, 2, 0x19, 
                                    eax_1554 - 0x1e, arg1[-6])
                        else if (*arg1[-0x26] != 0xe)
                            arg1[-0xc] = *(arg1[-0x26] + 0x5c)
                            *(arg1[-0x26] + 0xec)
                            int32_t eax_1571 = *(arg1[-0x26] + 0x5c)
                            
                            if (add_overflow(eax_1571, 0x1c))
                                sub_403010()
                                noreturn
                            
                            if (add_overflow(eax_1571 + 0x1c, 6))
                                sub_403010()
                                noreturn
                            
                            arg1[-0xc] = eax_1571 + 0x22
                            
                            if (*(arg1[-0x26] + 6) != 0 && arg2 != *(entry_ebx + 0x8a0))
                                *(arg1[-0x24] + 0x8139)
                            
                            arg1[-0xb] = 0
                            int32_t eax_1577 = arg1[-0xc]
                            
                            if (add_overflow(eax_1577, 0xfffffffb))
                                sub_403010()
                                noreturn
                            
                            unimplemented  {fild st0, dword [ebp-0x2c]}
                            float var_18_16 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            sub_48156c(arg1[-5], 0xffffffff, entry_ebx, 0x3f800000, 
                                *(arg1[-0x26] + 0x110), 0, 0f, var_18_16, 0, 2, *(arg1[-0x26] + 0x60), 
                                eax_1577 - 5, arg1[-6])
                        
                        if (*arg1[-0x26] == 0xf)
                            arg1[-0x19] = 0
                            arg1[-0x1a] = 0
                            arg3 = 0
                            arg1[-0x11] = 0
                            arg1[-0x15] = 0
                            bool o_317 = unimplemented  {imul edx}
                            
                            if (o_317)
                                sub_403010()
                                noreturn
                            
                            arg1[-0x29] = sx.d(*(arg1[-0x26] + 0x74)) * sx.d(*(arg1[-0x26] + 0x7e))
                            unimplemented  {fild st0, dword [ebp-0xa4]}
                            int32_t eax_1587
                            int32_t edx_392
                            eax_1587, edx_392 = sub_402b4c(st0)
                            bool o_318 = unimplemented  {adc edx, 0x0}
                            
                            if (o_318)
                                sub_403010()
                                noreturn
                            
                            if ((eax_1587 + 1) s>> 0x1f != adc.d(edx_392, 0, eax_1587 u>= 0xffffffff))
                                sub_403008()
                                noreturn
                            
                            int32_t edx_395 = sx.d(*(arg1[-0x26] + 0xe4))
                            
                            if (edx_395 s>= eax_1587 + 1)
                                arg1[-0x27] = edx_395 - (eax_1587 + 1) + 1
                                arg1[-7] = eax_1587 + 1
                                break
                        else if (*arg1[-0x26] == 0xe)
                            bool o_74 = unimplemented  {imul eax, eax, 0x18}
                            
                            if (o_74)
                                sub_403010()
                                noreturn
                            
                            arg1[-0x29] = sx.d(*(arg1[-0x26] + 0xec)) * 0x18
                            unimplemented  {fild st0, dword [ebp-0xa4]}
                            arg1[-0x21] = fconvert.s(unimplemented  {fstp dword [ebp-0x84], st0})
                            unimplemented  {fstp dword [ebp-0x84], st0}
                            
                            if (*(arg1[-0x26] + 0x56) != 2)
                                unimplemented  {fld st0, dword [0x48ac78]}
                                unimplemented  {fdiv st0, dword [ebx+0x11cc]}
                                unimplemented  {fmul st0, dword [0x48acbc]}
                                unimplemented  {fadd dword [eax+0x80]}
                                *(arg1[-0x26] + 0x80) =
                                    fconvert.s(unimplemented  {fstp dword [eax+0x80], st0})
                                unimplemented  {fstp dword [eax+0x80], st0}
                            
                            unimplemented  {fld st0, dword [eax+0x80]}
                            long double temp347_1 = fconvert.t(arg1[-0x21])
                            unimplemented  {fcomp st0, dword [ebp-0x84]} f- temp347_1
                            bool c0_1 = unimplemented  {fcomp st0, dword [ebp-0x84]} f< temp347_1
                            bool c2_1 =
                                is_unordered.t(unimplemented  {fcomp st0, dword [ebp-0x84]}, temp347_1)
                            bool c3_1 = unimplemented  {fcomp st0, dword [ebp-0x84]} f== temp347_1
                            unimplemented  {fcomp st0, dword [ebp-0x84]}
                            int16_t eax_202 = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa
                                | (c3_1 ? 1 : 0) << 0xe | (top & 7) << 0xb
                            
                            if (not(test_bit(eax_202:1.b, 6)) && not(test_bit(eax_202:1.b, 0)))
                                *(arg1[-0x26] + 0x80) = 0
                            
                            unimplemented  {fld st0, dword [eax+0x80]}
                            long double temp357_1 = fconvert.t(0f)
                            unimplemented  {fcomp st0, dword [0x48acc0]} f- temp357_1
                            bool c0_2 = unimplemented  {fcomp st0, dword [0x48acc0]} f< temp357_1
                            bool c2_2 =
                                is_unordered.t(unimplemented  {fcomp st0, dword [0x48acc0]}, temp357_1)
                            bool c3_2 = unimplemented  {fcomp st0, dword [0x48acc0]} f== temp357_1
                            unimplemented  {fcomp st0, dword [0x48acc0]}
                            top = top
                            
                            if (test_bit(
                                    ((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                                        | (top & 7) << 0xb):1.b, 
                                    0))
                                unimplemented  {fld st0, dword [eax+0x80]}
                                unimplemented  {fadd dword [ebp-0x84]}
                                *(arg1[-0x26] + 0x80) =
                                    fconvert.s(unimplemented  {fstp dword [eax+0x80], st0})
                                unimplemented  {fstp dword [eax+0x80], st0}
                            
                            int32_t eax_207 = sx.d(*(arg1[-0x26] + 0xec))
                            int32_t edx_58 = sx.d(*(arg1[-0x26] + 0x74))
                            int32_t eax_208 = eax_207 - edx_58
                            
                            if (add_overflow(eax_207, neg.d(edx_58)))
                                sub_403010()
                                noreturn
                            
                            if (eax_208 s> 0)
                                arg1[-0x27] = eax_208
                                arg1[-7] = 1
                                int32_t i_1
                                
                                do
                                    int32_t eax_209 = arg1[-7]
                                    
                                    if (add_overflow(eax_209, 0xffffffff))
                                        sub_403010()
                                        noreturn
                                    
                                    bool o_77 = unimplemented  {imul eax, eax, 0x18}
                                    
                                    if (o_77)
                                        sub_403010()
                                        noreturn
                                    
                                    arg1[-0x29] = (eax_209 - 1) * 0x18
                                    unimplemented  {fild st0, dword [ebp-0xa4]}
                                    unimplemented  {fmul st0, dword [eax+0x84]}
                                    unimplemented  {fld st0, tword [0x48acc4]}
                                    unimplemented  {fmulp st1, st0}
                                    unimplemented  {fmulp st1, st0}
                                    unimplemented  {fild st0, dword [ebp-0x18]}
                                    unimplemented  {faddp st1, st0}
                                    unimplemented  {faddp st1, st0}
                                    unimplemented  {fadd dword [0x48acd0]}
                                    unimplemented  {fsub st0, dword [eax+0x80]}
                                    arg1[-0x20] =
                                        fconvert.s(unimplemented  {fstp dword [ebp-0x80], st0})
                                    unimplemented  {fstp dword [ebp-0x80], st0}
                                    unimplemented  {fild st0, dword [ebp-0x18]}
                                    unimplemented  {fsubr st0, dword [ebp-0x80]}
                                    long double temp428_1 = fconvert.t(0f)
                                    unimplemented  {fcomp st0, dword [0x48acc0]} f- temp428_1
                                    bool c0_3 =
                                        unimplemented  {fcomp st0, dword [0x48acc0]} f< temp428_1
                                    bool c2_3 = is_unordered.t(
                                        unimplemented  {fcomp st0, dword [0x48acc0]}, temp428_1)
                                    bool c3_3 =
                                        unimplemented  {fcomp st0, dword [0x48acc0]} f== temp428_1
                                    unimplemented  {fcomp st0, dword [0x48acc0]}
                                    
                                    if (test_bit(
                                            ((c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa
                                                | (c3_3 ? 1 : 0) << 0xe | (top & 7) << 0xb):1.b, 
                                            0))
                                        unimplemented  {fld st0, dword [ebp-0x80]}
                                        unimplemented  {fadd dword [ebp-0x84]}
                                        arg1[-0x20] =
                                            fconvert.s(unimplemented  {fstp dword [ebp-0x80], st0})
                                        unimplemented  {fstp dword [ebp-0x80], st0}
                                    
                                    arg1[-0x22] = *(arg1[-0x26] + 0x110)
                                    unimplemented  {fild st0, dword [ebp-0x18]}
                                    unimplemented  {fsubr st0, dword [ebp-0x80]}
                                    long double temp432_1 = fconvert.t(0f)
                                    unimplemented  {fcomp st0, dword [0x48acc0]} f- temp432_1
                                    bool c0_4 =
                                        unimplemented  {fcomp st0, dword [0x48acc0]} f< temp432_1
                                    bool c2_4 = is_unordered.t(
                                        unimplemented  {fcomp st0, dword [0x48acc0]}, temp432_1)
                                    bool c3_4 =
                                        unimplemented  {fcomp st0, dword [0x48acc0]} f== temp432_1
                                    unimplemented  {fcomp st0, dword [0x48acc0]}
                                    top = top
                                    int32_t eax_214
                                    eax_214.w = (c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa
                                        | (c3_4 ? 1 : 0) << 0xe | (top & 7) << 0xb
                                    
                                    if (not(test_bit(eax_214:1.b, 6)) && not(test_bit(eax_214:1.b, 0)))
                                        unimplemented  {fild st0, dword [ebp-0x18]}
                                        unimplemented  {fsubr st0, dword [ebp-0x80]}
                                        long double temp438_1 = fconvert.t(100f)
                                        unimplemented  {fcomp st0, dword [0x48acd4]} f- temp438_1
                                        bool c0_5 =
                                            unimplemented  {fcomp st0, dword [0x48acd4]} f< temp438_1
                                        bool c2_5 = is_unordered.t(
                                            unimplemented  {fcomp st0, dword [0x48acd4]}, temp438_1)
                                        bool c3_5 =
                                            unimplemented  {fcomp st0, dword [0x48acd4]} f== temp438_1
                                        unimplemented  {fcomp st0, dword [0x48acd4]}
                                        eax_214.w = (c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa
                                            | (c3_5 ? 1 : 0) << 0xe | (top & 7) << 0xb
                                        int16_t top_51
                                        
                                        if (not(test_bit(eax_214:1.b, 0)))
                                            int32_t eax_216 = *(arg1[-0x26] + 0x60)
                                            
                                            if (add_overflow(eax_216, 0xffffff9c))
                                                sub_403010()
                                                noreturn
                                            
                                            arg1[-0x29] = eax_216 - 0x64
                                            unimplemented  {fild st0, dword [ebp-0xa4]}
                                            long double temp444_1 = fconvert.t(arg1[-0x20])
                                            unimplemented  {fcomp st0, dword [ebp-0x80]} f- temp444_1
                                            bool c0_6 = unimplemented  {fcomp st0, dword [ebp-0x80]}
                                                f< temp444_1
                                            bool c2_6 = is_unordered.t(
                                                unimplemented  {fcomp st0, dword [ebp-0x80]}, temp444_1)
                                            bool c3_6 = unimplemented  {fcomp st0, dword [ebp-0x80]}
                                                f== temp444_1
                                            unimplemented  {fcomp st0, dword [ebp-0x80]}
                                            top_51 = top
                                            int32_t eax_217
                                            eax_217.w = (c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa
                                                | (c3_6 ? 1 : 0) << 0xe | (top_51 & 7) << 0xb
                                            
                                            if (test_bit(eax_217:1.b, 6) || test_bit(eax_217:1.b, 0))
                                                unimplemented  {fild st0, dword [eax+0x60]}
                                                unimplemented  {fsub st0, dword [ebp-0x80]}
                                                unimplemented  {fdiv st0, dword [0x48acd8]}
                                                unimplemented  {fdiv st0, dword [0x48abbc]}
                                                unimplemented  {fmul st0, dword [eax+0x110]}
                                                arg1[-0x22] = fconvert.s(unimplemented  {fstp dword [ebp
                                                    -0x88], st0})
                                                unimplemented  {fstp dword [ebp-0x88], st0}
                                        else
                                            unimplemented  {fild st0, dword [ebp-0x18]}
                                            unimplemented  {fsubr st0, dword [ebp-0x80]}
                                            unimplemented  {fdiv st0, dword [0x48acd8]}
                                            unimplemented  {fdiv st0, dword [0x48abbc]}
                                            unimplemented  {fmul st0, dword [eax+0x110]}
                                            arg1[-0x22] =
                                                fconvert.s(unimplemented  {fstp dword [ebp-0x88], st0})
                                            unimplemented  {fstp dword [ebp-0x88], st0}
                                            top_51 = top
                                        
                                        int32_t eax_220 = sx.d(*(arg1[-0x26] + 0x74))
                                        
                                        if (add_overflow(eax_220, arg1[-7]))
                                            sub_403010()
                                            noreturn
                                        
                                        int32_t ecx_17
                                        void* ebp_1
                                        ecx_17, entry_ebx, ebp_1 = sub_469d58(entry_ebx, 
                                            entry_ebx + 0xac8, 0xff, &arg1[-0xad], eax_220 + arg1[-7], 
                                            arg1[-3], arg2)
                                        sub_40401c(ecx_17, ebp_1 - 0x2b4)
                                        void** eax_226
                                        eax_226, arg1 = sub_479f44(nullptr, *(ebp_1 - 0x360))
                                        sub_402e28(entry_ebx + 0xac8, eax_226)
                                        arg1[-0x13] = arg1[-5]
                                        arg1[-0x12] = *(arg1[-0x26] + 0x5c)
                                        sub_40287c(1, 1, entry_ebx + 0xac8, &arg1[-0xad])
                                        int32_t ecx_18
                                        ecx_18.b = arg1[-0xad].b
                                        int32_t eax_234
                                        int32_t ecx_20
                                        eax_234, ecx_20 = sub_402c90(&arg1[-0xad], 0x48acdc, ecx_18 + 1)
                                        
                                        if (ecx_18 == 0xffffffff)
                                            int32_t ecx_21 = sub_4028c0(entry_ebx + 0xac8, 1, 1)
                                            
                                            if (arg1[-7] != 1)
                                                sub_40401c(ecx_21, entry_ebx + 0xac8)
                                                ecx_20, arg1 = sub_46fd7c(entry_ebx, arg1[-0xda])
                                                unimplemented  {fmul st0, dword [0x48ac20]}
                                                unimplemented  {fmul st0, dword [eax+0x84]}
                                                unimplemented  {fild st0, dword [ebp-0x48]}
                                                unimplemented  {fsubrp st1, st0}
                                                unimplemented  {fsubrp st1, st0}
                                                unimplemented  {fdiv st0, dword [0x48abbc]}
                                                int32_t eax_245
                                                int32_t edx_70
                                                eax_245, edx_70 = sub_402b4c(st0)
                                                top_51 += 1
                                                int32_t eax_247
                                                int32_t edx_71
                                                edx_71:eax_247 = sx.q(arg1[-0x13])
                                                int32_t eax_248 = eax_247 + eax_245
                                                bool o_81 = unimplemented  {adc edx, dword [esp+0x4]}
                                                
                                                if (o_81)
                                                    sub_403010()
                                                    noreturn
                                                
                                                if (eax_248 s>> 0x1f != adc.d(edx_71, edx_70, 
                                                        eax_247 + eax_245 u< eax_247))
                                                    sub_403008()
                                                    noreturn
                                                
                                                arg1[-0x13] = eax_248
                                            else
                                                sub_40401c(ecx_21, entry_ebx + 0xac8)
                                                ecx_20, arg1 = sub_46fd7c(entry_ebx, arg1[-0xd9])
                                                unimplemented  {fmul st0, dword [0x48ac20]}
                                                unimplemented  {fmul st0, dword [0x48ac68]}
                                                unimplemented  {fmul st0, dword [eax+0x84]}
                                                unimplemented  {fild st0, dword [ebp-0x48]}
                                                unimplemented  {fsubrp st1, st0}
                                                unimplemented  {fsubrp st1, st0}
                                                unimplemented  {fdiv st0, dword [0x48abbc]}
                                                int32_t eax_238
                                                int32_t edx_65
                                                eax_238, edx_65 = sub_402b4c(st0)
                                                top_51 += 1
                                                int32_t eax_240
                                                int32_t edx_66
                                                edx_66:eax_240 = sx.q(arg1[-0x13])
                                                int32_t eax_241 = eax_240 + eax_238
                                                bool o_80 = unimplemented  {adc edx, dword [esp+0x4]}
                                                
                                                if (o_80)
                                                    sub_403010()
                                                    noreturn
                                                
                                                if (eax_241 s>> 0x1f != adc.d(edx_66, edx_65, 
                                                        eax_240 + eax_238 u< eax_240))
                                                    sub_403008()
                                                    noreturn
                                                
                                                arg1[-0x13] = eax_241
                                        
                                        unimplemented  {fld st0, dword [ebp-0x88]}
                                        long double temp458_1 = fconvert.t(0f)
                                        unimplemented  {fcomp st0, dword [0x48acc0]} f- temp458_1
                                        bool c0_7 =
                                            unimplemented  {fcomp st0, dword [0x48acc0]} f< temp458_1
                                        bool c2_7 = is_unordered.t(
                                            unimplemented  {fcomp st0, dword [0x48acc0]}, temp458_1)
                                        bool c3_7 =
                                            unimplemented  {fcomp st0, dword [0x48acc0]} f== temp458_1
                                        unimplemented  {fcomp st0, dword [0x48acc0]}
                                        top = top_51
                                        eax_234.w = (c0_7 ? 1 : 0) << 8 | (c2_7 ? 1 : 0) << 0xa
                                            | (c3_7 ? 1 : 0) << 0xe | (top & 7) << 0xb
                                        
                                        if (not(test_bit(eax_234:1.b, 6))
                                                && not(test_bit(eax_234:1.b, 0)))
                                            int16_t top_64
                                            
                                            if (*(entry_ebx + 0x10c8) != 3)
                                                int32_t eax_250 = arg1[-0x13]
                                                
                                                if (add_overflow(eax_250, 0xfffffffb))
                                                    sub_403010()
                                                    noreturn
                                                
                                                arg1[-0x29] = eax_250 - 5
                                                unimplemented  {fild st0, dword [ebp-0xa4]}
                                                arg1[-0x16] = fconvert.s(unimplemented  {fstp dword [ebp
                                                    -0x58], st0})
                                                unimplemented  {fstp dword [ebp-0x58], st0}
                                                top_64 = top
                                            else
                                                unimplemented  {fild st0, word [eax+0x4]}
                                                unimplemented  {fadd dword [ebp-0x80]}
                                                unimplemented  {fdiv st0, dword [0x48aba8]}
                                                unimplemented  {fld st0, tword [0x48abac]}
                                                unimplemented  {fmulp st1, st0}
                                                unimplemented  {fmulp st1, st0}
                                                st0 = sub_402b3c(st0)
                                                unimplemented  {call 0x402b3c}
                                                unimplemented  {fmul st0, dword [0x48abb8]}
                                                unimplemented  {fild st0, dword [ebp-0x4c]}
                                                unimplemented  {fsubrp st1, st0}
                                                unimplemented  {fsubrp st1, st0}
                                                unimplemented  {fadd dword [0x48ace0]}
                                                arg1[-0x16] = fconvert.s(unimplemented  {fstp dword [ebp
                                                    -0x58], st0})
                                                unimplemented  {fstp dword [ebp-0x58], st0}
                                                top_64 = top
                                            
                                            if (arg1[-7] != 1)
                                                int32_t var_4_20 = *(arg1[-0x26] + 0x84)
                                                unimplemented  {fld st0, dword [ebp-0x58]}
                                                unimplemented  {fadd dword [0x48ace4]}
                                                float var_8_14 =
                                                    fconvert.s(unimplemented  {fstp dword [esp], st0})
                                                unimplemented  {fstp dword [esp], st0}
                                                top = top_64
                                                int32_t var_c_12 = arg1[-0x20]
                                                int32_t var_10_12 = 0
                                                int32_t var_14_10 = 9
                                                float var_1c_10 = arg1[-0x22]
                                                sub_40401c(ecx_20, entry_ebx + 0xac8)
                                                sub_48c290(entry_ebx, arg1[-0xde], arg1[-0xb], 
                                                    &arg1[-0xdd], 0, 0, 0f, var_1c_10, 0f)
                                            else
                                                unimplemented  {fld st0, dword [eax+0x84]}
                                                unimplemented  {fmul st0, dword [0x48ac68]}
                                                float var_4_19 =
                                                    fconvert.s(unimplemented  {fstp dword [esp], st0})
                                                unimplemented  {fstp dword [esp], st0}
                                                unimplemented  {fld st0, dword [ebp-0x58]}
                                                unimplemented  {fadd dword [0x48ace4]}
                                                float var_8_13 =
                                                    fconvert.s(unimplemented  {fstp dword [esp], st0})
                                                unimplemented  {fstp dword [esp], st0}
                                                top = top_64
                                                int32_t var_c_11 = arg1[-0x20]
                                                int32_t var_10_11 = 0
                                                int32_t var_14_9 = 9
                                                float var_1c_9 = arg1[-0x22]
                                                sub_40401c(ecx_20, entry_ebx + 0xac8)
                                                sub_48c290(entry_ebx, arg1[-0xdc], arg1[-0xb], 
                                                    &arg1[-0xdb], 0, 0, 0f, var_1c_9, 0f)
                                    
                                    arg1[-7] += 1
                                    i_1 = arg1[-0x27]
                                    arg1[-0x27] -= 1
                                while (i_1 != 1)
                        else if (*(arg1[-0x26] + 0x7e) s> 1)
                            int32_t eax_261 = sx.d(*(arg1[-0x26] + 0xec))
                            int32_t edx_78 = sx.d(*(arg1[-0x26] + 0x74))
                            int32_t eax_262 = eax_261 - edx_78
                            
                            if (add_overflow(eax_261, neg.d(edx_78)))
                                sub_403010()
                                noreturn
                            
                            if (eax_262 s> 0)
                                arg1[-0x27] = eax_262
                                arg1[-7] = 1
                                int32_t i_2
                                
                                do
                                    arg1[-7]
                                    bool o_84 = unimplemented  {imul dword [ebp-0x1c]}
                                    
                                    if (o_84)
                                        sub_403010()
                                        noreturn
                                    
                                    if (sx.d(*(arg1[-0x26] + 0x5a)) * arg1[-7] s< *(arg1[-0x26] + 0x60))
                                        int32_t eax_267 = sx.d(*(arg1[-0x26] + 0x7c))
                                        
                                        if (add_overflow(eax_267, 0xfffffffb))
                                            sub_403010()
                                            noreturn
                                        
                                        int32_t temp0_2 =
                                            divs.dp.d(sx.q(eax_267 - 5), sx.d(*(arg1[-0x26] + 0x5a)))
                                        
                                        if (add_overflow(temp0_2, 1))
                                            sub_403010()
                                            noreturn
                                        
                                        if (temp0_2 + 1 != arg1[-7])
                                            arg1[-0xb] = 0
                                        else
                                            arg1[-0xb] = sx.d(*(arg1[-0x26] + 0x56))
                                        
                                        if (*(arg1[-0x26] + 6) == 0)
                                            arg1[-0xb] = 3
                                        
                                        int32_t eax_276 = sx.d(*(arg1[-0x26] + 0x72))
                                        int32_t edx_85 = sx.d(*(arg1[-0x26] + 0x74))
                                        
                                        if (add_overflow(eax_276, neg.d(edx_85)))
                                            sub_403010()
                                            noreturn
                                        
                                        if (eax_276 - edx_85 == arg1[-7]
                                                && *(arg1[-0x26] + 0x5a) != 0x13)
                                            int32_t eax_279 = arg1[-7]
                                            
                                            if (add_overflow(eax_279, 0xffffffff))
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t eax_281 =
                                                (eax_279 - 1) * sx.d(*(arg1[-0x26] + 0x5a))
                                            bool o_89 = unimplemented  {imul edx}
                                            
                                            if (o_89)
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t eax_282 = eax_281 + arg1[-6]
                                            
                                            if (add_overflow(eax_281, arg1[-6]))
                                                sub_403010()
                                                noreturn
                                            
                                            if (add_overflow(eax_282, 4))
                                                sub_403010()
                                                noreturn
                                            
                                            if (add_overflow(eax_282 + 4, 0xfffffffe))
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t eax_286 = *(arg1[-0x26] + 0x5c)
                                            
                                            if (add_overflow(eax_286, 0xfffffff8))
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t ecx_25 = arg1[-5]
                                            
                                            if (add_overflow(ecx_25, 2))
                                                sub_403010()
                                                noreturn
                                            
                                            sub_48156c(ecx_25 + 2, 0xfffffffd, entry_ebx, 0x3f800000, 
                                                *(arg1[-0x26] + 0x110), 1, *(arg1[-0x26] + 0x68), 0f, 
                                                0, arg1[-0xb], sx.d(*(arg1[-0x26] + 0x5a)), 
                                                eax_286 - 8, eax_282 + 2)
                                        
                                        int32_t eax_295 = sx.d(*(arg1[-0x26] + 0x7e))
                                        
                                        if (eax_295 s> 0)
                                            arg1[-0x28] = eax_295
                                            void* edi = 1
                                            int32_t j
                                            
                                            do
                                                if (edi s> 2)
                                                    arg1[-0xc] = 0x96
                                                else
                                                    arg1[-0xc] = 0xc8
                                                
                                                int32_t eax_296 = arg1[-5]
                                                
                                                if (add_overflow(eax_296, 4))
                                                    sub_403010()
                                                    noreturn
                                                
                                                if (add_overflow(edi, 0xffffffff))
                                                    sub_403010()
                                                    noreturn
                                                
                                                arg1[-0xc]
                                                int32_t edx_90 = (edi - 1) * arg1[-0xc]
                                                bool o_97 = unimplemented  {imul edx, dword [ebp-0x30]}
                                                
                                                if (o_97)
                                                    sub_403010()
                                                    noreturn
                                                
                                                if (add_overflow(eax_296 + 4, edx_90))
                                                    sub_403010()
                                                    noreturn
                                                
                                                arg1[-8] = eax_296 + 4 + edx_90
                                                
                                                if (edi s> 2)
                                                    int32_t var_4_23 = *(arg1[-0x26] + 0x84)
                                                    unimplemented  {fild st0, dword [ebp-0x20]}
                                                    float var_8_17 = fconvert.s(unimplemented  {fstp 
                                                        dword [esp], st0})
                                                    unimplemented  {fstp dword [esp], st0}
                                                    int32_t eax_322 = arg1[-7]
                                                    
                                                    if (add_overflow(eax_322, 0xffffffff))
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    int32_t eax_324 =
                                                        (eax_322 - 1) * sx.d(*(arg1[-0x26] + 0x5a))
                                                    bool o_106 = unimplemented  {imul edx}
                                                    
                                                    if (o_106)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    int32_t eax_325 = eax_324 + arg1[-6]
                                                    
                                                    if (add_overflow(eax_324, arg1[-6]))
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    if (add_overflow(eax_325, 5))
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    arg1[-0x29] = eax_325 + 5
                                                    unimplemented  {fild st0, dword [ebp-0xa4]}
                                                    float var_c_15 = fconvert.s(unimplemented  {fstp 
                                                        dword [esp], st0})
                                                    unimplemented  {fstp dword [esp], st0}
                                                    int32_t var_10_15 = *(arg1[-0x26] + 0x68)
                                                    int32_t var_14_12 = 2
                                                    float var_1c_13 = *(arg1[-0x26] + 0x110)
                                                    int32_t eax_329 = arg1[-8]
                                                    
                                                    if (add_overflow(eax_329, 0xd7))
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    int32_t eax_334 = sx.d(*(arg1[-0x26] + 0x74))
                                                    
                                                    if (add_overflow(eax_334, arg1[-7]))
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    int32_t ecx_31
                                                    void* ebp_3
                                                    ecx_31, entry_ebx, ebp_3 = sub_469d58(entry_ebx, 
                                                        entry_ebx + 0xac8, 0xff, &arg1[-0xad], 
                                                        eax_334 + arg1[-7], arg1[-3], arg2)
                                                    sub_40401c(ecx_31, ebp_3 - 0x2b4)
                                                    void** eax_340
                                                    int32_t ecx_33
                                                    eax_340, ecx_33, arg1 =
                                                        sub_479f44(edi, *(ebp_3 - 0x390))
                                                    sub_403fb0(ecx_33, eax_340)
                                                    sub_48c290(entry_ebx, arg1[-0xe3], arg1[-0xb], 
                                                        &arg1[-0xe2], &data_48acf0, 0, eax_329 + 0xd7, 
                                                        var_1c_13, 0f)
                                                else
                                                    int32_t var_4_22 = *(arg1[-0x26] + 0x84)
                                                    unimplemented  {fild st0, dword [ebp-0x20]}
                                                    float var_8_16 = fconvert.s(unimplemented  {fstp 
                                                        dword [esp], st0})
                                                    unimplemented  {fstp dword [esp], st0}
                                                    int32_t eax_300 = arg1[-7]
                                                    
                                                    if (add_overflow(eax_300, 0xffffffff))
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    int32_t eax_302 =
                                                        (eax_300 - 1) * sx.d(*(arg1[-0x26] + 0x5a))
                                                    bool o_100 = unimplemented  {imul edx}
                                                    
                                                    if (o_100)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    int32_t eax_303 = eax_302 + arg1[-6]
                                                    
                                                    if (add_overflow(eax_302, arg1[-6]))
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    if (add_overflow(eax_303, 5))
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    arg1[-0x29] = eax_303 + 5
                                                    unimplemented  {fild st0, dword [ebp-0xa4]}
                                                    float var_c_14 = fconvert.s(unimplemented  {fstp 
                                                        dword [esp], st0})
                                                    unimplemented  {fstp dword [esp], st0}
                                                    int32_t var_10_14 = *(arg1[-0x26] + 0x68)
                                                    int32_t var_14_11 = 2
                                                    float var_1c_12 = *(arg1[-0x26] + 0x110)
                                                    int32_t eax_307 = arg1[-8]
                                                    
                                                    if (add_overflow(eax_307, 0xbe))
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    int32_t eax_312 = sx.d(*(arg1[-0x26] + 0x74))
                                                    
                                                    if (add_overflow(eax_312, arg1[-7]))
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    int32_t ecx_27
                                                    void* ebp_2
                                                    ecx_27, entry_ebx, ebp_2 = sub_469d58(entry_ebx, 
                                                        entry_ebx + 0xac8, 0xff, &arg1[-0xad], 
                                                        eax_312 + arg1[-7], arg1[-3], arg2)
                                                    sub_40401c(ecx_27, ebp_2 - 0x2b4)
                                                    void** eax_318
                                                    int32_t ecx_29
                                                    eax_318, ecx_29, arg1 =
                                                        sub_479f44(edi, *(ebp_2 - 0x384))
                                                    sub_403fb0(ecx_29, eax_318)
                                                    sub_48c290(entry_ebx, arg1[-0xe0], arg1[-0xb], 
                                                        &arg1[-0xdf], &data_48acf0, 0, eax_307 + 0xbe, 
                                                        var_1c_12, 0f)
                                                
                                                edi += 1
                                                j = arg1[-0x28]
                                                arg1[-0x28] -= 1
                                            while (j != 1)
                                    
                                    arg1[-7] += 1
                                    i_2 = arg1[-0x27]
                                    arg1[-0x27] -= 1
                                while (i_2 != 1)
                        else if (*arg1[-0x26] != 0x11)
                            int32_t eax_345 = sx.d(*(arg1[-0x26] + 0xec))
                            int32_t edx_106 = sx.d(*(arg1[-0x26] + 0x74))
                            int32_t eax_346 = eax_345 - edx_106
                            
                            if (add_overflow(eax_345, neg.d(edx_106)))
                                sub_403010()
                                noreturn
                            
                            if (eax_346 s> 0)
                                arg1[-0x27] = eax_346
                                arg1[-7] = 1
                                int32_t i_3
                                
                                do
                                    arg1[-7]
                                    bool o_112 = unimplemented  {imul dword [ebp-0x1c]}
                                    
                                    if (o_112)
                                        sub_403010()
                                        noreturn
                                    
                                    if (sx.d(*(arg1[-0x26] + 0x5a)) * arg1[-7] s< *(arg1[-0x26] + 0x60))
                                        int32_t eax_351 = sx.d(*(arg1[-0x26] + 0x7c))
                                        
                                        if (add_overflow(eax_351, 0xfffffffb))
                                            sub_403010()
                                            noreturn
                                        
                                        int32_t temp0_3 =
                                            divs.dp.d(sx.q(eax_351 - 5), sx.d(*(arg1[-0x26] + 0x5a)))
                                        
                                        if (add_overflow(temp0_3, 1))
                                            sub_403010()
                                            noreturn
                                        
                                        if (temp0_3 + 1 != arg1[-7])
                                            arg1[-0xb] = 0
                                        else
                                            arg1[-0xb] = sx.d(*(arg1[-0x26] + 0x56))
                                        
                                        if (*(arg1[-0x26] + 6) == 0)
                                            arg1[-0xb] = 3
                                        
                                        int32_t eax_360 = sx.d(*(arg1[-0x26] + 0x72))
                                        int32_t edx_113 = sx.d(*(arg1[-0x26] + 0x74))
                                        
                                        if (add_overflow(eax_360, neg.d(edx_113)))
                                            sub_403010()
                                            noreturn
                                        
                                        if (eax_360 - edx_113 == arg1[-7]
                                                && *(arg1[-0x26] + 0x5a) != 0x13)
                                            int32_t eax_363 = arg1[-7]
                                            
                                            if (add_overflow(eax_363, 0xffffffff))
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t eax_365 =
                                                (eax_363 - 1) * sx.d(*(arg1[-0x26] + 0x5a))
                                            bool o_117 = unimplemented  {imul edx}
                                            
                                            if (o_117)
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t eax_366 = eax_365 + arg1[-6]
                                            
                                            if (add_overflow(eax_365, arg1[-6]))
                                                sub_403010()
                                                noreturn
                                            
                                            if (add_overflow(eax_366, 4))
                                                sub_403010()
                                                noreturn
                                            
                                            if (add_overflow(eax_366 + 4, 0xfffffffe))
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t eax_370 = *(arg1[-0x26] + 0x5c)
                                            
                                            if (add_overflow(eax_370, 0xfffffff8))
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t ecx_36 = arg1[-5]
                                            
                                            if (add_overflow(ecx_36, 2))
                                                sub_403010()
                                                noreturn
                                            
                                            sub_48156c(ecx_36 + 2, 0xfffffffd, entry_ebx, 0x3f800000, 
                                                *(arg1[-0x26] + 0x110), 1, *(arg1[-0x26] + 0x68), 0f, 
                                                0, arg1[-0xb], sx.d(*(arg1[-0x26] + 0x5a)), 
                                                eax_370 - 8, eax_366 + 2)
                                        
                                        if (arg1[-0x1f] == 0)
                                            int32_t var_4_27 = *(arg1[-0x26] + 0x84)
                                            int32_t eax_415 = arg1[-5]
                                            
                                            if (add_overflow(eax_415, 4))
                                                sub_403010()
                                                noreturn
                                            
                                            arg1[-0x29] = eax_415 + 4
                                            unimplemented  {fild st0, dword [ebp-0xa4]}
                                            float var_8_21 =
                                                fconvert.s(unimplemented  {fstp dword [esp], st0})
                                            unimplemented  {fstp dword [esp], st0}
                                            int32_t eax_417 = arg1[-7]
                                            
                                            if (add_overflow(eax_417, 0xffffffff))
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t eax_419 =
                                                (eax_417 - 1) * sx.d(*(arg1[-0x26] + 0x5a))
                                            bool o_133 = unimplemented  {imul edx}
                                            
                                            if (o_133)
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t eax_420 = eax_419 + arg1[-6]
                                            
                                            if (add_overflow(eax_419, arg1[-6]))
                                                sub_403010()
                                                noreturn
                                            
                                            if (add_overflow(eax_420, 5))
                                                sub_403010()
                                                noreturn
                                            
                                            arg1[-0x5a] = eax_420 + 5
                                            unimplemented  {fild st0, dword [ebp-0x168]}
                                            float var_c_19 =
                                                fconvert.s(unimplemented  {fstp dword [esp], st0})
                                            unimplemented  {fstp dword [esp], st0}
                                            int32_t var_10_19 = *(arg1[-0x26] + 0x68)
                                            int32_t var_14_14 = 2
                                            float var_1c_16 = *(arg1[-0x26] + 0x110)
                                            int32_t eax_427 = sx.d(*(arg1[-0x26] + 0x74))
                                            
                                            if (add_overflow(eax_427, arg1[-7]))
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t ecx_43
                                            void* ebp_7
                                            ecx_43, entry_ebx, ebp_7 = sub_469d58(entry_ebx, 
                                                entry_ebx + 0xac8, 0xff, &arg1[-0xad], 
                                                eax_427 + arg1[-7], arg1[-3], arg2)
                                            sub_40401c(ecx_43, ebp_7 - 0x2b4)
                                            void** eax_433
                                            int32_t ecx_44
                                            eax_433, ecx_44, arg1 =
                                                sub_479f44(nullptr, *(ebp_7 - 0x3b0))
                                            sub_403fb0(ecx_44, eax_433)
                                            sub_48c290(entry_ebx, arg1[-0xeb], arg1[-0xb], 
                                                &arg1[-0xea], 0, 0, 0f, var_1c_16, 0f)
                                        else
                                            if (add_overflow(arg2, 0x3e8))
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t eax_382 = sx.d(*(arg1[-0x26] + 0x74))
                                            
                                            if (add_overflow(eax_382, arg1[-7]))
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t ecx_38
                                            void* ebx
                                            void* ebp_4
                                            ecx_38, ebx, ebp_4 = sub_469d58(entry_ebx, 
                                                entry_ebx + 0xac8, 0xff, &arg1[-0xad], 
                                                eax_382 + arg1[-7], arg1[-3], arg2 + 0x3e8)
                                            sub_40401c(ecx_38, ebp_4 - 0x2b4)
                                            char* eax_388
                                            void* ebp_5
                                            eax_388, ebp_5 = sub_479f44(nullptr, *(ebp_4 - 0x394))
                                            int32_t ecx_39 = sub_402e28(ebx + 0xbc8, eax_388)
                                            int32_t var_4_26 = *(*(ebp_5 - 0x98) + 0x84)
                                            int32_t eax_391 = *(ebp_5 - 0x14)
                                            
                                            if (add_overflow(eax_391, 4))
                                                sub_403010()
                                                noreturn
                                            
                                            *(ebp_5 - 0xa4) = eax_391 + 4
                                            unimplemented  {fild st0, dword [ebp-0xa4]}
                                            float var_8_20 =
                                                fconvert.s(unimplemented  {fstp dword [esp], st0})
                                            unimplemented  {fstp dword [esp], st0}
                                            int32_t eax_393 = *(ebp_5 - 0x1c)
                                            
                                            if (add_overflow(eax_393, 0xffffffff))
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t eax_395 =
                                                (eax_393 - 1) * sx.d(*(*(ebp_5 - 0x98) + 0x5a))
                                            bool o_127 = unimplemented  {imul edx}
                                            
                                            if (o_127)
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t eax_396 = eax_395 + *(ebp_5 - 0x18)
                                            
                                            if (add_overflow(eax_395, *(ebp_5 - 0x18)))
                                                sub_403010()
                                                noreturn
                                            
                                            if (add_overflow(eax_396, 5))
                                                sub_403010()
                                                noreturn
                                            
                                            *(ebp_5 - 0x168) = eax_396 + 5
                                            unimplemented  {fild st0, dword [ebp-0x168]}
                                            float var_c_18 =
                                                fconvert.s(unimplemented  {fstp dword [esp], st0})
                                            unimplemented  {fstp dword [esp], st0}
                                            int32_t var_10_18 = *(*(ebp_5 - 0x98) + 0x68)
                                            int32_t var_14_13 = 2
                                            float var_1c_15 = *(*(ebp_5 - 0x98) + 0x110)
                                            sub_40401c(ecx_39, ebx + 0xbc8)
                                            int32_t eax_401 = *(ebp_5 - 0x39c)
                                            int32_t eax_405 = sx.d(*(*(ebp_5 - 0x98) + 0x74))
                                            
                                            if (add_overflow(eax_405, *(ebp_5 - 0x1c)))
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t ecx_40
                                            void* ebp_6
                                            ecx_40, entry_ebx, ebp_6 = sub_469d58(ebx, ebx + 0xac8, 
                                                0xff, ebp_5 - 0x2b4, eax_405 + *(ebp_5 - 0x1c), 
                                                *(ebp_5 - 0xc), arg2)
                                            sub_40401c(ecx_40, ebp_6 - 0x2b4)
                                            void** eax_411
                                            int32_t ecx_41
                                            eax_411, ecx_41, arg1 =
                                                sub_479f44(nullptr, *(ebp_6 - 0x3a4))
                                            sub_403fb0(ecx_41, eax_411)
                                            sub_48c290(entry_ebx, arg1[-0xe8], arg1[-0xb], 
                                                ebp_5 - 0x398, eax_401, 0, 0f, var_1c_15, 0f)
                                    
                                    arg1[-7] += 1
                                    i_3 = arg1[-0x27]
                                    arg1[-0x27] -= 1
                                while (i_3 != 1)
                
                int32_t temp20_1 = arg3
                arg3 += 1
                
                if (add_overflow(temp20_1, 1))
                    sub_403010()
                    noreturn
                
                int32_t temp27_1 = arg1[-0x15]
                arg1[-0x15] += 1
                
                if (add_overflow(temp27_1, 1))
                    sub_403010()
                    noreturn
                
                if (arg3 s> sx.d(*(arg1[-0x26] + 0x7e)))
                    arg3 = 1
                    int32_t temp48_1 = arg1[-0x11]
                    arg1[-0x11] += 1
                    
                    if (add_overflow(temp48_1, 1))
                        sub_403010()
                        noreturn
                
                if (sx.d(*(arg1[-0x26] + 0x76)) s>= arg1[-0x11])
                    break
            
            arg1[-0x12] = 0x44
            
            if (*(arg1[-0x26] + 0xee) == 0xfff9)
                arg1[-0x12] = 0x70
            
            int32_t eax_1596 = arg1[-0x11]
            
            if (add_overflow(eax_1596, 0xffffffff))
                sub_403010()
                noreturn
            
            int32_t eax_1598 = (eax_1596 - 1) * 0x18
            bool o_323 = unimplemented  {imul eax, eax, 0x18}
            
            if (o_323)
                sub_403010()
                noreturn
            
            if (add_overflow(eax_1598, 5))
                sub_403010()
                noreturn
            
            arg1[-0x14] = eax_1598 + 5
            
            if (*(arg1[-0x26] + 0x7e) s<= 1)
                if (add_overflow(arg3, 0xffffffff))
                    sub_403010()
                    noreturn
                
                arg1[-0x12]
                int32_t eax_1607 = (arg3 - 1) * arg1[-0x12]
                bool o_329 = unimplemented  {imul dword [ebp-0x48]}
                
                if (o_329)
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_1607, 0xfffffffa))
                    sub_403010()
                    noreturn
                
                arg1[-0x13] = eax_1607 - 6
            else
                if (add_overflow(arg3, 0xffffffff))
                    sub_403010()
                    noreturn
                
                arg1[-0x12]
                int32_t eax_1603 = (arg3 - 1) * arg1[-0x12]
                bool o_326 = unimplemented  {imul dword [ebp-0x48]}
                
                if (o_326)
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_1603, 0xffffffe2))
                    sub_403010()
                    noreturn
                
                arg1[-0x13] = eax_1603 - 0x1e
            
            if (*(arg1[-0x26] + 0xee) == 0xfff9)
                int32_t temp144_1 = arg1[-0x13]
                arg1[-0x13] -= 0x78
                
                if (add_overflow(temp144_1, 0xffffff88))
                    sub_403010()
                    noreturn
                
                if (arg3 s>= 3)
                    int32_t temp157_1 = arg1[-0x13]
                    arg1[-0x13] -= 0xa
                    
                    if (add_overflow(temp157_1, 0xfffffff6))
                        sub_403010()
                        noreturn
                
                if (arg3 == 1)
                    int32_t temp163_1 = arg1[-0x13]
                    arg1[-0x13] += 0x8c
                    
                    if (add_overflow(temp163_1, 0x8c))
                        sub_403010()
                        noreturn
            
            if (arg1[-0x11] != 0)
                arg1[-8] = arg1[-7]
            else
                arg1[-8] = arg3
            
            int32_t eax_1612 = sx.d(*(arg1[-0x26] + 0xe4))
            int32_t edx_399 = sx.d(*(arg1[-0x26] + 0x7e))
            int32_t eax_1613 = eax_1612 - edx_399
            
            if (add_overflow(eax_1612, neg.d(edx_399)))
                sub_403010()
                noreturn
            
            if (add_overflow(eax_1613, 1))
                sub_403010()
                noreturn
            
            if (eax_1613 + 1 s< arg1[-7])
                arg1[-0x14] = *(arg1[-0x26] + 0x60)
            
            int32_t ecx_144
            void* ebp_11
            ecx_144, entry_ebx, ebp_11 =
                sub_469d58(entry_ebx, entry_ebx + 0xac8, 0xff, &arg1[-0xad], arg1[-8], arg1[-3], arg2)
            sub_40401c(ecx_144, ebp_11 - 0x2b4)
            void** eax_1623
            int32_t ecx_145
            eax_1623, ecx_145, arg1 = sub_479f44(nullptr, *(ebp_11 - 0x2b8))
            arg1[-9] = eax_1623
            sub_403fb0(ecx_145, arg1[-9])
            sub_404280(1, 1, arg1[-0xb0], &arg1[-0xaf])
            int32_t ecx_147 = sub_403fb0(sub_404188(arg1[-0xaf], 0x48ac0c), arg1[-9])
            int32_t eax_1631 = sub_404078(arg1[-0xb2])
            
            if (add_overflow(eax_1631, 0xffffffff))
                sub_403010()
                noreturn
            
            sub_403fb0(ecx_147, arg1[-9])
            int32_t ecx_149 = sub_404280(eax_1631 - 1, 2, arg1[-0xb3], &arg1[-0xb1])
            arg1[-9] = sub_40423c(arg1[-0xb1])
            sub_403fb0(ecx_149, arg1[-9])
            int32_t ecx_146
            ecx_146, arg1, arg3 = sub_46fd7c(entry_ebx, arg1[-0xb4])
            unimplemented  {fmul st0, dword [0x48ac20]}
            unimplemented  {fmul st0, dword [eax+0x84]}
            unimplemented  {fild st0, dword [ebp-0x48]}
            unimplemented  {fsubrp st1, st0}
            unimplemented  {fsubrp st1, st0}
            unimplemented  {fdiv st0, dword [0x48abbc]}
            int32_t eax_1639
            int32_t edx_408
            eax_1639, edx_408 = sub_402b4c(st0)
            top += 1
            int32_t eax_1641
            int32_t edx_409
            edx_409:eax_1641 = sx.q(arg1[-0x13])
            int32_t eax_1642 = eax_1641 + eax_1639
            int32_t edx_410 = adc.d(edx_409, edx_408, eax_1641 + eax_1639 u< eax_1641)
            bool o_337 = unimplemented  {adc edx, dword [esp+0x4]}
            
            if (o_337)
                sub_403010()
                noreturn
            
            int32_t eax_1643 = eax_1642 s>> 0x1f
            
            if (eax_1643 != edx_410)
                sub_403008()
                noreturn
            
            arg1[-0x13] = eax_1642
            sub_403fb0(ecx_146, arg1[-9])
            sub_404280(1, 1, arg1[-0xb6], &arg1[-0xb5])
            int32_t ecx_150 = sub_404188(arg1[-0xb5], 0x48ac84)
            
            if (eax_1643 == edx_410)
                int32_t ecx_151 = sub_403fb0(ecx_150, arg1[-9])
                int32_t eax_1652 = sub_404078(arg1[-0xb8])
                
                if (add_overflow(eax_1652, 0xffffffff))
                    sub_403010()
                    noreturn
                
                sub_403fb0(ecx_151, arg1[-9])
                sub_404280(eax_1652 - 1, 2, arg1[-0xb9], &arg1[-0xb7])
                arg1[-9] = sub_40423c(arg1[-0xb7])
                int32_t eax_1659 = arg1[-8]
                
                if (add_overflow(eax_1659, 1))
                    sub_403010()
                    noreturn
                
                int32_t ecx_153
                void* ebp_12
                ecx_153, entry_ebx, ebp_12 = sub_469d58(entry_ebx, entry_ebx + 0xac8, 0xff, 
                    &arg1[-0xad], eax_1659 + 1, arg1[-3], arg2)
                sub_40401c(ecx_153, ebp_12 - 0x2b4)
                void** eax_1665
                eax_1665, ecx_150, arg1 = sub_479f44(nullptr, *(ebp_12 - 0x2e8))
                arg1[-0xa] = eax_1665
                
                if (arg1[-7] != 1)
                label_488176:
                    
                    if (*(arg1[-0x26] + 0x5c) != 0x267)
                        int32_t var_4_128 = *(arg1[-0x26] + 0x84)
                        sub_403fb0(ecx_150, arg1[-9])
                        arg1, arg3 = sub_46fd7c(entry_ebx, arg1[-0xbd])
                        unimplemented  {fmul st0, dword [0x48ac20]}
                        unimplemented  {fmul st0, dword [eax+0x84]}
                        unimplemented  {fdiv st0, dword [0x48abbc]}
                        int32_t eax_1675
                        int32_t edx_421
                        eax_1675, edx_421 = sub_402b4c(st0)
                        int32_t eax_1676 = arg1[-5]
                        
                        if (add_overflow(eax_1676, 8))
                            sub_403010()
                            noreturn
                        
                        if (add_overflow(eax_1676 + 8, arg1[-0x13]))
                            sub_403010()
                            noreturn
                        
                        int32_t eax_1679
                        int32_t edx_422
                        edx_422:eax_1679 = sx.q(eax_1676 + 8 + arg1[-0x13])
                        bool o_342 = unimplemented  {adc edx, dword [esp+0x4]}
                        
                        if (o_342)
                            sub_403010()
                            noreturn
                        
                        arg1[-0x5e] = eax_1679 + eax_1675
                        arg1[-0x5d] = adc.d(edx_422, edx_421, eax_1679 + eax_1675 u< eax_1679)
                        unimplemented  {fild st0, qword [ebp-0x178]}
                        float var_8_97 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        int32_t eax_1681 = arg1[-6]
                        
                        if (add_overflow(eax_1681, arg1[-0x14]))
                            sub_403010()
                            noreturn
                        
                        arg1[-0x29] = eax_1681 + arg1[-0x14]
                        unimplemented  {fild st0, dword [ebp-0xa4]}
                        float var_c_72 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        top += 1
                        int32_t var_10_68 = *(arg1[-0x26] + 0x68)
                        int32_t var_14_35 = 2
                        ecx_150 = sub_48c290(entry_ebx, &data_48aca0, arg1[-0xb], &arg1[-0xbc], 0, 0, 
                            0f, *(arg1[-0x26] + 0x110), 0f)
                else
                    sub_403fb0(ecx_150, arg1[-0xa])
                    ecx_150, arg1, arg3 = sub_46fd7c(entry_ebx, arg1[-0xbb])
                    unimplemented  {fmul st0, dword [0x48ac20]}
                    long double temp213_1 = fconvert.t(90f)
                    unimplemented  {fcomp st0, dword [0x48ac88]} f- temp213_1
                    bool c0_11 = unimplemented  {fcomp st0, dword [0x48ac88]} f< temp213_1
                    bool c2_11 = is_unordered.t(unimplemented  {fcomp st0, dword [0x48ac88]}, temp213_1)
                    bool c3_11 = unimplemented  {fcomp st0, dword [0x48ac88]} f== temp213_1
                    unimplemented  {fcomp st0, dword [0x48ac88]}
                    top += 1
                    int16_t eax_1668 = (c0_11 ? 1 : 0) << 8 | (c2_11 ? 1 : 0) << 0xa
                        | (c3_11 ? 1 : 0) << 0xe | (top & 7) << 0xb
                    
                    if (test_bit(eax_1668:1.b, 6) || test_bit(eax_1668:1.b, 0))
                        goto label_488176
                    
                    char* eax_1670 = arg1[-0x26] + 8
                    int32_t ecx_154
                    ecx_154.b = *eax_1670
                    ecx_150 = sub_402c90(eax_1670, "\thighlight", ecx_154 + 1)
                    
                    if (ecx_154 == 0xffffffff)
                        goto label_488176
                
                int32_t temp225_1 = arg1[-0x14]
                arg1[-0x14] -= 0x11
                
                if (add_overflow(temp225_1, 0xffffffef))
                    sub_403010()
                    noreturn
            
            if (arg1[-0x11] s> 0)
                int32_t temp195_1 = arg1[-0x14]
                arg1[-0x14] += 7
                
                if (add_overflow(temp195_1, 7))
                    sub_403010()
                    noreturn
            
            if (arg1[-8] s>= arg1[-0x19] && arg1[-8] s<= arg1[-0x1a])
                ecx_150 = sx.d(*(arg1[-0x26] + 0x7e))
                
                if (mods.dp.d(sx.q(arg1[-8]), ecx_150) == arg1[-0x1b])
                    arg1[-9] = &data_48ab80
            
            int32_t var_4_130 = *(arg1[-0x26] + 0x84)
            int32_t eax_1695 = arg1[-5]
            
            if (add_overflow(eax_1695, 8))
                sub_403010()
                noreturn
            
            if (add_overflow(eax_1695 + 8, arg1[-0x13]))
                sub_403010()
                noreturn
            
            arg1[-0x29] = eax_1695 + 8 + arg1[-0x13]
            unimplemented  {fild st0, dword [ebp-0xa4]}
            float var_8_98 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            int32_t eax_1698 = arg1[-6]
            
            if (add_overflow(eax_1698, arg1[-0x14]))
                sub_403010()
                noreturn
            
            arg1[-0x5a] = eax_1698 + arg1[-0x14]
            unimplemented  {fild st0, dword [ebp-0x168]}
            float var_c_73 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            int32_t var_10_69 = *(arg1[-0x26] + 0x68)
            int32_t var_14_36 = 0xa
            float var_1c_51 = *(arg1[-0x26] + 0x110)
            int32_t eax_1703 = sx.d(*(arg1[-0x24] + 2))
            int32_t edx_428 = sx.d(*(arg1[-0x26] + 2))
            int32_t eax_1704 = eax_1703 + edx_428
            
            if (add_overflow(eax_1703, edx_428))
                sub_403010()
                noreturn
            
            void* edx_429 = arg1[-0x26]
            int32_t eax_1705 = eax_1704 + *(edx_429 + 0x5c)
            
            if (add_overflow(eax_1704, *(edx_429 + 0x5c)))
                sub_403010()
                noreturn
            
            if (add_overflow(eax_1705, 0xffffffec))
                sub_403010()
                noreturn
            
            sub_403fb0(ecx_150, arg1[-9])
            sub_48c290(entry_ebx, arg1[-0xbe], arg1[-0xb], &arg1[-0x10], 0, 0, eax_1705 - 0x14, 
                var_1c_51, 0f)
            arg1[-0x17] = 0
            bool z_13 = arg1[-0x1f] == 0
            
            if (not(z_13))
                z_13 = *(arg1[-0x26] + 0xee) == 0xfff9
                
                if (z_13)
                    sub_404280(1, 2, arg1[-0x1f], &arg1[-0xbf])
                    int32_t eax_1714
                    int32_t ecx_158
                    eax_1714, ecx_158 = sub_408e80(arg1[-0xbf])
                    int32_t edx_433 = sx.d(*(arg1[-0x26] + 0x74))
                    int32_t eax_1715 = eax_1714 - edx_433
                    
                    if (add_overflow(eax_1714, neg.d(edx_433)))
                        sub_403010()
                        noreturn
                    
                    int32_t temp256_1 = arg1[-0x11]
                    z_13 = eax_1715 == temp256_1
                    
                    if (z_13 || eax_1715 - temp256_1 s< 0 != add_overflow(eax_1715, neg.d(temp256_1)))
                        int32_t temp264_1 = arg1[-0x11]
                        z_13 = temp264_1 == 0
                        
                        if (not(z_13) && temp264_1 s< 0 == add_overflow(temp264_1, 0))
                            int32_t var_4_132 = *(arg1[-0x26] + 0x84)
                            int32_t eax_1717 = arg1[-5]
                            
                            if (add_overflow(eax_1717, 8))
                                sub_403010()
                                noreturn
                            
                            if (add_overflow(eax_1717 + 8, arg1[-0x13]))
                                sub_403010()
                                noreturn
                            
                            arg1[-0x29] = eax_1717 + 8 + arg1[-0x13]
                            unimplemented  {fild st0, dword [ebp-0xa4]}
                            float var_8_99 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            int32_t eax_1720 = arg1[-6]
                            
                            if (add_overflow(eax_1720, arg1[-0x14]))
                                sub_403010()
                                noreturn
                            
                            arg1[-0x5a] = eax_1720 + arg1[-0x14]
                            unimplemented  {fild st0, dword [ebp-0x168]}
                            float var_c_74 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            int32_t var_10_70 = *(arg1[-0x26] + 0x68)
                            int32_t var_14_37 = 2
                            unimplemented  {fld st0, tword [0x48aca4]}
                            unimplemented  {fmul st0, dword [eax+0x110]}
                            float var_1c_52 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            int32_t eax_1724 = sx.d(*(arg1[-0x24] + 2))
                            int32_t edx_435 = sx.d(*(arg1[-0x26] + 2))
                            int32_t eax_1725 = eax_1724 + edx_435
                            
                            if (add_overflow(eax_1724, edx_435))
                                sub_403010()
                                noreturn
                            
                            void* edx_436 = arg1[-0x26]
                            int32_t eax_1726 = eax_1725 + *(edx_436 + 0x5c)
                            
                            if (add_overflow(eax_1725, *(edx_436 + 0x5c)))
                                sub_403010()
                                noreturn
                            
                            z_13 = eax_1726 == 0x14
                            
                            if (add_overflow(eax_1726, 0xffffffec))
                                sub_403010()
                                noreturn
                            
                            sub_403fb0(ecx_158, arg1[-9])
                            sub_48c290(entry_ebx, arg1[-0xc1], arg1[-0xb], &arg1[-0xc0], 0, 0, 
                                eax_1726 - 0x14, var_1c_52, 0f)
                            arg1[-0x17] = 1
            
            sub_404280(1, 1, arg1[-0x10], &arg1[-0xc2])
            ecx_2 = sub_404188(arg1[-0xc2], 0x48acb8)
            
            if (z_13)
                break
}
