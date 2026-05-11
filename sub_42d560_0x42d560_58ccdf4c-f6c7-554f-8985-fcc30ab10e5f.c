// ============================================================
// 函数名称: sub_42d560
// 虚拟地址: 0x42d560
// WARP GUID: 58ccdf4c-f6c7-554f-8985-fcc30ab10e5f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_42d59c
// ============================================================

int32_t __convention("regparm")sub_42d560(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t result = 0
    int32_t i_1 = arg2
    
    if (i_1 s> 0)
        int32_t result_1 = 1
        double* edx_1 = arg1 + 8
        int32_t i
        
        do
            long double x87_r7_1 = fconvert.t(*edx_1)
            long double temp0_1 = fconvert.t(*(arg1 + (result << 3)))
            x87_r7_1 - temp0_1
            void* eax
            eax.w = (x87_r7_1 < temp0_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe
            
            if (test_bit(eax:1.b, 0))
                result = result_1
            
            result_1 += 1
            edx_1 = &edx_1[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
