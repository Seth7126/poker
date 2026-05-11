// ============================================================
// 函数名称: sub_41ee44
// 虚拟地址: 0x41ee44
// WARP GUID: 64b02603-9584-5a2a-9800-d087b023c108
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41dc74, sub_41e2f0
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_41ee44(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x20)
    void* esi = *(arg1 + 0x20)
    
    if (arg2 == *(esi + 0x20))
        return 
    
    sub_41e2f0(arg1)
    void var_60
    __builtin_memcpy(&var_60, esi + 0x18, 0x54)
    int32_t var_58_1 = arg2
    int32_t var_40_1 = arg2
    sub_41dc74(*(esi + 0x10), *(esi + 8), arg1, &var_60)
    (*(*arg1 + 0x10))()
}
