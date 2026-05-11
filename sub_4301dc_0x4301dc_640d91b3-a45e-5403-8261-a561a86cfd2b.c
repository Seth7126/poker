// ============================================================
// 函数名称: sub_4301dc
// 虚拟地址: 0x4301dc
// WARP GUID: 640d91b3-a45e-5403-8261-a561a86cfd2b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410524
// [被调用的父级函数]: sub_434ebc, sub_429820, sub_446ce8, sub_446ed4
// ============================================================

int32_t __convention("regparm")sub_4301dc(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* esi = *(arg1 + 0x140)
    int32_t* esi = *(arg1 + 0x140)
    
    if (esi == 0)
        return 0
    
    return sub_410524(esi, arg2)
}
