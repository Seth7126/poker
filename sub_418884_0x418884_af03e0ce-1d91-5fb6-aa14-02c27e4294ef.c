// ============================================================
// 函数名称: sub_418884
// 虚拟地址: 0x418884
// WARP GUID: af03e0ce-1d91-5fb6-aa14-02c27e4294ef
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_418bec, sub_418bb8, sub_418ad4, sub_418b14, sub_418c1c
// ============================================================

int32_t __convention("regparm")sub_418884(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: __builtin_memcpy(arg2, *(arg1 + 0x10) + 0x10, 0x2c)
    __builtin_memcpy(arg2, *(arg1 + 0x10) + 0x10, 0x2c)
    *arg2 = 0
    return 0
}
