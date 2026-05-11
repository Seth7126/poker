// ============================================================
// 函数名称: sub_408b34
// 虚拟地址: 0x408b34
// WARP GUID: 27ddc377-789f-5441-b34e-524abee562c5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_404280, sub_404078
// [被调用的父级函数]: sub_49e3f8, sub_4a5d10, sub_49e6e0, sub_49f548, sub_49d4fc, sub_4a1b34, sub_4ad27c, sub_4a7bf0, sub_4b0fd8, sub_4b1160
// ============================================================

char** __convention("regparm")sub_408b34(void* arg1, char** arg2)
{
    // 第一条实际指令: int32_t esi = sub_404078(arg1)
    int32_t esi = sub_404078(arg1)
    int32_t i
    
    for (i = 1; esi s>= i; i += 1)
        if (*(arg1 + i - 1) u> 0x20)
            break
    
    if (esi s< i)
        sub_403df8(arg2)
        return arg2
    
    while (*(arg1 + esi - 1) u<= 0x20)
        esi -= 1
    
    return sub_404280(esi - i + 1, i, arg1, arg2)
}
