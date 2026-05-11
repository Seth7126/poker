// ============================================================
// 函数名称: sub_405e9c
// 虚拟地址: 0x405e9c
// WARP GUID: efd9063b-69f8-5de5-8f15-8e812f43c922
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402844
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_405e9c(void* const arg1)
{
    // 第一条实际指令: int32_t edx_1 = *(arg1 + 4)
    int32_t edx_1 = *(arg1 + 4)
    
    if (edx_1 == 0xd7b2)
        arg1 = (*(arg1 + 0x1c))()
        
        if (arg1 != 0)
            return sub_402844(arg1) __tailcall
    else if (edx_1 != 0xd7b1)
        return sub_402844(0x67) __tailcall
}
