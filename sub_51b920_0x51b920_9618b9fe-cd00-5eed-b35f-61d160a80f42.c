// ============================================================
// 函数名称: sub_51b920
// 虚拟地址: 0x51b920
// WARP GUID: 9618b9fe-cd00-5eed-b35f-61d160a80f42
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_517b44, sub_403010
// [被调用的父级函数]: sub_4ee958, sub_51bd00
// ============================================================

void* __convention("regparm")sub_51b920(int32_t arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: void* result
    void* result
    
    if (arg2 s<= 0)
        result = arg3
        sub_517b44(result)
    else
        sub_517b44(arg3)
        result = arg2 * 0x41
        bool o_1 = unimplemented  {imul eax, dword [ebp-0x4], 0x41}
        
        if (o_1)
            sub_403010()
            noreturn
        
        *(arg3 + 0x298) = *(arg1 + (result << 2))
        int16_t edx
        edx.b = *(arg1 + (result << 2) + 2)
        *(arg3 + 0x2f2) = edx.b
        int32_t i_1 = sx.d(*(arg1 + (result << 2)))
        
        if (i_1 s> 0)
            int32_t var_c_1 = 1
            result = arg3 + 2
            int32_t i
            
            do
                bool o_2 = unimplemented  {imul edx, dword [ebp-0x4], 0x41}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                int32_t edx_3 = sx.d(*(arg1 + arg2 * 0x104 + (var_c_1 << 2) - 0x102))
                *result = edx_3.w
                
                if (edx_3 s> 0)
                    bool o_3 = unimplemented  {imul ebx, edx, 0x35}
                    
                    if (o_3)
                        sub_403010()
                        noreturn
                    
                    int32_t ebx_2
                    ebx_2.b = *(data_5301b0 + edx_3 * 0xd4 + 0x60f08)
                    *(result - 2) = ebx_2.b
                    bool o_4 = unimplemented  {imul edx, edx, 0x35}
                    
                    if (o_4)
                        sub_403010()
                        noreturn
                    
                    int32_t edx_4
                    edx_4.b = *(data_5301b0 + edx_3 * 0xd4 + 0x60f09)
                    *(result - 1) = edx_4.b
                
                var_c_1 += 1
                result += 4
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    return result
}
