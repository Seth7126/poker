// ============================================================
// 函数名称: sub_4836b0
// 虚拟地址: 0x4836b0
// WARP GUID: 7c24bea0-2421-5a10-b635-fc311d1777c3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_48380c, sub_4834fc, sub_403010
// [被调用的父级函数]: sub_4748fc, sub_4755b0, sub_4742c0, sub_46e17c, sub_50f300, sub_50fa27, sub_4d6994, sub_4d81c8, sub_4d951f, sub_478234, sub_51038c, sub_4e649b, sub_4e6659, sub_4dd1e0, sub_4dd1d7, sub_50b624, sub_5223e8, sub_4d9530, sub_46e0ac, sub_475d3c, sub_46e16f, sub_50f7b8, sub_50e4b0, sub_50907c, sub_47575c, sub_50732c, sub_4d9704, sub_50e9c0
// ============================================================

void* __convention("regparm")sub_4836b0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t edi = *(arg1 + 0x8a0)
    void* result = nullptr
    int32_t ebx
    
    while (true)
        if (add_overflow(edi, 1))
            sub_403010()
            noreturn
        
        if (edi + 1 u>= 2)
            bool o_4 = unimplemented  {imul edx, edi, 0x1038}
            
            if (o_4)
                sub_403010()
                noreturn
            
            if (*(*(arg1 + 0xab0) + edi * 0x81c0 + 1) != 0 && edi != arg2)
                bool o_1 = unimplemented  {imul edx, edx, 0x1038}
                
                if (o_1)
                    sub_403010()
                    noreturn
                
                edi = sx.d(*(*(arg1 + 0xab0) + edi * 0x81c0 + 0x813a))
                void* result_1 = result
                result += 1
                
                if (add_overflow(result_1, 1))
                    sub_403010()
                    noreturn
                
                if (result s< 0x64)
                    continue
        
        ebx.b = 1
        break
    
    if (edi == arg2)
        result = edi * 0x1038
        bool o_5 = unimplemented  {imul eax, edi, 0x1038}
        
        if (o_5)
            sub_403010()
            noreturn
        
        if (*(*(arg1 + 0xab0) + (result << 3) + 1) != 0)
            ebx = 0
            
            while (true)
                result = *(arg1 + 0x8a0)
                
                if (edi == result)
                    break
                
                bool o_6 = unimplemented  {imul edx, eax, 0x1038}
                
                if (o_6)
                    sub_403010()
                    noreturn
                
                if (*(*(arg1 + 0xab0) + result * 0x81c0 + 0x81a5) != 0)
                    ebx.b = 1
                    break
                
                sub_48380c(arg1, result)
    
    if (ebx.b != 0)
        bool o_7 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_7)
            sub_403010()
            noreturn
        
        int32_t ecx_5 = *(arg1 + 0x8a0) + 0x8000
        
        if (ecx_5 u> 0xffff)
            sub_403008()
            noreturn
        
        *(*(arg1 + 0xab0) + arg2 * 0x81c0 + 0x813a) = ecx_5.w - 0x8000
        result = arg1
        sub_4834fc(result, arg2)
    
    return result
}
