// ============================================================
// 函数名称: sub_40a0c4
// 虚拟地址: 0x40a0c4
// WARP GUID: bae2613b-fa9c-53b6-aac5-4561acf50433
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402980
// [被调用的父级函数]: sub_40a108, sub_40a128, sub_40a48c
// ============================================================

void* __convention("regparm")sub_40a0c4(int32_t arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: int32_t ebx = 0x100 - *(arg3 - 0x104)
    int32_t ebx = 0x100 - *(arg3 - 0x104)
    
    if (arg2 s< ebx)
        ebx = arg2
    
    if (ebx != 0)
        sub_402980(arg1, arg3 + *(arg3 - 0x104) - 0x100, ebx)
    
    *(arg3 - 0x104) += ebx
    return arg3
}
