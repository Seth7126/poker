// ============================================================
// 函数名称: sub_4ecc78
// 虚拟地址: 0x4ecc78
// WARP GUID: e3dd78fa-b946-5261-8e42-b16dc4d5203f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4d6cdc, sub_403010
// [被调用的父级函数]: sub_4c585c
// ============================================================

int32_tsub_4ecc78()
{
    // 第一条实际指令: int32_t entry_result
    int32_t entry_result
    int32_t entry_result_1 = entry_result
    void* esi = data_5301f4
    int32_t* edi = *esi + 0x2006c
    *edi = 1
    *data_5300d0 = 6
    *(*esi + 0x456c) = *data_5300d0
    *(*esi + 0x20068) = 2
    sub_4d6cdc(*data_530304)
    edi[1] = 0x64
    edi[2] = 4
    edi[4].b = 0
    *(edi + 0x11) = 0
    edi[3] = 0xa
    int32_t eax_7 = edi[2]
    *(*esi + 0x21108) = eax_7
    *(*esi + 0x210f8) = eax_7
    *(*esi + 0x210f0) = *(*esi + 0x21108)
    *(*esi + 0x210f4) = *(*esi + 0x21108)
    
    if (*(edi + 0x11) != 0)
        void* eax_12 = *esi
        *(eax_12 + 0x21108)
        bool o_1 = unimplemented  {imul eax, dword [eax+0x21108], 0x2}
        
        if (o_1)
            sub_403010()
            noreturn
        
        *(*esi + 0x210f4) = *(eax_12 + 0x21108) * 2
    
    return entry_result
}
