// ============================================================
// 函数名称: sub_4a3594
// 虚拟地址: 0x4a3594
// WARP GUID: 13620d5e-a61d-5402-af2f-b2963c6101c7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4a3594(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.b = arg2.b
    int32_t esi = ebx * 3
    bool o = unimplemented  {imul esi, ebx, 0x3}
    
    if (o)
        sub_403010()
        noreturn
    
    if (*(arg1 + (esi << 2) + 0x50) s<= 0)
        return 
    
    int32_t temp0_1 = *(arg1 + (esi << 2) + 0x48)
    *(arg1 + (esi << 2) + 0x48) += arg3
    
    if (add_overflow(temp0_1, arg3))
        sub_403010()
        noreturn
    
    if (*(arg1 + 0x32) != 0)
        *(arg1 + 0x34)
        (*(arg1 + 0x30))(*(arg1 + (esi << 2) + 0x48))
}
