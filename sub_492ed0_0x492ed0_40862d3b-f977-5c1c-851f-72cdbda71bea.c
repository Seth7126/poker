// ============================================================
// 函数名称: sub_492ed0
// 虚拟地址: 0x492ed0
// WARP GUID: 40862d3b-f977-5c1c-851f-72cdbda71bea
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_492f1c, sub_493a70, sub_492fb0, sub_40b56c
// [被调用的父级函数]: sub_492528
// ============================================================

uint32_t __convention("regparm")sub_492ed0(int32_t* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x2c9) == 0)
    if (*(arg1 + 0x2c9) == 0)
        int32_t edx
        edx.b = 1
        sub_40b56c(0x491348, edx, data_530290)
        sub_403828()
        noreturn
    
    char eax_1
    int32_t ecx_1
    int32_t edx_1
    eax_1, ecx_1, edx_1 = sub_493a70(arg1)
    
    if (eax_1 == 2)
        return sub_492f1c(arg1, edx_1, ecx_1)
    
    char result
    int32_t ecx_2
    int32_t edx_2
    result, ecx_2, edx_2 = sub_493a70(arg1)
    
    if (result != 5)
        return result
    
    return sub_492fb0(arg1, edx_2, ecx_2)
}
