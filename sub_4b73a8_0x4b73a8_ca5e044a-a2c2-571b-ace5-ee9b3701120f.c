// ============================================================
// 函数名称: sub_4b73a8
// 虚拟地址: 0x4b73a8
// WARP GUID: ca5e044a-a2c2-571b-ace5-ee9b3701120f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4c62e8
// ============================================================

int32_t __convention("regparm")sub_4b73a8(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t entry_result
    int32_t entry_result
    int32_t entry_result_1 = entry_result
    void var_20
    __builtin_memcpy(&var_20, arg2, 0x14)
    char var_10
    
    if (*(arg1 + 0xc3d20) != 0 && (var_10 == 1 || *(arg1 + 0xc3d24) == 1))
        int32_t edx = *(arg1 + 0x7e8)
        
        if (edx s< 0x64)
            bool o_1 = unimplemented  {imul edx, edx, 0x5}
            
            if (o_1)
                sub_403010()
                noreturn
            
            __builtin_memcpy(arg1 + edx * 0x14 + 4, &var_20, 0x14)
            int32_t temp1_1 = *(arg1 + 0x7e8)
            *(arg1 + 0x7e8) += 1
            
            if (add_overflow(temp1_1, 1))
                sub_403010()
                noreturn
    
    return entry_result
}
