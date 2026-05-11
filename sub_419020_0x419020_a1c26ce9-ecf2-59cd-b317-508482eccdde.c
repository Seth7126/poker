// ============================================================
// 函数名称: sub_419020
// 虚拟地址: 0x419020
// WARP GUID: a1c26ce9-ecf2-59cd-b317-508482eccdde
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4190bc, sub_4191d8
// ============================================================

int32_t __convention("regparm")sub_419020(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: __builtin_memcpy(arg2, *(arg1 + 0x10) + 0x10, 0x10)
    __builtin_memcpy(arg2, *(arg1 + 0x10) + 0x10, 0x10)
    *arg2 = 0
    arg2[2] = 0
    return 0
}
