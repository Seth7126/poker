// ============================================================
// 函数名称: sub_43a2fc
// 虚拟地址: 0x43a2fc
// WARP GUID: a7a5c8cc-ce48-57fe-85f5-0d9907b852b6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DrawEdge, OffsetRect, LoadBitmapA
// [内部子函数调用]: sub_4030d0, sub_4190b4, sub_437490, sub_404188, sub_418bb8, sub_4188ec, sub_43a0a4, sub_437784, sub_419720, sub_403248, sub_4190bc, sub_41dae0, sub_439258, sub_419090, sub_41fda0, sub_403df8, sub_41ec48, sub_419674, sub_419868, sub_419b40
// [被调用的父级函数]: sub_43b417
// ============================================================

void*sub_43a2fc(int32_t arg1 @ esi, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    int32_t* entry_ebx
    int32_t* var_c = entry_ebx
    int32_t edi
    int32_t var_14 = edi
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    
    if (*(arg2 - 0x21) == 0)
        sub_419720(*(arg2 - 0x28), arg2 - 0x20)
    
    if (*(arg2 - 0x2c) == 0)
        if (sub_403248(*(arg2 - 0x2c), 0x438e1c) == 0)
            *(arg2 - 0x2d) = 0
        else
            void* eax_10
            eax_10.b = *(*(arg2 - 0x2c) + 0x50)
            *(arg2 - 0x2d) = eax_10.b
    else
        *(arg2 - 0x2d) = 0
    
    *(arg2 - 0x10) = *(arg2 - 0x20) + 1
    int32_t eax_16 = *(arg2 - 0x1c)
    *(arg2 - 0xc) = eax_16 + 1
    sub_404188(*(*(arg2 - 0x34) + 0x24), 0x43ab74)
    void* ExceptionList
    
    if (eax_16 != 0xffffffff)
        int32_t eax_32
        
        if (*(arg2 - 0x3c) == 0)
            eax_32 = 0
        else
            entry_ebx = *(*(arg2 - 0x34) + 0x34)
            
            if (entry_ebx s> 0xffffffff)
                eax_32 = sub_437490(*(arg2 - 0x3c))
            
            if (entry_ebx s> 0xffffffff && entry_ebx s< eax_32)
                eax_32.b = 1
            else if (*(*(arg2 - 0x34) + 0x2c) == 0)
                eax_32 = 0
            else
                int32_t* esi = *(*(arg2 - 0x34) + 0x40)
                
                if (esi == 0)
                    eax_32.b = 1
                else if ((*(*esi + 0x1c))().b != 0)
                    eax_32.b = 1
                else
                    eax_32 = 0
        
        *(arg2 - 0x3d) = eax_32.b
        
        if (*(arg2 - 0x3d) != 0)
        label_43a454:
            *(arg2 - 0x35) = 1
            
            if (*(arg2 - 0x3d) == 0)
                *(arg2 - 8) = *(arg2 - 0x10) + 0x10
                *(arg2 - 4) = *(arg2 - 0xc) + 0x10
            else
                *(arg2 - 8) = *(arg2 - 0x10) + *(*(arg2 - 0x3c) + 0x28)
                *(arg2 - 4) = *(arg2 - 0xc) + *(*(arg2 - 0x3c) + 0x24)
            
            if (*(*(arg2 - 0x34) + 0x2c) != 0)
                *(arg2 - 8) += 1
                *(arg2 - 4) += 1
                *(arg2 - 0x44) = sub_4190b4(*(*(arg2 - 0x28) + 0x14))
                
                if ((*(arg2 + 0xc) & 1) != 0)
                    sub_4190bc(*(*(arg2 - 0x28) + 0x14))
                    sub_419720(*(arg2 - 0x28), arg2 - 0x10)
                else
                    *(arg2 - 0x44) = sub_4190b4(*(*(arg2 - 0x28) + 0x14))
                    sub_41fda0(0x8000000f, 0x80000014)
                    *(*(arg2 - 0x28) + 0x14)
                    sub_419090()
                    sub_419720(*(arg2 - 0x28), arg2 - 0x10)
                
                *(arg2 - 0x44)
                sub_4190bc(*(*(arg2 - 0x28) + 0x14))
                *(arg2 - 0x10) += 1
                *(arg2 - 0xc) += 1
            
            if (*(arg2 - 0x3d) == 0)
                __builtin_memcpy(arg2 - 0x58, arg2 - 0x10, 0x10)
                
                if ((*(**(*(arg2 - 0x34) + 0x40) + 0x2c))() s< *(arg2 - 8) - *(arg2 - 0x10))
                    int32_t eax_142 = (*(**(*(arg2 - 0x34) + 0x40) + 0x2c))()
                    int32_t edx_54 = *(arg2 - 8) - *(arg2 - 0x10) - eax_142
                    int32_t edx_55 = edx_54 s>> 1
                    bool c_3 = unimplemented  {sar edx, 0x1}
                    
                    if (edx_54 s>> 1 s< 0)
                        edx_55 = adc.d(edx_55, 0, c_3)
                    
                    *(arg2 - 0x10) = edx_55 + *(arg2 - 0x10) + 1
                    *(arg2 - 8) = (*(**(*(arg2 - 0x34) + 0x40) + 0x2c))() + *(arg2 - 0x10)
                
                if ((*(**(*(arg2 - 0x34) + 0x40) + 0x20))() s< *(arg2 - 4) - *(arg2 - 0xc))
                    int32_t eax_157 = (*(**(*(arg2 - 0x34) + 0x40) + 0x20))()
                    int32_t edx_69 = *(arg2 - 4) - *(arg2 - 0xc) - eax_157
                    int32_t edx_70 = edx_69 s>> 1
                    bool c_4 = unimplemented  {sar edx, 0x1}
                    
                    if (edx_69 s>> 1 s< 0)
                        edx_70 = adc.d(edx_70, 0, c_4)
                    
                    *(arg2 - 0xc) = edx_70 + *(arg2 - 0xc) + 1
                    *(arg2 - 4) = (*(**(*(arg2 - 0x34) + 0x40) + 0x20))() + *(arg2 - 0xc)
                
                sub_419868(*(arg2 - 0x28), arg2 - 0x10, *(*(arg2 - 0x34) + 0x40))
                __builtin_memcpy(arg2 - 0x10, arg2 - 0x58, 0x10)
            else
                entry_ebx = *(*(arg2 - 0x34) + 0x34)
                int32_t eax_93
                void* edx_14
                
                if (entry_ebx s> 0xffffffff)
                    eax_93, edx_14 = sub_437490(*(arg2 - 0x3c))
                
                if (entry_ebx s<= 0xffffffff || entry_ebx s>= eax_93)
                    edx_14.b = 1
                    *(arg2 - 0x48) = sub_41dae0(sub_41799a+0xe2, edx_14)
                    int32_t* var_24_2 = &var_4
                    int32_t (* var_28_2)(void* arg1, void* arg2) = j_sub_4037f0
                    ExceptionList = fsbase->NtTib.ExceptionList
                    fsbase->NtTib.ExceptionList = &ExceptionList
                    void* edx_24
                    edx_24.b = 1
                    (*(**(arg2 - 0x48) + 0x3c))(ExceptionList, var_28_2, var_24_2)
                    HBITMAP eax_107 = LoadBitmapA(nullptr, 0x7ff8)
                    sub_41ec48(*(arg2 - 0x48), eax_107)
                    *(arg2 - 0x44) = *(*(*(arg2 - 0x28) + 0xc) + 0x18)
                    sub_4188ec(*(*(arg2 - 0x28) + 0xc), 0x80000012)
                    int32_t eax_121 = (*(**(arg2 - 0x48) + 0x20))(*(arg2 - 0x48))
                    int32_t esi_1 = *(arg2 - 0xc)
                    int32_t edx_31 = *(arg2 - 4) - esi_1 - eax_121
                    int32_t edx_32 = edx_31 s>> 1
                    bool c_1 = unimplemented  {sar edx, 0x1}
                    
                    if (edx_31 s>> 1 s< 0)
                        edx_32 = adc.d(edx_32, 0, c_1)
                    
                    int32_t eax_124 = (*(**(arg2 - 0x48) + 0x2c))(edx_32 + esi_1 + 1)
                    int32_t ebx = *(arg2 - 0x10)
                    int32_t edx_39 = *(arg2 - 8) - ebx - eax_124
                    int32_t edx_40 = edx_39 s>> 1
                    bool c_2 = unimplemented  {sar edx, 0x1}
                    
                    if (edx_39 s>> 1 s< 0)
                        edx_40 = adc.d(edx_40, 0, c_2)
                    
                    sub_419674(arg1, edx_40 + ebx + 1, *(arg2 - 0x28), var_c)
                    sub_4188ec(*(*(arg2 - 0x28) + 0xc), *(arg2 - 0x44))
                    fsbase->NtTib.ExceptionList = var_8
                    __return_addr = &data_43a7e5
                    return sub_4030d0(*(arg2 - 0x48))
                
                int32_t eax_95 = *(arg2 - 0xc)
                int32_t eax_98 = *(*(arg2 - 0x34) + 0x34)
                void* ExceptionList_2
                ExceptionList_2.b = *(*(arg2 - 0x34) + 0x2d)
                ExceptionList = ExceptionList_2
                *(arg2 - 0x28)
                sub_437784(*(arg2 - 0x10), *(arg2 - 0x3c), ExceptionList.b, eax_98, eax_95)
            
            if (*(*(arg2 - 0x34) + 0x2c) != 0)
                *(arg2 - 8) -= 1
                *(arg2 - 4) -= 1
        else
            entry_ebx = *(*(arg2 - 0x34) + 0x40)
            char eax_41
            
            if (entry_ebx != 0)
                eax_41 = (*(*entry_ebx + 0x1c))()
            
            if (entry_ebx != 0 && eax_41 == 0)
                goto label_43a454
            
            if (*(arg2 - 0x3c) == 0 || *(arg2 + 8) != 0)
                *(arg2 - 8) = *(arg2 - 0x10)
                *(arg2 - 4) = *(arg2 - 0xc)
            else
                *(arg2 - 8) = *(arg2 - 0x10) + *(*(arg2 - 0x3c) + 0x28)
                *(arg2 - 4) = *(arg2 - 0xc) + *(*(arg2 - 0x3c) + 0x24)
            
            *(arg2 - 0x35) = 0
    else
        sub_419720(*(arg2 - 0x28), arg2 - 0x20)
        *(arg2 - 0x10) = 0
        *(arg2 - 8) = 0xfffffffc
        *(arg2 - 0x35) = 0
    
    *(arg2 - 0x10) -= 1
    *(arg2 - 0xc) -= 1
    *(arg2 - 8) += 2
    *(arg2 - 4) += 2
    
    if (*(*(arg2 - 0x34) + 0x2c) != 0)
    label_43a894:
        enum DRAW_EDGE_FLAGS grfFlags = BF_RECT
        enum DRAWEDGE_FLAGS edge_2 = *((zx.d(*(*(arg2 - 0x34) + 0x2c)) << 2) + &data_52e958)
        ExceptionList = arg2 - 0x10
        DrawEdge(sub_419b40(*(arg2 - 0x28)), ExceptionList, edge_2, grfFlags)
    else if (*(arg2 - 0x21) != 0 && *(arg2 - 0x35) != 0)
        goto label_43a894
    
    if (*(arg2 - 0x21) != 0)
        if (*(arg2 - 0x35) != 0)
            *(arg2 - 0x20) = *(arg2 - 8) + 1
        
        if (*(arg2 - 0x59) == 0 || *(arg2 + 8) == 0)
            sub_4190bc(*(*(arg2 - 0x28) + 0x14))
        
        sub_419720(*(arg2 - 0x28), arg2 - 0x20)
    
    if (*(arg2 + 8) != 0 && *(arg2 - 0x59) != 0)
        if (*(arg2 - 0x21) != 0)
            enum DRAW_EDGE_FLAGS grfFlags_1 = BF_RECT
            enum DRAWEDGE_FLAGS edge = BDR_SUNKENOUTER
            ExceptionList = arg2 - 0x20
            DrawEdge(sub_419b40(*(arg2 - 0x28)), ExceptionList, edge, grfFlags_1)
        else if ((*(arg2 + 0xc) & 0x40) != 0)
            enum DRAW_EDGE_FLAGS grfFlags_2 = BF_RECT
            enum DRAWEDGE_FLAGS edge_1 = BDR_RAISEDINNER
            ExceptionList = arg2 - 0x20
            DrawEdge(sub_419b40(*(arg2 - 0x28)), ExceptionList, edge_1, grfFlags_2)
        
        if (*(arg2 - 0x21) == 0)
            int32_t dy_1 = 0xffffffff
            int32_t dx_2 = 0
            ExceptionList = arg2 - 0x20
            OffsetRect(ExceptionList, dx_2, dy_1)
    
    if (*(arg2 - 0x21) == 0 || *(arg2 - 0x35) == 0)
        *(arg2 - 0x20) = *(arg2 - 8) + 1
    
    *(arg2 - 0x20) += 2
    *(arg2 - 0x18) -= 1
    uint32_t eax_242
    eax_242.w = *((zx.d(*(arg2 - 0x2d)) << 1) + &data_52e950)
    eax_242.w |= 0x60
    *(arg2 - 0x60) = zx.d(eax_242.w)
    
    if (*(arg2 - 0x61) != 0 && (*(arg2 + 0xd) & 1) != 0)
        *(arg2 - 0x60) |= 0x100000
    
    __builtin_memcpy(arg2 - 0x58, arg2 - 0x20, 0x10)
    
    if ((*(arg2 + 0xc) & 0x20) != 0)
        void* edx_91
        edx_91.b = 1
        sub_418bb8(*(*(arg2 - 0x28) + 0xc))
    
    RECT* var_24_3 = arg2 - 0x20
    void* eax_254
    eax_254.b = *(arg2 - 0x21)
    char var_28_4 = eax_254.b
    ExceptionList = *(arg2 - 0x60) | 0x400 | 0x100
    void* ebp_1 = sub_43a0a4(*(arg2 - 0x34), *(arg2 - 0x28), *(*(arg2 - 0x34) + 0x24), ExceptionList, 
        var_28_4, var_24_3)
    int32_t eax_267 = *(*(ebp_1 + 8) - 0x4c) - *(*(ebp_1 + 8) - 0x54)
        - (*(*(ebp_1 + 8) - 0x14) - *(*(ebp_1 + 8) - 0x1c))
    int32_t dy_2 = eax_267 s>> 1
    bool c_5 = unimplemented  {sar eax, 0x1}
    
    if (eax_267 s>> 1 s< 0)
        dy_2 = adc.d(dy_2, 0, c_5)
    
    int32_t dx = 0
    RECT* lprc = *(ebp_1 + 8) - 0x20
    OffsetRect(lprc, dx, dy_2)
    
    if (*(*(ebp_1 + 8) + 8) != 0 && *(*(ebp_1 + 8) - 0x21) != 0 && *(*(ebp_1 + 8) - 0x59) != 0)
        int32_t dy = 0
        int32_t dx_1 = 1
        lprc = *(ebp_1 + 8) - 0x20
        OffsetRect(lprc, dx_1, dy)
    
    RECT* eax_276 = *(ebp_1 + 8) - 0x20
    void* eax_277
    eax_277.b = *(*(ebp_1 + 8) - 0x21)
    char var_34 = eax_277.b
    lprc = *(*(ebp_1 + 8) - 0x60)
    RECT** esp = &lprc
    void* ebp_2 = sub_43a0a4(*(*(ebp_1 + 8) - 0x34), *(*(ebp_1 + 8) - 0x28), 
        *(*(*(ebp_1 + 8) - 0x34) + 0x24), lprc, var_34, eax_276)
    entry_ebx.w = *(*(*(ebp_2 + 8) - 0x34) + 0x54)
    
    if (entry_ebx.w != 0 && *(*(ebp_2 + 8) + 8) == 0)
        *(*(ebp_2 + 8) - 0x20) = *(*(ebp_2 + 8) - 0x18)
        *(*(ebp_2 + 8) - 0x18) = *(*(ebp_2 + 8) - 0x50) - 0xa
        RECT* eax_294 = *(ebp_2 + 8) - 0x20
        void* eax_295
        eax_295.b = *(*(ebp_2 + 8) - 0x21)
        char var_40_1 = eax_295.b
        RECT* var_44 = 2
        esp = &var_44
        void* ebp_3 = sub_439258(entry_ebx.w, ebp_2 - 4)
        ebp_2 = sub_43a0a4(*(*(ebp_3 + 8) - 0x34), *(*(ebp_3 + 8) - 0x28), *(ebp_3 - 4), var_44, 
            var_40_1, eax_294)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_43ab64
    sub_403df8(ebp_2 - 4)
    return ebp_2 - 4
}
