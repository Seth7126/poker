// ============================================================
// 函数名称: sub_496eb0
// 虚拟地址: 0x496eb0
// WARP GUID: 0bfd26b1-c1c1-563a-85fe-b66da23e1602
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_493f6c, sub_4966ec
// [被调用的父级函数]: sub_496e00, sub_496c10
// ============================================================

BOOL __convention("regparm")sub_496eb0(void* arg1, BOOL arg2)
{
    // 第一条实际指令: *(arg1 + 0x30) = arg2
    *(arg1 + 0x30) = arg2
    
    if (arg2 == 0)
        return arg2
    
    void* edx = *(arg2 + 0x58)
    *(arg1 + 0x34) = edx
    void* ebx_1 = sub_4966ec(edx, arg1)
    void* eax_2 = *(ebx_1 + 0x30)
    *(eax_2 + 0x34) = ebx_1
    *(eax_2 + 0x30) = sub_496f68
    *(eax_2 + 0x3c) = ebx_1
    *(eax_2 + 0x38) = sub_496f78
    return sub_493f6c(*(ebx_1 + 0x3c))
}
