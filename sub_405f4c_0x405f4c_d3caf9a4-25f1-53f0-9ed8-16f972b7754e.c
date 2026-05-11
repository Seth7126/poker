// ============================================================
// 函数名称: sub_405f4c
// 虚拟地址: 0x405f4c
// WARP GUID: d3caf9a4-25f1-53f0-9ed8-16f972b7754e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402844
// [被调用的父级函数]: sub_4692db, sub_468ec0, sub_52452c, sub_52070c, sub_4b7714, sub_4ecdcc, sub_4e6028, sub_52c7c8, sub_4cbd28, sub_519804, sub_4692e4, sub_5205d0, sub_468eb7, sub_46abfc, sub_468af3, sub_468afc, sub_4dc090, sub_5197fb, sub_406a6c, sub_4b764c, sub_46f4fc, sub_52a8cc, sub_46f698, sub_46f000, sub_52a83c, sub_47be18, sub_406190, sub_524d14, sub_51d840, sub_46f458
// ============================================================

void __convention("regparm")sub_405f4c(void* const arg1)
{
    // 第一条实际指令: void* const ebx = arg1
    void* const ebx = arg1
    int32_t edx = *(arg1 + 4)
    
    if (edx == 0xd7b1)
    label_405f68:
        arg1 = (*(ebx + 0x24))()
        
        if (arg1 != 0)
            sub_402844(arg1)
    else if (edx - 0xd7b1 u<= 2)
        arg1 = (*(arg1 + 0x1c))()
        
        if (arg1 == 0)
            goto label_405f68
        
        sub_402844(arg1)
    else if (arg1 != &data_531050)
        sub_402844(0x67)
}
