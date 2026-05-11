// ============================================================
// 函数名称: sub_40fdf4
// 虚拟地址: 0x40fdf4
// WARP GUID: c40dd5f3-00b7-5f3f-9e1d-8468a8078956
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40fcf8
// [被调用的父级函数]: sub_43e460
// ============================================================

int32_t* __convention("regparm")sub_40fdf4(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_8 = ebx
    int32_t esi
    int32_t var_c = esi
    int32_t* result_2 = &var_c
    int32_t ecx = arg2
    
    if (ecx s>= 0)
        int32_t temp0_1
        
        do
            int32_t ebx_1 = *(arg1 + (ecx << 2))
            temp0_1 = ecx
            ecx -= 1
            *(result_2 - 4) = ebx_1
            result_2 -= 4
        while (temp0_1 - 1 s>= 0)
    
    int32_t* result = result_2
    
    if (arg2 s>= 0)
        int32_t i_1 = arg2 + 1
        int32_t* result_1 = result
        int32_t i
        
        do
            result, ebp_1 = sub_40fcf8(*result_1)
            result_1 = &result_1[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    ebp_1[-2]
    ebp_1[-1]
    *ebp_1
    return result
}
