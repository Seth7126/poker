// ============================================================
// 函数名称: sub_47a9e0
// 虚拟地址: 0x47a9e0
// WARP GUID: ba339634-fa88-5cd0-8e83-4952eaa014e6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_476bc0, sub_47a1c0, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4dd1e0, sub_4dd1d7, sub_47d208, sub_4d885c, sub_46e0ac, sub_46e17c, sub_475d3c, sub_46e16f, sub_478234, sub_4e649b
// ============================================================

char* __fastcallsub_47a9e0(int32_t arg1, int32_t arg2, void* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: bool o = unimplemented  {imul eax, eax, 0x1038}
    bool o = unimplemented  {imul eax, eax, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    if (arg1 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_1 = unimplemented  {imul edx, edx, 0x23}
    
    if (o_1)
        sub_403010()
        noreturn
    
    char* result_1 = *(arg3 + 0xab0) + arg2 * 0x81c0 + arg1 * 0x118 - 0xf8
    
    if (arg4 + 0x8000 u> 0xffff)
        sub_403008()
        noreturn
    
    *(result_1 + 0x58) = (arg4 + 0x8000).w - 0x8000
    char* result = result_1
    
    if (*result == 0x13)
        result = sx.d(result_1[0xda])
        
        if (result s> 0)
            char* var_18_1 = result
            int32_t var_10_1 = 1
            char* i
            
            do
                if (var_10_1 - 1 u> 0x4f)
                    sub_403008()
                    noreturn
                
                bool o_2 = unimplemented  {imul eax, eax, 0x1038}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                result = *(arg3 + 0xab0) + arg2 * 0x81c0
                int32_t ebx_2 = sx.d(result_1[var_10_1 + 0x89]) - 1
                
                if (ebx_2 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_3 = unimplemented  {imul edx, ebx, 0x23}
                
                if (o_3)
                    sub_403010()
                    noreturn
                
                int32_t esi_1 = sx.d(*(result + (ebx_2 + 1) * 0x118 - 0xa0))
                
                if (esi_1 != 0)
                    result.b = esi_1 == arg4
                    sub_47a1c0(ebx_2 + 1, arg2, arg3, result.b)
                    result = sub_476bc0(ebx_2 + 1, arg2, arg3, (esi_1 == arg4).b)
                
                var_10_1 += 1
                i = var_18_1
                var_18_1 -= 1
            while (i != 1)
    
    return result
}
