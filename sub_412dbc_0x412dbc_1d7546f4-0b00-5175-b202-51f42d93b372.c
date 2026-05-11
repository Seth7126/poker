// ============================================================
// 函数名称: sub_412dbc
// 虚拟地址: 0x412dbc
// WARP GUID: 1d7546f4-0b00-5175-b202-51f42d93b372
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404248, sub_402980, sub_404078
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_412dbc(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t result = sub_404078(*(arg1 + 4)) - *(arg1 + 8)
    int32_t result = sub_404078(*(arg1 + 4)) - *(arg1 + 8)
    
    if (arg3 s< result)
        result = arg3
    
    sub_402980(sub_404248(arg1 + 4) + *(arg1 + 8), arg2, result)
    *(arg1 + 8) += result
    return result
}
