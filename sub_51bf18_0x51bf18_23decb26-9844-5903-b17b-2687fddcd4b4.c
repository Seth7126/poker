// ============================================================
// 函数名称: sub_51bf18
// 虚拟地址: 0x51bf18
// WARP GUID: 23decb26-9844-5903-b17b-2687fddcd4b4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4ee958
// ============================================================

int32_t __convention("regparm")sub_51bf18(void* arg1, int32_t arg2, int16_t arg3)
{
    // 第一条实际指令: int32_t temp0 = *(arg1 + 0x3cfc)
    int32_t temp0 = *(arg1 + 0x3cfc)
    *(arg1 + 0x3cfc) += 1
    
    if (add_overflow(temp0, 1))
        sub_403010()
        noreturn
    
    int32_t edx = *(arg1 + 0x3cfc)
    
    if (add_overflow(edx, 0x14))
        sub_403010()
        noreturn
    
    bool o_1 = unimplemented  {imul edx, edx, 0x41}
    
    if (o_1)
        sub_403010()
        noreturn
    
    *(arg1 + (edx + 0x14) * 0x104) = arg3
    int32_t ecx = *(arg1 + 0x3cfc)
    
    if (add_overflow(ecx, 0x14))
        sub_403010()
        noreturn
    
    bool o_3 = unimplemented  {imul ecx, ecx, 0x41}
    
    if (o_3)
        sub_403010()
        noreturn
    
    *(arg1 + (ecx + 0x14) * 0x104 + 2) = (*(*data_5301f4 + 0x10020)).b
    int32_t eax = *(arg1 + 0x3cfc)
    
    if (not(add_overflow(eax, 0x14)))
        return eax + 0x14
    
    sub_403010()
    noreturn
}
