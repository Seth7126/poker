// ============================================================
// 函数名称: sub_433a5c
// 虚拟地址: 0x433a5c
// WARP GUID: 608f6213-128c-540e-a3a6-f73bd743dc45
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_433a5c
// [被调用的父级函数]: sub_433a5c, sub_433a98
// ============================================================

int32_t __convention("regparm")sub_433a5c(void* arg1, void* arg2)
{
    // 第一条实际指令: *(arg2 + 0xc)
    *(arg2 + 0xc)
    (*(arg2 + 8))()
    
    if (*(arg1 + 0xc) != 0)
        sub_433a5c(arg2)
    
    int32_t result = *(arg1 + 8)
    
    if (result != 0)
        result = sub_433a5c(arg2)
    
    return result
}
