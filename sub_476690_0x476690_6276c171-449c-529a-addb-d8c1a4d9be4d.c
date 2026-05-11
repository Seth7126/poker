// ============================================================
// 函数名称: sub_476690
// 虚拟地址: 0x476690
// WARP GUID: 6276c171-449c-529a-addb-d8c1a4d9be4d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4766f8, sub_476830
// ============================================================

int32_t __convention("regparm")sub_476690(void* arg1)
{
    // 第一条实际指令: int32_t edx = *(arg1 + 0x9b8)
    int32_t edx = *(arg1 + 0x9b8)
    
    if (edx s<= 0 || edx s> *(arg1 + 0xab4))
        return 0
    
    int32_t result
    result.b = 1
    bool o_1 = unimplemented  {imul edx, edx, 0x1038}
    
    if (o_1)
        sub_403010()
        noreturn
    
    if (*(*(arg1 + 0xab0) + edx * 0x81c0 + 1) == 0)
        result = 0
    
    int32_t edx_3 = *(arg1 + 0x9b8)
    
    if (edx_3 != *(arg1 + 0x8a0))
        bool o_2 = unimplemented  {imul edx, edx, 0x1038}
        
        if (o_2)
            sub_403010()
            noreturn
        
        if (*(*(arg1 + 0xab0) + edx_3 * 0x81c0 + 0x8139) != 0)
            return 0
    
    return result
}
