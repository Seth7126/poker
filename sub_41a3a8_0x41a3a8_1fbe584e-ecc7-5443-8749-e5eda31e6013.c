// ============================================================
// 函数名称: sub_41a3a8
// 虚拟地址: 0x41a3a8
// WARP GUID: 1fbe584e-ecc7-5443-8749-e5eda31e6013
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402d00
// [被调用的父级函数]: sub_41f1b0
// ============================================================

int32_t* __convention("regparm")sub_41a3a8(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t i_1 = *arg2 - 1
    
    if (i_1 s> 0)
        int32_t ecx_1 = 1
        int32_t i
        
        do
            char* eax_1 = arg1 + (ecx_1 << 2)
            char* edx_1 = arg1 + ecx_1 * 3
            ebx.b = eax_1[2]
            edx_1[2] = ebx.b
            ebx.b = eax_1[1]
            edx_1[1] = ebx.b
            eax_1.b = *eax_1
            *edx_1 = eax_1.b
            ecx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t* result = arg2
    
    if (*result s< 0x100)
        sub_402d00(arg1 + *arg2 * 3, (0x100 - *arg2) * 3, 0)
        result = arg2
        *result = 0x100
    
    return result
}
