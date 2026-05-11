// ============================================================
// 函数名称: sub_510da8
// 虚拟地址: 0x510da8
// WARP GUID: 8098d648-ff3c-558d-ac6a-aff9105fd36f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_50b624, sub_514ef8
// ============================================================

int32_t __convention("regparm")sub_510da8(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebx = *(arg1 + 0x1e8)
    int32_t ebx = *(arg1 + 0x1e8)
    
    if (ebx s< 0xa)
        (arg1 + 0x1e8)[ebx + 1] = arg2
        (arg1 + 0x1e8)[*(arg1 + 0x1e8) + 0xc] = arg3
        int32_t temp0_1 = *(arg1 + 0x1e8)
        *(arg1 + 0x1e8) += 1
        
        if (add_overflow(temp0_1, 1))
            sub_403010()
            noreturn
    
    return arg3
}
