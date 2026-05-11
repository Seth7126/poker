// ============================================================
// 函数名称: sub_44b8a0
// 虚拟地址: 0x44b8a0
// WARP GUID: 6f968622-d688-53f5-8a51-abbe881eb7a0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40fac8, sub_41bffc, sub_41bfe4, sub_40faac
// [被调用的父级函数]: sub_44b940
// ============================================================

int32_t __convention("regparm")sub_44b8a0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg1[0x4e].b != 0)
    if (arg1[0x4e].b != 0)
        return (*(*arg1 + 0x40))()
    
    if (*(arg1 + 0x139) == 0)
        int32_t eax_12 = sub_41bffc(arg1[0x4a])
        return sub_40faac(sub_41bfe4(arg1[0x4a]), 0, 0, arg2, eax_12)
    
    int32_t eax_3 = sub_41bffc(arg1[0x4a])
    int32_t eax_5 = sub_41bffc(arg1[0x4a])
    int32_t edx_2 = arg1[0xf] - eax_5
    int32_t edx_3 = edx_2 s>> 1
    bool c_1 = unimplemented  {sar edx, 0x1}
    
    if (edx_2 s>> 1 s< 0)
        edx_3 = adc.d(edx_3, 0, c_1)
    
    int32_t eax_7 = sub_41bfe4(arg1[0x4a])
    int32_t edx_5 = arg1[0xe] - eax_7
    int32_t result = edx_5 s>> 1
    bool c_2 = unimplemented  {sar edx, 0x1}
    
    if (edx_5 s>> 1 s< 0)
        result = adc.d(result, 0, c_2)
    
    sub_40fac8(sub_41bfe4(arg1[0x4a]), edx_3, result, arg2, eax_3)
    return result
}
