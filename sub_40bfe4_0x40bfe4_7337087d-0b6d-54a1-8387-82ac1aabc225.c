// ============================================================
// 函数名称: sub_40bfe4
// 虚拟地址: 0x40bfe4
// WARP GUID: 7337087d-0b6d-54a1-8387-82ac1aabc225
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e4c, sub_40bfb0, sub_404080, sub_404078
// [被调用的父级函数]: sub_49d840, sub_49d837
// ============================================================

int32_t __convention("regparm")sub_40bfe4(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: sub_403e4c(arg2, arg1)
    sub_403e4c(arg2, arg1)
    int32_t eax_2 = sub_404078(*arg2)
    char result = sub_40bfb0(*arg2, eax_2)
    
    if (result != 0)
        return result
    
    return sub_404080(arg2, U"\")
}
