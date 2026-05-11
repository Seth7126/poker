// ============================================================
// 函数名称: sub_4cc848
// 虚拟地址: 0x4cc848
// WARP GUID: f0387354-fb1c-5515-9d67-8854aa4b10c7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4bca48, sub_4cd114, sub_4bf070
// ============================================================

int32_t __convention("regparm")sub_4cc848(int32_t arg1)
{
    // 第一条实际指令: if (arg1 - 2 u< 2 || arg1 - 5 u< 2 || arg1 - 9 u< 5)
    if (arg1 - 2 u< 2 || arg1 - 5 u< 2 || arg1 - 9 u< 5)
        if (not(add_overflow(arg1, 0xffffffff)))
            return arg1 - 1
        
        sub_403010()
        noreturn
    
    if (arg1 == 1)
        return 0xd
    
    if (arg1 == 7)
        return 3
    
    if (arg1 == 4)
        return 7
    
    if (arg1 != 8)
        return 0
    
    return 6
}
