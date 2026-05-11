// ============================================================
// 函数名称: sub_516eec
// 虚拟地址: 0x516eec
// WARP GUID: 80c65461-07ef-573e-ae3f-4c61d0109272
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_476aa0, sub_47a010, sub_47a180, sub_5170f8, sub_4d78f8, sub_47a140, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_517120, sub_4e649b
// ============================================================

void*sub_516eec()
{
    // 第一条实际指令: void* ebx = data_530304
    void* ebx = data_530304
    void* esi = data_5301f0
    int32_t edx
    edx.b = 1
    sub_5170f8()
    void* const eax_3 = *data_5301f4 + 0x1d344
    
    if (*(eax_3 + 8) != 0 || *(eax_3 + 0x14) != 0 || *(eax_3 + 0x15) != 0 || *(eax_3 + 0x16) != 0
            || *(eax_3 + 0x1c) != 0 || *(eax_3 + 0x21) != 0 || *(eax_3 + 4) != 2)
        eax_3 = nullptr
    else
        eax_3.b = 1
    
    sub_47a140(0x25, *(esi + 4), *ebx, eax_3.b)
    int32_t eax_5 = *(esi + 4)
    bool o = unimplemented  {imul edx, eax, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    void* ecx_2 = data_52feb0
    *ecx_2
    bool o_1 = unimplemented  {imul ecx, dword [ecx], 0x23}
    
    if (o_1)
        sub_403010()
        noreturn
    
    int32_t edx_3
    edx_3.b = *(*(*ebx + 0xab0) + eax_5 * 0x81c0 + *ecx_2 * 0x118 - 0x3d0)
    sub_47a180(*data_52feb0, eax_5, *ebx, edx_3.b)
    int32_t eax_7 = *(esi + 4)
    bool o_2 = unimplemented  {imul edx, eax, 0x1038}
    
    if (o_2)
        sub_403010()
        noreturn
    
    void* ecx_8 = data_52ff1c
    *ecx_8
    bool o_3 = unimplemented  {imul ecx, dword [ecx], 0x23}
    
    if (o_3)
        sub_403010()
        noreturn
    
    int32_t edx_6
    edx_6.b = *(*(*ebx + 0xab0) + eax_7 * 0x81c0 + *ecx_8 * 0x118 - 0x3d0)
    sub_47a180(*data_52ff1c, eax_7, *ebx, edx_6.b)
    int32_t eax_9 = *(esi + 4)
    bool o_4 = unimplemented  {imul edx, eax, 0x1038}
    
    if (o_4)
        sub_403010()
        noreturn
    
    void* ecx_14 = data_530734
    *ecx_14
    bool o_5 = unimplemented  {imul ecx, dword [ecx], 0x23}
    
    if (o_5)
        sub_403010()
        noreturn
    
    int32_t edx_9
    edx_9.b = *(*(*ebx + 0xab0) + eax_9 * 0x81c0 + *ecx_14 * 0x118 - 0x3d0)
    sub_47a180(*data_530734, eax_9, *ebx, edx_9.b)
    void* eax_13
    
    if (sub_47a010(*ebx, *(esi + 4), 0xb) == 0 || *data_530144 != 0)
        eax_13 = nullptr
    else
        eax_13.b = 1
    
    sub_476aa0(0xb, *(esi + 4), *ebx, eax_13.b)
    *ebx
    sub_4d78f8(*data_530144 == 0, *data_5301e8)
    *ebx
    sub_4d78f8(*data_530144 == 0, *data_5309a8)
    *ebx
    return sub_4d78f8(*data_530144 == 0, *data_530764)
}
