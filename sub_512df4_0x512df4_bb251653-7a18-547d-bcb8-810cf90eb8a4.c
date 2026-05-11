// ============================================================
// 函数名称: sub_512df4
// 虚拟地址: 0x512df4
// WARP GUID: bb251653-7a18-547d-bcb8-810cf90eb8a4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_513ae4, sub_403010
// [被调用的父级函数]: sub_515920, sub_514ef8
// ============================================================

int32_t __fastcallsub_512df4(int32_t arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: void var_8c
    void var_8c
    int32_t ecx = __builtin_memcpy(&var_8c, arg1, 0x84)
    int32_t ebx = *(arg2 + 0x15c8)
    
    if (ebx s< 0x28)
        bool o_1 = unimplemented  {imul eax, ebx, 0x21}
        
        if (o_1)
            sub_403010()
            noreturn
        
        __builtin_memcpy(arg2 + ebx * 0x84, &var_8c, 0x84)
        *(arg2 + (*(arg2 + 0x15c8) << 2) + 0x1524) = arg3
        int32_t temp1_1 = *(arg2 + 0x15c8)
        *(arg2 + 0x15c8) += 1
        
        if (add_overflow(temp1_1, 1))
            sub_403010()
            noreturn
    else
        sub_513ae4(ecx, 0xa)
    
    char var_5
    int32_t result
    result.b = var_5
    return result
}
