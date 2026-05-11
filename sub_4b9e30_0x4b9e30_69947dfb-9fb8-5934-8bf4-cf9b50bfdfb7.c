// ============================================================
// 函数名称: sub_4b9e30
// 虚拟地址: 0x4b9e30
// WARP GUID: 69947dfb-9fb8-5934-8bf4-cf9b50bfdfb7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4cc6dc, sub_403010
// [被调用的父级函数]: sub_4b9e84
// ============================================================

int32_t __convention("regparm")sub_4b9e30(int32_t arg1, void* arg2)
{
    // 第一条实际指令: *(arg2 - 4)
    *(arg2 - 4)
    int32_t edx_1 = *(arg2 - 4) * 0x41
    bool o = unimplemented  {imul edx, dword [edx-0x4], 0x41}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t ecx_1 = *data_5301f4
    int32_t ebx_2 = *(*data_5301f4 + 0x21104)
    int32_t ebx_3 = ebx_2 - *(ecx_1 + (edx_1 << 3) + 0x1fea4)
    
    if (add_overflow(ebx_2, neg.d(*(ecx_1 + (edx_1 << 3) + 0x1fea4))))
        sub_403010()
        noreturn
    
    if (not(add_overflow(ebx_3, arg1)))
        int32_t result
        result.b = ebx_3 + arg1 s<= sub_4cc6dc(*(arg2 - 4))
        return result
    
    sub_403010()
    noreturn
}
