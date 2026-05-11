// ============================================================
// 函数名称: sub_4b7354
// 虚拟地址: 0x4b7354
// WARP GUID: be687abc-3d9c-5736-bd45-a9e6ce5e6a96
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4b86d0
// ============================================================

int32_t __convention("regparm")sub_4b7354(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t entry_result
    int32_t entry_result
    int32_t entry_result_1 = entry_result
    
    if (*(arg1 + 0xc3d24) == 4 && arg2 s> 0)
        bool o_1 = unimplemented  {imul esi, edx, 0x5}
        
        if (o_1)
            sub_403010()
            noreturn
        
        if (*(arg1 + arg2 * 0x14 + 0x7fe) != 0xfffe)
            int32_t temp0_1 = *(arg1 + 0xc3ec0)
            *(arg1 + 0xc3ec0) += 1
            
            if (add_overflow(temp0_1, 1))
                sub_403010()
                noreturn
            
            *(arg1 + (*(arg1 + 0xc3ec0) << 3) + 0xc3d24) = arg3
            *(arg1 + (*(arg1 + 0xc3ec0) << 3) + 0xc3d20) = arg2
    
    return entry_result
}
