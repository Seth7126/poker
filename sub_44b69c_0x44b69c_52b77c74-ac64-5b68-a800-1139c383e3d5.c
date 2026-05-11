// ============================================================
// 函数名称: sub_44b69c
// 虚拟地址: 0x44b69c
// WARP GUID: 52b77c74-ac64-5b68-a800-1139c383e3d5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_418dd8, sub_4197e8
// [被调用的父级函数]: sub_44b760
// ============================================================

int32_tsub_44b69c(void* arg1)
{
    // 第一条实际指令: int32_t* ebx_1 = *(arg1 - 4)
    int32_t* ebx_1 = *(arg1 - 4)
    int32_t eax = ebx_1[2]
    int32_t eax_1 = ebx_1[1]
    int32_t eax_2 = *ebx_1
    int32_t eax_3 = ebx_1[3]
    *(arg1 - 0xc)
    sub_418dd8(*(*(arg1 - 8) + 0x10))
    POINT var_2c
    var_2c.x = eax_2
    var_2c.y = eax_3
    int32_t var_24 = *ebx_1
    int32_t var_20 = ebx_1[1]
    int32_t var_1c = eax
    int32_t var_18 = eax_1
    sub_4197e8(*(arg1 - 8), &var_2c, 2)
    *(arg1 + 0xc)
    sub_418dd8(*(*(arg1 - 8) + 0x10))
    var_2c.x = eax
    var_2c.y = eax_1
    int32_t var_24_1 = ebx_1[2]
    int32_t var_20_1 = ebx_1[3]
    int32_t var_1c_1 = eax_2 - 1
    int32_t var_18_1 = eax_3
    return sub_4197e8(*(arg1 - 8), &var_2c, 2)
}
