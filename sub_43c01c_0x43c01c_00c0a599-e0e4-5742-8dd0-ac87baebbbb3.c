// ============================================================
// 函数名称: sub_43c01c
// 虚拟地址: 0x43c01c
// WARP GUID: 00c0a599-e0e4-5742-8dd0-ac87baebbbb3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_43c01c(void* arg1)
{
    // 第一条实际指令: int32_t* esi = *(arg1 + 0x38)
    int32_t* esi = *(arg1 + 0x38)
    
    if (esi != 0 && (*(*esi + 0x20))().b != 0)
        return 0
    
    arg1.b = 1
    return arg1
}
