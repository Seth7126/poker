// ============================================================
// 函数名称: sub_402b90
// 虚拟地址: 0x402b90
// WARP GUID: 808f57d5-7fb1-5858-94f7-eca9a37e0f19
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4807f4, sub_507e90, sub_51cc08, sub_511fd8, sub_484e24, sub_4d951f, sub_50d52c, sub_51300c, sub_4d9378, sub_514ef8, sub_50b624, sub_515de8, sub_50e4b0, sub_509ed4, sub_46f698, sub_46f000, sub_488509, sub_4d954c, sub_507d3f, sub_4fc834, sub_514468, sub_50e9c0
// ============================================================

int32_t __convention("regparm")sub_402b90(char* arg1, char* arg2, char arg3)
{
    // 第一条实际指令: char result = *arg1
    char result = *arg1
    int32_t count_1
    count_1.b = *arg2
    char result_1 = result
    result += count_1.b
    
    if (result_1 + count_1.b u>= result_1 && result u<= arg3)
        goto label_402ba7
    
    result = arg3
    
    if (arg3 u> *arg1)
        count_1.b = arg3 - *arg1
    label_402ba7:
        int32_t count = count_1
        count_1.b = *arg1
        *arg1 = result
        __builtin_memcpy(&arg1[1 + count_1], &arg2[1], count)
    
    return result
}
