// ============================================================
// 函数名称: sub_47b488
// 虚拟地址: 0x47b488
// WARP GUID: 3e0e6765-e193-575a-9857-54bbb4518fa4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4d8208, sub_50c5e0, sub_4d88f8, sub_5223e8, sub_520efc, sub_4c2418, sub_4d951f, sub_51d580, sub_4d9378, sub_4d954c, sub_51d270, sub_50e4b0, sub_50e9c0, sub_4e649b
// ============================================================

char* __fastcallsub_47b488(int32_t arg1, int32_t arg2, void* arg3 @ eax, char arg4)
{
    // 第一条实际指令: bool o = unimplemented  {imul edx, edx, 0x1038}
    bool o = unimplemented  {imul edx, edx, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t esi = *(arg3 + 0xab0) + arg2 * 0x81c0
    
    if (arg1 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_1 = unimplemented  {imul eax, ecx, 0x23}
    
    if (o_1)
        sub_403010()
        noreturn
    
    if (arg4 != 0)
        *(esi + arg1 * 0x118 - 0x84) = 0
        *(esi + arg1 * 0x118 - 0x86) = 0
        *(esi + arg1 * 0x118 - 0x80) = 0
        int32_t edx
        edx.b = *(esi + arg1 * 0x118 - 0xf8)
        char temp2_1 = edx.b
        edx.b -= 0xd
        
        if (temp2_1 == 0xd)
            int32_t i_1 = sx.d(*(esi + arg1 * 0x118 - 0x1e))
            
            if (i_1 s> 0)
                int32_t edx_1 = 1
                int32_t i
                
                do
                    if (edx_1 - 1 u> 0x4f)
                        sub_403008()
                        noreturn
                    
                    int32_t edi_2 = sx.d((esi + arg1 * 0x118 - 0xf8)[edx_1 + 0x89]) - 1
                    
                    if (edi_2 u> 0x75)
                        sub_403008()
                        noreturn
                    
                    bool o_2 = unimplemented  {imul edi, edi, 0x23}
                    
                    if (o_2)
                        sub_403010()
                        noreturn
                    
                    *(esi + (edi_2 + 1) * 0x118 - 0x84) = 0
                    
                    if (edx_1 - 1 u> 0x4f)
                        sub_403008()
                        noreturn
                    
                    int32_t edi_6 = sx.d((esi + arg1 * 0x118 - 0xf8)[edx_1 + 0x89]) - 1
                    
                    if (edi_6 u> 0x75)
                        sub_403008()
                        noreturn
                    
                    bool o_3 = unimplemented  {imul edi, edi, 0x23}
                    
                    if (o_3)
                        sub_403010()
                        noreturn
                    
                    *(esi + (edi_6 + 1) * 0x118 - 0x86) = 0
                    
                    if (edx_1 - 1 u> 0x4f)
                        sub_403008()
                        noreturn
                    
                    int32_t ecx_6 = sx.d((esi + arg1 * 0x118 - 0xf8)[edx_1 + 0x89]) - 1
                    
                    if (ecx_6 u> 0x75)
                        sub_403008()
                        noreturn
                    
                    bool o_4 = unimplemented  {imul ecx, ecx, 0x23}
                    
                    if (o_4)
                        sub_403010()
                        noreturn
                    
                    *(esi + (ecx_6 + 1) * 0x118 - 0x80) = 0
                    edx_1 += 1
                    i = i_1
                    i_1 -= 1
                while (i != 1)
    
    *(esi + arg1 * 0x118 - 0xc) = 0
    *(esi + arg1 * 0x118 - 0x14) = 0
    return esi + arg1 * 0x118 - 0xf8
}
