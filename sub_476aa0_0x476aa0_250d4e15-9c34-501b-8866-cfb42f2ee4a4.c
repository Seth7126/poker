// ============================================================
// 函数名称: sub_476aa0
// 虚拟地址: 0x476aa0
// WARP GUID: 250d4e15-9c34-501b-8866-cfb42f2ee4a4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_476aa0, sub_403010
// [被调用的父级函数]: sub_476aa0, sub_471144, sub_516eec, sub_4d7ff0, sub_478234
// ============================================================

int32_t __fastcallsub_476aa0(int32_t arg1, int32_t arg2, void* arg3 @ eax, char arg4)
{
    // 第一条实际指令: int32_t var_10 = arg1
    int32_t var_10 = arg1
    bool o = unimplemented  {imul eax, eax, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t ebx = *(arg3 + 0xab0) + arg2 * 0x81c0
    
    if (var_10 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_1 = unimplemented  {imul eax, eax, 0x23}
    
    if (o_1)
        sub_403010()
        noreturn
    
    int32_t result = sx.d(*(ebx + var_10 * 0x118 - 0x1e))
    
    if (result s> 0)
        int32_t var_18_1 = result
        int32_t var_14_1 = 1
        int32_t i
        
        do
            if (var_14_1 - 1 u> 0x4f)
                sub_403008()
                noreturn
            
            if (var_10 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_2 = unimplemented  {imul edx, edx, 0x23}
            
            if (o_2)
                sub_403010()
                noreturn
            
            int32_t eax_10 = sx.d(*(ebx + var_10 * 0x118 + var_14_1 - 0x6f)) - 1
            
            if (eax_10 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_3 = unimplemented  {imul edx, eax, 0x23}
            
            if (o_3)
                sub_403010()
                noreturn
            
            arg1.b = arg4
            *(ebx + (eax_10 + 1) * 0x118 - 0xf2) = arg1.b
            int32_t edx_7
            edx_7.b = arg4
            
            if (eax_10 u> 0x75)
                sub_403008()
                noreturn
            
            int32_t result_1 = eax_10 + 1
            int32_t esi_1 = result_1 * 0x23
            bool o_4 = unimplemented  {imul esi, eax, 0x23}
            
            if (o_4)
                sub_403010()
                noreturn
            
            if (*(ebx + (esi_1 << 3) - 0xf8) == 4)
                if (result_1 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                if (*(ebx + (esi_1 << 3) - 0x88) == 0)
                    edx_7 = 0
            
            if (result_1 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            result = result_1
            
            if (*(ebx + (esi_1 << 3) - 0x1e) s> 0)
                result, arg1 = sub_476aa0(edx_7)
            
            var_14_1 += 1
            i = var_18_1
            var_18_1 -= 1
        while (i != 1)
    
    return result
}
