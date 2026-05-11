// ============================================================
// 函数名称: sub_512fcc
// 虚拟地址: 0x512fcc
// WARP GUID: 226501c3-c31f-5c40-87e5-b2562f3bb8c7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_50c5e0
// ============================================================

void* const __convention("regparm")sub_512fcc(void* const arg1)
{
    // 第一条实际指令: void* const edi = arg1
    void* const edi = arg1
    arg1.b = 1
    
    for (int32_t i = 1; i != 9; i += 1)
        if (i s<= *(edi + 0x348))
            int32_t esi_1 = i * 0xe9
            bool o_1 = unimplemented  {imul esi, edx, 0xe9}
            
            if (o_1)
                sub_403010()
                noreturn
            
            int32_t ecx
            ecx.b = *(edi + (esi_1 << 2) - 0x50)
            char temp0_1 = (ecx - 1).b
            ecx.b = (ecx - 1).b - 2
            
            if (temp0_1 u< 2 && *(edi + (esi_1 << 2) + 0x184) == 0)
                arg1 = nullptr
    
    return arg1
}
