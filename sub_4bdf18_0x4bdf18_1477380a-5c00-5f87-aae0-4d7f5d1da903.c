// ============================================================
// 函数名称: sub_4bdf18
// 虚拟地址: 0x4bdf18
// WARP GUID: 1477380a-5c00-5f87-aae0-4d7f5d1da903
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c1b10, sub_403010, sub_420ac8, sub_402d20
// [被调用的父级函数]: sub_4bdf6c
// ============================================================

int32_t __convention("regparm")sub_4bdf18(int32_t arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: int32_t entry_result
    int32_t entry_result
    int32_t entry_result_1 = entry_result
    int32_t eax
    
    if (arg2 != 0x64)
        eax = sub_402d20(0x64)
    
    if (arg2 == 0x64 || arg2 s> eax)
        int32_t edx = *(arg3 - 4)
        
        if (add_overflow(edx, 0x55))
            sub_403010()
            noreturn
        
        int32_t eax_2 = sub_420ac8(0x64, edx + 0x55)
        sub_4c1b10(arg1, *(*data_5301f4 + 0x10020), eax_2)
    
    return entry_result
}
