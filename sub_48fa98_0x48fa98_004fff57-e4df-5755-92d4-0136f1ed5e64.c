// ============================================================
// 函数名称: sub_48fa98
// 虚拟地址: 0x48fa98
// WARP GUID: 004fff57-e4df-5755-92d4-0136f1ed5e64
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408968
// [被调用的父级函数]: sub_4908c8
// ============================================================

int32_t __convention("regparm")sub_48fa98(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void var_24
    void var_24
    __builtin_memcpy(&var_24, arg2, 0x10)
    void var_14
    __builtin_memcpy(&var_14, arg1, 0x10)
    return sub_408968(&var_14, &var_24, 0x10)
}
