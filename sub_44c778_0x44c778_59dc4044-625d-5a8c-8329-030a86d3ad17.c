// ============================================================
// 函数名称: sub_44c778
// 虚拟地址: 0x44c778
// WARP GUID: 59dc4044-625d-5a8c-8329-030a86d3ad17
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: MulDiv, SetRect, LoadIconA, DrawTextA
// [内部子函数调用]: sub_4032ac, sub_42d6dc, sub_40423c, sub_42b7a8, sub_41f90c, sub_423d28, sub_42b1dc, sub_42af98, sub_42516c, sub_403e1c, sub_44c644, sub_42508c, sub_44c48c, sub_404078, sub_4431ac, sub_42afb8, sub_448eec, sub_42b1a0, sub_40faac, sub_41badc, sub_44b7c0, sub_44317c, sub_443ba0, sub_4471a4, sub_44399c, sub_423898, sub_419a60, sub_447198, sub_405ae8, sub_44c484, sub_419b40
// [被调用的父级函数]: sub_44cd2c
// ============================================================

int32_t __convention("regparm")sub_44c778(void* arg1, int32_t arg2, int16_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_78 = ebx
    int32_t esi
    int32_t var_7c = esi
    int32_t edi
    int32_t var_80 = edi
    int32_t var_74 = 0
    char* var_70 = nullptr
    char* var_6c = nullptr
    char* var_68 = nullptr
    char var_9 = arg2.b
    int32_t* var_84 = &var_4
    int32_t (* var_88)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *data_530660
    arg2.b = 1
    int32_t* eax
    int32_t edx
    eax, edx = sub_44c644(sub_44c4e4+0x48, arg2)
    edx.b = *(*data_530660 + 0x28)
    (*(*eax + 0x68))(ExceptionList, var_88, var_84)
    sub_44399c(eax, 3)
    void* eax_6 = sub_443ba0(eax)
    eax[0x16]
    sub_419a60(eax_6)
    uint8_t* nNumerator_1
    sub_44c48c(sub_443ba0(eax), &nNumerator_1)
    uint8_t* nNumerator = nNumerator_1
    int32_t var_14 = 8
    int32_t var_1c = MulDiv(var_14, nNumerator, 4)
    int32_t eax_10 = MulDiv(8, var_14, 8)
    int32_t eax_11 = MulDiv(0xa, nNumerator, 4)
    int32_t eax_12 = MulDiv(0xa, var_14, 8)
    int32_t var_14_4 = 0x32
    int32_t var_2c = MulDiv(var_14_4, nNumerator, 4)
    int32_t ebx_1 = 0
    void* esi_2 = &data_531828
    void** var_50 = &data_52eb20
    int32_t lprc
    int32_t var_5c
    
    do
        bool c_1 = ebx_1.b u< 0xf
        
        if (ebx_1.b == 0xf || c_1)
            c_1 = test_bit(arg3.d, ebx_1 & 0x7f)
        
        if (c_1)
            if (*esi_2 == 0)
                int32_t* var_10_6 = &lprc
                sub_40faac(0, 0, 0, var_10_6, 0)
                enum DRAW_TEXT_FORMAT format = sub_42d6dc(var_10_6) | 0x420
                int32_t* lprc_1 = &lprc
                var_14_4 = 0xffffffff
                sub_405ae8(*var_50, &var_68)
                nNumerator_1 = sub_40423c(var_68)
                DrawTextA(sub_419b40(sub_443ba0(lprc_1)), nNumerator_1, var_14_4, lprc_1, format)
                *esi_2 = var_5c - lprc + 8
            
            int32_t eax_28 = *esi_2
            
            if (eax_28 s> var_2c)
                var_2c = eax_28
        
        ebx_1 += 1
        var_50 = &var_50[1]
        esi_2 += 4
    while (ebx_1.b != 0xb)
    
    int32_t eax_30 = MulDiv(0xe, var_14_4, 8)
    int32_t eax_32 = MulDiv(4, nNumerator_1, 4)
    int32_t yBottom = 0
    *data_530a18
    int32_t eax_35 = sub_4471a4()
    int32_t xRight = eax_35 s>> 1
    bool c_2 = unimplemented  {sar eax, 0x1}
    
    if (eax_35 s>> 1 s< 0)
        xRight = adc.d(xRight, 0, c_2)
    
    int32_t yTop = 0
    nNumerator_1 = nullptr
    SetRect(&lprc, nNumerator_1, yTop, xRight, yBottom)
    enum DRAW_TEXT_FORMAT format_1 = sub_42d6dc(xRight) | 0x450
    RECT* lprc_2 = &lprc
    int32_t cchText = sub_404078(arg1) + 1
    nNumerator_1 = sub_40423c(arg1)
    HDC hdc = sub_419b40(sub_443ba0(lprc_2))
    DrawTextA(hdc, nNumerator_1, cchText, lprc_2, format_1)
    int32_t eax_44
    eax_44.b = var_9
    PSTR lpIconName = *((eax_44 << 2) + &data_52eae0)
    int32_t var_38 = var_5c
    int32_t var_58
    int32_t var_3c = var_58
    
    if (lpIconName != 0)
        var_38 += eax_11 + 0x20
        
        if (var_3c s< 0x20)
            var_3c = 0x20
    
    int32_t eax_49 = 0
    int32_t ebx_2 = 0
    
    do
        bool c_3 = ebx_2.b u< 0xf
        
        if (ebx_2.b == 0xf || c_3)
            c_3 = test_bit(arg3.d, ebx_2 & 0x7f)
        
        if (c_3)
            eax_49 += 1
        
        ebx_2 += 1
    while (ebx_2.b != 0xb)
    
    int32_t esi_3 = 0
    
    if (eax_49 != 0)
        esi_3 = var_2c * eax_49 + (eax_49 - 1) * eax_32
    
    sub_44317c(lprc_2, sub_44c484(var_38, esi_3) + hdc * 2)
    sub_4431ac(lprc_2, var_3c + eax_30 + eax_12 + eax_10 * 2)
    *data_530a18
    sub_4471a4()
    unimplemented  {sar edx, 0x1}
    unimplemented  {sar eax, 0x1}
    lprc_2->__offset(0x38).d
    sub_42af98(lprc_2)
    *data_530a18
    sub_447198()
    unimplemented  {sar edx, 0x1}
    unimplemented  {sar eax, 0x1}
    lprc_2->__offset(0x3c).d
    sub_42afb8(lprc_2)
    int32_t edx_23
    void* ebp_1
    
    if (var_9 == 4)
        sub_448eec(*data_530660, &var_70)
        edx_23, ebp_1 = sub_42b7a8(lprc_2, var_70)
    else
        int32_t eax_74
        eax_74.b = var_9
        sub_405ae8((&data_52eacc)[eax_74], &var_6c)
        edx_23, ebp_1 = sub_42b7a8(lprc_2, var_6c)
    
    if (lpIconName != 0)
        *(ebp_1 - 0xc)
        edx_23.b = 1
        int32_t* eax_80 = sub_44b7c0(&data_44a750, edx_23)
        (*(*eax_80 + 0x18))(arg1)
        *(ebp_1 - 0xc)
        (*(*eax_80 + 0x60))()
        HICON var_c_11 = LoadIconA(nullptr, lpIconName)
        sub_41f90c(sub_41badc(eax_80[0x4a]))
        *(ebp_1 - 0x1c)
        *(ebp_1 - 0x18)
        (*(*eax_80 + 0x7c))(0x20, 0x20)
    
    *(ebp_1 - 0xc)
    edx_23.b = 1
    int32_t* eax_87 = sub_423898(sub_42117c+0x48, edx_23)
    (*(*eax_87 + 0x18))(arg1)
    *(ebp_1 - 0xc)
    (*(*eax_87 + 0x60))()
    sub_423d28(eax_87, 1)
    int32_t ebx_5
    void* ebp_2
    int32_t esi_6
    ebx_5, ebp_2, esi_6 = sub_42b7a8(eax_87, *(ebp_1 - 4))
    sub_42b1a0(eax_87, ebp_2 - 0x60)
    int32_t edx_35
    edx_35.b = *(*(ebp_2 - 0xc) + 0x4f)
    (*(*eax_87 + 0x68))()
    *(ebp_2 - 0x40) = *(ebp_2 - 0x34) - *(ebp_2 - 0x58) + *(ebp_2 - 0x18)
    ebx_5.w = 0xffce
    
    if (sub_4032ac(eax_87) != 0)
        *(ebp_2 - 0x40) = sub_42b1dc(*(ebp_2 - 0xc)) - *(ebp_2 - 0x40) - eax_87[0xe]
    
    *(ebp_2 - 0x1c)
    *(ebp_2 - 0x40)
    (*(*eax_87 + 0x7c))(*(ebp_2 - 0x54), *(ebp_2 - 0x58))
    
    if ((*(ebp_2 - 7) & 4) != 0)
        *(ebp_2 - 0x41) = 2
    else if ((*(ebp_2 - 7) & 1) == 0)
        *(ebp_2 - 0x41) = 5
    else
        *(ebp_2 - 0x41) = 0
    
    if ((*(ebp_2 - 7) & 8) != 0)
        *(ebp_2 - 0x42) = 3
    else if ((*(ebp_2 - 7) & 2) == 0)
        *(ebp_2 - 0x42) = 2
    else
        *(ebp_2 - 0x42) = 1
    
    int32_t eax_108
    int32_t edx_37
    eax_108, edx_37 = sub_42b1dc(*(ebp_2 - 0xc))
    int32_t eax_109 = eax_108 - esi_6
    int32_t eax_110 = eax_109 s>> 1
    bool c_8 = unimplemented  {sar eax, 0x1}
    
    if (eax_109 s>> 1 s< 0)
        eax_110 = adc.d(eax_110, 0, c_8)
    
    *(ebp_2 - 0x3c) = eax_110
    int32_t ebx_7 = 0
    *(ebp_2 - 0x4c) = &data_52eaf4
    char*** esi_7 = &data_52eb20
    *(ebp_2 - 0x50) = 0x52eb4c
    
    do
        bool c_9 = ebx_7.b u< 0xf
        
        if (ebx_7.b == 0xf || c_9)
            c_9 = test_bit(*(ebp_2 - 7), ebx_7 & 0x7f)
        
        if (c_9)
            *(ebp_2 - 0xc)
            edx_37.b = 1
            *(ebp_2 - 0x48) = sub_42508c(sub_422d0c+0x19c, edx_37)
            **(ebp_2 - 0x4c)
            (*(**(ebp_2 - 0x48) + 0x18))()
            *(ebp_2 - 0xc)
            (*(**(ebp_2 - 0x48) + 0x60))()
            sub_405ae8(*esi_7, ebp_2 - 0x70)
            ebx_7, ebp_2, esi_7 = sub_42b7a8(*(ebp_2 - 0x48), *(ebp_2 - 0x70))
            *(*(ebp_2 - 0x48) + 0x1fc) = **(ebp_2 - 0x50)
            
            if (ebx_7.b == *(ebp_2 - 0x41))
                void* edx_42
                edx_42.b = 1
                sub_42516c(*(ebp_2 - 0x48), edx_42.b)
            
            if (ebx_7.b == *(ebp_2 - 0x42))
                *(*(ebp_2 - 0x48) + 0x1f9) = 1
            
            *(ebp_2 - 0x38) + *(ebp_2 - 0x1c)
            *(ebp_2 - 0x24)
            *(ebp_2 - 0x3c)
            (*(**(ebp_2 - 0x48) + 0x7c))(*(ebp_2 - 0x2c), *(ebp_2 - 0x28))
            *(ebp_2 - 0x3c) += *(ebp_2 - 0x28) + *(ebp_2 - 0x30)
            
            if (ebx_7.b == 0xa)
                void* eax_128 = *(ebp_2 - 0x48)
                *(eax_128 + 0x10c) = *(ebp_2 - 0xc)
                *(eax_128 + 0x108) = sub_44c6bc
        
        ebx_7 += 1
        *(ebp_2 - 0x50) += 4
        esi_7 = &esi_7[1]
        *(ebp_2 - 0x4c) += 4
    while (ebx_7.b != 0xb)
    
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_44ccbe
    return sub_403e1c(ebp_2 - 0x70, 4)
}
