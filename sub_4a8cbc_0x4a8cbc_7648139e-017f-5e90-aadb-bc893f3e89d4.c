// ============================================================
// 函数名称: sub_4a8cbc
// 虚拟地址: 0x4a8cbc
// WARP GUID: 7648139e-017f-5e90-aadb-bc893f3e89d4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_412be8, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a8cbc(void* arg1, int32_t arg2, int16_t arg3)
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    if (arg3 u>= 1)
        int32_t eax_4 = sub_412be8(arg1, arg2, arg3)
        result = eax_4 - *(arg1 + 0x24)
        
        if (add_overflow(eax_4, neg.d(*(arg1 + 0x24))))
            sub_403010()
            noreturn
    else
        int32_t edx = *(arg1 + 0x24)
        
        if (add_overflow(edx, arg2))
            sub_403010()
            noreturn
        
        int32_t eax_2 = sub_412be8(arg1, edx + arg2, 0)
        result = eax_2 - *(arg1 + 0x24)
        
        if (add_overflow(eax_2, neg.d(*(arg1 + 0x24))))
            sub_403010()
            noreturn
    
    return result
}
