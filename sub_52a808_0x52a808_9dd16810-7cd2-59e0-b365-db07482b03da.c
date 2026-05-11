// ============================================================
// 函数名称: sub_52a808
// 虚拟地址: 0x52a808
// WARP GUID: 9dd16810-7cd2-59e0-b365-db07482b03da
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_52abb4, sub_403010
// [被调用的父级函数]: sub_5223e8
// ============================================================

int32_t __convention("regparm")sub_52a808(int32_t arg1)
{
    // 第一条实际指令: int32_t entry_result
    int32_t entry_result
    int32_t entry_result_1 = entry_result
    int32_t eax_2 = sub_52abb4() * 0x15
    bool o = unimplemented  {imul eax, eax, 0x15}
    
    if (not(o))
        __builtin_memcpy(arg1 + (eax_2 << 3) + 0xac, arg1 + 4, 0xa8)
        return entry_result
    
    sub_403010()
    noreturn
}
