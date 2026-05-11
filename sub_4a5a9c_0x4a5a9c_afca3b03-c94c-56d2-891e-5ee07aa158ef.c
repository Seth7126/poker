// ============================================================
// 函数名称: sub_4a5a9c
// 虚拟地址: 0x4a5a9c
// WARP GUID: afca3b03-c94c-56d2-891e-5ee07aa158ef
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4a5a9c(void* arg1)
{
    // 第一条实际指令: int32_t* esi = *(arg1 + 0x28)
    int32_t* esi = *(arg1 + 0x28)
    
    if (esi != 0)
        (*(*esi + 0x48))()
}
