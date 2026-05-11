// ============================================================
// 函数名称: sub_478234
// 虚拟地址: 0x478234
// WARP GUID: cc76623e-1cab-51df-92b1-aeebc24a04ec
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ShowWindow, GetTickCount
// [内部子函数调用]: sub_472ccc, sub_4807f4, sub_469d58, sub_46db80, sub_42b1dc, sub_42af98, sub_402b4c, sub_403e1c, sub_403010, sub_403008, sub_4318d0, sub_4727f8, sub_47ab08, sub_476aa0, sub_48380c, sub_473938, sub_42afb8, sub_46de48, sub_408e1c, sub_42b220, sub_4471a4, sub_40fa94, sub_46a954, sub_447198, sub_473684, sub_4836b0, sub_47a9e0, sub_46e24c
// [被调用的父级函数]: sub_4e6659, sub_4d8208, sub_47c160, sub_50b624, sub_508844, sub_50dbd4, sub_5223e8, sub_520efc, sub_50dae4, sub_51d270, sub_4eca90, sub_475990, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_478234(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_154 = ebx
    int32_t esi
    int32_t var_158 = esi
    int32_t edi
    int32_t var_15c = edi
    int32_t nCmdShow_2 = nullptr
    int32_t nCmdShow_3 = 0
    int32_t var_c = arg3
    int32_t* ebx_1 = arg1
    int32_t* var_160 = &var_4
    int32_t (* var_164)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool o = unimplemented  {imul eax, eax, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t nCmdShow_14 = ebx_1[0x2ac] + arg2 * 0x81c0
    
    if (var_c - 1 u> 0x75)
        sub_403008()
        noreturn
    
    int32_t eax_5 = var_c * 0x23
    bool o_1 = unimplemented  {imul eax, eax, 0x23}
    
    if (o_1)
        sub_403010()
        noreturn
    
    int32_t edx
    edx.b = *(nCmdShow_14 + (eax_5 << 3) - 0xf8)
    char var_19 = edx.b
    
    if (var_c - 1 u> 0x75)
        sub_403008()
        noreturn
    
    int32_t edi_1 = sx.d(*(nCmdShow_14 + (eax_5 << 3) - 0x70))
    
    if (var_c - 1 u> 0x75)
        sub_403008()
        noreturn
    
    int32_t nCmdShow
    
    if (*(nCmdShow_14 + (eax_5 << 3) - 8) == 4)
        int32_t eax_6 = ebx_1[0xc]
        
        if (eax_6 s<= 0xc && eax_6 s>= 0xfffffff4)
            sub_42af98(ebx_1)
        
        int32_t eax_8 = ebx_1[0xd]
        
        if (eax_8 s<= 0xc && eax_8 s>= 0xfffffff4)
            sub_42afb8(ebx_1)
        
        *data_530a18
        int32_t eax_12 = sub_4471a4()
        
        if (add_overflow(eax_12, 0xc))
            sub_403010()
            noreturn
        
        int32_t edx_8 = ebx_1[0xc]
        
        if (add_overflow(edx_8, ebx_1[0xe]))
            sub_403010()
            noreturn
        
        if (eax_12 + 0xc s>= edx_8 + ebx_1[0xe])
            *data_530a18
            int32_t eax_16 = sub_4471a4()
            
            if (add_overflow(eax_16, 0xfffffff4))
                sub_403010()
                noreturn
            
            int32_t edx_10 = ebx_1[0xc]
            
            if (add_overflow(edx_10, ebx_1[0xe]))
                sub_403010()
                noreturn
            
            if (eax_16 - 0xc s<= edx_10 + ebx_1[0xe])
                *data_530a18
                int32_t eax_20 = sub_4471a4()
                ebx_1[0xe]
                
                if (add_overflow(eax_20, neg.d(ebx_1[0xe])))
                    sub_403010()
                    noreturn
                
                sub_42af98(ebx_1)
        
        *data_530a18
        int32_t eax_24 = sub_447198()
        
        if (add_overflow(eax_24, 0xc))
            sub_403010()
            noreturn
        
        int32_t edx_14 = ebx_1[0xd]
        
        if (add_overflow(edx_14, ebx_1[0xf]))
            sub_403010()
            noreturn
        
        if (eax_24 + 0xc s>= edx_14 + ebx_1[0xf])
            *data_530a18
            int32_t eax_28 = sub_447198()
            
            if (add_overflow(eax_28, 0xfffffff4))
                sub_403010()
                noreturn
            
            int32_t edx_16 = ebx_1[0xd]
            
            if (add_overflow(edx_16, ebx_1[0xf]))
                sub_403010()
                noreturn
            
            if (eax_28 - 0xc s<= edx_16 + ebx_1[0xf])
                *data_530a18
                int32_t eax_32 = sub_447198()
                ebx_1[0xf]
                
                if (add_overflow(eax_32, neg.d(ebx_1[0xf])))
                    sub_403010()
                    noreturn
                
                sub_42afb8(ebx_1)
        
        sub_408e1c(ebx_1[0xc], &nCmdShow_3)
        nCmdShow = nCmdShow_3
        long double x87_r0
        void* ebx_2 = sub_47ab08(ebx_1, ebx_1[0x434], ebx_1[0x44a], x87_r0, nCmdShow)
        sub_408e1c(*(ebx_2 + 0x34), &nCmdShow_2)
        nCmdShow = nCmdShow_2
        arg3, ebx_1 = sub_47ab08(ebx_2, *(ebx_2 + 0x10d0), *(ebx_2 + 0x112c), x87_r0, nCmdShow)
        esp_1 = &ExceptionList
    
    if (var_c - 1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_12 = unimplemented  {imul eax, eax, 0x23}
    
    if (o_12)
        sub_403010()
        noreturn
    
    if (*(nCmdShow_14 + var_c * 0x118 - 8) == 6)
        if (ebx_1[0xb9] == 0)
            nCmdShow = nCmdShow_14
            __builtin_memcpy(&ebx_1[0x47f], &ebx_1[0x479], 0x14)
            nCmdShow_14 = nCmdShow
            ebx_1[0x484] = ebx_1[0x475]
            ebx_1[0x485] = ebx_1[0x476]
            ebx_1[0x486] = ebx_1[0x477]
            ebx_1[0xbc] = ebx_1[0xbf]
            uint32_t eax_48 = GetTickCount()
            nCmdShow = 0
            int32_t eax_50
            int32_t edx_24
            edx_24:eax_50 = sx.q(ebx_1[0xc0])
            int32_t nCmdShow_1 = eax_48 - eax_50
            nCmdShow = sbb.d(nCmdShow, edx_24, eax_48 u< eax_50)
            int32_t nCmdShow_11 = nCmdShow
            nCmdShow = nCmdShow_1
            
            if (nCmdShow_1 s>> 0x1f != nCmdShow_11)
                sub_403008()
                noreturn
            
            ebx_1[0xbd] = nCmdShow
            ebx_1[0x47e] = ebx_1[0x473]
            ebx_1[0x488] = ebx_1[0x487]
            
            if (ebx_1[0x338].b == 0 && *(ebx_1 + 0xce1) == 0)
                ebx_1[0x489].b = 1
            
            ebx_1[0xbb] = 0x1f4
            ebx_1[0xb9] = 1
        
        nCmdShow = 6
        ShowWindow(*(*data_530660 + 0x24), nCmdShow)
        esp_1 = &ExceptionList
    
    if (var_c - 1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_13 = unimplemented  {imul eax, eax, 0x23}
    
    if (o_13)
        sub_403010()
        noreturn
    
    if (*(nCmdShow_14 + var_c * 0x118 - 8) == 3)
        sub_4727f8(ebx_1)
    
    if (var_c - 1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_14 = unimplemented  {imul eax, eax, 0x23}
    
    if (o_14)
        sub_403010()
        noreturn
    
    if (*(nCmdShow_14 + var_c * 0x118 - 8) == 0xd)
        int32_t eax_67
        eax_67.b = *(ebx_1 + 0xcfa)
        eax_67.b ^= 1
        *(ebx_1 + 0xcfa) = eax_67.b
    
    bool o_15 = unimplemented  {imul eax, eax, 0x1038}
    
    if (o_15)
        sub_403010()
        noreturn
    
    if (var_c - 1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_16 = unimplemented  {imul edx, edx, 0x23}
    
    if (o_16)
        sub_403010()
        noreturn
    
    if (*(ebx_1[0x2ac] + arg2 * 0x81c0 + var_c * 0x118 - 0xf8) == 0xc)
        bool o_17 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_17)
            sub_403010()
            noreturn
        
        if (var_c - 1 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_18 = unimplemented  {imul edx, edx, 0x23}
        
        if (o_18)
            sub_403010()
            noreturn
        
        *(ebx_1[0x2ac] + arg2 * 0x81c0 + var_c * 0x118 - 0x87) = 1
        
        if (var_c + 0x8000 u> 0xffff)
            sub_403008()
            noreturn
        
        *(nCmdShow_14 + 0x8132) = var_c.w
    
    int32_t eax_70
    int32_t edx_29
    
    if (var_19 == 0xa)
        if (var_c - 1 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_19 = unimplemented  {imul eax, eax, 0x23}
        
        if (o_19)
            sub_403010()
            noreturn
        
        edi_1 = sx.d(*(nCmdShow_14 + var_c * 0x118 - 0x70))
        
        if (edi_1 s> 0)
            if (edi_1 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_20 = unimplemented  {imul eax, edi, 0x23}
            
            if (o_20)
                sub_403010()
                noreturn
            
            if (*(nCmdShow_14 + edi_1 * 0x118 - 0xf8) == 0x11)
                if (edi_1 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_21 = unimplemented  {imul eax, edi, 0x23}
                
                if (o_21)
                    sub_403010()
                    noreturn
                
                int32_t edi_24
                
                if (*(nCmdShow_14 + edi_1 * 0x118 - 0xa) s>= 0)
                    if (edi_1 - 1 u> 0x75)
                        sub_403008()
                        noreturn
                    
                    bool o_36 = unimplemented  {imul eax, edi, 0x23}
                    
                    if (o_36)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_105 = sx.d(*(nCmdShow_14 + edi_1 * 0x118 - 0x84))
                    
                    if (add_overflow(eax_105, 1))
                        sub_403010()
                        noreturn
                    
                    if (eax_105 + 0x8001 u> 0xffff)
                        sub_403008()
                        noreturn
                    
                    if (edi_1 - 1 u> 0x75)
                        sub_403008()
                        noreturn
                    
                    bool o_38 = unimplemented  {imul edx, edi, 0x23}
                    
                    if (o_38)
                        sub_403010()
                        noreturn
                    
                    *(nCmdShow_14 + edi_1 * 0x118 - 0x84) = (eax_105 + 0x8001).w - 0x8000
                    
                    if (edi_1 - 1 u> 0x75)
                        sub_403008()
                        noreturn
                    
                    bool o_39 = unimplemented  {imul eax, edi, 0x23}
                    
                    if (o_39)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_109
                    eax_109.w = *(nCmdShow_14 + edi_1 * 0x118 - 0x84)
                    
                    if (edi_1 - 1 u> 0x75)
                        sub_403008()
                        noreturn
                    
                    edi_24 = edi_1
                    bool o_40 = unimplemented  {imul edx, edi, 0x23}
                    
                    if (o_40)
                        sub_403010()
                        noreturn
                    
                    if (eax_109.w s> *(nCmdShow_14 + edi_24 * 0x118 - 0x14))
                        if (edi_24 - 1 u> 0x75)
                            sub_403008()
                            noreturn
                        
                        bool o_41 = unimplemented  {imul eax, edi, 0x23}
                        
                        if (o_41)
                            sub_403010()
                            noreturn
                        
                        *(nCmdShow_14 + edi_24 * 0x118 - 0x84) = 1
                else
                    if (edi_1 - 1 u> 0x75)
                        sub_403008()
                        noreturn
                    
                    bool o_22 = unimplemented  {imul eax, edi, 0x23}
                    
                    if (o_22)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_81 = sx.d(*(nCmdShow_14 + edi_1 * 0x118 - 0x84))
                    
                    if (edi_1 - 1 u> 0x75)
                        sub_403008()
                        noreturn
                    
                    bool o_23 = unimplemented  {imul eax, edi, 0x23}
                    
                    if (o_23)
                        sub_403010()
                        noreturn
                    
                    if (edi_1 - 1 u> 0x75)
                        sub_403008()
                        noreturn
                    
                    bool o_24 = unimplemented  {imul eax, edi, 0x23}
                    
                    if (o_24)
                        sub_403010()
                        noreturn
                    
                    if (edi_1 - 1 u> 0x75)
                        sub_403008()
                        noreturn
                    
                    bool o_25 = unimplemented  {imul eax, edi, 0x23}
                    
                    if (o_25)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_85 = sx.d(*(nCmdShow_14 + edi_1 * 0x118 - 0x14))
                    
                    if (add_overflow(eax_85, 1))
                        sub_403010()
                        noreturn
                    
                    int32_t nCmdShow_5
                    int32_t edx_34
                    nCmdShow_5, edx_34 = sub_402b4c(float.t(*(nCmdShow_14 + edi_1 * 0x118 - 0x7c))
                        / float.t(*(nCmdShow_14 + edi_1 * 0x118 - 0x9c)) * float.t(eax_85 + 1)
                        + data_479f2c)
                    nCmdShow = nCmdShow_5
                    
                    if (nCmdShow_5 s>> 0x1f != edx_34)
                        sub_403008()
                        noreturn
                    
                    int32_t nCmdShow_4 = nCmdShow
                    
                    if (edi_1 - 1 u> 0x75)
                        sub_403008()
                        noreturn
                    
                    bool o_27 = unimplemented  {imul eax, edi, 0x23}
                    
                    if (o_27)
                        sub_403010()
                        noreturn
                    
                    if (sx.d(*(nCmdShow_14 + edi_1 * 0x118 - 0x14)) s< nCmdShow_4)
                        if (edi_1 - 1 u> 0x75)
                            sub_403008()
                            noreturn
                        
                        bool o_28 = unimplemented  {imul eax, edi, 0x23}
                        
                        if (o_28)
                            sub_403010()
                            noreturn
                        
                        nCmdShow_4 = sx.d(*(nCmdShow_14 + edi_1 * 0x118 - 0x14))
                    
                    if (nCmdShow_4 s< 1)
                        nCmdShow_4 = 1
                    
                    int32_t edi_20
                    
                    if (eax_81 != nCmdShow_4)
                        if (nCmdShow_4 + 0x8000 u> 0xffff)
                            sub_403008()
                            noreturn
                        
                        if (edi_1 - 1 u> 0x75)
                            sub_403008()
                            noreturn
                        
                        edi_20 = edi_1
                        bool o_33 = unimplemented  {imul edx, edi, 0x23}
                        
                        if (o_33)
                            sub_403010()
                            noreturn
                        
                        *(nCmdShow_14 + edi_20 * 0x118 - 0x84) = (nCmdShow_4 + 0x8000).w - 0x8000
                    else
                        if (edi_1 - 1 u> 0x75)
                            sub_403008()
                            noreturn
                        
                        bool o_29 = unimplemented  {imul eax, edi, 0x23}
                        
                        if (o_29)
                            sub_403010()
                            noreturn
                        
                        int32_t eax_94
                        eax_94.w = *(nCmdShow_14 + edi_1 * 0x118 - 0x7a)
                        
                        if (edi_1 - 1 u> 0x75)
                            sub_403008()
                            noreturn
                        
                        edi_20 = edi_1
                        bool o_30 = unimplemented  {imul edx, edi, 0x23}
                        
                        if (o_30)
                            sub_403010()
                            noreturn
                        
                        if (eax_94.w == *(nCmdShow_14 + edi_20 * 0x118 - 0x7c))
                            if (add_overflow(nCmdShow_4, 0xffffffff))
                                sub_403010()
                                noreturn
                            
                            if (nCmdShow_4 + 0x7fff u> 0xffff)
                                sub_403008()
                                noreturn
                            
                            if (edi_20 - 1 u> 0x75)
                                sub_403008()
                                noreturn
                            
                            bool o_32 = unimplemented  {imul edx, edi, 0x23}
                            
                            if (o_32)
                                sub_403010()
                                noreturn
                            
                            *(nCmdShow_14 + edi_20 * 0x118 - 0x84) = (nCmdShow_4 + 0x7fff).w - 0x8000
                    
                    if (edi_20 - 1 u> 0x75)
                        sub_403008()
                        noreturn
                    
                    edi_24 = edi_20
                    bool o_34 = unimplemented  {imul eax, edi, 0x23}
                    
                    if (o_34)
                        sub_403010()
                        noreturn
                    
                    if (*(nCmdShow_14 + edi_24 * 0x118 - 0x84) s< 1)
                        if (edi_24 - 1 u> 0x75)
                            sub_403008()
                            noreturn
                        
                        bool o_35 = unimplemented  {imul eax, edi, 0x23}
                        
                        if (o_35)
                            sub_403010()
                            noreturn
                        
                        *(nCmdShow_14 + edi_24 * 0x118 - 0x84) = 1
                
                nCmdShow = arg2
                
                if (edi_24 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_42 = unimplemented  {imul eax, edi, 0x23}
                
                if (o_42)
                    sub_403010()
                    noreturn
                
                if (edi_24 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                edi_1 = edi_24
                bool o_43 = unimplemented  {imul eax, edi, 0x23}
                
                if (o_43)
                    sub_403010()
                    noreturn
                
                char var_144[0x100]
                eax_70, arg3, edx_29, ebx_1, ebp_1 = sub_469d58(ebx_1, 
                    nCmdShow_14 + edi_1 * 0x118 - 0xf0, 0x19, &var_144, 
                    sx.d(*(nCmdShow_14 + edi_24 * 0x118 - 0x84)), edi_24, nCmdShow)
                esp_1 = &ExceptionList
    
    if (*(ebp_1 - 0x15) == 4)
        int32_t eax_117 = ebp_1[-2] - 1
        
        if (eax_117 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_44 = unimplemented  {imul eax, eax, 0x23}
        
        if (o_44)
            sub_403010()
            noreturn
        
        int32_t eax_119
        eax_119.b = *(nCmdShow_14 + (eax_117 + 1) * 0x118 - 0x88)
        eax_119.b ^= 1
        int32_t edx_42 = ebp_1[-2] - 1
        
        if (edx_42 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_45 = unimplemented  {imul edx, edx, 0x23}
        
        if (o_45)
            sub_403010()
            noreturn
        
        *(nCmdShow_14 + (edx_42 + 1) * 0x118 - 0x88) = eax_119.b
        int32_t eax_121 = ebp_1[-2] - 1
        
        if (eax_121 u> 0x75)
            sub_403008()
            noreturn
        
        int32_t nCmdShow_6 = (eax_121 + 1) * 0x23
        bool o_46 = unimplemented  {imul eax, eax, 0x23}
        
        if (o_46)
            sub_403010()
            noreturn
        
        if (*(nCmdShow_14 + (nCmdShow_6 << 3) - 0x70) == 0)
        label_478ba6:
            
            if (ebp_1[-2] - 1 u> 0x75)
                sub_403008()
                noreturn
            
            nCmdShow_6.b = *(nCmdShow_14 + (nCmdShow_6 << 3) - 0x88)
            nCmdShow = nCmdShow_6
            eax_70, arg3, edx_29 = sub_476aa0(ebp_1[-2], ebp_1[-1], ebx_1, nCmdShow.b)
            esp_1 = &ExceptionList
        else
            if (ebp_1[-2] - 1 u> 0x75)
                sub_403008()
                noreturn
            
            if (*(nCmdShow_14 + (nCmdShow_6 << 3) - 0xa) == 0xffff)
                goto label_478ba6
            
            bool o_47 = unimplemented  {imul eax, eax, 0x1038}
            
            if (o_47)
                sub_403010()
                noreturn
            
            ebp_1[-0xc] = ebx_1[0x2ac] + ebp_1[-1] * 0x81c0
            
            if (edi_1 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_48 = unimplemented  {imul eax, edi, 0x23}
            
            if (o_48)
                sub_403010()
                noreturn
            
            eax_70 = sx.d(*(ebp_1[-0xc] + edi_1 * 0x118 - 0x1e))
            
            if (eax_70 s> 0)
                ebp_1[-0xd] = eax_70
                ebp_1[-3] = 1
                int32_t i
                
                do
                    if (edi_1 - 1 u> 0x75)
                        sub_403008()
                        noreturn
                    
                    int32_t eax_127 = edi_1 * 0x23
                    bool o_49 = unimplemented  {imul eax, edi, 0x23}
                    
                    if (o_49)
                        sub_403010()
                        noreturn
                    
                    int32_t ecx_3 = ebp_1[-3] - 1
                    
                    if (ecx_3 u> 0x4f)
                        sub_403008()
                        noreturn
                    
                    int32_t edx_52 = sx.d(*(ebp_1[-0xc] + (eax_127 << 3) + ecx_3 + 1 - 0x6f)) - 1
                    
                    if (edx_52 u> 0x75)
                        sub_403008()
                        noreturn
                    
                    bool o_50 = unimplemented  {imul edx, edx, 0x23}
                    
                    if (o_50)
                        sub_403010()
                        noreturn
                    
                    if (*(ebp_1[-0xc] + (edx_52 + 1) * 0x118 - 0xf8) == 4)
                        if (edi_1 - 1 u> 0x75)
                            sub_403008()
                            noreturn
                        
                        bool o_51 = unimplemented  {imul edx, edi, 0x23}
                        
                        if (o_51)
                            sub_403010()
                            noreturn
                        
                        nCmdShow = ebp_1[-0xc] + edi_1 * 0x118
                        int32_t edx_58 = ebp_1[-3] - 1
                        
                        if (edx_58 u> 0x4f)
                            sub_403008()
                            noreturn
                        
                        int32_t nCmdShow_12
                        nCmdShow_12.b = sx.d(*(nCmdShow + edx_58 + 1 - 0x6f)) == ebp_1[-2]
                        nCmdShow = nCmdShow_12
                        
                        if (edi_1 - 1 u> 0x75)
                            sub_403008()
                            noreturn
                        
                        bool o_52 = unimplemented  {imul edx, edi, 0x23}
                        
                        if (o_52)
                            sub_403010()
                            noreturn
                        
                        int32_t edx_63 = ebp_1[-3] - 1
                        
                        if (edx_63 u> 0x4f)
                            sub_403008()
                            noreturn
                        
                        int32_t edx_66 = sx.d(*(ebp_1[-0xc] + edi_1 * 0x118 + edx_63 + 1 - 0x6f)) - 1
                        
                        if (edx_66 u> 0x75)
                            sub_403008()
                            noreturn
                        
                        bool o_53 = unimplemented  {imul edx, edx, 0x23}
                        
                        if (o_53)
                            sub_403010()
                            noreturn
                        
                        *(ebp_1[-0xc] + (edx_66 + 1) * 0x118 - 0x88) = nCmdShow.b
                    
                    if (edi_1 - 1 u> 0x75)
                        sub_403008()
                        noreturn
                    
                    bool o_54 = unimplemented  {imul edx, edi, 0x23}
                    
                    if (o_54)
                        sub_403010()
                        noreturn
                    
                    nCmdShow = ebp_1[-0xc] + edi_1 * 0x118
                    int32_t edx_73 = ebp_1[-3] - 1
                    
                    if (edx_73 u> 0x4f)
                        sub_403008()
                        noreturn
                    
                    int32_t nCmdShow_13
                    nCmdShow_13.b = sx.d(*(nCmdShow + edx_73 + 1 - 0x6f)) == ebp_1[-2]
                    nCmdShow = nCmdShow_13
                    
                    if (edi_1 - 1 u> 0x75)
                        sub_403008()
                        noreturn
                    
                    edi_1 = edi_1
                    int32_t edx_77 = ebp_1[-3] - 1
                    
                    if (edx_77 u> 0x4f)
                        sub_403008()
                        noreturn
                    
                    eax_70, arg3, edx_29 = sub_476aa0(
                        sx.d(*(ebp_1[-0xc] + (eax_127 << 3) + edx_77 + 1 - 0x6f)), ebp_1[-1], ebx_1, 
                        nCmdShow.b)
                    esp_1 = &ExceptionList
                    ebp_1[-3] += 1
                    i = ebp_1[-0xd]
                    ebp_1[-0xd] -= 1
                while (i != 1)
    
    if (*(ebp_1 - 0x15) == 7)
        if (edi_1 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_55 = unimplemented  {imul eax, edi, 0x23}
        
        if (o_55)
            sub_403010()
            noreturn
        
        if (*(nCmdShow_14 + edi_1 * 0x118 - 0xf8) != 0x11)
            int32_t eax_166 = ebp_1[-2] - 1
            
            if (eax_166 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_79 = unimplemented  {imul eax, eax, 0x23}
            
            if (o_79)
                sub_403010()
                noreturn
            
            int32_t edi_71
            
            if (*(nCmdShow_14 + (eax_166 + 1) * 0x118 - 0x88) == 0)
                if (edi_1 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                edi_71 = edi_1
                int32_t eax_170 = edi_71 * 0x23
                bool o_82 = unimplemented  {imul eax, edi, 0x23}
                
                if (o_82)
                    sub_403010()
                    noreturn
                
                int16_t temp42_1 = *(nCmdShow_14 + (eax_170 << 3) - 0x84)
                *(nCmdShow_14 + (eax_170 << 3) - 0x84) -= 1
                
                if (add_overflow(temp42_1, 0xffff))
                    sub_403010()
                    noreturn
            else
                if (edi_1 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                edi_71 = edi_1
                int32_t eax_169 = edi_71 * 0x23
                bool o_80 = unimplemented  {imul eax, edi, 0x23}
                
                if (o_80)
                    sub_403010()
                    noreturn
                
                int16_t temp43_1 = *(nCmdShow_14 + (eax_169 << 3) - 0x84)
                *(nCmdShow_14 + (eax_169 << 3) - 0x84) += 1
                
                if (add_overflow(temp43_1, 1))
                    sub_403010()
                    noreturn
            
            if (edi_71 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_84 = unimplemented  {imul eax, edi, 0x23}
            
            if (o_84)
                sub_403010()
                noreturn
            
            ebp_1[-4] = sx.d(*(nCmdShow_14 + edi_71 * 0x118 - 0x6c))
            
            if (edi_71 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_85 = unimplemented  {imul eax, edi, 0x23}
            
            if (o_85)
                sub_403010()
                noreturn
            
            int32_t eax_174 = sx.d(*(nCmdShow_14 + edi_71 * 0x118 - 0xc))
            
            if (edi_71 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_86 = unimplemented  {imul edx, edi, 0x23}
            
            if (o_86)
                sub_403010()
                noreturn
            
            int32_t edx_96 = sx.d(*(nCmdShow_14 + edi_71 * 0x118 - 0x82))
            
            if (add_overflow(eax_174, neg.d(edx_96)))
                sub_403010()
                noreturn
            
            if (eax_174 == edx_96)
                int32_t eax_190 = ebp_1[-4] - 1
                
                if (eax_190 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_97 = unimplemented  {imul eax, eax, 0x23}
                
                if (o_97)
                    sub_403010()
                    noreturn
                
                *(nCmdShow_14 + (eax_190 + 1) * 0x118 - 0x84) = 0
            else
                int32_t eax_177 = ebp_1[-4] - 1
                
                if (eax_177 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_88 = unimplemented  {imul eax, eax, 0x23}
                
                if (o_88)
                    sub_403010()
                    noreturn
                
                int32_t eax_180 = *(nCmdShow_14 + (eax_177 + 1) * 0x118 - 0x98)
                int32_t edx_98 = ebp_1[-4] - 1
                
                if (edx_98 u> 0x75)
                    sub_403008()
                    noreturn
                
                int32_t edx_100 = (edx_98 + 1) * 0x23
                bool o_89 = unimplemented  {imul edx, edx, 0x23}
                
                if (o_89)
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_180, neg.d(*(nCmdShow_14 + (edx_100 << 3) - 0x94))))
                    sub_403010()
                    noreturn
                
                if (edi_71 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_91 = unimplemented  {imul edx, edi, 0x23}
                
                if (o_91)
                    sub_403010()
                    noreturn
                
                bool o_92 = unimplemented  {imul edx}
                
                if (o_92)
                    sub_403010()
                    noreturn
                
                ebp_1[-0x10] = (eax_180 - *(nCmdShow_14 + (edx_100 << 3) - 0x94))
                    * sx.d(*(nCmdShow_14 + edi_71 * 0x118 - 0x84))
                long double x87_r7_8 = float.t(ebp_1[-0x10])
                
                if (edi_71 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_93 = unimplemented  {imul eax, edi, 0x23}
                
                if (o_93)
                    sub_403010()
                    noreturn
                
                int32_t eax_184 = sx.d(*(nCmdShow_14 + edi_71 * 0x118 - 0xc))
                
                if (edi_71 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_94 = unimplemented  {imul edx, edi, 0x23}
                
                if (o_94)
                    sub_403010()
                    noreturn
                
                int32_t edx_104 = sx.d(*(nCmdShow_14 + edi_71 * 0x118 - 0x82))
                
                if (add_overflow(eax_184, neg.d(edx_104)))
                    sub_403010()
                    noreturn
                
                ebp_1[-0x51] = eax_184 - edx_104
                int32_t eax_186
                int32_t edx_105
                eax_186, edx_105 = sub_402b4c(x87_r7_8 / float.t(ebp_1[-0x51]))
                int32_t edx_106 = adc.d(edx_105, 0, eax_186 u>= 0xffff8000)
                bool cond:5_1 = edx_106 u<= 0
                
                if (edx_106 == 0)
                    cond:5_1 = eax_186 + 0x8000 u<= 0xffff
                
                if (not(cond:5_1))
                    sub_403008()
                    noreturn
                
                int32_t edx_108 = ebp_1[-4] - 1
                
                if (edx_108 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_96 = unimplemented  {imul edx, edx, 0x23}
                
                if (o_96)
                    sub_403010()
                    noreturn
                
                *(nCmdShow_14 + (edx_108 + 1) * 0x118 - 0x84) = (eax_186 + 0x8000).w - 0x8000
            
            int32_t eax_194 = ebp_1[-4] - 1
            
            if (eax_194 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_98 = unimplemented  {imul eax, eax, 0x23}
            
            if (o_98)
                sub_403010()
                noreturn
            
            if (*(nCmdShow_14 + (eax_194 + 1) * 0x118 - 0x84) s< 0)
                int32_t eax_198 = ebp_1[-4] - 1
                
                if (eax_198 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_99 = unimplemented  {imul eax, eax, 0x23}
                
                if (o_99)
                    sub_403010()
                    noreturn
                
                *(nCmdShow_14 + (eax_198 + 1) * 0x118 - 0x84) = 0
            
            if (edi_71 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_100 = unimplemented  {imul eax, edi, 0x23}
            
            if (o_100)
                sub_403010()
                noreturn
            
            if (*(nCmdShow_14 + edi_71 * 0x118 - 0xc) != 0)
                if (edi_71 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_101 = unimplemented  {imul eax, edi, 0x23}
                
                if (o_101)
                    sub_403010()
                    noreturn
                
                int32_t eax_203 = *(nCmdShow_14 + edi_71 * 0x118 - 0x98)
                
                if (add_overflow(eax_203, 0xffffffc6))
                    sub_403010()
                    noreturn
                
                if (edi_71 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_103 = unimplemented  {imul edx, edi, 0x23}
                
                if (o_103)
                    sub_403010()
                    noreturn
                
                bool o_104 = unimplemented  {imul edx}
                
                if (o_104)
                    sub_403010()
                    noreturn
                
                ebp_1[-0x10] = (eax_203 - 0x3a) * sx.d(*(nCmdShow_14 + edi_71 * 0x118 - 0x82))
                
                if (edi_71 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_105 = unimplemented  {imul eax, edi, 0x23}
                
                if (o_105)
                    sub_403010()
                    noreturn
                
                int32_t nCmdShow_7
                int32_t edx_113
                nCmdShow_7, edx_113 =
                    sub_402b4c(float.t(ebp_1[-0x10]) / float.t(*(nCmdShow_14 + edi_71 * 0x118 - 0xc)))
                nCmdShow = nCmdShow_7
                esp_1 = &ExceptionList
                
                if (nCmdShow_7 s>> 0x1f != edx_113)
                    sub_403008()
                    noreturn
                
                int32_t edx_115 = ebp_1[-4] - 1
                
                if (edx_115 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_106 = unimplemented  {imul edx, edx, 0x23}
                
                if (o_106)
                    sub_403010()
                    noreturn
                
                *(nCmdShow_14 + (edx_115 + 1) * 0x118 - 0x94) = nCmdShow
            
            int32_t eax_210 = ebp_1[-4] - 1
            
            if (eax_210 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_107 = unimplemented  {imul eax, eax, 0x23}
            
            if (o_107)
                sub_403010()
                noreturn
            
            int32_t eax_213 = *(nCmdShow_14 + (eax_210 + 1) * 0x118 - 0x98)
            int32_t edx_119 = ebp_1[-4] - 1
            
            if (edx_119 u> 0x75)
                sub_403008()
                noreturn
            
            int32_t edx_121 = (edx_119 + 1) * 0x23
            bool o_108 = unimplemented  {imul edx, edx, 0x23}
            
            if (o_108)
                sub_403010()
                noreturn
            
            if (add_overflow(eax_213, neg.d(*(nCmdShow_14 + (edx_121 << 3) - 0x94))))
                sub_403010()
                noreturn
            
            int32_t edx_123 = ebp_1[-4] - 1
            
            if (edx_123 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_110 = unimplemented  {imul edx, edx, 0x23}
            
            if (o_110)
                sub_403010()
                noreturn
            
            if (eax_213 - *(nCmdShow_14 + (edx_121 << 3) - 0x94)
                    s< sx.d(*(nCmdShow_14 + (edx_123 + 1) * 0x118 - 0x84)))
                int32_t eax_216 = ebp_1[-4] - 1
                
                if (eax_216 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_111 = unimplemented  {imul eax, eax, 0x23}
                
                if (o_111)
                    sub_403010()
                    noreturn
                
                int32_t eax_219 = *(nCmdShow_14 + (eax_216 + 1) * 0x118 - 0x98)
                int32_t edx_128 = ebp_1[-4] - 1
                
                if (edx_128 u> 0x75)
                    sub_403008()
                    noreturn
                
                int32_t edx_130 = (edx_128 + 1) * 0x23
                bool o_112 = unimplemented  {imul edx, edx, 0x23}
                
                if (o_112)
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_219, neg.d(*(nCmdShow_14 + (edx_130 << 3) - 0x94))))
                    sub_403010()
                    noreturn
                
                int32_t eax_221 = eax_219 - *(nCmdShow_14 + (edx_130 << 3) - 0x94) + 0x8000
                
                if (eax_221 u> 0xffff)
                    sub_403008()
                    noreturn
                
                int32_t edx_132 = ebp_1[-4] - 1
                
                if (edx_132 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_114 = unimplemented  {imul edx, edx, 0x23}
                
                if (o_114)
                    sub_403010()
                    noreturn
                
                *(nCmdShow_14 + (edx_132 + 1) * 0x118 - 0x84) = eax_221.w - 0x8000
            
            if (edi_71 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_115 = unimplemented  {imul eax, edi, 0x23}
            
            if (o_115)
                sub_403010()
                noreturn
            
            int32_t eax_224 = sx.d(*(nCmdShow_14 + edi_71 * 0x118 - 0xc))
            
            if (edi_71 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_116 = unimplemented  {imul edx, edi, 0x23}
            
            if (o_116)
                sub_403010()
                noreturn
            
            int32_t edx_136 = sx.d(*(nCmdShow_14 + edi_71 * 0x118 - 0x82))
            
            if (add_overflow(eax_224, neg.d(edx_136)))
                sub_403010()
                noreturn
            
            if (edi_71 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_118 = unimplemented  {imul edx, edi, 0x23}
            
            if (o_118)
                sub_403010()
                noreturn
            
            if (eax_224 - edx_136 s< sx.d(*(nCmdShow_14 + edi_71 * 0x118 - 0x84)))
                if (edi_71 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_119 = unimplemented  {imul eax, edi, 0x23}
                
                if (o_119)
                    sub_403010()
                    noreturn
                
                int32_t eax_227 = sx.d(*(nCmdShow_14 + edi_71 * 0x118 - 0xc))
                
                if (edi_71 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_120 = unimplemented  {imul edx, edi, 0x23}
                
                if (o_120)
                    sub_403010()
                    noreturn
                
                int32_t edx_139 = sx.d(*(nCmdShow_14 + edi_71 * 0x118 - 0x82))
                
                if (add_overflow(eax_227, neg.d(edx_139)))
                    sub_403010()
                    noreturn
                
                if (eax_227 - edx_139 + 0x8000 u> 0xffff)
                    sub_403008()
                    noreturn
                
                if (edi_71 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_122 = unimplemented  {imul edx, edi, 0x23}
                
                if (o_122)
                    sub_403010()
                    noreturn
                
                *(nCmdShow_14 + edi_71 * 0x118 - 0x84) = (eax_227 - edx_139 + 0x8000).w - 0x8000
            
            if (edi_71 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            edi_1 = edi_71
            bool o_123 = unimplemented  {imul eax, edi, 0x23}
            
            if (o_123)
                sub_403010()
                noreturn
            
            if (*(nCmdShow_14 + edi_1 * 0x118 - 0x84) s< 0)
                if (edi_1 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_124 = unimplemented  {imul eax, edi, 0x23}
                
                if (o_124)
                    sub_403010()
                    noreturn
                
                *(nCmdShow_14 + edi_1 * 0x118 - 0x84) = 0
        else
            int32_t eax_133 = ebp_1[-2] - 1
            
            if (eax_133 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_56 = unimplemented  {imul eax, eax, 0x23}
            
            if (o_56)
                sub_403010()
                noreturn
            
            int32_t edi_49
            
            if (*(nCmdShow_14 + (eax_133 + 1) * 0x118 - 0x88) == 0)
                if (edi_1 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                edi_49 = edi_1
                int32_t eax_137 = edi_49 * 0x23
                bool o_59 = unimplemented  {imul eax, edi, 0x23}
                
                if (o_59)
                    sub_403010()
                    noreturn
                
                int16_t temp44_1 = *(nCmdShow_14 + (eax_137 << 3) - 0x84)
                *(nCmdShow_14 + (eax_137 << 3) - 0x84) -= 1
                
                if (add_overflow(temp44_1, 0xffff))
                    sub_403010()
                    noreturn
            else
                if (edi_1 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                edi_49 = edi_1
                int32_t eax_136 = edi_49 * 0x23
                bool o_57 = unimplemented  {imul eax, edi, 0x23}
                
                if (o_57)
                    sub_403010()
                    noreturn
                
                int16_t temp45_1 = *(nCmdShow_14 + (eax_136 << 3) - 0x84)
                *(nCmdShow_14 + (eax_136 << 3) - 0x84) += 1
                
                if (add_overflow(temp45_1, 1))
                    sub_403010()
                    noreturn
            
            if (edi_49 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_61 = unimplemented  {imul eax, edi, 0x23}
            
            if (o_61)
                sub_403010()
                noreturn
            
            int32_t eax_138
            eax_138.w = *(nCmdShow_14 + edi_49 * 0x118 - 0x84)
            
            if (edi_49 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_62 = unimplemented  {imul edx, edi, 0x23}
            
            if (o_62)
                sub_403010()
                noreturn
            
            if (eax_138.w s> *(nCmdShow_14 + edi_49 * 0x118 - 0x14))
                if (edi_49 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_63 = unimplemented  {imul eax, edi, 0x23}
                
                if (o_63)
                    sub_403010()
                    noreturn
                
                int32_t eax_139
                eax_139.w = *(nCmdShow_14 + edi_49 * 0x118 - 0x14)
                
                if (edi_49 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_64 = unimplemented  {imul edx, edi, 0x23}
                
                if (o_64)
                    sub_403010()
                    noreturn
                
                *(nCmdShow_14 + edi_49 * 0x118 - 0x84) = eax_139.w
            
            if (edi_49 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_65 = unimplemented  {imul eax, edi, 0x23}
            
            if (o_65)
                sub_403010()
                noreturn
            
            if (*(nCmdShow_14 + edi_49 * 0x118 - 0x84) s< 1)
                if (edi_49 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_66 = unimplemented  {imul eax, edi, 0x23}
                
                if (o_66)
                    sub_403010()
                    noreturn
                
                *(nCmdShow_14 + edi_49 * 0x118 - 0x84) = 1
            
            nCmdShow = ebp_1[-1]
            
            if (edi_49 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_67 = unimplemented  {imul eax, edi, 0x23}
            
            if (o_67)
                sub_403010()
                noreturn
            
            if (edi_49 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_68 = unimplemented  {imul eax, edi, 0x23}
            
            if (o_68)
                sub_403010()
                noreturn
            
            arg3, edx_29, ebx_1, ebp_1 = sub_469d58(ebx_1, nCmdShow_14 + edi_49 * 0x118 - 0xf0, 0x19, 
                &ebp_1[-0x50], sx.d(*(nCmdShow_14 + edi_49 * 0x118 - 0x84)), edi_49, nCmdShow)
            esp_1 = &ExceptionList
            
            if (edi_49 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            edi_1 = edi_49
            bool o_69 = unimplemented  {imul eax, edi, 0x23}
            
            if (o_69)
                sub_403010()
                noreturn
            
            if (*(nCmdShow_14 + edi_1 * 0x118 - 0x1e) s>= 3)
                if (edi_1 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_70 = unimplemented  {imul eax, edi, 0x23}
                
                if (o_70)
                    sub_403010()
                    noreturn
                
                ebp_1[-7] = sx.d(*(nCmdShow_14 + edi_1 * 0x118 - 0x6c))
                int32_t eax_151 = ebp_1[-7] - 1
                
                if (eax_151 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_71 = unimplemented  {imul eax, eax, 0x23}
                
                if (o_71)
                    sub_403010()
                    noreturn
                
                if (*(nCmdShow_14 + (eax_151 + 1) * 0x118 - 0xf8) == 9)
                    if (edi_1 - 1 u> 0x75)
                        sub_403008()
                        noreturn
                    
                    bool o_72 = unimplemented  {imul eax, edi, 0x23}
                    
                    if (o_72)
                        sub_403010()
                        noreturn
                    
                    long double x87_r7_5 = float.t(*(nCmdShow_14 + edi_1 * 0x118 - 0x84))
                    
                    if (edi_1 - 1 u> 0x75)
                        sub_403008()
                        noreturn
                    
                    bool o_73 = unimplemented  {imul eax, edi, 0x23}
                    
                    if (o_73)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_155 = sx.d(*(nCmdShow_14 + edi_1 * 0x118 - 0x14))
                    
                    if (add_overflow(eax_155, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    ebp_1[-0x10] = eax_155 - 1
                    long double x87_r7_6 = x87_r7_5 / float.t(ebp_1[-0x10])
                    int32_t eax_158 = ebp_1[-7] - 1
                    
                    if (eax_158 u> 0x75)
                        sub_403008()
                        noreturn
                    
                    bool o_75 = unimplemented  {imul eax, eax, 0x23}
                    
                    if (o_75)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_161 = *(nCmdShow_14 + (eax_158 + 1) * 0x118 - 0x9c)
                    int32_t edx_87 = ebp_1[-7] - 1
                    
                    if (edx_87 u> 0x75)
                        sub_403008()
                        noreturn
                    
                    int32_t edx_89 = (edx_87 + 1) * 0x23
                    bool o_76 = unimplemented  {imul edx, edx, 0x23}
                    
                    if (o_76)
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(eax_161, neg.d(*(nCmdShow_14 + (edx_89 << 3) - 0x94))))
                        sub_403010()
                        noreturn
                    
                    ebp_1[-0x51] = eax_161 - *(nCmdShow_14 + (edx_89 << 3) - 0x94)
                    int32_t eax_163
                    int32_t edx_90
                    eax_163, edx_90 = sub_402b4c(x87_r7_6 * float.t(ebp_1[-0x51]))
                    int32_t edx_91 = adc.d(edx_90, 0, eax_163 u>= 0xffff8000)
                    bool cond:8_1 = edx_91 u<= 0
                    
                    if (edx_91 == 0)
                        cond:8_1 = eax_163 + 0x8000 u<= 0xffff
                    
                    if (not(cond:8_1))
                        sub_403008()
                        noreturn
                    
                    int32_t edx_93 = ebp_1[-7] - 1
                    
                    if (edx_93 u> 0x75)
                        sub_403008()
                        noreturn
                    
                    bool o_78 = unimplemented  {imul edx, edx, 0x23}
                    
                    if (o_78)
                        sub_403010()
                        noreturn
                    
                    *(nCmdShow_14 + (edx_93 + 1) * 0x118 - 0x84) = eax_163.w
    
    eax_70.b = *(ebp_1 - 0x15)
    char temp29 = eax_70.b
    eax_70.b -= 0xd
    
    if (temp29 == 0xd)
        if (ebx_1[0x26c].b == 0)
            int32_t eax_275 = ebp_1[-2] - 1
            
            if (eax_275 u> 0x75)
                sub_403008()
                noreturn
            
            int32_t ecx_41 = (eax_275 + 1) * 0x23
            bool o_158 = unimplemented  {imul ecx, eax, 0x23}
            
            if (o_158)
                sub_403010()
                noreturn
            
            int32_t eax_277 = sx.d(*(nCmdShow_14 + (ecx_41 << 3) - 0x7c))
            
            if (add_overflow(eax_277, 0xfffffffb))
                sub_403010()
                noreturn
            
            if (ebp_1[-2] - 1 u> 0x75)
                sub_403008()
                noreturn
            
            edi_1 = sx.d(*(nCmdShow_14 + (ecx_41 << 3) - 0x9e))
            int32_t temp0_1 = divs.dp.d(sx.q(eax_277 - 5), edi_1)
            
            if (ebp_1[-2] - 1 u> 0x75)
                sub_403008()
                noreturn
            
            int32_t edx_215 = sx.d(*(nCmdShow_14 + (ecx_41 << 3) - 0x84))
            int32_t eax_281 = temp0_1 + edx_215
            
            if (add_overflow(temp0_1, edx_215))
                sub_403010()
                noreturn
            
            if (add_overflow(eax_281, 1))
                sub_403010()
                noreturn
            
            if (ebp_1[-2] - 1 u> 0x75)
                sub_403008()
                noreturn
            
            if (eax_281 + 1 s<= sx.d(*(nCmdShow_14 + (ecx_41 << 3) - 0x14)))
                if (eax_281 + 0x8001 u> 0xffff)
                    sub_403008()
                    noreturn
                
                if (ebp_1[-2] - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                *(nCmdShow_14 + (ecx_41 << 3) - 0x86) = (eax_281 + 0x8001).w - 0x8000
            
            nCmdShow = ebp_1[-1]
            
            if (ebp_1[-2] - 1 u> 0x75)
                sub_403008()
                noreturn
            
            if (ebp_1[-2] - 1 u> 0x75)
                sub_403008()
                noreturn
            
            arg3, edx_29, ebx_1, ebp_1 = sub_469d58(ebx_1, nCmdShow_14 + (ecx_41 << 3) - 0xf0, 0x19, 
                &ebp_1[-0x50], sx.d(*(nCmdShow_14 + (ecx_41 << 3) - 0x86)), ebp_1[-2], nCmdShow)
            esp_1 = &ExceptionList
        else
            int32_t eax_232 = ebp_1[-2] - 1
            
            if (eax_232 u> 0x75)
                sub_403008()
                noreturn
            
            int32_t eax_234 = (eax_232 + 1) * 0x23
            bool o_125 = unimplemented  {imul eax, eax, 0x23}
            
            if (o_125)
                sub_403010()
                noreturn
            
            int32_t edx_140 = sx.d(*(nCmdShow_14 + (eax_234 << 3) - 0x86))
            
            if (add_overflow(edx_140, 1))
                sub_403010()
                noreturn
            
            if (edx_140 + 0x8001 u> 0xffff)
                sub_403008()
                noreturn
            
            if (ebp_1[-2] - 1 u> 0x75)
                sub_403008()
                noreturn
            
            *(nCmdShow_14 + (eax_234 << 3) - 0x86) = (edx_140 + 0x8001).w - 0x8000
            int32_t edx_145 = ebp_1[-2] - 1
            
            if (edx_145 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_127 = unimplemented  {imul edx, edx, 0x23}
            
            if (o_127)
                sub_403010()
                noreturn
            
            int32_t edx_147
            edx_147.w = *(nCmdShow_14 + (edx_145 + 1) * 0x118 - 0x86)
            
            if (ebp_1[-2] - 1 u> 0x75)
                sub_403008()
                noreturn
            
            if (edx_147.w s> *(nCmdShow_14 + (eax_234 << 3) - 0x14))
                if (ebp_1[-2] - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                *(nCmdShow_14 + (eax_234 << 3) - 0x86) = 1
            
            if (ebp_1[-2] - 1 u> 0x75)
                sub_403008()
                noreturn
            
            if (ebp_1[-2] - 1 u> 0x75)
                sub_403008()
                noreturn
            
            if (*(nCmdShow_14 + (eax_234 << 3) - 0x86) s> *(nCmdShow_14 + (eax_234 << 3) - 0x82))
                int32_t edx_155 = ebp_1[-2] - 1
                
                if (edx_155 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_128 = unimplemented  {imul edx, edx, 0x23}
                
                if (o_128)
                    sub_403010()
                    noreturn
                
                int32_t edx_158 = sx.d(*(nCmdShow_14 + (edx_155 + 1) * 0x118 - 0x86))
                int32_t ecx_26 = ebp_1[-2] - 1
                
                if (ecx_26 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_129 = unimplemented  {imul ecx, ecx, 0x23}
                
                if (o_129)
                    sub_403010()
                    noreturn
                
                int32_t ecx_29 = sx.d(*(nCmdShow_14 + (ecx_26 + 1) * 0x118 - 0x82))
                
                if (add_overflow(edx_158, neg.d(ecx_29)))
                    sub_403010()
                    noreturn
                
                if (edx_158 - ecx_29 + 0x8000 u> 0xffff)
                    sub_403008()
                    noreturn
                
                if (ebp_1[-2] - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                *(nCmdShow_14 + (eax_234 << 3) - 0x84) = (edx_158 - ecx_29 + 0x8000).w - 0x8000
            
            if (ebp_1[-2] - 1 u> 0x75)
                sub_403008()
                noreturn
            
            if (ebp_1[-2] - 1 u> 0x75)
                sub_403008()
                noreturn
            
            if (*(nCmdShow_14 + (eax_234 << 3) - 0x86) s< *(nCmdShow_14 + (eax_234 << 3) - 0x84))
                int32_t edx_166 = ebp_1[-2] - 1
                
                if (edx_166 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_131 = unimplemented  {imul edx, edx, 0x23}
                
                if (o_131)
                    sub_403010()
                    noreturn
                
                int32_t edx_169 = sx.d(*(nCmdShow_14 + (edx_166 + 1) * 0x118 - 0x86))
                
                if (add_overflow(edx_169, 0xffffffff))
                    sub_403010()
                    noreturn
                
                if (edx_169 + 0x7fff u> 0xffff)
                    sub_403008()
                    noreturn
                
                if (ebp_1[-2] - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                *(nCmdShow_14 + (eax_234 << 3) - 0x84) = (edx_169 + 0x7fff).w - 0x8000
            
            int32_t edi_105 = ebp_1[-2] - 1
            
            if (edi_105 u> 0x75)
                sub_403008()
                noreturn
            
            int32_t edi_106 = edi_105 + 1
            bool o_133 = unimplemented  {imul eax, edi, 0x23}
            
            if (o_133)
                sub_403010()
                noreturn
            
            ebp_1[-4] = sx.d(*(nCmdShow_14 + edi_106 * 0x118 - 0x6c))
            
            if (ebp_1[-4] s> 0 && sx.d(*(nCmdShow_14 + 0x8130)) s> ebp_1[-4])
                int32_t eax_239 = ebp_1[-4] - 1
                
                if (eax_239 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_134 = unimplemented  {imul eax, eax, 0x23}
                
                if (o_134)
                    sub_403010()
                    noreturn
                
                int32_t eax_242 = *(nCmdShow_14 + (eax_239 + 1) * 0x118 - 0x98)
                int32_t edx_174 = ebp_1[-4] - 1
                
                if (edx_174 u> 0x75)
                    sub_403008()
                    noreturn
                
                int32_t edx_176 = (edx_174 + 1) * 0x23
                bool o_135 = unimplemented  {imul edx, edx, 0x23}
                
                if (o_135)
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_242, neg.d(*(nCmdShow_14 + (edx_176 << 3) - 0x94))))
                    sub_403010()
                    noreturn
                
                if (edi_106 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_137 = unimplemented  {imul edx, edi, 0x23}
                
                if (o_137)
                    sub_403010()
                    noreturn
                
                bool o_138 = unimplemented  {imul edx}
                
                if (o_138)
                    sub_403010()
                    noreturn
                
                ebp_1[-0x10] = (eax_242 - *(nCmdShow_14 + (edx_176 << 3) - 0x94))
                    * sx.d(*(nCmdShow_14 + edi_106 * 0x118 - 0x84))
                long double x87_r7_12 = float.t(ebp_1[-0x10])
                
                if (edi_106 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_139 = unimplemented  {imul eax, edi, 0x23}
                
                if (o_139)
                    sub_403010()
                    noreturn
                
                int32_t eax_246 = sx.d(*(nCmdShow_14 + edi_106 * 0x118 - 0xc))
                
                if (edi_106 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_140 = unimplemented  {imul edx, edi, 0x23}
                
                if (o_140)
                    sub_403010()
                    noreturn
                
                int32_t edx_180 = sx.d(*(nCmdShow_14 + edi_106 * 0x118 - 0x82))
                
                if (add_overflow(eax_246, neg.d(edx_180)))
                    sub_403010()
                    noreturn
                
                ebp_1[-0x51] = eax_246 - edx_180
                int32_t eax_248
                int32_t edx_181
                eax_248, edx_181 = sub_402b4c(x87_r7_12 / float.t(ebp_1[-0x51]))
                int32_t edx_182 = adc.d(edx_181, 0, eax_248 u>= 0xffff8000)
                bool cond:7_1 = edx_182 u<= 0
                
                if (edx_182 == 0)
                    cond:7_1 = eax_248 + 0x8000 u<= 0xffff
                
                if (not(cond:7_1))
                    sub_403008()
                    noreturn
                
                int32_t edx_184 = ebp_1[-4] - 1
                
                if (edx_184 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_142 = unimplemented  {imul edx, edx, 0x23}
                
                if (o_142)
                    sub_403010()
                    noreturn
                
                *(nCmdShow_14 + (edx_184 + 1) * 0x118 - 0x84) = (eax_248 + 0x8000).w - 0x8000
                int32_t eax_252 = ebp_1[-4] - 1
                
                if (eax_252 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_143 = unimplemented  {imul eax, eax, 0x23}
                
                if (o_143)
                    sub_403010()
                    noreturn
                
                if (*(nCmdShow_14 + (eax_252 + 1) * 0x118 - 0x84) s< 0)
                    int32_t eax_256 = ebp_1[-4] - 1
                    
                    if (eax_256 u> 0x75)
                        sub_403008()
                        noreturn
                    
                    bool o_144 = unimplemented  {imul eax, eax, 0x23}
                    
                    if (o_144)
                        sub_403010()
                        noreturn
                    
                    *(nCmdShow_14 + (eax_256 + 1) * 0x118 - 0x84) = 0
                
                int32_t eax_260 = ebp_1[-4] - 1
                
                if (eax_260 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_145 = unimplemented  {imul eax, eax, 0x23}
                
                if (o_145)
                    sub_403010()
                    noreturn
                
                int32_t eax_263 = *(nCmdShow_14 + (eax_260 + 1) * 0x118 - 0x98)
                int32_t edx_188 = ebp_1[-4] - 1
                
                if (edx_188 u> 0x75)
                    sub_403008()
                    noreturn
                
                int32_t edx_190 = (edx_188 + 1) * 0x23
                bool o_146 = unimplemented  {imul edx, edx, 0x23}
                
                if (o_146)
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_263, neg.d(*(nCmdShow_14 + (edx_190 << 3) - 0x94))))
                    sub_403010()
                    noreturn
                
                int32_t edx_192 = ebp_1[-4] - 1
                
                if (edx_192 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_148 = unimplemented  {imul edx, edx, 0x23}
                
                if (o_148)
                    sub_403010()
                    noreturn
                
                if (eax_263 - *(nCmdShow_14 + (edx_190 << 3) - 0x94)
                        s< sx.d(*(nCmdShow_14 + (edx_192 + 1) * 0x118 - 0x84)))
                    int32_t eax_266 = ebp_1[-4] - 1
                    
                    if (eax_266 u> 0x75)
                        sub_403008()
                        noreturn
                    
                    bool o_149 = unimplemented  {imul eax, eax, 0x23}
                    
                    if (o_149)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_269 = *(nCmdShow_14 + (eax_266 + 1) * 0x118 - 0x98)
                    int32_t edx_197 = ebp_1[-4] - 1
                    
                    if (edx_197 u> 0x75)
                        sub_403008()
                        noreturn
                    
                    int32_t edx_199 = (edx_197 + 1) * 0x23
                    bool o_150 = unimplemented  {imul edx, edx, 0x23}
                    
                    if (o_150)
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(eax_269, neg.d(*(nCmdShow_14 + (edx_199 << 3) - 0x94))))
                        sub_403010()
                        noreturn
                    
                    int32_t eax_271 = eax_269 - *(nCmdShow_14 + (edx_199 << 3) - 0x94) + 0x8000
                    
                    if (eax_271 u> 0xffff)
                        sub_403008()
                        noreturn
                    
                    int32_t edx_201 = ebp_1[-4] - 1
                    
                    if (edx_201 u> 0x75)
                        sub_403008()
                        noreturn
                    
                    bool o_152 = unimplemented  {imul edx, edx, 0x23}
                    
                    if (o_152)
                        sub_403010()
                        noreturn
                    
                    *(nCmdShow_14 + (edx_201 + 1) * 0x118 - 0x84) = eax_271.w - 0x8000
            
            if (edi_106 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            int32_t eax_273 = edi_106 * 0x23
            bool o_153 = unimplemented  {imul eax, edi, 0x23}
            
            if (o_153)
                sub_403010()
                noreturn
            
            if (*(nCmdShow_14 + (eax_273 << 3) - 0x84) s< 0)
                if (edi_106 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                *(nCmdShow_14 + (eax_273 << 3) - 0x84) = 0
            
            if (edi_106 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            int32_t edx_204 = sx.d(*(nCmdShow_14 + (eax_273 << 3) - 0xc))
            
            if (edi_106 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            int32_t ecx_39 = sx.d(*(nCmdShow_14 + (eax_273 << 3) - 0x82))
            
            if (add_overflow(edx_204, neg.d(ecx_39)))
                sub_403010()
                noreturn
            
            if (edi_106 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            edi_1 = edi_106
            
            if (edx_204 - ecx_39 s< sx.d(*(nCmdShow_14 + (eax_273 << 3) - 0x84)))
                if (edi_1 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_155 = unimplemented  {imul edx, edi, 0x23}
                
                if (o_155)
                    sub_403010()
                    noreturn
                
                int32_t edx_206 = sx.d(*(nCmdShow_14 + edi_1 * 0x118 - 0xc))
                
                if (edi_1 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_156 = unimplemented  {imul ecx, edi, 0x23}
                
                if (o_156)
                    sub_403010()
                    noreturn
                
                arg3 = sx.d(*(nCmdShow_14 + edi_1 * 0x118 - 0x82))
                
                if (add_overflow(edx_206, neg.d(arg3)))
                    sub_403010()
                    noreturn
                
                if (edx_206 - arg3 + 0x8000 u> 0xffff)
                    sub_403008()
                    noreturn
                
                if (edi_1 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                *(nCmdShow_14 + (eax_273 << 3) - 0x84) = (edx_206 - arg3).w
    
    if (ebp_1[-2] == ebx_1[0x275] && ebp_1[-1] == ebx_1[0x274])
        arg3, edx_29 = sub_48380c(ebx_1, ebx_1[0x274])
    
    if (ebp_1[-1] == ebx_1[0x435] && ebp_1[-2] == 2)
        arg3, edx_29 = sub_48380c(ebx_1, ebx_1[0x435])
    
    if (ebp_1[-1] == ebx_1[0x435])
        nCmdShow_14 = &ebx_1[0x33a]
        
        if (ebp_1[-2] == 2)
            sub_40fa94(0xfffffff7, 0xfffffff7, &ebp_1[-0x53])
            nCmdShow = &ebp_1[-0x53]
            void* ecx_42
            ecx_42.b = 0x38
            ebx_1[0x75]
            ebx_1[0x74](ebx_1 + 0xa96, nCmdShow)
            esp_1 = &ExceptionList
            
            if (*(nCmdShow_14 + 0xc8) == 0 && *(nCmdShow_14 + 0x108) == *(nCmdShow_14 + 0x10c))
                bool o_162 = unimplemented  {imul eax, eax, 0x3}
                
                if (o_162)
                    sub_403010()
                    noreturn
                
                *(nCmdShow_14 + 0x148) = *(ebx_1[0x289] + ebx_1[0x36d] * 0xc + 4)
                int32_t nCmdShow_8
                int32_t edx_227
                nCmdShow_8, edx_227 =
                    sub_402b4c(float.t(*(nCmdShow_14 + 0x148)) / fconvert.t(3f) * fconvert.t(4f))
                nCmdShow = nCmdShow_8
                esp_1 = &ExceptionList
                
                if (nCmdShow_8 s>> 0x1f != edx_227)
                    sub_403008()
                    noreturn
                
                *(nCmdShow_14 + 0x144) = nCmdShow
                sub_473684(ebx_1)
        else if (*(nCmdShow_14 + 0x460) == ebp_1[-2])
            *(ebp_1 - 0x21) = *(nCmdShow_14 + 0x104) != *(nCmdShow_14 + 0x100)
            *(nCmdShow_14 + 0x100) = *(nCmdShow_14 + 0x104)
            
            if (*(ebp_1 - 0x21) == 0)
                edx_29.b = 1
                sub_46e24c(ebx_1, nCmdShow_14, edi_1)
                sub_40fa94(0xfffffff7, 0xfffffff7, &ebp_1[-0x53])
                nCmdShow = &ebp_1[-0x53]
                void* ecx_46
                ecx_46.b = 0x38
                ebx_1[0x75]
                ebx_1[0x74](ebx_1 + 0xa96, nCmdShow)
                esp_1 = &ExceptionList
            else if (*(nCmdShow_14 + 0xc8) == 0)
                sub_46e24c(ebx_1, nCmdShow_14, edi_1)
                
                if (*(nCmdShow_14 + 0x108) != *(nCmdShow_14 + 0x10c))
                    bool o_164 = unimplemented  {imul eax, eax, 0x3}
                    
                    if (o_164)
                        sub_403010()
                        noreturn
                    
                    *(nCmdShow_14 + 0x148) = *(ebx_1[0x289] + ebx_1[0x36d] * 0xc + 4)
                    int32_t nCmdShow_10
                    int32_t edx_234
                    nCmdShow_10, edx_234 =
                        sub_402b4c(float.t(*(nCmdShow_14 + 0x148)) / fconvert.t(3f) * fconvert.t(4f))
                    nCmdShow = nCmdShow_10
                    
                    if (nCmdShow_10 s>> 0x1f != edx_234)
                        sub_403008()
                        noreturn
                    
                    *(nCmdShow_14 + 0x144) = nCmdShow
                    sub_473684(ebx_1)
                    sub_4807f4(ebx_1, ebx_1[0x392], nCmdShow_14, edi_1)
                    sub_40fa94(0xfffffff6, 0xfffffff6, &ebp_1[-0x53])
                    nCmdShow = &ebp_1[-0x53]
                    void* ecx_45
                    ecx_45.b = 0x38
                    ebx_1[0x75]
                    ebx_1[0x74](ebx_1 + 0xa96, nCmdShow)
                    esp_1 = &ExceptionList
                else
                    bool o_163 = unimplemented  {imul eax, eax, 0x3}
                    
                    if (o_163)
                        sub_403010()
                        noreturn
                    
                    *(nCmdShow_14 + 0x148) = *(ebx_1[0x289] + ebx_1[0x36d] * 0xc + 4)
                    int32_t nCmdShow_9
                    int32_t edx_231
                    nCmdShow_9, edx_231 =
                        sub_402b4c(float.t(*(nCmdShow_14 + 0x148)) / fconvert.t(3f) * fconvert.t(4f))
                    nCmdShow = nCmdShow_9
                    
                    if (nCmdShow_9 s>> 0x1f != edx_231)
                        sub_403008()
                        noreturn
                    
                    *(nCmdShow_14 + 0x144) = nCmdShow
                    sub_473684(ebx_1)
                    sub_40fa94(0xfffffff7, 0xfffffff7, &ebp_1[-0x53])
                    nCmdShow = &ebp_1[-0x53]
                    void* ecx_44
                    ecx_44.b = 0x38
                    ebx_1[0x75]
                    ebx_1[0x74](ebx_1 + 0xa96, nCmdShow)
                    esp_1 = &ExceptionList
            else
                arg3.b = 1
                sub_472ccc(ebx_1, 0xffffffff)
                sub_40fa94(0xfffffff6, 0xfffffff6, &ebp_1[-0x53])
                nCmdShow = &ebp_1[-0x53]
                void* ecx_43
                ecx_43.b = 0x38
                ebx_1[0x75]
                ebx_1[0x74](ebx_1 + 0xa96, nCmdShow)
                esp_1 = &ExceptionList
    
    if (ebp_1[-1] == ebx_1[0x27c])
        if (ebp_1[-2] == ebx_1[0x27f])
            ebx_1[0x282] = ebx_1[0x283]
        
        if (ebp_1[-2] == ebx_1[0x280])
            ebx_1[0x282] = ebx_1[0x284]
        
        if (ebp_1[-2] == ebx_1[0x281])
            ebx_1[0x282] = ebx_1[0x285]
        
        sub_48380c(ebx_1, ebx_1[0x27c])
    
    if (ebp_1[-1] == ebx_1[0x434])
        if (ebx_1[0x465] == ebp_1[-2])
            nCmdShow = 1
            sub_47a9e0(ebx_1[0x46c], ebp_1[-1], ebx_1, nCmdShow)
            esp_1 = &ExceptionList
        else if (ebx_1[0x466] == ebp_1[-2])
            nCmdShow = 2
            sub_47a9e0(ebx_1[0x46c], ebp_1[-1], ebx_1, nCmdShow)
            esp_1 = &ExceptionList
        else if (ebx_1[0x446] == ebp_1[-2])
            sub_48380c(ebx_1, ebx_1[0x434])
        else if (ebx_1[0x447] == ebp_1[-2])
            ebp_1 = sub_46a954(ebx_1, nCmdShow_14, edi_1)
        else if (ebx_1[0x445] == ebp_1[-2])
            sub_4836b0(ebx_1, ebx_1[0x435])
        else if (ebx_1[0x444] == ebp_1[-2])
            ebx_1, ebp_1 = sub_46db80(ebx_1)
            
            if (ebx_1[0x37b] != ebx_1[0x37a])
                nCmdShow = sub_42b220(ebx_1)
                int32_t var_170_13 = sub_42b1dc(ebx_1)
                HWND eax_366 = sub_4318d0(ebx_1)
                
                if (eax_366 s< 0)
                    sub_403008()
                    noreturn
                
                esp_1 = &nCmdShow
                int32_t esi_2
                ebp_1, esi_2 = sub_473938(ebx_1, eax_366)
                sub_4807f4(ebx_1, ebx_1[0x392], esi_2, edi_1)
                sub_46de48(ebx_1)
    
    if (*(ebx_1 + 0x94a) != 0)
        ebp_1[-2]
        ebp_1[-1]
        ebx_1[0x253]
        ebx_1[0x252]()
    
    sub_40fa94(ebp_1[-1], ebp_1[-2], &ebp_1[-0x53])
    *(esp_1 - 4) = &ebp_1[-0x53]
    *(esp_1 - 8) = ebx_1 + 0xa96
    void* ecx_51
    ecx_51.b = 0x38
    ebx_1[0x75]
    ebx_1[0x74]()
    esp_1[0x5a]
    fsbase->NtTib.ExceptionList = esp_1[0x58]
    esp_1[0x5a] = sub_479f22
    return sub_403e1c(&ebp_1[-0xf], 2)
}
