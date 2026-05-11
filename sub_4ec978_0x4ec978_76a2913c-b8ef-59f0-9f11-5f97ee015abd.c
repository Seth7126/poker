// ============================================================
// 函数名称: sub_4ec978
// 虚拟地址: 0x4ec978
// WARP GUID: 76a2913c-b8ef-59f0-9f11-5f97ee015abd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010, sub_402d20
// [被调用的父级函数]: sub_4ed7a0
// ============================================================

int32_tsub_4ec978()
{
    // 第一条实际指令: int32_t entry_result
    int32_t entry_result
    int32_t entry_result_1 = entry_result
    
    for (int32_t i = 1; i != 7; i += 1)
        int32_t eax_1 = sub_402d20(4)
        
        if (add_overflow(eax_1, 4))
            sub_403010()
            noreturn
        
        *(*data_5301f4 + (i << 2) + 0x111cc) = eax_1 + 4
    
    return entry_result
}
