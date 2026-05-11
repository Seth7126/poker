// ============================================================
// 函数名称: sub_40e44c
// 虚拟地址: 0x40e44c
// WARP GUID: 52869a15-7f01-5658-bd58-8ec1e7a87727
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_414aa0
// ============================================================

int32_t* __convention("regparm")sub_40e44c(void* arg1, void* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ebx = *(arg2 + 8)
    int32_t ebx = *(arg2 + 8)
    char temp0 = *(arg2 + 0xb)
    
    if (temp0 u> 0xfe)
        int32_t* result = arg1 + (ebx & 0xffffff)
        int32_t ebx_4 = arg3[1]
        *result = *arg3
        result[1] = ebx_4
        return result
    
    *(arg2 + 0x10)
    int32_t var_8 = arg3[1]
    int32_t var_c = *arg3
    
    if (temp0 u< 0xfe)
        return ebx(var_c, var_8)
    
    return (*(sx.d(ebx.w) + *arg1))(var_c, var_8)
}
