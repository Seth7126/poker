// ============================================================
// 函数名称: sub_404308
// 虚拟地址: 0x404308
// WARP GUID: fc7fd316-b4b4-586b-9256-4a3fe35c7314
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4043ac, sub_402980
// [被调用的父级函数]: sub_52b63c, sub_4fb834, sub_4d8208, sub_4d7108, sub_43c480, sub_4746a0, sub_49d4fc, sub_4ed284, sub_43c320
// ============================================================

void __convention("regparm")sub_404308(void* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    void* ebx_1 = arg1
    void* edx = *arg2
    void* var_14_1 = edx
    
    if (edx != 0)
        edx = *(edx - 4)
    
    void* const edi_2 = arg3 - 1
    
    if (arg3 s< 1)
        edi_2 = nullptr
    
    if (edi_2 s> edx)
        edi_2 = edx
    
    int32_t ebp_1 = *(ebx_1 - 4)
    sub_4043ac(arg2, edx + ebp_1)
    
    if (var_14_1 == ebx_1)
        ebx_1 = *arg2
    
    void* eax_2 = *arg2
    void* edx_2 = edi_2 + ebp_1
    sub_402980(eax_2 + edi_2, edx_2 + eax_2, *(eax_2 - 4) - edx_2)
    sub_402980(ebx_1, *arg2 + edi_2, ebp_1)
}
