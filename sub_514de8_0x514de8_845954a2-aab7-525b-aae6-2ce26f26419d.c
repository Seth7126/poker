// ============================================================
// 函数名称: sub_514de8
// 虚拟地址: 0x514de8
// WARP GUID: 845954a2-aab7-525b-aae6-2ce26f26419d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_514ef8
// ============================================================

int32_t __convention("regparm")sub_514de8(void* arg1, int32_t arg2, char arg3)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    if (arg2 - 1 u>= 8)
    label_514e38:
        
        if (arg3 == 0)
            int32_t i_1 = *(arg1 + 0x348)
            
            if (i_1 s> 0)
                int32_t result_1 = 1
                int32_t i
                
                do
                    int32_t ecx = result_1 * 0xe9
                    bool o_4 = unimplemented  {imul ecx, eax, 0xe9}
                    
                    if (o_4)
                        sub_403010()
                        noreturn
                    
                    if (*(arg1 + (ecx << 2) - 0x50) == 3)
                        *(arg1 + (ecx << 2) - 0x50) = 1
                        result = result_1
                        break
                    
                    result_1 += 1
                    i = i_1
                    i_1 -= 1
                while (i != 1)
    else
        bool o_1 = unimplemented  {imul eax, edx, 0xe9}
        
        if (o_1)
            sub_403010()
            noreturn
        
        if (*(arg1 + arg2 * 0x3a4 - 0x50) != 3)
            bool o_2 = unimplemented  {imul eax, edx, 0xe9}
            
            if (o_2)
                sub_403010()
                noreturn
            
            if (*(arg1 + arg2 * 0x3a4 - 0x50) != 4 || arg3 == 0)
                goto label_514e38
        
        bool o_3 = unimplemented  {imul eax, edx, 0xe9}
        
        if (o_3)
            sub_403010()
            noreturn
        
        *(arg1 + arg2 * 0x3a4 - 0x50) = 1
        result = arg2
    
    if (*(arg1 + 0x347) == 0)
        return result
    
    return 2
}
