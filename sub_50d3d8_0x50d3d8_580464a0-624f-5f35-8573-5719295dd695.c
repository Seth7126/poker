// ============================================================
// 函数名称: sub_50d3d8
// 虚拟地址: 0x50d3d8
// WARP GUID: 580464a0-624f-5f35-8573-5719295dd695
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_50d3a0, sub_5164e8
// ============================================================

int32_t __convention("regparm")sub_50d3d8(void* arg1, int32_t arg2)
{
    // 第一条实际指令: *(arg1 + 4) = 0
    *(arg1 + 4) = 0
    *(arg1 + 0x3a70) = 0
    
    if (*(*data_5301f4 + 0x111fa) != 0)
        *(arg1 + 0x3a74) = 0x1068
        *(arg1 + 0x3a78) = 0x2328
        *(arg1 + 0x3a7c) = 0x4650
    else
        *(arg1 + 0x3a74) = 0xc80
        *(arg1 + 0x3a78) = 0x1d4c
        *(arg1 + 0x3a7c) = 0x36b0
    
    *(arg1 + 0x3a80) = 0
    *(arg1 + 0x3a84) = 0
    return arg2
}
