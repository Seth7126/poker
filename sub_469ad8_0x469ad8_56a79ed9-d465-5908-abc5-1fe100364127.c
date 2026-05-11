// ============================================================
// 函数名称: sub_469ad8
// 虚拟地址: 0x469ad8
// WARP GUID: 56a79ed9-d465-5908-abc5-1fe100364127
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402bc0, sub_4054f4, sub_403010
// [被调用的父级函数]: sub_469f7c
// ============================================================

int32_t __fastcallsub_469ad8(int32_t arg1, char* arg2, void* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: if (*(*(arg3 + 0x31c) + (arg4 << 1)) != 0)
    if (*(*(arg3 + 0x31c) + (arg4 << 1)) != 0)
        bool o_3 = unimplemented  {imul eax, eax, 0x20}
        
        if (not(o_3))
            return sub_402bc0(*(arg3 + 0x320) + zx.d(*(*(arg3 + 0x31c) + (arg4 << 1))) * 0x100, arg2)
        
        sub_403010()
        noreturn
    
    int32_t temp2_1 = *(arg3 + 0x318)
    *(arg3 + 0x318) += 1
    
    if (add_overflow(temp2_1, 1))
        sub_403010()
        noreturn
    
    int32_t eax_1 = *(arg3 + 0x318)
    
    if (add_overflow(eax_1, 1))
        sub_403010()
        noreturn
    
    int32_t var_14_1 = eax_1 + 1
    sub_4054f4()
    *(*(arg3 + 0x31c) + (arg4 << 1)) = (*(arg3 + 0x318)).w
    bool o_2 = unimplemented  {imul eax, eax, 0x20}
    
    if (not(o_2))
        return sub_402bc0(*(arg3 + 0x320) + zx.d(*(*(arg3 + 0x31c) + (arg4 << 1))) * 0x100, arg2)
    
    sub_403010()
    noreturn
}
