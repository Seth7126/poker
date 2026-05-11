// ============================================================
// 函数名称: sub_44237c
// 虚拟地址: 0x44237c
// WARP GUID: 6875850b-e2b0-5779-9a1e-76dcf022a912
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_441bb0
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_44237c(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    sub_441bb0(ecx, arg2)
    int32_t eax_1
    eax_1.b = *(arg1 + 0x208)
    arg2[1] |= *((eax_1 << 2) + &data_52ea04)
    void* result = data_53040c
    
    if (*result != 0 && *(arg1 + 0x138) != 0 && *(arg1 + 0x208) == 1)
        arg2[1] &= 0xff7fffff
        arg2[2] |= 0x200
    
    return result
}
