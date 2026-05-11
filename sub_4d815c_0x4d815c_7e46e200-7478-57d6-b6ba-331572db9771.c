// ============================================================
// 函数名称: sub_4d815c
// 虚拟地址: 0x4d815c
// WARP GUID: 7e46e200-7478-57d6-b6ba-331572db9771
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

void* __fastcallsub_4d815c(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void var_2c
    void var_2c
    __builtin_memcpy(&var_2c, arg1, 0x24)
    char var_30 = 0
    char i_1 = 8
    void* result = &var_2c
    char i
    
    do
        if (arg2 == *result)
            var_30 = 1
        
        result += 4
        i = i_1
        i_1 -= 1
    while (i != 1)
    result.b = var_30
    return result
}
