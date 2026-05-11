// ============================================================
// 函数名称: sub_44c48c
// 虚拟地址: 0x44c48c
// WARP GUID: 7482ad1c-acf0-519c-b21e-2b231b2a35c5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTextExtentPointA
// [内部子函数调用]: sub_419b40
// [被调用的父级函数]: sub_44c778
// ============================================================

int32_t __convention("regparm")sub_44c48c(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    uint8_t string[0x1a]
    uint8_t (* edx)[0x1a] = &string
    
    do
        *edx = i.b + 0x41
        i += 1
        edx = &(*edx)[1]
    while (i != 0x1a)
    
    int32_t i_1 = 0
    void var_22
    void* edx_1 = &var_22
    
    do
        *edx_1 = i_1.b + 0x61
        i_1 += 1
        edx_1 += 1
    while (i_1 != 0x1a)
    
    GetTextExtentPointA(sub_419b40(arg1), &string, 0x34, arg2)
    int32_t result = divs.dp.d(sx.q(*arg2), 0x34)
    *arg2 = result
    return result
}
