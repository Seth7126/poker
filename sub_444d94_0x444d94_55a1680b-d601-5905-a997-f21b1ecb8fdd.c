// ============================================================
// 函数名称: sub_444d94
// 虚拟地址: 0x444d94
// WARP GUID: 55a1680b-d601-5905-a997-f21b1ecb8fdd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43d890, sub_43d874
// [被调用的父级函数]: sub_443d2c, sub_4427a0, sub_444ce0, sub_445ad4, sub_445f30
// ============================================================

void __convention("regparm")sub_444d94(void* arg1, char arg2)
{
    // 第一条实际指令: if ((*(arg1 + 0x2cc) & 8) != 0 || *(data_5317d8 + 0x38) == 0 || *(*(data_5317d8 + 0x38) + 0x230) == 0 || arg1 == *(data_5317d8 + 0x38) || (*(arg1 + 0x217) != 1 && *(*(data_5317d8 + 0x38) + 0x217) == 2))
    if ((*(arg1 + 0x2cc) & 8) != 0 || *(data_5317d8 + 0x38) == 0
            || *(*(data_5317d8 + 0x38) + 0x230) == 0 || arg1 == *(data_5317d8 + 0x38)
            || (*(arg1 + 0x217) != 1 && *(*(data_5317d8 + 0x38) + 0x217) == 2))
        return 
    
    void* esi_1 = nullptr
    
    if ((*(arg1 + 0x20) & 0x10) == 0 && *(arg1 + 0x230) != 0
            && (*(*(arg1 + 0x230) + 0x4c) != 0 || *(arg1 + 0x217) == 1))
        esi_1 = *(arg1 + 0x230)
    
    void* eax_2 = *(*(data_5317d8 + 0x38) + 0x230)
    
    if (arg2 == 0)
        sub_43d890(eax_2, esi_1)
    else
        sub_43d874(eax_2, esi_1)
}
