// ============================================================
// 函数名称: sub_433414
// 虚拟地址: 0x433414
// WARP GUID: aec89348-2c4c-5bcb-8096-f6f23b77fc2f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_433ab0, sub_4336a8, sub_4351dc, sub_433384, sub_435478, sub_433f3c
// ============================================================

int32_t __convention("regparm")sub_433414(void* arg1, char arg2)
{
    // 第一条实际指令: void* i_1
    void* i_1
    
    for (void* i = arg1; i != *(*(arg1 + 0x1c) + 0x64); i = i_1)
        i_1 = *(i + 0x14)
        
        if (arg2 == *(i_1 + 0x10) && *(i + 0x18) != 0)
            return *(*(i + 0x18) + 0x20)
    
    (*(**(*(arg1 + 0x1c) + 0x14) + 0x40))()
    (*(**(*(arg1 + 0x1c) + 0x14) + 0x84))()
    int32_t var_14
    
    if (arg2 == 1)
        return var_14
    
    if (arg2 != 2)
        return 0
    
    int32_t var_18
    return var_18
}
