// ============================================================
// 函数名称: sub_476bc0
// 虚拟地址: 0x476bc0
// WARP GUID: 66e7b9d8-0b92-5aac-b18b-5916bc236853
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_476bc0, sub_47a1c0, sub_403010
// [被调用的父级函数]: sub_4807f4, sub_4e6659, sub_4d7ff0, sub_46e0ac, sub_46e17c, sub_476bc0, sub_46e16f, sub_47a9e0, sub_4e649b
// ============================================================

int32_t __fastcallsub_476bc0(int32_t arg1, int32_t arg2, void* arg3 @ eax, char arg4)
{
    // 第一条实际指令: bool o = unimplemented  {imul eax, eax, 0x1038}
    bool o = unimplemented  {imul eax, eax, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t esi = *(arg3 + 0xab0) + arg2 * 0x81c0
    
    if (arg1 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    int32_t result = arg1 * 0x23
    bool o_1 = unimplemented  {imul eax, eax, 0x23}
    
    if (o_1)
        sub_403010()
        noreturn
    
    int32_t i_1 = sx.d(*(esi + (result << 3) - 0x1e))
    
    if (i_1 s> 0)
        int32_t var_14_1 = 1
        int32_t i
        
        do
            if (var_14_1 - 1 u> 0x4f)
                sub_403008()
                noreturn
            
            if (arg1 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_2 = unimplemented  {imul edx, edx, 0x23}
            
            if (o_2)
                sub_403010()
                noreturn
            
            int32_t ebx_1 = sx.d(*(esi + arg1 * 0x118 + var_14_1 - 0x6f))
            int32_t eax_7
            eax_7.b = arg4
            sub_47a1c0(ebx_1, arg2, arg3, eax_7.b)
            
            if (ebx_1 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            result = ebx_1 * 0x23
            bool o_3 = unimplemented  {imul eax, ebx, 0x23}
            
            if (o_3)
                sub_403010()
                noreturn
            
            if (*(esi + (result << 3) - 0x1e) s> 0)
                result = sub_476bc0(0)
            
            var_14_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
