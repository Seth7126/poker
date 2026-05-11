// ============================================================
// 函数名称: sub_493764
// 虚拟地址: 0x493764
// WARP GUID: c69ba216-f92c-5d07-b45f-138c966b379a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4937a4, sub_42ad4c
// [被调用的父级函数]: 无
// ============================================================

void* const __convention("regparm")sub_493764(uint32_t arg1, void* arg2, char arg3)
{
    // 第一条实际指令: void* const result = sub_42ad4c(arg1, arg2, arg3)
    void* const result = sub_42ad4c(arg1, arg2, arg3)
    
    if (arg3 == 1 && arg2 == *(arg1 + 0x2f4))
        if (*(arg1 + 0x2c9) != 0)
            sub_4937a4(arg1)
        
        result = nullptr
        *(arg1 + 0x2f4) = 0
    
    return result
}
