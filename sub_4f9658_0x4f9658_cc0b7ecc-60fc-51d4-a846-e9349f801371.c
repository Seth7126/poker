// ============================================================
// 函数名称: sub_4f9658
// 虚拟地址: 0x4f9658
// WARP GUID: cc0b7ecc-60fc-51d4-a846-e9349f801371
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4f0c64, sub_4ca104, sub_4ee6dc, sub_4c4bec, sub_51bf84, sub_4ee6f0, sub_4ee7d8, sub_4ee6b0, sub_4c0924, sub_50003c, sub_4ee6ac, sub_402b4c, sub_51c744, sub_403010
// [被调用的父级函数]: sub_4f8b60
// ============================================================

int32_t*sub_4f9658()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t eax
    int32_t var_8 = eax
    data_7a7d98 = *(*data_530304 + 0xdc0) s>= 3
    void* ecx
    
    if (*data_530364 != 1 || *(*data_5301f4 + 0x10020) == 1)
        if (*data_530364 != 3)
            *data_5309bc = 0x3f800000
        else
            *data_5309bc = 0xbf800000
        
        *data_5303a0 = 6
        int32_t var_3c_1 = 1
        int32_t var_40_1 = *data_5303a0
        int32_t var_44_1 = 1
        int32_t var_48_1 = *(*data_5301f4 + 0x456c)
        void* eax_16
        eax_16.b = *(*data_5301f4 + 4)
        eax_16.b -= 5
        char temp2_1 = eax_16.b
        eax_16.b -= 2
        
        if (temp2_1 u< 2)
            int32_t eax_18 = *data_5300d0
            
            if (add_overflow(eax_18, 6))
                sub_403010()
                noreturn
            
            int32_t var_48_2 = eax_18 + 6
        
        char var_49_1 = 0
        
        if (*data_530364 == 1)
            if (*(*data_5301f4 + 0x1026c) != 0)
                char var_49_2 = 1
            
            int32_t var_44_2 = 1
            int32_t var_48_3 = 1
        
        char var_4a_1 = 0
        
        while (true)
            if (*(ebp_1 - 0x46) != 0 || *data_530364 == 3)
                int32_t eax_24 = ebp_1[-0xe]
                int32_t edx_1 = ebp_1[-0xf]
                
                if (edx_1 s>= eax_24)
                    ebp_1[-0x21] = edx_1 - eax_24 + 1
                    ebp_1[-6] = eax_24
                    
                    while (true)
                        if (ebp_1[-6] != 3)
                            int32_t ebx_2 = *data_5303a0
                            
                            if (add_overflow(ebx_2, 0xb))
                                sub_403010()
                                noreturn
                            
                            float ebx_4 = ebx_2 + 0xb - ebp_1[-6]
                            
                            if (add_overflow(ebx_2 + 0xb, neg.d(ebp_1[-6])))
                                sub_403010()
                                noreturn
                            
                            ebp_1[-5] = 0
                            *data_530740 = 0
                            int32_t edi_2
                            
                            if (*data_530364 != 0)
                                edi_2 = 0
                                ebp_1[-0x13] = 0
                            else
                                int32_t edi_1 = *(*data_52ffd0 + 0x3cfc)
                                edi_2 = edi_1 + 0x14
                                
                                if (add_overflow(edi_1, 0x14))
                                    sub_403010()
                                    noreturn
                                
                                bool o_5 = unimplemented  {imul eax, edi, 0x41}
                                
                                if (o_5)
                                    sub_403010()
                                    noreturn
                                
                                int32_t eax_30 = sx.d(*(*data_52ffd0 + edi_2 * 0x104))
                                
                                if (add_overflow(eax_30, 1))
                                    sub_403010()
                                    noreturn
                                
                                ebp_1[-0x13] = eax_30 + 1
                            
                            bool o_7 = unimplemented  {imul eax, ebx, 0x2345}
                            
                            if (o_7)
                                sub_403010()
                                noreturn
                            
                            int32_t eax_33 = *(data_5301b0 + ebx_4 i* 0x8d14 - 0x39c)
                            
                            if (eax_33 s> 0)
                                ebp_1[-0x22] = eax_33
                                ebp_1[-7] = 1
                                
                                while (true)
                                    bool o_8 = unimplemented  {imul eax, ebx, 0x2345}
                                    
                                    if (o_8)
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t esi_1 = *(data_5301b0 + ebx_4 i* 0x8d14 - 0x39c)
                                    
                                    if (add_overflow(esi_1, 1))
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t esi_3 = esi_1 + 1 - ebp_1[-7]
                                    
                                    if (add_overflow(esi_1 + 1, neg.d(ebp_1[-7])))
                                        sub_403010()
                                        noreturn
                                    
                                    if (*(ebp_1 - 0x46) != 0)
                                        esi_3 = ebp_1[-7]
                                    
                                    *(ebp_1 - 0x59) = 0
                                    
                                    if (ebx_4 == 0xc && *(*data_5301f4 + 0x4580) != 0)
                                        void* eax_37
                                        eax_37.b = *data_530364
                                        char temp26_1 = eax_37.b
                                        eax_37.b -= 3
                                        
                                        if (temp26_1 == 3)
                                            int32_t eax_40 = *(*data_52ffd0 + 0x3cfc)
                                            
                                            if (add_overflow(eax_40, 0x14))
                                                sub_403010()
                                                noreturn
                                            
                                            if (edi_2 s<= eax_40 + 0x14)
                                                int32_t temp28_1 = ebp_1[-0x13]
                                                ebp_1[-0x13] += 1
                                                
                                                if (add_overflow(temp28_1, 1))
                                                    sub_403010()
                                                    noreturn
                                                
                                                int32_t eax_52
                                                
                                                while (true)
                                                    int32_t eax_46 = *(*data_52ffd0 + 0x3cfc)
                                                    
                                                    if (add_overflow(eax_46, 0x14))
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    if (edi_2 s<= eax_46 + 0x14)
                                                        if (edi_2 == 0)
                                                        label_4f98c3:
                                                            
                                                            if (edi_2 != *(*data_52ffd0 + 0x3cf8))
                                                                int32_t temp36_1 = edi_2
                                                                edi_2 += 1
                                                                
                                                                if (add_overflow(temp36_1, 1))
                                                                    sub_403010()
                                                                    noreturn
                                                            else
                                                                edi_2 = 0x15
                                                            
                                                            ebp_1[-0x13] = 1
                                                            continue
                                                        else
                                                            bool o_15 =
                                                                unimplemented  {imul eax, edi, 0x41}
                                                            
                                                            if (o_15)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            if (sx.d(*(*data_52ffd0 + edi_2 * 0x104))
                                                                    s< ebp_1[-0x13])
                                                                goto label_4f98c3
                                                    
                                                    eax_52 = *(*data_52ffd0 + 0x3cfc)
                                                    break
                                                
                                                if (add_overflow(eax_52, 0x14))
                                                    sub_403010()
                                                    noreturn
                                                
                                                if (edi_2 s<= eax_52 + 0x14)
                                                    bool o_17 = unimplemented  {imul eax, edi, 0x41}
                                                    
                                                    if (o_17)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    int32_t eax_56 = sx.d(*(*data_52ffd0 + edi_2 * 0x104
                                                        + (ebp_1[-0x13] << 2) - 0x102))
                                                    bool o_18 = unimplemented  {imul edx, edi, 0x41}
                                                    
                                                    if (o_18)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    ebp_1[-0x16] =
                                                        sx.d(*(*data_52ffd0 + edi_2 * 0x104 + 2))
                                                    
                                                    if (eax_56 s< 1
                                                            || eax_56 s> *(data_5301b0 + 0x69954))
                                                        *(ebp_1 - 0x59) = 1
                                                    else
                                                        bool o_19 =
                                                            unimplemented  {imul edx, ebx, 0x2345}
                                                        
                                                        if (o_19)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        bool o_20 = unimplemented  {imul edx, eax, 0x35}
                                                        
                                                        if (o_20)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        if (edi_2 != *(data_5301b0 + ebx_4 i* 0x8d14
                                                                + eax_56 * 0xd4 - 0x8d98))
                                                            *(ebp_1 - 0x59) = 1
                                                        else
                                                            esi_3 = eax_56
                                    
                                    *(*data_5301f4 + 0x4580) != 0 && *data_530364 == 0
                                    
                                    if (*data_530364 != 1)
                                    label_4f9bd3:
                                        
                                        if (data_52fe98 == 0 || ebx_4 == 1)
                                        label_4f9c17:
                                            bool o_34 = unimplemented  {imul eax, ebx, 0x2345}
                                            
                                            if (o_34)
                                                sub_403010()
                                                noreturn
                                            
                                            bool o_35 = unimplemented  {imul edx, esi, 0x35}
                                            
                                            if (o_35)
                                                sub_403010()
                                                noreturn
                                            
                                            ebp_1[-0x23] =
                                                data_5301b0 + ebx_4 i* 0x8d14 + esi_3 * 0xd4 - 0x8de8
                                            char* eax_88
                                            eax_88.b = *ebp_1[-0x23]
                                            
                                            if (eax_88.b != 0 && eax_88.b s< 0x64)
                                                if (*(*data_5301f4 + 0x4580) != 0 && ebx_4 == 0xc)
                                                    bool o_36 = unimplemented  {imul eax, ebx, 0x2345}
                                                    
                                                    if (o_36)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    bool o_37 = unimplemented  {imul edx, esi, 0x35}
                                                    
                                                    if (o_37)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    sub_51bf84(0, 
                                                        *(data_5301b0 + ebx_4 i* 0x8d14 + esi_3 * 0xd4
                                                            - 0x8d98), 
                                                        *data_52ffd0, &ebp_1[-0xf0], 0)
                                                    __builtin_memcpy(data_5301b0 + 0x6995c, 
                                                        &ebp_1[-0xf0], 0x18)
                                                    __builtin_memcpy(data_5301b0 + 0x69974, 
                                                        data_5301b0 + 0x6995c, 0x18)
                                                    
                                                    if (*(*data_52ffd0 + 0x3d01) == 0
                                                            || esi_3 != *(*data_52ffd0 + 0x3d08)
                                                            || *(*data_52ffd0 + 0x3d00) == 0)
                                                        bool o_38 =
                                                            unimplemented  {imul eax, ebx, 0x2345}
                                                        
                                                        if (o_38)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        bool o_39 = unimplemented  {imul edx, esi, 0x35}
                                                        
                                                        if (o_39)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        bool o_40 =
                                                            unimplemented  {imul eax, ebx, 0x2345}
                                                        
                                                        if (o_40)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        bool o_41 = unimplemented  {imul eax, esi, 0x35}
                                                        
                                                        if (o_41)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        sub_51c744(
                                                            *(data_5301b0 + ebx_4 i* 0x8d14
                                                                + esi_3 * 0xd4 - 0x8d94), 
                                                            *(data_5301b0 + ebx_4 i* 0x8d14
                                                            + esi_3 * 0xd4 - 0x8d98), *data_52ffd0, 
                                                            &ebp_1[-0x106], 0, esi_3.w)
                                                        bool o_42 =
                                                            unimplemented  {imul eax, ebx, 0x2345}
                                                        
                                                        if (o_42)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        bool o_43 = unimplemented  {imul edx, esi, 0x35}
                                                        
                                                        if (o_43)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        __builtin_memcpy(
                                                            data_5301b0 + ebx_4 i* 0x8d14 + esi_3 * 0xd4
                                                                - 0x8de4, 
                                                            &ebp_1[-0x106], 0x58)
                                                        
                                                        if (*(*data_52ffd0 + 0x3d00) != 0)
                                                            void* eax_117 = *data_52ffd0
                                                            *(eax_117 + 0x3d18)
                                                            bool o_44 = unimplemented  {imul eax, 
                                                                dword [eax+0x3d18], 0x2345}
                                                            
                                                            if (o_44)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            void* edx_54 = *data_52ffd0
                                                            *(edx_54 + 0x3d1c)
                                                            bool o_45 = unimplemented  {imul edx, 
                                                                dword [edx+0x3d1c], 0x35}
                                                            
                                                            if (o_45)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            *(data_5301b0 + *(eax_117 + 0x3d18) * 0x8d14
                                                                + *(edx_54 + 0x3d1c) * 0xd4 - 0x8d8c)
                                                
                                                int32_t eax_120 = ebx_4 i* 0xc8
                                                bool o_46 = unimplemented  {imul eax, ebx, 0xc8}
                                                
                                                if (o_46)
                                                    sub_403010()
                                                    noreturn
                                                
                                                if (add_overflow(eax_120, esi_3))
                                                    sub_403010()
                                                    noreturn
                                                
                                                data_7a7d48 = eax_120 + esi_3
                                                
                                                if (esi_3 s>= 0xc8)
                                                    int32_t eax_122 = ebx_4 i* 0xc8
                                                    bool o_48 = unimplemented  {imul eax, ebx, 0xc8}
                                                    
                                                    if (o_48)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    if (add_overflow(eax_122, 1))
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    data_7a7d48 = eax_122 + 1
                                                
                                                bool o_50 = unimplemented  {imul eax, eax, 0x10}
                                                
                                                if (o_50)
                                                    sub_403010()
                                                    noreturn
                                                
                                                ebp_1[-8] = *(data_530910
                                                    + sx.d(*(ebp_1[-0x23] + 1)) * 0x80
                                                    + (sx.d(*ebp_1[-0x23]) << 2) - 0x84)
                                                
                                                if (*(*data_530304 + 0xcf6) == 0)
                                                    if (*(ebp_1[-0x23] + 0x5c) != 0
                                                            && *(ebp_1[-0x23] + 0xa4) s> 0xfffffff5
                                                            && *(ebp_1[-0x23] + 0xa4) s< 0xffffffff)
                                                        int32_t eax_136 = *(ebp_1[-0x23] + 0xac) - 0xc
                                                        
                                                        if (eax_136 u>= 2 && eax_136 != 4)
                                                            ebp_1[-8] = *data_5303c0
                                                    
                                                    if (*(*data_5301f4 + 4) == 1
                                                            && *(ebp_1[-0x23] + 0x5c) != 0)
                                                        int32_t eax_145 = *(ebp_1[-0x23] + 0xa4)
                                                        
                                                        if ((eax_145 == 0xb || eax_145 == 0xf)
                                                                && *data_530364 == 3)
                                                            int32_t eax_150 = *(ebp_1[-0x23] + 0xac)
                                                            
                                                            if (eax_150 == 0xb || eax_150 == 0xf)
                                                                ebp_1[-8] = *data_5303c0
                                                    
                                                    if (*(ebp_1[-0x23] + 0x5c) != 0
                                                            && *(ebp_1[-0x23] + 0xa4)
                                                            == *(ebp_1[-0x23] + 0xac)
                                                            && *(ebp_1[-0x23] + 0xac) - 0xc u>= 2)
                                                        ebp_1[-8] = *data_5303c0
                                                else if (ebx_4 == 0xb || ebx_4 == 0xf)
                                                    int32_t eax_167 = esi_3 * 0x14
                                                    bool o_51 = unimplemented  {imul eax, esi, 0x14}
                                                    
                                                    if (o_51)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    if (add_overflow(eax_167, 0xffffff4c))
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    ebp_1[-0x107] = eax_167 - 0xb4
                                                    *(ebp_1[-0x23] + 0x18) =
                                                        fconvert.s(float.t(ebp_1[-0x107]))
                                                    bool o_53 = unimplemented  {imul eax, esi, 0x5}
                                                    
                                                    if (o_53)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    ebp_1[-0x107] = esi_3 * 5
                                                    *(ebp_1[-0x23] + 0xc) =
                                                        fconvert.s(float.t(ebp_1[-0x107]))
                                                    
                                                    while (true)
                                                        long double x87_r7_5 =
                                                            fconvert.t(*(ebp_1[-0x23] + 0x18))
                                                        long double temp52_1 = fconvert.t(180f)
                                                        x87_r7_5 - temp52_1
                                                        void* eax_174
                                                        eax_174.w = (x87_r7_5 < temp52_1 ? 1 : 0) << 8
                                                            | (is_unordered.t(x87_r7_5, temp52_1) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r7_5 == temp52_1 ? 1 : 0) << 0xe
                                                        
                                                        if (test_bit(eax_174:1.b, 6)
                                                                || test_bit(eax_174:1.b, 0))
                                                            break
                                                        
                                                        *(ebp_1[-0x23] + 0x18) = fconvert.s(
                                                            fconvert.t(*(ebp_1[-0x23] + 0x18))
                                                            - fconvert.t(360f))
                                                
                                                *(ebp_1 - 0x21) = 0
                                                
                                                if (*(*data_5301f4 + 4) == 0 && ebx_4 == 0xb
                                                        && *(data_5301b0 + 0x7b37c) == 1)
                                                    *(ebp_1 - 0x21) = 1
                                                
                                                *(ebp_1 - 0x32) = 1
                                                *(ebp_1 - 0x33) = 1
                                                
                                                if (*(ebp_1 - 0x59) != 0)
                                                    *(ebp_1 - 0x32) = 0
                                                    *(ebp_1 - 0x33) = 0
                                                
                                                if (*(ebp_1[-0x23] + 0x5c) == 0)
                                                    if (ebx_4 == 0xb || ebx_4 == 0xf)
                                                        *(ebp_1 - 0x32) = 0
                                                    else
                                                        *(ebp_1 - 0x33) = 0
                                                
                                                if (*data_530364 == 2)
                                                    *(ebp_1 - 0x33) = 0
                                                    *(ebp_1 - 0x32) = 1
                                                else if (*data_530364 == 3)
                                                    void* eax_183
                                                    eax_183.b = *(ebp_1 - 0x33)
                                                    *(ebp_1 - 0x31) = eax_183.b
                                                    eax_183.b = *(ebp_1 - 0x32)
                                                    *(ebp_1 - 0x33) = eax_183.b
                                                    eax_183.b = *(ebp_1 - 0x31)
                                                    *(ebp_1 - 0x32) = eax_183.b
                                                    
                                                    if (*data_530364 == 3 && ebx_4 == 0xb
                                                            && *(*data_5301f4 + 0x1026c) == 0
                                                            && *data_53041c == 1)
                                                        *(ebp_1 - 0x31) = 0
                                                        ebp_1[-8] = *data_5303c0
                                                        
                                                        if (esi_3 == 1)
                                                            ebp_1[-8] = 0
                                                    
                                                    bool o_54 = unimplemented  {imul eax, ebx, 0x2345}
                                                    
                                                    if (o_54)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    bool o_55 = unimplemented  {imul edx, esi, 0x35}
                                                    
                                                    if (o_55)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    if (*(data_5301b0 + ebx_4 i* 0x8d14 + esi_3 * 0xd4
                                                            - 0x8d8c) == 0)
                                                        ebp_1[-8] = *data_5303c0
                                                
                                                int32_t edx_58
                                                
                                                if (*(*data_530304 + 0xdfa) != 0)
                                                    void* eax_195
                                                    eax_195.b = *(ebp_1 - 0x33)
                                                    eax_195.b |= *(ebp_1 - 0x32)
                                                    
                                                    if (eax_195.b != 0)
                                                        bool o_56 =
                                                            unimplemented  {imul eax, ebx, 0x2345}
                                                        
                                                        if (o_56)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        bool o_57 = unimplemented  {imul edx, esi, 0x35}
                                                        
                                                        if (o_57)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        if (*(data_5301b0 + ebx_4 i* 0x8d14
                                                                + esi_3 * 0xd4 - 0x8cb8) == 0)
                                                            bool o_58 =
                                                                unimplemented  {imul eax, ebx, 0x2345}
                                                            
                                                            if (o_58)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            bool o_59 =
                                                                unimplemented  {imul edx, esi, 0x35}
                                                            
                                                            if (o_59)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            if (*(data_5301b0 + ebx_4 i* 0x8d14
                                                                    + esi_3 * 0xd4 - 0x8d8c) == 0)
                                                                long double st0_1
                                                                long double temp78_1
                                                                
                                                                if (*(*data_5301f4 + 4) == 7)
                                                                    st0_1, ecx, edx_58 =
                                                                        sub_4ca104(ebx_4, esi_3)
                                                                    temp78_1 = fconvert.t(0f)
                                                                    st0_1 - temp78_1
                                                                
                                                                if (*(*data_5301f4 + 4) != 7 ||
                                                                        test_bit(
                                                                        ((st0_1 < temp78_1 ? 1 : 0) << 8 | (
                                                                            is_unordered.t(st0_1, temp78_1) ? 1 : 0)
                                                                            << 0xa
                                                                            | (st0_1 == temp78_1 ? 1 : 0) << 0xe)
                                                                            :1.b, 
                                                                        6))
                                                                    char eax_205
                                                                    eax_205, ecx, edx_58 =
                                                                        sub_4ee6f0(ebx_4.w, esi_3.w)
                                                                    
                                                                    if (eax_205 == 0 && ebx_4 != 0xc)
                                                                        void* eax_206
                                                                        eax_206.b = *data_530364
                                                                        char temp83_1 = eax_206.b
                                                                        eax_206.b -= 2
                                                                        
                                                                        if (temp83_1 == 2)
                                                                            *(ebp_1 - 0x32) = 0
                                                                            *(ebp_1 - 0x33) = 0
                                                                    
                                                                    void* eax_207
                                                                    eax_207.b = *data_530364
                                                                    char temp80_1 = eax_207.b
                                                                    eax_207.b -= 1
                                                                    char temp82_1
                                                                    
                                                                    if (temp80_1 != 1)
                                                                        temp82_1 = eax_207.b
                                                                        eax_207.b -= 2
                                                                    
                                                                    if (temp80_1 == 1 || temp82_1 == 2)
                                                                        char eax_209
                                                                        eax_209, ecx, edx_58 = sub_4ee6b0(ebx_4)
                                                                        
                                                                        if (eax_209 != 0 && esi_3 != 1)
                                                                            bool o_60 =
                                                                                unimplemented  {imul eax, ebx, 0x2345}
                                                                            
                                                                            if (o_60)
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            bool o_61 =
                                                                                unimplemented  {imul edx, esi, 0x35}
                                                                            
                                                                            if (o_61)
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            if (*(data_5301b0 + ebx_4 i* 0x8d14
                                                                                    + esi_3 * 0xd4 - 0x8d8c) == 0)
                                                                                bool o_62 =
                                                                                    unimplemented  {imul eax, ebx, 0x2345}
                                                                                
                                                                                if (o_62)
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                if (esi_3 s<
                                                                                        *(data_5301b0 + ebx_4 i* 0x8d14 - 0x39c)
                                                                                        && esi_3 s> 0)
                                                                                    bool o_63 =
                                                                                        unimplemented  {imul eax, ebx, 0x2345}
                                                                                    
                                                                                    if (o_63)
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    bool o_64 =
                                                                                        unimplemented  {imul edx, esi, 0x35}
                                                                                    
                                                                                    if (o_64)
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    if (*(data_5301b0 + ebx_4 i* 0x8d14
                                                                                            + esi_3 * 0xd4 - 0x8cb8) == 0)
                                                                                        int32_t eax_216 = esi_3 & 0x80000003
                                                                                        
                                                                                        if (eax_216 s< 0)
                                                                                            eax_216 =
                                                                                                ((eax_216 - 1) | 0xfffffffc) + 1
                                                                                        
                                                                                        if (eax_216 != 0)
                                                                                            *(ebp_1 - 0x33) = 0
                                                                                            *(ebp_1 - 0x32) = 0
                                                                    
                                                                    void* eax_219
                                                                    eax_219.b = *data_530364
                                                                    
                                                                    if (eax_219.b == 0)
                                                                        char eax_221
                                                                        eax_221, ecx, edx_58 = sub_4ee6b0(ebx_4)
                                                                        
                                                                        if (eax_221 != 0 && esi_3 != 1)
                                                                            bool o_65 =
                                                                                unimplemented  {imul eax, ebx, 0x2345}
                                                                            
                                                                            if (o_65)
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            bool o_66 =
                                                                                unimplemented  {imul edx, esi, 0x35}
                                                                            
                                                                            if (o_66)
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            if (*(data_5301b0 + ebx_4 i* 0x8d14
                                                                                    + esi_3 * 0xd4 - 0x8d8c) == 0)
                                                                                bool o_67 =
                                                                                    unimplemented  {imul eax, ebx, 0x2345}
                                                                                
                                                                                if (o_67)
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                int32_t eax_225 =
                                                                                    *(data_5301b0 + ebx_4 i* 0x8d14 - 0x39c)
                                                                                
                                                                                if (add_overflow(eax_225, 0xffffffff))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                if (esi_3 s< eax_225 - 1 && esi_3 s> 0)
                                                                                    bool o_69 =
                                                                                        unimplemented  {imul eax, ebx, 0x2345}
                                                                                    
                                                                                    if (o_69)
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    bool o_70 =
                                                                                        unimplemented  {imul edx, esi, 0x35}
                                                                                    
                                                                                    if (o_70)
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    if (*(data_5301b0 + ebx_4 i* 0x8d14
                                                                                            + esi_3 * 0xd4 - 0x8cb8) == 0)
                                                                                        int32_t eax_230 = esi_3 & 0x80000001
                                                                                        
                                                                                        if (eax_230 s< 0)
                                                                                            eax_230 =
                                                                                                ((eax_230 - 1) | 0xfffffffe) + 1
                                                                                        
                                                                                        if (eax_230 != 0)
                                                                                            *(ebp_1 - 0x33) = 0
                                                                                            *(ebp_1 - 0x32) = 0
                                                
                                                if (*data_530364 == 3)
                                                    void* eax_233
                                                    
                                                    if (*(ebp_1 - 0x33) == 0 || *(ebp_1 - 0x46) != 0)
                                                        eax_233 = nullptr
                                                    else
                                                        eax_233.b = 1
                                                    
                                                    *(ebp_1 - 0x33) = eax_233.b
                                                    eax_233.b = *(ebp_1 - 0x32)
                                                    eax_233.b &= *(ebp_1 - 0x46)
                                                    *(ebp_1 - 0x32) = eax_233.b
                                                    
                                                    if (data_7a7d98 == 0 && ebx_4 == 0xc)
                                                        bool o_71 =
                                                            unimplemented  {imul eax, ebx, 0x2345}
                                                        
                                                        if (o_71)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        bool o_72 = unimplemented  {imul edx, esi, 0x35}
                                                        
                                                        if (o_72)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        if (*(data_5301b0 + ebx_4 i* 0x8d14
                                                            + esi_3 * 0xd4 - 0x8d8c) != 0)
                                                        label_4fa3f1:
                                                            void* const eax_241
                                                            eax_241.b = *(*data_5301f4 + 4)
                                                            eax_241.b -= 3
                                                            char temp77_1 = eax_241.b
                                                            eax_241.b -= 2
                                                            
                                                            if (temp77_1 u< 2)
                                                                if (*(ebp_1 - 0x46) == 0
                                                                        || *(ebp_1 - 0x21) != 0)
                                                                    eax_241 = nullptr
                                                                else
                                                                    eax_241.b = 1
                                                                
                                                                *(ebp_1 - 0x33) = eax_241.b
                                                                *(ebp_1 - 0x32) = 0
                                                        else if (*(*data_52ffd0 + 0x3d00) != 0
                                                                && *(*data_530304 + 0xdfb) == 0)
                                                            goto label_4fa3f1
                                                    
                                                    if (data_7a7d98 != 0 && ebx_4 - 0xb u>= 2)
                                                    label_4fa47b:
                                                        void* eax_244
                                                        eax_244.b = *(ebp_1 - 0x33)
                                                        eax_244.b &= *(ebp_1 - 0x46)
                                                        *(ebp_1 - 0x33) = eax_244.b
                                                        *(ebp_1 - 0x32) = 0
                                                        
                                                        if (ebx_4 == 0xc && *(*data_5301f4 + 4) == 4)
                                                            bool o_75 =
                                                                unimplemented  {imul eax, ebx, 0x2345}
                                                            
                                                            if (o_75)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            void* eax_253 =
                                                                data_5301b0 + ebx_4 i* 0x8d14
                                                            int32_t edx_71 = esi_3 * 0x35
                                                            bool o_76 =
                                                                unimplemented  {imul edx, esi, 0x35}
                                                            
                                                            if (o_76)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            *(eax_253 + (edx_71 << 2) - 0x8d98)
                                                            bool o_77 = unimplemented  {imul eax, 
                                                                dword [eax+edx*4-0x8d98], 0x41}
                                                            
                                                            if (o_77)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            if (*(*data_52ffd0 +
                                                                    *(eax_253 + (edx_71 << 2) - 0x8d98)
                                                                    * 0x104) s>= 7
                                                                    && *(*data_530304 + 0xdfb) == 0)
                                                                void* const eax_256
                                                                
                                                                if (*(ebp_1 - 0x46) == 0
                                                                        || *(ebp_1 - 0x21) != 0)
                                                                    eax_256 = nullptr
                                                                else
                                                                    eax_256.b = 1
                                                                
                                                                *(ebp_1 - 0x33) = eax_256.b
                                                    else if (data_7a7d98 == 0 && ebx_4 != 0xb)
                                                        char eax_248
                                                        eax_248, ecx, edx_58 = sub_4ee6b0(ebx_4)
                                                        
                                                        if (eax_248 == 0)
                                                            bool o_73 =
                                                                unimplemented  {imul eax, ebx, 0x2345}
                                                            
                                                            if (o_73)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            bool o_74 =
                                                                unimplemented  {imul edx, esi, 0x35}
                                                            
                                                            if (o_74)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            if (*(data_5301b0 + ebx_4 i* 0x8d14
                                                                    + esi_3 * 0xd4 - 0x8d8c) == 0)
                                                                goto label_4fa47b
                                                
                                                if (*data_530364 == 0 && ebx_4 == 0xc
                                                        && data_7a7d98 == 0)
                                                    bool o_78 = unimplemented  {imul eax, ebx, 0x2345}
                                                    
                                                    if (o_78)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    bool o_79 = unimplemented  {imul edx, esi, 0x35}
                                                    
                                                    if (o_79)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(data_5301b0 + ebx_4 i* 0x8d14 + esi_3 * 0xd4
                                                        - 0x8dc4) = 0
                                                    bool o_80 = unimplemented  {imul eax, ebx, 0x2345}
                                                    
                                                    if (o_80)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    bool o_81 = unimplemented  {imul edx, esi, 0x35}
                                                    
                                                    if (o_81)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(data_5301b0 + ebx_4 i* 0x8d14 + esi_3 * 0xd4
                                                        - 0x8ddc) = 0xc2c20000
                                                
                                                if (sub_4c0924() != 0 && *data_530538 != 0
                                                        && ebx_4 != 0xb)
                                                    *(ebp_1 - 0x32) = 0
                                                    *(ebp_1 - 0x33) = 0
                                                
                                                if (*(*data_530304 + 0xced) == 0)
                                                    if (*(*data_530304 + 0xcf6) == 0 || ebx_4 s>= 0xc)
                                                        if (*(ebp_1 - 0x32) != 0)
                                                            int32_t var_458_9 = *(ebp_1[-0x23] + 4)
                                                            int32_t var_45c_7 = *(ebp_1[-0x23] + 8)
                                                            void* eax_302
                                                            eax_302.b = *(ebp_1 - 0x21)
                                                            edx_58.b = *(ebp_1[-0x23] + 0x1c)
                                                            ecx, ebp_1 = sub_50003c(ebp_1[-8], 
                                                                edx_58.b, 0, eax_302.b, esi_3, ebx_4, 
                                                                0f, *(ebp_1[-0x23] + 0x18), 
                                                                *(ebp_1[-0x23] + 0x14), 
                                                                *(ebp_1[-0x23] + 0x10), 
                                                                *(ebp_1[-0x23] + 0x20), 
                                                                *(ebp_1[-0x23] + 0x24), 6f, 
                                                                fconvert.s(float.t(*data_530990)), 
                                                                fconvert.s(float.t(*data_5309b8)), 
                                                                *(ebp_1[-0x23] + 0xc))
                                                        
                                                        if (*(ebp_1 - 0x33) != 0)
                                                            int32_t eax_306
                                                            int32_t edx_76
                                                            eax_306, edx_76 = sub_402b4c(fconvert.t(
                                                                *(ebp_1[-0x23] + 4)))
                                                            ebp_1[-0x109] = eax_306
                                                            ebp_1[-0x108] = edx_76
                                                            float var_458_10 =
                                                                fconvert.s(float.t(*(ebp_1 - 0x424)))
                                                            int32_t var_45c_8 = *(ebp_1[-0x23] + 8)
                                                            void* eax_315
                                                            eax_315.b = *(ebp_1 - 0x21)
                                                            edx_76.b = *(ebp_1[-0x23] + 0x1c)
                                                            ecx.b = 1
                                                            ecx, ebp_1 = sub_50003c(*data_5308d4, 
                                                                edx_76.b, ecx.b, eax_315.b, esi_3, 
                                                                ebx_4, 0f, *(ebp_1[-0x23] + 0x18), 
                                                                *(ebp_1[-0x23] + 0x14), 
                                                                *(ebp_1[-0x23] + 0x10), 
                                                                *(ebp_1[-0x23] + 0x20), 
                                                                *(ebp_1[-0x23] + 0x24), 6f, 
                                                                fconvert.s(float.t(*data_530990)), 
                                                                fconvert.s(float.t(*data_5309b8)), 
                                                                *(ebp_1[-0x23] + 0xc))
                                                    else
                                                        if (*(ebp_1[-0x23] + 0x5c) != 0)
                                                            int32_t var_458_7 = *(ebp_1[-0x23] + 4)
                                                            int32_t var_45c_5 = *(ebp_1[-0x23] + 8)
                                                            void* eax_278
                                                            eax_278.b = *(ebp_1 - 0x21)
                                                            edx_58.b = *(ebp_1[-0x23] + 0x1c)
                                                            ecx, edx_58, ebp_1 = sub_50003c(ebp_1[-8], 
                                                                edx_58.b, 0, eax_278.b, esi_3, ebx_4, 
                                                                0f, *(ebp_1[-0x23] + 0x18), 
                                                                *(ebp_1[-0x23] + 0x14), 
                                                                *(ebp_1[-0x23] + 0x10), 
                                                                *(ebp_1[-0x23] + 0x20), 
                                                                *(ebp_1[-0x23] + 0x24), 6f, 
                                                                fconvert.s(float.t(*data_530990)), 
                                                                fconvert.s(float.t(*data_5309b8)), 
                                                                *(ebp_1[-0x23] + 0xc))
                                                        
                                                        int32_t var_458_8 = *(ebp_1[-0x23] + 4)
                                                        int32_t var_45c_6 = *(ebp_1[-0x23] + 8)
                                                        void* eax_290
                                                        eax_290.b = *(ebp_1 - 0x21)
                                                        edx_58.b = *(ebp_1[-0x23] + 0x1c)
                                                        ecx.b = 1
                                                        ecx, ebp_1 = sub_50003c(ebp_1[-8], edx_58.b, 
                                                            ecx.b, eax_290.b, esi_3, ebx_4, 0f, 
                                                            *(ebp_1[-0x23] + 0x18), 
                                                            *(ebp_1[-0x23] + 0x14), 
                                                            *(ebp_1[-0x23] + 0x10), 
                                                            *(ebp_1[-0x23] + 0x20), 
                                                            *(ebp_1[-0x23] + 0x24), 6f, 
                                                            fconvert.s(float.t(*data_530990)), 
                                                            fconvert.s(float.t(*data_5309b8)), 
                                                            *(ebp_1[-0x23] + 0xc))
                                        else if ((ebx_4 == *(*data_5301f4 + 0x10270)
                                                || ebx_4 == *(*data_5301f4 + 0x10274))
                                                && *(*data_5301f4 + 0x1026c) != 0)
                                            goto label_4f9c17
                                    else
                                        bool o_33 = unimplemented  {imul eax, ebx, 0x2345}
                                        
                                        if (o_33)
                                            sub_403010()
                                            noreturn
                                        
                                        if (esi_3 == *(data_5301b0 + ebx_4 i* 0x8d14 - 0x39c)
                                                || esi_3 == 1 || *(ebp_1 - 0x45) != 0)
                                            goto label_4f9bd3
                                    
                                    ebp_1[-7] += 1
                                    int32_t temp30_1 = ebp_1[-0x22]
                                    ebp_1[-0x22] -= 1
                                    
                                    if (temp30_1 == 1)
                                        break
                        
                        ebp_1[-6] += 1
                        int32_t temp7_1 = ebp_1[-0x21]
                        ebp_1[-0x21] -= 1
                        
                        if (temp7_1 == 1)
                            break
            
            *(ebp_1 - 0x46) += 1
            
            if (*(ebp_1 - 0x46) == 2)
                break
    
    *(ebp_1 - 0x46) = 0
    int32_t* result
    
    do
        if (*(ebp_1 - 0x46) != 0 || *data_530364 == 3)
            result = ebp_1[-0x10]
            int32_t edx_77 = ebp_1[-0x11]
            
            if (edx_77 s>= result)
                ebp_1[-0x21] = edx_77 - result + 1
                ebp_1[-6] = result
                int32_t i
                
                do
                    *data_530740 = 0
                    float ebx_5 = ebp_1[-6]
                    bool o_82 = unimplemented  {imul eax, ebx, 0x2345}
                    
                    if (o_82)
                        sub_403010()
                        noreturn
                    
                    result = *(data_5301b0 + ebx_5 i* 0x8d14 - 0x39c)
                    
                    if (result s> 0)
                        ebp_1[-0x22] = result
                        ebp_1[-7] = 1
                        int32_t j
                        
                        do
                            int32_t esi_10 = ebp_1[-7]
                            
                            if (ebx_5 == 1 && *data_530364 == 3)
                                bool o_83 = unimplemented  {imul eax, ebx, 0x2345}
                                
                                if (o_83)
                                    sub_403010()
                                    noreturn
                                
                                int32_t esi_8 = *(data_5301b0 + ebx_5 i* 0x8d14 - 0x39c)
                                
                                if (add_overflow(esi_8, 1))
                                    sub_403010()
                                    noreturn
                                
                                esi_10 = esi_8 + 1 - ebp_1[-7]
                                
                                if (add_overflow(esi_8 + 1, neg.d(ebp_1[-7])))
                                    sub_403010()
                                    noreturn
                            
                            if (data_52fe98 == 0 || ebx_5 == 1 || ebx_5 == 0xb)
                                bool o_86 = unimplemented  {imul eax, ebx, 0x2345}
                                
                                if (o_86)
                                    sub_403010()
                                    noreturn
                                
                                bool o_87 = unimplemented  {imul edx, esi, 0x35}
                                
                                if (o_87)
                                    sub_403010()
                                    noreturn
                                
                                char* edi_7 = &(data_5301b0 + ebx_5 i* 0x8d14)[esi_10 * 0x35 - 0x237a]
                                result.b = *edi_7
                                
                                if (result.b != 0 && result.b s< 0x64)
                                    int32_t eax_322 = ebx_5 i* 0x64
                                    bool o_88 = unimplemented  {imul eax, ebx, 0x64}
                                    
                                    if (o_88)
                                        sub_403010()
                                        noreturn
                                    
                                    if (add_overflow(eax_322, esi_10))
                                        sub_403010()
                                        noreturn
                                    
                                    data_7a7d48 = eax_322 + esi_10
                                    bool o_90 = unimplemented  {imul eax, eax, 0x10}
                                    
                                    if (o_90)
                                        sub_403010()
                                        noreturn
                                    
                                    ebp_1[-8] = *(data_530910 + sx.d(edi_7[1]) * 0x80
                                        + (sx.d(*edi_7) << 2) - 0x84)
                                    *(ebp_1 - 0x21) = 0
                                    
                                    if (ebx_5 == 1)
                                        sub_4ee6dc(esi_10)
                                        bool o_91 = unimplemented  {imul eax, eax, 0x23}
                                        
                                        if (o_91)
                                            sub_403010()
                                            noreturn
                                        
                                        *data_530a74
                                        bool o_92 = unimplemented  {imul edx, dword [edx], 0x1038}
                                        
                                        if (o_92)
                                            sub_403010()
                                            noreturn
                                        
                                        int32_t eax_332 = sub_4ee6dc(esi_10) * 0x23
                                        bool o_93 = unimplemented  {imul eax, eax, 0x23}
                                        
                                        if (o_93)
                                            sub_403010()
                                            noreturn
                                        
                                        void* edx_87 = data_530a74
                                        *edx_87
                                        bool o_94 = unimplemented  {imul edx, dword [edx], 0x1038}
                                        
                                        if (o_94)
                                            sub_403010()
                                            noreturn
                                        
                                        *(*(*data_530304 + 0xab0) + *edx_87 * 0x81c0 + (eax_332 << 3)
                                            - 0xf1)
                                        *(ebp_1 - 0x21) = 0
                                    
                                    *(ebp_1 - 0x32) = 1
                                    *(ebp_1 - 0x33) = 1
                                    
                                    if (edi_7[0x5c] == 0 || edi_7[0x5d] == 1)
                                        if (ebx_5 != 1)
                                            *(ebp_1 - 0x32) = 0
                                        else
                                            *(ebp_1 - 0x33) = 0
                                    
                                    bool o_95 = unimplemented  {imul eax, ebx, 0x2345}
                                    
                                    if (o_95)
                                        sub_403010()
                                        noreturn
                                    
                                    void* edx_90
                                    
                                    if (*(data_5301b0 + ebx_5 i* 0x8d14 - 0x48) == 0)
                                        char eax_335
                                        eax_335, ecx, edx_90 = sub_4ee7d8()
                                        
                                        if (eax_335 != 0)
                                            *(ebp_1 - 0x33) = 0
                                            *(ebp_1 - 0x32) = 1
                                    else
                                        *(ebp_1 - 0x32) = 1
                                        *(ebp_1 - 0x33) = 1
                                    
                                    if (*data_530364 == 2)
                                        *(ebp_1 - 0x33) = 0
                                        *(ebp_1 - 0x32) = 1
                                    
                                    if (*data_530364 == 3 && ebx_5 == 1
                                            && (edi_7[0x5c] == 0 || edi_7[0x5d] == 1))
                                        *(ebp_1 - 0x33) = 0
                                        *(ebp_1 - 0x32) = 0
                                    
                                    if (*data_530364 == 3)
                                        void* eax_338
                                        
                                        if (*(ebp_1 - 0x33) == 0 || *(ebp_1 - 0x46) != 0)
                                            eax_338 = nullptr
                                        else
                                            eax_338.b = 1
                                        
                                        *(ebp_1 - 0x33) = eax_338.b
                                        eax_338.b = *(ebp_1 - 0x32)
                                        eax_338.b &= *(ebp_1 - 0x46)
                                        *(ebp_1 - 0x32) = eax_338.b
                                        char eax_340
                                        eax_340, ecx, edx_90 = sub_4ee6b0(ebx_5)
                                        
                                        if (eax_340 != 0)
                                            *(ebp_1 - 0x32) = *(ebp_1 - 0x46) ^ 1
                                            *(ebp_1 - 0x33) = 0
                                            ebp_1[-8] = *data_5303c0
                                        
                                        if (*(*data_5301f4 + 4) == 1 && edi_7[0x5c] != 0
                                                && *(edi_7 + 0xa4) == 0xb)
                                            ebp_1[-8] = *data_5303c0
                                    
                                    if (*(*data_530304 + 0xdfa) != 0)
                                        void* eax_350
                                        eax_350.b = *(ebp_1 - 0x33)
                                        eax_350.b |= *(ebp_1 - 0x32)
                                        
                                        if (eax_350.b != 0)
                                            bool o_96 = unimplemented  {imul edx, ebx, 0x2345}
                                            
                                            if (o_96)
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t eax_351 = esi_10 * 0x35
                                            bool o_97 = unimplemented  {imul eax, esi, 0x35}
                                            
                                            if (o_97)
                                                sub_403010()
                                                noreturn
                                            
                                            if (*(data_5301b0 + ebx_5 i* 0x8d14 + (eax_351 << 2)
                                                - 0x8cb8) != 0)
                                            label_4fab74:
                                                bool o_99 = unimplemented  {imul eax, ebx, 0x2345}
                                                
                                                if (o_99)
                                                    sub_403010()
                                                    noreturn
                                                
                                                bool o_100 = unimplemented  {imul edx, esi, 0x35}
                                                
                                                if (o_100)
                                                    sub_403010()
                                                    noreturn
                                                
                                                if (*(data_5301b0 + ebx_5 i* 0x8d14 + esi_10 * 0xd4
                                                        - 0x8cb7) == 2)
                                                    goto label_4fabce
                                                
                                                bool o_101 = unimplemented  {imul eax, ebx, 0x2345}
                                                
                                                if (o_101)
                                                    sub_403010()
                                                    noreturn
                                                
                                                bool o_102 = unimplemented  {imul edx, esi, 0x35}
                                                
                                                if (o_102)
                                                    sub_403010()
                                                    noreturn
                                                
                                                if (*(data_5301b0 + ebx_5 i* 0x8d14 + esi_10 * 0xd4
                                                        - 0x8d8b) == 2)
                                                    goto label_4fabce
                                            else
                                                bool o_98 = unimplemented  {imul edx, ebx, 0x2345}
                                                
                                                if (o_98)
                                                    sub_403010()
                                                    noreturn
                                                
                                                if (*(data_5301b0 + ebx_5 i* 0x8d14 + (eax_351 << 2)
                                                        - 0x8d8c) != 0)
                                                    goto label_4fab74
                                                
                                            label_4fabce:
                                                char eax_357
                                                eax_357, ecx, edx_90 = sub_4ee6b0(ebx_5)
                                                
                                                if (eax_357 != 0)
                                                    void* eax_358
                                                    eax_358.b = *data_530364
                                                    
                                                    if (eax_358.b != 0)
                                                        void* eax_366
                                                        eax_366.b = *data_530364
                                                        char temp44_1 = eax_366.b
                                                        eax_366.b -= 3
                                                        
                                                        if (temp44_1 != 3)
                                                            void* eax_374
                                                            eax_374.b = *data_530364
                                                            char temp46_1 = eax_374.b
                                                            eax_374.b -= 2
                                                            
                                                            if (temp46_1 == 2)
                                                                char eax_376
                                                                eax_376, ecx, edx_90 =
                                                                    sub_4ee6f0(ebx_5.w, esi_10.w)
                                                                
                                                                if (eax_376 == 0
                                                                        && mods.dp.d(sx.q(esi_10), 3) != 0)
                                                                    void* eax_380
                                                                    eax_380.b = *data_530364
                                                                    char temp57_1 = eax_380.b
                                                                    eax_380.b -= 2
                                                                    
                                                                    if (temp57_1 == 2)
                                                                        *(ebp_1 - 0x32) = 0
                                                                        *(ebp_1 - 0x33) = 0
                                                        else
                                                            char eax_368
                                                            eax_368, ecx, edx_90 =
                                                                sub_4ee6f0(ebx_5.w, esi_10.w)
                                                            
                                                            if (eax_368 == 0)
                                                                int32_t eax_370 = esi_10 & 0x80000001
                                                                
                                                                if (eax_370 s< 0)
                                                                    eax_370 =
                                                                        ((eax_370 - 1) | 0xfffffffe) + 1
                                                                
                                                                if (eax_370 != 0)
                                                                    void* eax_373
                                                                    eax_373.b = *data_530364
                                                                    char temp58_1 = eax_373.b
                                                                    eax_373.b -= 3
                                                                    
                                                                    if (temp58_1 == 3)
                                                                        *(ebp_1 - 0x32) = 0
                                                                        *(ebp_1 - 0x33) = 0
                                                    else
                                                        bool o_103 =
                                                            unimplemented  {imul eax, ebx, 0x2345}
                                                        
                                                        if (o_103)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        bool o_104 =
                                                            unimplemented  {imul edx, esi, 0x35}
                                                        
                                                        if (o_104)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        if (*(data_5301b0 + ebx_5 i* 0x8d14
                                                                + esi_10 * 0xd4 - 0x8d8c) == 0)
                                                            bool o_105 =
                                                                unimplemented  {imul eax, ebx, 0x2345}
                                                            
                                                            if (o_105)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            int32_t eax_362 =
                                                                *(data_5301b0 + ebx_5 i* 0x8d14 - 0x39c)
                                                            
                                                            if (add_overflow(eax_362, 0xffffffff))
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            if (esi_10 s< eax_362 - 1 && esi_10 s> 0)
                                                                bool o_107 =
                                                                    unimplemented  {imul eax, ebx, 0x2345}
                                                                
                                                                if (o_107)
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                bool o_108 =
                                                                    unimplemented  {imul edx, esi, 0x35}
                                                                
                                                                if (o_108)
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                *(data_5301b0 + ebx_5 i* 0x8d14
                                                                    + esi_10 * 0xd4 - 0x8cb8)
                                                else if (ebx_5 != 1)
                                                    __builtin_memcpy(&ebp_1[-0x111], 0x4fb3e4, 0x20)
                                                    bool o_109 = unimplemented  {imul eax, ebx, 0x2345}
                                                    
                                                    if (o_109)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    int32_t eax_385 =
                                                        *(data_5301b0 + ebx_5 i* 0x8d14 - 0x39c)
                                                    
                                                    if (eax_385 u<= 0xff)
                                                        ebp_1[-0x111] |= 1 << (eax_385 u% 0x20)
                                                    
                                                    bool c_2 = esi_10 u< 0xff
                                                    
                                                    if (esi_10 == 0xff || c_2)
                                                        c_2 = test_bit(ebp_1[-0x111], esi_10)
                                                    
                                                    if (not(c_2))
                                                        bool o_110 =
                                                            unimplemented  {imul eax, ebx, 0x2345}
                                                        
                                                        if (o_110)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        if (*(data_5301b0 + ebx_5 i* 0x8d14 - 0x39c)
                                                                s>= 0xa && *(*data_5301f4 + 4) != 1)
                                                            int32_t eax_391 = esi_10 & 0x80000001
                                                            
                                                            if (eax_391 s< 0)
                                                                eax_391 =
                                                                    ((eax_391 - 1) | 0xfffffffe) + 1
                                                            
                                                            if (eax_391 != 0)
                                                                void* eax_394
                                                                eax_394.b = *data_530364
                                                                char temp70_1 = eax_394.b
                                                                eax_394.b -= 2
                                                                
                                                                if (temp70_1 == 2)
                                                                    *(ebp_1 - 0x32) = 0
                                                                    *(ebp_1 - 0x33) = 0
                                                else
                                                    void* eax_381
                                                    eax_381.b = *data_530364
                                                    char temp43_1 = eax_381.b
                                                    eax_381.b -= 3
                                                    
                                                    if (temp43_1 == 3 && *(*data_530304 + 0xdfb) != 0)
                                                        *(ebp_1 - 0x32) = 0
                                                        *(ebp_1 - 0x33) = 0
                                    
                                    if (*(*data_5301f4 + 4) == 7)
                                        bool o_111 = unimplemented  {imul eax, ebx, 0x41}
                                        
                                        if (o_111)
                                            sub_403010()
                                            noreturn
                                        
                                        if (*(*data_5301f4 + ebx_5 i* 0x208 + 0x1fea0) != 3)
                                            *(ebp_1 - 0x21) = 0
                                        else
                                            *(ebp_1 - 0x21) = 1
                                    
                                    if (sub_4c0924() != 0 && *data_530538 != 0 && ebx_5 != 0xb)
                                        *(ebp_1 - 0x32) = 0
                                        *(ebp_1 - 0x33) = 0
                                    
                                    if (ebx_5 == 1)
                                        *(ebp_1 - 0x32) = 1
                                        *(ebp_1 - 0x33) = 1
                                    
                                    if (*data_530364 != 1)
                                    label_4fae8e:
                                        
                                        if (*(*data_530304 + 0xced) == 0)
                                            if (ebx_5 s> *data_5300d0)
                                            label_4fb2da:
                                                
                                                if (*(ebp_1 - 0x32) != 0)
                                                    int32_t var_458_16 = *(edi_7 + 4)
                                                    int32_t var_45c_12 = *(edi_7 + 8)
                                                    int32_t* eax_441
                                                    eax_441.b = *(ebp_1 - 0x21)
                                                    edx_90.b = edi_7[0x1c]
                                                    result, ecx, ebp_1 = sub_50003c(ebp_1[-8], 
                                                        edx_90.b, 0, eax_441.b, esi_10, ebx_5, 0f, 
                                                        *(edi_7 + 0x18), *(edi_7 + 0x14), 
                                                        *(edi_7 + 0x10), *(edi_7 + 0x20), 
                                                        *(edi_7 + 0x24), 6f, 
                                                        fconvert.s(float.t(*data_530990)), 
                                                        fconvert.s(float.t(*data_5309b8)), 
                                                        *(edi_7 + 0xc))
                                                
                                                if (*(ebp_1 - 0x33) != 0)
                                                    int32_t eax_443
                                                    int32_t edx_113
                                                    eax_443, edx_113 =
                                                        sub_402b4c(fconvert.t(*(edi_7 + 4)))
                                                    ebp_1[-0x109] = eax_443
                                                    ebp_1[-0x108] = edx_113
                                                    float var_458_17 =
                                                        fconvert.s(float.t(*(ebp_1 - 0x424)))
                                                    int32_t var_45c_13 = *(edi_7 + 8)
                                                    int32_t* eax_445
                                                    eax_445.b = *(ebp_1 - 0x21)
                                                    edx_113.b = edi_7[0x1c]
                                                    ecx.b = 1
                                                    result, ecx, ebp_1 = sub_50003c(*data_5308d4, 
                                                        edx_113.b, ecx.b, eax_445.b, esi_10, ebx_5, 0f, 
                                                        *(edi_7 + 0x18), *(edi_7 + 0x14), 
                                                        *(edi_7 + 0x10), *(edi_7 + 0x20), 
                                                        *(edi_7 + 0x24), 6f, 
                                                        fconvert.s(float.t(*data_530990)), 
                                                        fconvert.s(float.t(*data_5309b8)), 
                                                        *(edi_7 + 0xc))
                                            else
                                                if (sub_4c4bec(ebx_5) == 0)
                                                    bool o_114 = unimplemented  {imul eax, ebx, 0x2345}
                                                    
                                                    if (o_114)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    if (*(data_5301b0 + ebx_5 i* 0x8d14 - 0x48) == 0)
                                                        goto label_4fb2da
                                                    
                                                    goto label_4faed1
                                                
                                            label_4faed1:
                                                bool o_115 = unimplemented  {imul eax, ebx, 0x2345}
                                                
                                                if (o_115)
                                                    sub_403010()
                                                    noreturn
                                                
                                                if (*(data_5301b0 + ebx_5 i* 0x8d14 - 0x48) == 0)
                                                    ebp_1[-0x18] = 0x3f800000
                                                    ebp_1[-0x19] = 0
                                                else
                                                    bool o_116 = unimplemented  {imul eax, ebx, 0x2345}
                                                    
                                                    if (o_116)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    ebp_1[-0x18] =
                                                        *(data_5301b0 + ebx_5 i* 0x8d14 - 0x44)
                                                    bool o_117 = unimplemented  {imul eax, ebx, 0x2345}
                                                    
                                                    if (o_117)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    bool o_118 = unimplemented  {imul eax, ebx, 0x2345}
                                                    
                                                    if (o_118)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    ebp_1[-0x19] = fconvert.s((fconvert.t(1f) - fconvert
                                                        .t(*(data_5301b0 + ebx_5 i* 0x8d14 - 0x44))) *
                                                        fconvert.t(
                                                        *(data_5301b0 + ebx_5 i* 0x8d14 - 0x44)))
                                                
                                                if (*(*data_5301f4 + 0x111f9) != 0
                                                        && (*data_5301f4)[0x400e].b != 0)
                                                    if (add_overflow(esi_10, 0xffffffff))
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    bool o_120 = unimplemented  {imul eax, eax, 0x28}
                                                    
                                                    if (o_120)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    ebp_1[-0x107] = (esi_10 - 1) * 0x28
                                                    ebp_1[-0x1a] = fconvert.s(fconvert.t(370f)
                                                        - float.t(ebp_1[-0x107]) / fconvert.t(2f))
                                                    
                                                    if (add_overflow(esi_10, 0xffffffff))
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    ebp_1[-0x107] = esi_10 - 1
                                                    ebp_1[-0x1b] = fconvert.s(fconvert.t(0.5f)
                                                        - float.t(ebp_1[-0x107]) * data_4fb410
                                                        / fconvert.t(2f))
                                                    
                                                    if (add_overflow(esi_10, 0xffffffff))
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    bool o_123 = unimplemented  {imul eax, eax, 0xa}
                                                    
                                                    if (o_123)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    ebp_1[-0x107] = (esi_10 - 1) * 0xa
                                                    ebp_1[-0x1c] = fconvert.s(
                                                        float.t(ebp_1[-0x107]) / fconvert.t(2f)
                                                        + fconvert.t(-5f))
                                                    
                                                    if (add_overflow(esi_10, 0xffffffff))
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    bool o_125 = unimplemented  {imul eax, eax, 0x1e}
                                                    
                                                    if (o_125)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    ebp_1[-0x107] = (esi_10 - 1) * 0x1e
                                                    ebp_1[-0x1d] = fconvert.s(
                                                        float.t(ebp_1[-0x107]) / fconvert.t(2f)
                                                        + fconvert.t(-30f))
                                                    
                                                    if (add_overflow(esi_10, 0xffffffff))
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    bool o_127 = unimplemented  {imul eax, eax, 0x8}
                                                    
                                                    if (o_127)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    ebp_1[-0x107] = (esi_10 - 1) * 8
                                                    ebp_1[-0x20] = fconvert.s(
                                                        float.t(ebp_1[-0x107]) / fconvert.t(2f)
                                                        + fconvert.t(-8f))
                                                    
                                                    if (add_overflow(esi_10, 0xffffffff))
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    ebp_1[-0x107] = esi_10 - 1
                                                    ebp_1[-0x1e] = fconvert.s(data_4fb438
                                                        - float.t(ebp_1[-0x107]) * data_4fb42c
                                                        / fconvert.t(2f))
                                                    
                                                    if (add_overflow(esi_10, 0xffffffff))
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    bool o_130 = unimplemented  {imul eax, eax, 0xf}
                                                    
                                                    if (o_130)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    ebp_1[-0x107] = (esi_10 - 1) * 0xf
                                                    ebp_1[-0x1f] = fconvert.s(fconvert.t(-40f)
                                                        - float.t(ebp_1[-0x107]) / fconvert.t(2f))
                                                else if (esi_10 != 1)
                                                    ebp_1[-0x20] = 0
                                                    __builtin_memcpy(&ebp_1[-0x1f], 
                                                        "\x00\x00\x5c\xc2\x66\x66\xe6\x40\x00\x00\x20\x41\x"
                                                    "00\x00\xa0\x40\xcd\xcc\xcc\x3e\x00\x00\xa5\x
                                                            43", 
                                                        0x18)
                                                else
                                                    __builtin_memcpy(&ebp_1[-0x20], 
                                                        "\x00\x00\x00\xc1\x00\x00\x20\xc2\xcd\xcc\xec\x40\x"
                                                    "00\x00\xa0\xc1\x00\x00\xa0\xc0\x00\x00\x00\x3f\x00"
                                                    "00\xb9\x43", 
                                                        0x1c)
                                                
                                                if (*(ebp_1 - 0x32) != 0)
                                                    float var_458_14 = fconvert.s(
                                                        fconvert.t(ebp_1[-0x1c])
                                                        * fconvert.t(ebp_1[-0x18])
                                                        + fconvert.t(*(edi_7 + 4)))
                                                    float var_45c_10 = fconvert.s(
                                                        fconvert.t(ebp_1[-0x1a])
                                                        * fconvert.t(ebp_1[-0x18])
                                                        + fconvert.t(*(edi_7 + 8)))
                                                    int32_t* eax_433
                                                    eax_433.b = *(ebp_1 - 0x21)
                                                    result, ecx, ebp_1 = sub_50003c(ebp_1[-8], 0, 0, 
                                                        eax_433.b, esi_10, ebx_5, 0f, 
                                                        fconvert.s(fconvert.t(ebp_1[-0x1d])
                                                            * fconvert.t(ebp_1[-0x18])
                                                            + fconvert.t(*(edi_7 + 0x18))), 
                                                        fconvert.s(fconvert.t(ebp_1[-0x20])
                                                        * fconvert.t(ebp_1[-0x18])
                                                        + fconvert.t(*(edi_7 + 0x14))), 
                                                        fconvert.s(fconvert.t(*(edi_7 + 0x10))
                                                            - fconvert.t(150f)
                                                            * fconvert.t(ebp_1[-0x18])), 
                                                        ebp_1[-0x1b], 
                                                        fconvert.s(fconvert.t(ebp_1[-0x1e])
                                                            * fconvert.t(ebp_1[-0x18])
                                                            + fconvert.t(*(edi_7 + 0x24))), 
                                                        6f, fconvert.s(float.t(*data_530990)), 
                                                        fconvert.s(float.t(*data_5309b8)), 
                                                        fconvert.s(fconvert.t(ebp_1[-0x1f])
                                                            * fconvert.t(ebp_1[-0x18])
                                                            + fconvert.t(*(edi_7 + 0xc))
                                                            + fconvert.t(60f)
                                                            * fconvert.t(ebp_1[-0x19])))
                                                
                                                if (*(ebp_1 - 0x33) != 0)
                                                    int32_t eax_435
                                                    int32_t edx_112
                                                    eax_435, edx_112 = sub_402b4c(
                                                        fconvert.t(ebp_1[-0x1c])
                                                        * fconvert.t(ebp_1[-0x18])
                                                        + fconvert.t(*(edi_7 + 4)))
                                                    ebp_1[-0x109] = eax_435
                                                    ebp_1[-0x108] = edx_112
                                                    float var_458_15 =
                                                        fconvert.s(float.t(*(ebp_1 - 0x424)))
                                                    float var_45c_11 = fconvert.s(
                                                        fconvert.t(ebp_1[-0x1a])
                                                        * fconvert.t(ebp_1[-0x18])
                                                        + fconvert.t(*(edi_7 + 8)))
                                                    int32_t* eax_437
                                                    eax_437.b = *(ebp_1 - 0x21)
                                                    ecx.b = 1
                                                    result, ecx, ebp_1 = sub_50003c(*data_5308d4, 0, 
                                                        ecx.b, eax_437.b, esi_10, ebx_5, 0f, 
                                                        fconvert.s(fconvert.t(ebp_1[-0x1d])
                                                            * fconvert.t(ebp_1[-0x18])
                                                            + fconvert.t(*(edi_7 + 0x18))), 
                                                        fconvert.s(fconvert.t(ebp_1[-0x20])
                                                        * fconvert.t(ebp_1[-0x18])
                                                        + fconvert.t(*(edi_7 + 0x14))), 
                                                        fconvert.s(fconvert.t(*(edi_7 + 0x10))
                                                            - fconvert.t(150f)
                                                            * fconvert.t(ebp_1[-0x18])), 
                                                        ebp_1[-0x1b], 
                                                        fconvert.s(fconvert.t(ebp_1[-0x1e])
                                                            * fconvert.t(ebp_1[-0x18])
                                                            + fconvert.t(*(edi_7 + 0x24))), 
                                                        6f, fconvert.s(float.t(*data_530990)), 
                                                        fconvert.s(float.t(*data_5309b8)), 
                                                        fconvert.s(fconvert.t(ebp_1[-0x1f])
                                                            * fconvert.t(ebp_1[-0x18])
                                                            + fconvert.t(*(edi_7 + 0xc))
                                                            + fconvert.t(60f)
                                                            * fconvert.t(ebp_1[-0x19])))
                                    else
                                        bool o_112 = unimplemented  {imul eax, ebx, 0x2345}
                                        
                                        if (o_112)
                                            sub_403010()
                                            noreturn
                                        
                                        data_5301b0
                                        bool o_113 = unimplemented  {imul edx, esi, 0x35}
                                        
                                        if (o_113)
                                            sub_403010()
                                            noreturn
                                        
                                        result, edx_90 = sub_4f0c64()
                                        
                                        if (result.b != 0)
                                            goto label_4fae8e
                            
                            ebp_1[-7] += 1
                            j = ebp_1[-0x22]
                            ebp_1[-0x22] -= 1
                        while (j != 1)
                    
                    ebp_1[-6] += 1
                    i = ebp_1[-0x21]
                    ebp_1[-0x21] -= 1
                while (i != 1)
        
        *(ebp_1 - 0x46) += 1
    while (*(ebp_1 - 0x46) != 2)
    
    result.b = *(ebp_1 - 5)
    *ebp_1
    return result
}
