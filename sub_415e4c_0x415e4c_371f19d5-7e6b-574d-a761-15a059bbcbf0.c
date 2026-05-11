// ============================================================
// 函数名称: sub_415e4c
// 虚拟地址: 0x415e4c
// WARP GUID: 371f19d5-7e6b-574d-a761-15a059bbcbf0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_414430
// [被调用的父级函数]: sub_4160a0
// ============================================================

int32_t __convention("regparm")sub_415e4c(void* arg1, void* arg2)
{
    // 第一条实际指令: int16_t result = sub_414430(arg2)
    int16_t result = sub_414430(arg2)
    *(arg1 + 0x18) = result
    return result
}
