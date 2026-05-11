// ============================================================
// 函数名称: sub_47d0c0
// 虚拟地址: 0x47d0c0
// WARP GUID: 8dbfee85-1e88-534b-8526-1502854448b0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_47b3d8, sub_403010
// [被调用的父级函数]: sub_47d208
// ============================================================

int32_t __convention("regparm")sub_47d0c0(int32_t arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: void* esi = *(arg3 - 4) + 0xce8
    void* esi = *(arg3 - 4) + 0xce8
    int32_t edx_2 = *(esi + 0x3e8)
    bool o = unimplemented  {imul ecx, edx, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t ebx_3 = sx.d(*(*(*(arg3 - 4) + 0xab0) + edx_2 * 0x81c0 + 0x8130))
    int32_t ebx_4 = ebx_3 - arg1
    
    if (add_overflow(ebx_3, neg.d(arg1)))
        sub_403010()
        noreturn
    
    int32_t ebx_5 = ebx_4 + 1
    
    if (add_overflow(ebx_4, 1))
        sub_403010()
        noreturn
    
    bool o_3 = unimplemented  {imul eax, edx, 0x1038}
    
    if (o_3)
        sub_403010()
        noreturn
    
    int32_t edi = sx.d(*(*(*(arg3 - 4) + 0xab0) + edx_2 * 0x81c0 + 0x8130))
    int32_t result
    
    if (edi s>= ebx_5)
        int32_t i_1 = edi - ebx_5 + 1
        int32_t i
        
        do
            bool o_4 = unimplemented  {imul eax, eax, 0x1038}
            
            if (o_4)
                sub_403010()
                noreturn
            
            if (ebx_5 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_5 = unimplemented  {imul edx, ebx, 0x23}
            
            if (o_5)
                sub_403010()
                noreturn
            
            result.b = *(*(*(arg3 - 4) + 0xab0) + *(esi + 0x3e8) * 0x81c0 + ebx_5 * 0x118 - 0xf8)
            char temp4_1 = result.b
            result.b -= 1
            
            if (temp4_1 == 1)
            label_47d195:
                sub_47b3d8(*(arg3 - 4), *(esi + 0x4c8), ebx_5)
                bool o_6 = unimplemented  {imul eax, eax, 0x1038}
                
                if (o_6)
                    sub_403010()
                    noreturn
                
                if (ebx_5 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_7 = unimplemented  {imul edx, ebx, 0x23}
                
                if (o_7)
                    sub_403010()
                    noreturn
                
                if (arg2 + 0x8000 u> 0xffff)
                    sub_403008()
                    noreturn
                
                *(*(*(arg3 - 4) + 0xab0) + *(esi + 0x3e8) * 0x81c0 + ebx_5 * 0x118 - 0xa0) =
                    (arg2 + 0x8000).w - 0x8000
            else
                char temp6_1 = result.b
                result.b -= 0xb
                
                if (temp6_1 == 0xb)
                    goto label_47d195
                
                char temp7_1 = result.b
                result.b -= 5
                
                if (temp7_1 == 5)
                    goto label_47d195
            
            ebx_5 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    char var_9
    result.b = var_9
    return result
}
