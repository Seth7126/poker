// ============================================================
// 函数名称: sub_425bb4
// 虚拟地址: 0x425bb4
// WARP GUID: 62ae1d1f-85ae-5910-90ae-29d383573e6d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c754, sub_431bcc
// [被调用的父级函数]: sub_4b4de4
// ============================================================

int32_t __convention("regparm")sub_425bb4(void* arg1)
{
    // 第一条实际指令: int32_t result = *(arg1 + 0x200)
    int32_t result = *(arg1 + 0x200)
    
    if (sub_431bcc(arg1) == 0 || *(arg1 + 0x204) != 0)
        return result
    
    void var_18
    sub_42c754(arg1, &var_18)
    int32_t var_14
    int32_t var_c
    return var_c - var_14
}
