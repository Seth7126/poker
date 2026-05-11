// ============================================================
// 函数名称: sub_4152e8
// 虚拟地址: 0x4152e8
// WARP GUID: 6acdd507-4750-5e2c-9090-3c896b67c918
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_413a6c, sub_415294
// [被调用的父级函数]: sub_415370
// ============================================================

int32_t __convention("regparm")sub_4152e8(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    void* edx_1 = sub_413a6c(*(arg4 - 4), &var_8, 4)
    void* var_c = arg4
    return sub_415294(var_8, edx_1)
}
