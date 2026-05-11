// ============================================================
// 函数名称: sub_40301c
// 虚拟地址: 0x40301c
// WARP GUID: d2ab1eb5-eecb-594a-bf30-72ff82eb1ee9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41b6a8, sub_4a0968, sub_41452d, sub_4b2abc, sub_41023c, sub_4a597c, sub_410d64, sub_410d8c, sub_490a14, sub_42e994, sub_490768, sub_442414, sub_410b30, sub_428e9c, sub_40fc2c, sub_4110a0, sub_410c0c, sub_40b250, sub_41bec0, sub_40fcf8
// ============================================================

void __convention("regparm")sub_40301c(void* arg1, int32_t arg2)
{
    // 第一条实际指令: char* esi = *(arg1 - 0x2c)
    char* esi = *(arg1 - 0x2c)
    int32_t ecx
    ecx.b = *esi
    __builtin_memcpy(arg2, esi, ecx + 1)
}
