// ============================================================
// 函数名称: sub_4cc6dc
// 虚拟地址: 0x4cc6dc
// WARP GUID: 08463db5-8a29-50c6-9bd4-5778fbfba51c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4d5ba0, sub_403010
// [被调用的父级函数]: sub_4b9e30, sub_520efc, sub_4c60d8, sub_4cc428, sub_4c39c8, sub_4babf8, sub_528770, sub_4baba4, sub_4c8aa0, sub_529818, sub_4c51e4, sub_4ceed4, sub_4b9e84, sub_5223e8, sub_4c62e8, sub_5285a8, sub_4c10a0, sub_507860, sub_4c2f1c, sub_4b77e0, sub_4c5034, sub_4c1254, sub_4b8be4, sub_4b8c38
// ============================================================

int32_t __convention("regparm")sub_4cc6dc(int32_t arg1)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    bool o = unimplemented  {imul eax, eax, 0x2e9c}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t ebx = 0
    
    do
        int32_t eax_2 = sub_4d5ba0(ebx.b)
        int32_t edx_1
        edx_1.b = ebx.b
        int32_t edx_2 = edx_1 * 0xd4f
        bool o_1 = unimplemented  {imul edx, edx, 0xd4f}
        
        if (o_1)
            sub_403010()
            noreturn
        
        *(arg1 * 0x174e0 + &data_51ba90 + (edx_2 << 2) + 0x34d0)
        int32_t eax_3 = eax_2 * *(arg1 * 0x174e0 + &data_51ba90 + (edx_2 << 2) + 0x34d0)
        bool o_2 = unimplemented  {imul dword [edi+edx*4+0x34d0]}
        
        if (o_2)
            sub_403010()
            noreturn
        
        int32_t result_1 = result
        result += eax_3
        
        if (add_overflow(result_1, eax_3))
            sub_403010()
            noreturn
        
        ebx += 1
    while (ebx.b != 5)
    
    return result
}
