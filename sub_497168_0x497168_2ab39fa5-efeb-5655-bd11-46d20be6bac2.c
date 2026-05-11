// ============================================================
// 函数名称: sub_497168
// 虚拟地址: 0x497168
// WARP GUID: 2ab39fa5-efeb-5655-bd11-46d20be6bac2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_493f78, sub_493f24
// [被调用的父级函数]: sub_497018
// ============================================================

int32_t __convention("regparm")sub_497168(void* arg1)
{
    // 第一条实际指令: if (sub_493f24(*(arg1 + 0x3c), 0xffffffff) == 0)
    if (sub_493f24(*(arg1 + 0x3c), 0xffffffff) == 0)
        sub_493f78(*(arg1 + 0x3c))
    
    return *(arg1 + 0xc) ^ 1
}
