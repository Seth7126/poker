// ============================================================
// 函数名称: sub_52ac00
// 虚拟地址: 0x52ac00
// WARP GUID: ac155b88-b67d-5bfa-a4f5-f9b5b868b195
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402b4c, sub_403010
// [被调用的父级函数]: sub_5223e8
// ============================================================

int32_t __convention("regparm")sub_52ac00(void* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t entry_result
    int32_t entry_result_1 = entry_result
    
    for (int32_t i = 0; i != 0x29; i += 1)
        *(arg1 + (i << 2) + 4)
        bool o_1 = unimplemented  {imul eax, dword [esi+edi*4+0x4], 0x3e8}
        
        if (o_1)
            sub_403010()
            noreturn
        
        *(arg1 + (i << 2) + 4) =
            sub_402b4c(float.t(*(arg1 + (i << 2) + 4) * 0x3e8) / float.t(*(arg1 + 0xa8)))
    
    return entry_result
}
