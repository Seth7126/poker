// ============================================================
// 函数名称: sub_4b54bc
// 虚拟地址: 0x4b54bc
// WARP GUID: 2a626ca6-91a8-523b-8176-14eb5309f9e9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42ad4c
// [被调用的父级函数]: 无
// ============================================================

void* const __convention("regparm")sub_4b54bc(int32_t* arg1, void* arg2, char arg3)
{
    // 第一条实际指令: void* const result = sub_42ad4c(arg1, arg2, arg3)
    void* const result = sub_42ad4c(arg1, arg2, arg3)
    
    if (arg3 == 1)
        if (arg2 == arg1[0x91])
            result = nullptr
            arg1[0x91] = 0
        else if (arg2 == arg1[0x92])
            result = nullptr
            arg1[0x92] = 0
        else if (arg2 == arg1[0x93])
            result = nullptr
            arg1[0x93] = 0
    
    return result
}
