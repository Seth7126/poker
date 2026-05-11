// ============================================================
// 函数名称: sub_518820
// 虚拟地址: 0x518820
// WARP GUID: 8b85220e-61bf-5009-8d53-169efb1ff00a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_511b0c, sub_47a1c0, sub_4c2f1c, sub_4c094c, sub_403010, sub_4c0924
// [被调用的父级函数]: sub_5223e8, sub_520efc
// ============================================================

int32_tsub_518820()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* ebx = data_530304
    void* esi = data_5302c8
    var_8:3.b = 0
    
    if (sub_4c094c() != 0 && sub_4c2f1c(1) != 0)
        if (*(*data_530454 + 0x270) != 0xffffffff)
            *esi
            bool o_1 = unimplemented  {imul eax, dword [esi], 0x1038}
            
            if (o_1)
                sub_403010()
                noreturn
            
            void* edx_3 = data_53098c
            *edx_3
            bool o_2 = unimplemented  {imul edx, dword [edx], 0x23}
            
            if (o_2)
                sub_403010()
                noreturn
            
            *(*data_530454 + 0x270) = sx.d(*(*(*ebx + 0xab0) + *esi * 0x81c0 + *edx_3 * 0x118 - 0x84))
        else
            *(*data_530454 + 0x270) = 0
        
        var_8:3.b = 1
    
    *esi
    bool o_3 = unimplemented  {imul eax, dword [esi], 0x1038}
    
    if (o_3)
        sub_403010()
        noreturn
    
    *(*(*ebx + 0xab0) + *esi * 0x81c0 + 0x27) = 1
    *esi
    bool o_4 = unimplemented  {imul eax, dword [esi], 0x1038}
    
    if (o_4)
        sub_403010()
        noreturn
    
    void* edx_11 = data_53098c
    *edx_11
    bool o_5 = unimplemented  {imul edx, dword [edx], 0x23}
    
    if (o_5)
        sub_403010()
        noreturn
    
    *(*(*ebx + 0xab0) + *esi * 0x81c0 + *edx_11 * 0x118 - 0x7a) = 5
    *esi
    bool o_6 = unimplemented  {imul eax, dword [esi], 0x1038}
    
    if (o_6)
        sub_403010()
        noreturn
    
    void* edx_15 = data_53098c
    *edx_15
    bool o_7 = unimplemented  {imul edx, dword [edx], 0x23}
    
    if (o_7)
        sub_403010()
        noreturn
    
    *(*(*ebx + 0xab0) + *esi * 0x81c0 + *edx_15 * 0x118 - 0xa) = 0xfff9
    *esi
    bool o_8 = unimplemented  {imul eax, dword [esi], 0x1038}
    
    if (o_8)
        sub_403010()
        noreturn
    
    *(*(*ebx + 0xab0) + *esi * 0x81c0 + 6) = 0x1ce
    *esi
    bool o_9 = unimplemented  {imul eax, dword [esi], 0x1038}
    
    if (o_9)
        sub_403010()
        noreturn
    
    *(*(*ebx + 0xab0) + *esi * 0x81c0 + 8) = 0x1a4
    *esi
    bool o_10 = unimplemented  {imul eax, dword [esi], 0x1038}
    
    if (o_10)
        sub_403010()
        noreturn
    
    *(*(*ebx + 0xab0) + *esi * 0x81c0 + 2) = 0x136
    *esi
    bool o_11 = unimplemented  {imul eax, dword [esi], 0x1038}
    
    if (o_11)
        sub_403010()
        noreturn
    
    *(*(*ebx + 0xab0) + *esi * 0x81c0 + 4) = 0xd2
    *esi
    bool o_12 = unimplemented  {imul eax, dword [esi], 0x1038}
    
    if (o_12)
        sub_403010()
        noreturn
    
    void* edx_27 = data_53098c
    *edx_27
    bool o_13 = unimplemented  {imul edx, dword [edx], 0x23}
    
    if (o_13)
        sub_403010()
        noreturn
    
    *(*(*ebx + 0xab0) + *esi * 0x81c0 + *edx_27 * 0x118 - 0x9c) = 0x190
    
    if (*data_5300d0 s<= 6)
        *esi
        bool o_14 = unimplemented  {imul eax, dword [esi], 0x1038}
        
        if (o_14)
            sub_403010()
            noreturn
        
        void* edx_31 = data_53098c
        *edx_31
        bool o_15 = unimplemented  {imul edx, dword [edx], 0x23}
        
        if (o_15)
            sub_403010()
            noreturn
        
        *(*(*ebx + 0xab0) + *esi * 0x81c0 + *edx_31 * 0x118 - 0x98) = 0xaa
        *esi
        bool o_16 = unimplemented  {imul eax, dword [esi], 0x1038}
        
        if (o_16)
            sub_403010()
            noreturn
        
        void* edx_35 = data_53098c
        *edx_35
        bool o_17 = unimplemented  {imul edx, dword [edx], 0x23}
        
        if (o_17)
            sub_403010()
            noreturn
        
        *(*(*ebx + 0xab0) + *esi * 0x81c0 + *edx_35 * 0x118 - 0xf4) = 0x6e
    else if (*data_5300d0 != 7)
        *esi
        bool o_22 = unimplemented  {imul eax, dword [esi], 0x1038}
        
        if (o_22)
            sub_403010()
            noreturn
        
        void* edx_47 = data_53098c
        *edx_47
        bool o_23 = unimplemented  {imul edx, dword [edx], 0x23}
        
        if (o_23)
            sub_403010()
            noreturn
        
        *(*(*ebx + 0xab0) + *esi * 0x81c0 + *edx_47 * 0x118 - 0xf4) = 0x50
        *esi
        bool o_24 = unimplemented  {imul eax, dword [esi], 0x1038}
        
        if (o_24)
            sub_403010()
            noreturn
        
        void* edx_51 = data_53098c
        *edx_51
        bool o_25 = unimplemented  {imul edx, dword [edx], 0x23}
        
        if (o_25)
            sub_403010()
            noreturn
        
        *(*(*ebx + 0xab0) + *esi * 0x81c0 + *edx_51 * 0x118 - 0x98) = 0xd2
    else
        *esi
        bool o_18 = unimplemented  {imul eax, dword [esi], 0x1038}
        
        if (o_18)
            sub_403010()
            noreturn
        
        void* edx_39 = data_53098c
        *edx_39
        bool o_19 = unimplemented  {imul edx, dword [edx], 0x23}
        
        if (o_19)
            sub_403010()
            noreturn
        
        *(*(*ebx + 0xab0) + *esi * 0x81c0 + *edx_39 * 0x118 - 0xf4) = 0x5a
        *esi
        bool o_20 = unimplemented  {imul eax, dword [esi], 0x1038}
        
        if (o_20)
            sub_403010()
            noreturn
        
        void* edx_43 = data_53098c
        *edx_43
        bool o_21 = unimplemented  {imul edx, dword [edx], 0x23}
        
        if (o_21)
            sub_403010()
            noreturn
        
        *(*(*ebx + 0xab0) + *esi * 0x81c0 + *edx_43 * 0x118 - 0x98) = 0xc8
    
    *esi
    bool o_26 = unimplemented  {imul eax, dword [esi], 0x1038}
    
    if (o_26)
        sub_403010()
        noreturn
    
    void* edx_55 = data_530964
    *edx_55
    bool o_27 = unimplemented  {imul edx, dword [edx], 0x23}
    
    if (o_27)
        sub_403010()
        noreturn
    
    *(*(*ebx + 0xab0) + *esi * 0x81c0 + *edx_55 * 0x118 - 0xf4) = 0x12c
    *esi
    bool o_28 = unimplemented  {imul eax, dword [esi], 0x1038}
    
    if (o_28)
        sub_403010()
        noreturn
    
    *(*(*ebx + 0xab0) + *esi * 0x81c0 + 0x13c) = 0x172
    *esi
    bool o_29 = unimplemented  {imul eax, dword [esi], 0x1038}
    
    if (o_29)
        sub_403010()
        noreturn
    
    *(*(*ebx + 0xab0) + *esi * 0x81c0 + 0x13a) = 0xa0
    sub_47a1c0(*data_52fffc, *esi, *ebx, 0)
    *esi
    bool o_30 = unimplemented  {imul edx, dword [esi], 0x1038}
    
    if (o_30)
        sub_403010()
        noreturn
    
    *(*(*ebx + 0xab0) + *esi * 0x81c0 + 0x27) = 0
    *esi
    bool o_31 = unimplemented  {imul edx, dword [esi], 0x1038}
    
    if (o_31)
        sub_403010()
        noreturn
    
    void* ecx_7 = data_53098c
    *ecx_7
    bool o_32 = unimplemented  {imul ecx, dword [ecx], 0x23}
    
    if (o_32)
        sub_403010()
        noreturn
    
    *(*(*ebx + 0xab0) + *esi * 0x81c0 + *ecx_7 * 0x118 - 0x7a) = 5
    *esi
    bool o_33 = unimplemented  {imul edx, dword [esi], 0x1038}
    
    if (o_33)
        sub_403010()
        noreturn
    
    void* ecx_11 = data_53098c
    *ecx_11
    bool o_34 = unimplemented  {imul ecx, dword [ecx], 0x23}
    
    if (o_34)
        sub_403010()
        noreturn
    
    *(*(*ebx + 0xab0) + *esi * 0x81c0 + *ecx_11 * 0x118 - 0xa) = 0xfff9
    *esi
    bool o_35 = unimplemented  {imul edx, dword [esi], 0x1038}
    
    if (o_35)
        sub_403010()
        noreturn
    
    *(*(*ebx + 0xab0) + *esi * 0x81c0 + 6) = 0x28a
    *esi
    bool o_36 = unimplemented  {imul edx, dword [esi], 0x1038}
    
    if (o_36)
        sub_403010()
        noreturn
    
    *(*(*ebx + 0xab0) + *esi * 0x81c0 + 2) = 0x124
    *esi
    bool o_37 = unimplemented  {imul edx, dword [esi], 0x1038}
    
    if (o_37)
        sub_403010()
        noreturn
    
    *(*(*ebx + 0xab0) + *esi * 0x81c0 + 8) = 0x18e
    *esi
    bool o_38 = unimplemented  {imul edx, dword [esi], 0x1038}
    
    if (o_38)
        sub_403010()
        noreturn
    
    *(*(*ebx + 0xab0) + *esi * 0x81c0 + 4) = 0xfc
    *esi
    bool o_39 = unimplemented  {imul edx, dword [esi], 0x1038}
    
    if (o_39)
        sub_403010()
        noreturn
    
    void* ecx_23 = data_53098c
    *ecx_23
    bool o_40 = unimplemented  {imul ecx, dword [ecx], 0x23}
    
    if (o_40)
        sub_403010()
        noreturn
    
    *(*(*ebx + 0xab0) + *esi * 0x81c0 + *ecx_23 * 0x118 - 0x9c) = 0x1a9
    *esi
    bool o_41 = unimplemented  {imul edx, dword [esi], 0x1038}
    
    if (o_41)
        sub_403010()
        noreturn
    
    void* ecx_27 = data_53098c
    *ecx_27
    bool o_42 = unimplemented  {imul ecx, dword [ecx], 0x23}
    
    if (o_42)
        sub_403010()
        noreturn
    
    *(*(*ebx + 0xab0) + *esi * 0x81c0 + *ecx_27 * 0x118 - 0xf6) = 0x2d
    *esi
    bool o_43 = unimplemented  {imul edx, dword [esi], 0x1038}
    
    if (o_43)
        sub_403010()
        noreturn
    
    void* ecx_31 = data_53098c
    *ecx_31
    bool o_44 = unimplemented  {imul ecx, dword [ecx], 0x23}
    
    if (o_44)
        sub_403010()
        noreturn
    
    *(*(*ebx + 0xab0) + *esi * 0x81c0 + *ecx_31 * 0x118 - 0xf4) = 0x53
    *esi
    bool o_45 = unimplemented  {imul edx, dword [esi], 0x1038}
    
    if (o_45)
        sub_403010()
        noreturn
    
    void* ecx_35 = data_53098c
    *ecx_35
    bool o_46 = unimplemented  {imul ecx, dword [ecx], 0x23}
    
    if (o_46)
        sub_403010()
        noreturn
    
    *(*(*ebx + 0xab0) + *esi * 0x81c0 + *ecx_35 * 0x118 - 0x98) = 0xd2
    *esi
    bool o_47 = unimplemented  {imul edx, dword [esi], 0x1038}
    
    if (o_47)
        sub_403010()
        noreturn
    
    void* ecx_39 = data_530964
    *ecx_39
    bool o_48 = unimplemented  {imul ecx, dword [ecx], 0x23}
    
    if (o_48)
        sub_403010()
        noreturn
    
    *(*(*ebx + 0xab0) + *esi * 0x81c0 + *ecx_39 * 0x118 - 0xf4) = 0xc
    *esi
    bool o_49 = unimplemented  {imul edx, dword [esi], 0x1038}
    
    if (o_49)
        sub_403010()
        noreturn
    
    if (add_overflow(0x1ed, 0xffffff42))
        sub_403010()
        noreturn
    
    *(*(*ebx + 0xab0) + *esi * 0x81c0 + 0x13c) = 0x12f
    *esi
    bool o_51 = unimplemented  {imul eax, dword [esi], 0x1038}
    
    if (o_51)
        sub_403010()
        noreturn
    
    *(*(*ebx + 0xab0) + *esi * 0x81c0 + 0x13a) = 0xb4
    *esi
    bool o_52 = unimplemented  {imul eax, dword [esi], 0x1038}
    
    if (o_52)
        sub_403010()
        noreturn
    
    *(*(*ebx + 0xab0) + *esi * 0x81c0 + 0x194) = 0xa0
    sub_47a1c0(*data_52fffc, *esi, *ebx, 0)
    int32_t edi
    
    if (var_8:3.b == 0)
        void* eax_44 = data_5300d0
        
        if (add_overflow(8, neg.d(*eax_44)))
            sub_403010()
            noreturn
        
        edi = (8 - *eax_44) * 0x18
        bool o_56 = unimplemented  {imul edi, edx, 0x18}
        
        if (o_56)
            sub_403010()
            noreturn
        
        if (sub_4c0924() != 0)
            int32_t eax_48 = sub_511b0c(*data_530454)
            
            if (add_overflow(8, neg.d(eax_48)))
                sub_403010()
                noreturn
            
            edi = (8 - eax_48) * 0x18
            bool o_58 = unimplemented  {imul edi, edx, 0x18}
            
            if (o_58)
                sub_403010()
                noreturn
        
        *esi
        bool o_59 = unimplemented  {imul eax, dword [esi], 0x1038}
        
        if (o_59)
            sub_403010()
            noreturn
        
        void* edx_95 = data_53098c
        *edx_95
        bool o_60 = unimplemented  {imul edx, dword [edx], 0x23}
        
        if (o_60)
            sub_403010()
            noreturn
        
        *(*(*ebx + 0xab0) + *esi * 0x81c0 + *edx_95 * 0x118 - 0x82) = 0x14
    else
        edi = 0x60
        *esi
        bool o_53 = unimplemented  {imul eax, dword [esi], 0x1038}
        
        if (o_53)
            sub_403010()
            noreturn
        
        void* edx_89 = data_53098c
        *edx_89
        bool o_54 = unimplemented  {imul edx, dword [edx], 0x23}
        
        if (o_54)
            sub_403010()
            noreturn
        
        *(*(*ebx + 0xab0) + *esi * 0x81c0 + *edx_89 * 0x118 - 0x82) = 4
    
    *esi
    int32_t eax_51 = *esi * 0x1038
    bool o_61 = unimplemented  {imul eax, dword [esi], 0x1038}
    
    if (o_61)
        sub_403010()
        noreturn
    
    int32_t edx_99 = sx.d(*(*(*ebx + 0xab0) + (eax_51 << 3) + 0x13c))
    
    if (add_overflow(edx_99, neg.d(edi)))
        sub_403010()
        noreturn
    
    *(*(*ebx + 0xab0) + (eax_51 << 3) + 0x13c) = edx_99.w - edi.w
    *esi
    bool o_63 = unimplemented  {imul eax, dword [esi], 0x1038}
    
    if (o_63)
        sub_403010()
        noreturn
    
    int32_t eax_53 = *(*ebx + 0xab0) + *esi * 0x81c0
    void* edx_105 = data_53098c
    *edx_105
    int32_t edx_106 = *edx_105 * 0x23
    bool o_64 = unimplemented  {imul edx, dword [edx], 0x23}
    
    if (o_64)
        sub_403010()
        noreturn
    
    int32_t temp63 = *(eax_53 + (edx_106 << 3) - 0x98)
    *(eax_53 + (edx_106 << 3) - 0x98) -= edi
    
    if (add_overflow(temp63, neg.d(edi)))
        sub_403010()
        noreturn
    
    *esi
    int32_t result = *esi * 0x1038
    bool o_66 = unimplemented  {imul eax, dword [esi], 0x1038}
    
    if (o_66)
        sub_403010()
        noreturn
    
    int32_t edx_109 = sx.d(*(*(*ebx + 0xab0) + (result << 3) + 4))
    
    if (not(add_overflow(edi, edx_109)))
        *(*(*ebx + 0xab0) + (result << 3) + 4) = edi.w + edx_109.w
        return result
    
    sub_403010()
    noreturn
}
