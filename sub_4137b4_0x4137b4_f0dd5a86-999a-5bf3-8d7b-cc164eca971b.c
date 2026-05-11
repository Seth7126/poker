// ============================================================
// 函数名称: sub_4137b4
// 虚拟地址: 0x4137b4
// WARP GUID: f0dd5a86-999a-5bf3-8d7b-cc164eca971b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_4137b4(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    var_8.b = 0
    
    if (*(arg1 + 0x5a) != 0)
        *(arg1 + 0x5c)
        (*(arg1 + 0x58))(&var_8)
    
    arg1.b = var_8.b
    return arg1
}
