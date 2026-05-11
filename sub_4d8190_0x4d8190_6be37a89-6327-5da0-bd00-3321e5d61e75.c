// ============================================================
// 函数名称: sub_4d8190
// 虚拟地址: 0x4d8190
// WARP GUID: 6be37a89-6327-5da0-bd00-3321e5d61e75
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __fastcallsub_4d8190(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void var_2c
    void var_2c
    __builtin_memcpy(&var_2c, arg1, 0x24)
    char var_30 = 8
    int32_t ecx = 0
    void* result = &var_2c
    
    do
        if (arg2 == *result)
            var_30 = ecx.b
        
        ecx += 1
        result += 4
    while (ecx.b != 8)
    
    result.b = var_30
    return result
}
