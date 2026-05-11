// ============================================================
// 函数名称: sub_4834fc
// 虚拟地址: 0x4834fc
// WARP GUID: bb1077a3-73a6-5c35-a4b4-6cbfdc5e1394
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4dd1e0, sub_4dd1d7, sub_51e1c0, sub_47d208, sub_50b624, sub_4836b0, sub_4ec448, sub_4e649b
// ============================================================

void __convention("regparm")sub_4834fc(void* arg1, int32_t arg2)
{
    // 第一条实际指令: bool o = unimplemented  {imul ecx, edx, 0x1038}
    bool o = unimplemented  {imul ecx, edx, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    *(*(arg1 + 0xab0) + arg2 * 0x81c0 + 1) = 1
    *(arg1 + 0x8a0) = arg2
    *(arg1 + 0xab8) = arg2
    
    if (*(arg1 + 0xa95) == 0)
        return 
    
    int32_t esi_1 = 1
    
    while (true)
        bool o_10 = unimplemented  {imul ecx, edx, 0x1038}
        
        if (o_10)
            sub_403010()
            noreturn
        
        if (esi_1 s> sx.d(*(*(arg1 + 0xab0) + arg2 * 0x81c0 + 0x8130)))
            break
        
        bool o_1 = unimplemented  {imul ecx, edx, 0x1038}
        
        if (o_1)
            sub_403010()
            noreturn
        
        if (esi_1 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        int32_t esi_3 = esi_1
        int32_t edi_1 = esi_3 * 0x23
        bool o_2 = unimplemented  {imul edi, esi, 0x23}
        
        if (o_2)
            sub_403010()
            noreturn
        
        int32_t ecx_2
        ecx_2.b = *(*(arg1 + 0xab0) + arg2 * 0x81c0 + (edi_1 << 3) - 0xf8)
        bool c_1 = ecx_2.b u< 0x1f
        
        if (ecx_2.b == 0x1f || c_1)
            c_1 = test_bit(0x2b791, ecx_2 & 0x7f)
        
        if (c_1)
            bool o_3 = unimplemented  {imul ecx, edx, 0x1038}
            
            if (o_3)
                sub_403010()
                noreturn
            
            if (esi_3 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            if (*(*(arg1 + 0xab0) + arg2 * 0x81c0 + (edi_1 << 3) - 8) != 9)
                bool o_4 = unimplemented  {imul ebx, edx, 0x1038}
                
                if (o_4)
                    sub_403010()
                    noreturn
                
                if (esi_3 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                int32_t ecx_6 = esi_3 * 0x23
                bool o_5 = unimplemented  {imul ecx, esi, 0x23}
                
                if (o_5)
                    sub_403010()
                    noreturn
                
                if (*(*(arg1 + 0xab0) + arg2 * 0x81c0 + (ecx_6 << 3) - 8) == 8)
                    bool o_6 = unimplemented  {imul ebx, edx, 0x1038}
                    
                    if (o_6)
                        sub_403010()
                        noreturn
                    
                    if (esi_3 - 1 u> 0x75)
                        sub_403008()
                        noreturn
                    
                    if (*(*(arg1 + 0xab0) + arg2 * 0x81c0 + (ecx_6 << 3) - 0xf8) == 0xa
                            || *(arg1 + 0x9b0) != 0)
                        goto label_483617
                else if (*(arg1 + 0x9b0) != 0)
                label_483617:
                    *(arg1 + 0x9b0) = 1
                    *(arg1 + 0x9b4) = esi_3
                    *(arg1 + 0x9b8) = arg2
                    bool o_7 = unimplemented  {imul ecx, edx, 0x1038}
                    
                    if (o_7)
                        sub_403010()
                        noreturn
                    
                    if (esi_3 + 0x8000 u> 0xffff)
                        sub_403008()
                        noreturn
                    
                    *(*(arg1 + 0xab0) + arg2 * 0x81c0 + 0x8136) = (esi_3 + 0x8000).w - 0x8000
                    bool o_8 = unimplemented  {imul ecx, edx, 0x1038}
                    
                    if (o_8)
                        sub_403010()
                        noreturn
                    
                    esi_3 = sx.d(*(*(arg1 + 0xab0) + arg2 * 0x81c0 + 0x8130))
        
        esi_1 = esi_3 + 1
        
        if (add_overflow(esi_3, 1))
            sub_403010()
            noreturn
}
