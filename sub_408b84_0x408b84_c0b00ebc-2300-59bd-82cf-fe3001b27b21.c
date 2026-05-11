// ============================================================
// 函数名称: sub_408b84
// 虚拟地址: 0x408b84
// WARP GUID: c0b00ebc-2300-59bd-82cf-fe3001b27b21
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404280, sub_404078
// [被调用的父级函数]: sub_49d2b9, sub_4a5d10, sub_49d474, sub_49d4fc, sub_49d3ec
// ============================================================

char** __convention("regparm")sub_408b84(void* arg1, char** arg2)
{
    // 第一条实际指令: int32_t eax_1 = sub_404078(arg1)
    int32_t eax_1 = sub_404078(arg1)
    int32_t i
    
    for (i = 1; eax_1 s>= i; i += 1)
        if (*(arg1 + i - 1) u> 0x20)
            break
    
    return sub_404280(0x7fffffff, i, arg1, arg2)
}
