// ============================================================
// 函数名称: sub_4762cc
// 虚拟地址: 0x4762cc
// WARP GUID: 3a02def1-3db3-5bcc-b3ae-032e30ae3ab1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_403010
// [被调用的父级函数]: sub_476478
// ============================================================

int32_t __convention("regparm")sub_4762cc(int32_t arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: bool o = unimplemented  {imul edx, edx, 0x1038}
    bool o = unimplemented  {imul edx, edx, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    void* ecx_3 = *(*(arg3 - 4) + 0xab0) + *(*(arg3 - 4) + 0x9b8) * 0x81c0
    int32_t result = 0
    
    if (arg1 s>= 1 && arg1 s<= sx.d(*(ecx_3 + 0x8130)) && arg2 s>= 1
            && arg2 s<= sx.d(*(ecx_3 + 0x8130)))
        if (arg1 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_1 = unimplemented  {imul ebx, eax, 0x23}
        
        if (o_1)
            sub_403010()
            noreturn
        
        int32_t ebx_3
        ebx_3.w = *(ecx_3 + arg1 * 0x118 - 0xf4)
        
        if (arg2 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_2 = unimplemented  {imul edi, esi, 0x23}
        
        if (o_2)
            sub_403010()
            noreturn
        
        if (ebx_3.w s> *(ecx_3 + arg2 * 0x118 - 0xf4))
            result.b = 1
        
        if (arg1 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_3 = unimplemented  {imul ebx, eax, 0x23}
        
        if (o_3)
            sub_403010()
            noreturn
        
        int32_t ebx_4
        ebx_4.w = *(ecx_3 + arg1 * 0x118 - 0xf4)
        
        if (arg2 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_4 = unimplemented  {imul edi, esi, 0x23}
        
        if (o_4)
            sub_403010()
            noreturn
        
        if (ebx_4.w == *(ecx_3 + arg2 * 0x118 - 0xf4))
            if (arg1 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_5 = unimplemented  {imul ebx, eax, 0x23}
            
            if (o_5)
                sub_403010()
                noreturn
            
            int32_t ebx_5
            ebx_5.w = *(ecx_3 + arg1 * 0x118 - 0xf6)
            
            if (arg2 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_6 = unimplemented  {imul edi, esi, 0x23}
            
            if (o_6)
                sub_403010()
                noreturn
            
            if (ebx_5.w s> *(ecx_3 + arg2 * 0x118 - 0xf6))
                result.b = 1
        
        if (arg1 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_7 = unimplemented  {imul ebx, eax, 0x23}
        
        if (o_7)
            sub_403010()
            noreturn
        
        int32_t ebx_6
        ebx_6.w = *(ecx_3 + arg1 * 0x118 - 0xf4)
        
        if (arg2 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_8 = unimplemented  {imul edi, esi, 0x23}
        
        if (o_8)
            sub_403010()
            noreturn
        
        if (ebx_6.w == *(ecx_3 + arg2 * 0x118 - 0xf4))
            if (arg1 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_9 = unimplemented  {imul ebx, eax, 0x23}
            
            if (o_9)
                sub_403010()
                noreturn
            
            int32_t ebx_7
            ebx_7.w = *(ecx_3 + arg1 * 0x118 - 0xf6)
            
            if (arg2 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_10 = unimplemented  {imul edi, esi, 0x23}
            
            if (o_10)
                sub_403010()
                noreturn
            
            if (ebx_7.w == *(ecx_3 + arg2 * 0x118 - 0xf6) && arg2 s< arg1)
                result.b = 1
    
    return result
}
