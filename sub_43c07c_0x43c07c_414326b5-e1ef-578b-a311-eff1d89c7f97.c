// ============================================================
// 函数名称: sub_43c07c
// 虚拟地址: 0x43c07c
// WARP GUID: 414326b5-e1ef-578b-a311-eff1d89c7f97
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_43c07c(void* arg1)
{
    // 第一条实际指令: int32_t* esi = *(arg1 + 0x38)
    int32_t* esi = *(arg1 + 0x38)
    
    if (esi != 0 && (*(*esi + 0x30))().b != 0)
        return 0
    
    arg1.b = 1
    return arg1
}
