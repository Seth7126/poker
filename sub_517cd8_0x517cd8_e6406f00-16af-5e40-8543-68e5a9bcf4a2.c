// ============================================================
// 函数名称: sub_517cd8
// 虚拟地址: 0x517cd8
// WARP GUID: e6406f00-16af-5e40-8543-68e5a9bcf4a2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4ee958
// ============================================================

int32_t __convention("regparm")sub_517cd8(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    void var_328
    int16_t* esi_1
    int16_t* edi
    edi, esi_1 = __builtin_memcpy(&var_328, arg1, 0x318)
    *edi = *esi_1
    int32_t result = 0
    int16_t i_4
    int32_t i_2 = sx.d(i_4)
    
    if (i_2 s> 0)
        int32_t result_1 = 1
        void* eax = &var_328
        int32_t i
        
        do
            ebx.b = *eax
            
            if (ebx.b == arg2.b)
                ebx.b = *(eax + 1)
                
                if (ebx.b == arg2:1.b)
                    result = result_1
            
            result_1 += 1
            eax += 4
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_3 = sx.d(i_4)
    
    if (i_3 s> 0)
        int32_t result_2 = 1
        void* eax_1 = &var_328
        int32_t i_1
        
        do
            ebx.b = *eax_1
            
            if (ebx.b == arg2.b)
                ebx.b = *(eax_1 + 1)
                
                if (ebx.b == arg2:1.b)
                    ebx.w = *(eax_1 + 2)
                    
                    if (ebx.w == arg2:2.w)
                        result = result_2
            
            result_2 += 1
            eax_1 += 4
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    return result
}
