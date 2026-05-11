// ============================================================
// 函数名称: sub_4a354c
// 虚拟地址: 0x4a354c
// WARP GUID: 69670236-9043-592a-b60c-e7d3f8ed40bc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4a354c(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.b = arg2.b
    int32_t ebx_1 = ebx * 3
    bool o = unimplemented  {imul ebx, ebx, 0x3}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t temp1 = *(arg1 + (ebx_1 << 2) + 0x50)
    *(arg1 + (ebx_1 << 2) + 0x50) += 1
    
    if (add_overflow(temp1, 1))
        sub_403010()
        noreturn
    
    if (*(arg1 + (ebx_1 << 2) + 0x50) != 1)
        return 
    
    *(arg1 + (ebx_1 << 2) + 0x4c) = arg3
    *(arg1 + (ebx_1 << 2) + 0x48) = 0
    
    if (*(arg1 + 0x3a) != 0)
        *(arg1 + 0x3c)
        (*(arg1 + 0x38))(arg3)
}
