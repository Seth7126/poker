// ============================================================
// 函数名称: sub_4b6940
// 虚拟地址: 0x4b6940
// WARP GUID: 035d761f-55fa-53fa-9b0a-a8812eccaee9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_4b6940(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    
    if (*(arg1 + 0x20) != 0)
        int32_t* eax = *(arg1 + 0x20)
        
        if ((*(*eax + 0x14))(eax, &var_8) == 0 && var_8.w s> 0)
            return 0
    
    arg1.b = 1
    return arg1
}
