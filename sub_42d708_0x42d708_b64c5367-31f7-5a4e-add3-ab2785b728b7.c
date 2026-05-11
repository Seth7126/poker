// ============================================================
// 函数名称: sub_42d708
// 虚拟地址: 0x42d708
// WARP GUID: b64c5367-31f7-5a4e-add3-ab2785b728b7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_42d708(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t* esi = *(arg1 + 0x5c)
    int32_t* esi = *(arg1 + 0x5c)
    
    if (esi == 0)
        return 
    
    *(arg2 + 8)
    
    if ((*(*esi + 0x60))().b == 0)
        *(arg2 + 0xc) = 1
}
