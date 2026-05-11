// ============================================================
// 函数名称: sub_43d2b0
// 虚拟地址: 0x43d2b0
// WARP GUID: 08848dac-aefe-545d-a952-745433c4f881
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43d1a0, sub_43d234, sub_43d768
// [被调用的父级函数]: sub_445374, sub_443d2c
// ============================================================

void* __convention("regparm")sub_43d2b0(HANDLE arg1, int32_t arg2)
{
    // 第一条实际指令: *(arg1 + 0x2c) = arg2
    *(arg1 + 0x2c) = arg2
    sub_43d1a0(arg1)
    void* result = data_530a80
    
    if (*(result + 9) == 0 || arg2 == 0)
        return result
    
    if (*(arg1 + 0x35) == 0)
        return sub_43d234(arg1)
    
    return sub_43d768(arg1)
}
