// ============================================================
// 函数名称: sub_42bc48
// 虚拟地址: 0x42bc48
// WARP GUID: 0f8a7818-08ec-5f52-b7e5-8faae7a28bff
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b690
// [被调用的父级函数]: sub_509890, sub_4e6659, sub_4e649b
// ============================================================

void __convention("regparm")sub_42bc48(int32_t* arg1)
{
    // 第一条实际指令: int32_t* esi = arg1[9]
    int32_t* esi = arg1[9]
    
    if (esi != 0)
        (*(*esi + 0xac))()
    
    if ((arg1[8].b & 0x10) == 0 || (*(arg1 + 0x41) & 4) != 0)
        sub_42b690(arg1, 1)
}
