// ============================================================
// 函数名称: sub_471065
// 虚拟地址: 0x471065
// WARP GUID: 30411ea1-9f80-55d6-9388-222fc54eae4c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_471065(char* arg1, void* arg2, int32_t arg3, int32_t arg4 @ esi, int32_t arg5 @ edi)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    arg1.b += arg1:1.b
    
    while (arg3 != 0)
        bool cond:0_1 = *arg4 == *arg5
        arg4 += 1
        arg5 += 1
        arg3 -= 1
        
        if (not(cond:0_1))
            break
    
    int32_t ebx
    ebx.b = 0x43
    *(arg2 + 0xaa00de) = adc.d(*(arg2 + 0xaa00de), &__return_addr, arg3 u< arg5)
    
    if (arg1 s>= 0x3e && arg1 s<= 0x42)
        arg2.b = 1
    
    if (arg1 s>= 0x7e && arg1 s<= 0x83)
        arg2.b = 1
    
    if (arg1 s>= 0xfd && arg1 s<= 0x106)
        arg2.b = 1
    
    if (arg1 s>= 0x1fc && arg1 s<= 0x208)
        arg2.b = 1
    
    if (arg1 s>= 0x3f8 && arg1 s<= 0x410)
        arg2.b = 1
    
    return arg2
}
