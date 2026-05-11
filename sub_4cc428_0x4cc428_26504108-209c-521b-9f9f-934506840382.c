// ============================================================
// 函数名称: sub_4cc428
// 虚拟地址: 0x4cc428
// WARP GUID: 26504108-209c-521b-9f9f-934506840382
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47a180, sub_4cc6dc, sub_47a1c0, sub_403010, sub_51e034
// [被调用的父级函数]: sub_4e6659, sub_51e1c0, sub_4e649b
// ============================================================

int32_t __fastcallsub_4cc428(int32_t arg1)
{
    // 第一条实际指令: void* esi = data_5301f4
    void* esi = data_5301f4
    int32_t ebx
    ebx.b = *(*esi + 0x2007d)
    ebx.b ^= 1
    sub_47a1c0(*data_5309ac, *data_530658, *data_530304, ebx.b)
    sub_47a1c0(*data_530710, *data_530658, *data_530304, ebx.b)
    sub_47a180(*data_5309ac, *data_530658, *data_530304, 0)
    sub_47a180(*data_530710, *data_530658, *data_530304, 0)
    sub_47a1c0(*data_5304c8, *data_530658, *data_530304, ebx.b)
    sub_47a1c0(*data_5301c4, *data_530658, *data_530304, ebx.b)
    sub_47a180(*data_5304c8, *data_530658, *data_530304, 0)
    sub_47a180(*data_5301c4, *data_530658, *data_530304, 0)
    int32_t eax_19 = sub_4cc6dc(*(*esi + 0x10020))
    void* edx_16 = *esi
    *(edx_16 + 0x10020)
    bool o = unimplemented  {imul edx, dword [edx+0x10020], 0x41}
    
    if (o)
        sub_403010()
        noreturn
    
    *(*esi + *(edx_16 + 0x10020) * 0x208 + 0x20078) = eax_19
    void* eax_20 = *esi
    *(eax_20 + 0x10020)
    int32_t eax_21 = *(eax_20 + 0x10020) * 0x41
    bool o_1 = unimplemented  {imul eax, dword [eax+0x10020], 0x41}
    
    if (o_1)
        sub_403010()
        noreturn
    
    int32_t edx_18 = *esi
    int32_t ebx_1 = *(*esi + 0x21104)
    int32_t ebx_2 = ebx_1 - *(edx_18 + (eax_21 << 3) + 0x1fea4)
    
    if (add_overflow(ebx_1, neg.d(*(edx_18 + (eax_21 << 3) + 0x1fea4))))
        sub_403010()
        noreturn
    
    void* eax_22 = *esi + (eax_21 << 3) + 0x1fea0
    
    if (*(eax_22 + 0x1dc) != 0)
        int32_t edx_21 = *(*esi + 0x210fc)
        
        if (add_overflow(edx_21, ebx_2))
            sub_403010()
            noreturn
        
        if (edx_21 + ebx_2 s< *(eax_22 + 0x1d8) && edx_21 s< *(*esi + 0x210ec))
            sub_47a180(*data_5309ac, *data_530658, *data_530304, 1)
    
    if (*(*esi + 0x210fc) s> *(*esi + 0x210f8))
        sub_47a180(*data_530710, *data_530658, *data_530304, 1)
    
    void* eax_30 = *esi
    *(eax_30 + 0x10020)
    bool o_4 = unimplemented  {imul eax, dword [eax+0x10020], 0x41}
    
    if (o_4)
        sub_403010()
        noreturn
    
    void* eax_32 = *esi + *(eax_30 + 0x10020) * 0x208 + 0x1fea0
    
    if (*(eax_32 + 0x1dc) != 0)
        int32_t edx_29 = *(*esi + 0x210fc)
        
        if (add_overflow(ebx_2, edx_29))
            sub_403010()
            noreturn
        
        if (ebx_2 + edx_29 s< *(eax_32 + 0x1d8) && edx_29 s< *(*esi + 0x210ec))
            sub_47a180(*data_5304c8, *data_530658, *data_530304, 1)
    
    if (*(*esi + 0x210fc) s> *(*esi + 0x210f8))
        sub_47a180(*data_5301c4, *data_530658, *data_530304, 1)
    
    *esi
    sub_51e034()
    int32_t result
    result.b = arg1:3.b
    return result
}
