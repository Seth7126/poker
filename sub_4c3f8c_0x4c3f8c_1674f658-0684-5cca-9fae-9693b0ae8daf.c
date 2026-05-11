// ============================================================
// 函数名称: sub_4c3f8c
// 虚拟地址: 0x4c3f8c
// WARP GUID: 1674f658-0684-5cca-9fae-9693b0ae8daf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4cd498, sub_4c4068
// [被调用的父级函数]: sub_4bca48, sub_4bf070
// ============================================================

int32_t __convention("regparm")sub_4c3f8c(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void var_20c
    void var_20c
    __builtin_memcpy(&var_20c, arg2, 0x104)
    void var_108
    __builtin_memcpy(&var_108, arg1, 0x104)
    void var_33c
    sub_4cd498(&var_108, 0, &var_33c)
    void var_46c
    sub_4cd498(&var_20c, 0, &var_46c)
    return sub_4c4068(&var_33c, &var_46c)
}
