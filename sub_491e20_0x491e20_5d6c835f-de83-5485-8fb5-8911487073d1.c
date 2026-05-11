// ============================================================
// 函数名称: sub_491e20
// 虚拟地址: 0x491e20
// WARP GUID: 5d6c835f-de83-5485-8fb5-8911487073d1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: InflateRect, OffsetRect, DrawFocusRect, GetFocus
// [内部子函数调用]: sub_41932c, sub_4190bc, sub_419820, sub_4191d8, sub_418dd8, sub_40fac8, sub_4318d0, sub_41975c, sub_40faac, sub_419b40, sub_4197bc, sub_418ee4
// [被调用的父级函数]: sub_4923b8, sub_4924c0, sub_49211c, sub_4925fc
// ============================================================

HWND __convention("regparm")sub_491e20(int32_t* arg1, char arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    
    if (*(ebx + 0x291) != 0)
        arg1.b = arg2
    
    if (*(ebx + 0x291) != 0 && arg1.b == *(ebx + 0x292))
        arg1.b = 1
    else
        arg1 = nullptr
    
    char var_4b = arg1.b
    int32_t* esi = ebx[0x7c]
    sub_4191d8(esi[5], 0)
    sub_4190bc(esi[5])
    sub_418dd8(esi[4])
    sub_418ee4(esi[4], 1)
    sub_419820(0, arg3, esi, ebx[0xf], ebx[0xa9] + arg3)
    
    if (var_4b == 0)
        sub_418dd8(esi[4])
        sub_4197bc(esi, arg3 + 1, ebx[0xf] - 2)
        sub_41975c(esi, arg3 + 1, 1)
        sub_41975c(esi, ebx[0xa9] + arg3 - 1, 1)
        sub_418dd8(esi[4])
        sub_4197bc(esi, arg3 + 2, ebx[0xf] - 2)
        sub_41975c(esi, ebx[0xa9] + arg3 - 2, ebx[0xf] - 2)
        sub_41975c(esi, ebx[0xa9] + arg3 - 2, 1)
    else
        sub_418dd8(esi[4])
        sub_4197bc(esi, arg3 + 1, ebx[0xf] - 2)
        sub_41975c(esi, arg3 + 1, 1)
        sub_41975c(esi, ebx[0xa9] + arg3 - 1, 1)
    
    int32_t eax_21
    
    if ((*(*ebx + 0x4c))(arg2).b == 0 && (ebx[8].b & 0x10) == 0)
        eax_21.b = 1
    else if (ebx[0xc1].b == 0 || (ebx[8].b & 0x10) != 0)
        eax_21.b = arg2
        int32_t edx_27 = eax_21 * 2
        
        if (*(&ebx[edx_27 * 2] + 0x1f9) == 0)
            eax_21.b = 1
        else
            eax_21 = 0
            
            if (*(&ebx[edx_27 * 2] + 0x1fa) != 0)
                eax_21.b = 2
    else
        eax_21.b = arg2
        int32_t edx_25 = eax_21 * 2
        
        if (*(&ebx[edx_25 * 2] + 0x1fb) == 0)
            eax_21.b = 1
        else
            eax_21 = 0
            
            if (*(&ebx[edx_25 * 2] + 0x1fa) != 0)
                eax_21.b = 2
    
    int32_t edx_28
    edx_28.b = arg2
    int32_t* ebp_2 = ebx[edx_28 * 4 + (eax_21 & 0x7f) + 0x7f]
    int32_t eax_24 = (*(*ebp_2 + 0x2c))()
    int32_t eax_25 = eax_24 s>> 1
    bool c = unimplemented  {sar eax, 0x1}
    
    if (eax_24 s>> 1 s< 0)
        eax_25 = adc.d(eax_25, 0, c)
    
    int32_t edx_32 = ebx[0xa9]
    int32_t edx_33 = edx_32 s>> 1
    bool c_1 = unimplemented  {sar edx, 0x1}
    
    if (edx_32 s>> 1 s< 0)
        edx_33 = adc.d(edx_33, 0, c_1)
    
    int32_t var_48 = edx_33 - eax_25
    int32_t eax_27 = (*(*ebp_2 + 0x20))()
    int32_t eax_28 = eax_27 s>> 1
    bool c_2 = unimplemented  {sar eax, 0x1}
    
    if (eax_27 s>> 1 s< 0)
        eax_28 = adc.d(eax_28, 0, c_2)
    
    int32_t edx_36 = ebx[0xf]
    int32_t edx_37 = edx_36 s>> 1
    bool c_3 = unimplemented  {sar edx, 0x1}
    
    if (edx_36 s>> 1 s< 0)
        edx_37 = adc.d(edx_37, 0, c_3)
    
    int32_t var_44 = edx_37 - eax_28
    
    if (var_4b != 0)
        var_48 += 1
        var_44 += 1
    
    void var_30
    sub_40faac((*(*ebp_2 + 0x2c))(&var_30, (*(*ebp_2 + 0x20))()), 0, 0)
    int32_t var_20[0x4]
    sub_40fac8((*(*ebp_2 + 0x2c))(&var_20, (*(*ebp_2 + 0x20))(0x8080, &var_30)), var_44, var_48 + arg3)
    sub_41932c(ebp_2, &var_20, esi)
    int32_t eax_41 = sub_4318d0(ebx)
    HWND result = GetFocus()
    
    if (eax_41 == result)
        result.b = arg2
        
        if (result.b == ebx[0xb2].b)
            void lprc
            sub_40fac8(ebx[0xa9], 0, arg3, &lprc, ebx[0xf])
            InflateRect(&lprc, 0xfffffffd, 0xfffffffd)
            
            if (var_4b != 0)
                OffsetRect(&lprc, 1, 1)
            
            return DrawFocusRect(sub_419b40(ebx[0x7c]), &lprc)
    
    return result
}
