// ============================================================
// 函数名称: sub_4c4068
// 虚拟地址: 0x4c4068
// WARP GUID: 38d11f2b-41e2-562e-a58a-4aa012e0dc92
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c3ff4
// [被调用的父级函数]: sub_4c3f8c, sub_4c4904
// ============================================================

int32_t __convention("regparm")sub_4c4068(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void var_264
    void var_264
    __builtin_memcpy(&var_264, arg2, 0x130)
    void var_134
    __builtin_memcpy(&var_134, arg1, 0x130)
    int32_t result = 0xffffffff
    int32_t var_15c
    int32_t var_158
    int32_t var_154
    int32_t var_150
    int32_t var_14c
    int32_t var_148
    int32_t var_144
    int32_t var_2c
    int32_t var_28
    int32_t var_24
    int32_t var_20
    int32_t var_1c
    int32_t var_18
    int32_t var_14
    int32_t __saved_ebp
    
    if (sub_4c3ff4(var_2c, var_15c, 0, &__saved_ebp) == 0
            && sub_4c3ff4(var_28, var_158, 1, &__saved_ebp) == 0
            && sub_4c3ff4(var_24, var_154, 0, &__saved_ebp) == 0
            && sub_4c3ff4(var_20, var_150, 0, &__saved_ebp) == 0
            && sub_4c3ff4(var_1c, var_14c, 0, &__saved_ebp) == 0
            && sub_4c3ff4(var_18, var_148, 0, &__saved_ebp) == 0
            && sub_4c3ff4(var_14, var_144, 0, &__saved_ebp) == 0)
        return 0
    
    return result
}
