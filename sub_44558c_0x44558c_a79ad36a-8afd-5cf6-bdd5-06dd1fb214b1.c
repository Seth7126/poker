// ============================================================
// 函数名称: sub_44558c
// 虚拟地址: 0x44558c
// WARP GUID: a79ad36a-8afd-5cf6-bdd5-06dd1fb214b1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_444d44, sub_4289ac
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_44558c(HANDLE arg1, void* arg2)
{
    // 第一条实际指令: *(arg2 + 0xc) = 0
    *(arg2 + 0xc) = 0
    
    if ((*(arg1 + 0x20) & 0x10) == 0 && *(arg1 + 0x217) != 1 && *(arg1 + 0x230) != 0
            && *(*(arg1 + 0x230) + 0x4c) == 0)
        return 
    
    void* esi_1 = *(arg2 + 8)
    sub_444d44(arg1, 0)
    
    if (sub_4289ac(0xb017, *(esi_1 + 4), zx.d(*(esi_1 + 8))) != 0)
        *(arg2 + 0xc) = 1
}
