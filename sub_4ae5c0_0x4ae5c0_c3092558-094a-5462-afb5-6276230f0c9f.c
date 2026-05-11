// ============================================================
// 函数名称: sub_4ae5c0
// 虚拟地址: 0x4ae5c0
// WARP GUID: c3092558-094a-5462-afb5-6276230f0c9f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_4ae5c0(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    var_8:3.b = 1
    
    if (*(arg1 + 0x3a) != 0)
        *(arg1 + 0x3c)
        (*(arg1 + 0x38))(&var_8:3)
    
    arg1.b = var_8:3.b
    return arg1
}
