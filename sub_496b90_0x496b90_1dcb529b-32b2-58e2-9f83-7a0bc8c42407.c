// ============================================================
// 函数名称: sub_496b90
// 虚拟地址: 0x496b90
// WARP GUID: 1dcb529b-32b2-58e2-9f83-7a0bc8c42407
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49649c
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_496b90(void* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* result = arg3
    int32_t* result = arg3
    int32_t esi = arg2
    result = nullptr
    
    if (*(arg1 + 0x72) != 0)
        *(arg1 + 0x74)
        (*(arg1 + 0x70))(&result)
    
    if (result == 0)
        arg2.b = 1
        result = sub_49649c(esi, arg2, &data_494448, arg1)
    
    return result
}
