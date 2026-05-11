// ============================================================
// 函数名称: sub_5164b0
// 虚拟地址: 0x5164b0
// WARP GUID: 8c5c8cb2-efd8-5d71-b36c-23ec44b9820c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_50c5e0
// ============================================================

int32_t __convention("regparm")sub_5164b0(void* arg1)
{
    // 第一条实际指令: int32_t entry_result
    int32_t entry_result
    int32_t entry_result_1 = entry_result
    
    for (int32_t i = 1; i != 9; i += 1)
        bool o_1 = unimplemented  {imul ecx, edx, 0xe9}
        
        if (o_1)
            sub_403010()
            noreturn
        
        *(arg1 + i * 0x3a4 - 0x50) = 3
        *(arg1 + i * 0x3a4 + 0x17c) = 0
    
    *(arg1 + 0x348) = 8
    return entry_result
}
