// ============================================================
// 函数名称: sub_41449c
// 虚拟地址: 0x41449c
// WARP GUID: defc41c7-5b0b-5ff5-a93c-904a685e181a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_413a6c, sub_414430, sub_415210, sub_413a50
// [被调用的父级函数]: sub_414aa0
// ============================================================

int32_t __convention("regparm")sub_41449c(void* arg1)
{
    // 第一条实际指令: char eax_1
    char eax_1
    int32_t ecx
    eax_1, ecx = sub_413a50(arg1)
    int32_t result
    
    if (eax_1 != 0x13)
        int32_t result_1
        int32_t edx_1
        edx_1:result_1 = sx.q(sub_414430(arg1))
        result = result_1
        int32_t var_8 = edx_1
    else
        sub_415210(ecx)
        sub_413a6c(arg1, &result, 8)
    
    return result
}
