// ============================================================
// 函数名称: sub_514e80
// 虚拟地址: 0x514e80
// WARP GUID: 09ab88fa-9372-5302-895a-be47e087e2ee
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_515920, sub_403010
// [被调用的父级函数]: sub_511e1c, sub_514ef8
// ============================================================

int32_t __convention("regparm")sub_514e80(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t i_1 = *(arg2 + 0x15c8)
    
    if (i_1 s> 0)
        int32_t ebx_1 = 1
        int32_t i
        
        do
            if (*(arg1 + 0x345) == 0)
                bool o_2 = unimplemented  {imul eax, ebx, 0x21}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                sub_515920(arg1, arg2 + ebx_1 * 0x84 - 0x84, *(arg2 + (ebx_1 << 2) + 0x1520))
            else
                bool o_1 = unimplemented  {imul eax, ebx, 0x21}
                
                if (o_1)
                    sub_403010()
                    noreturn
                
                sub_515920(arg1, arg2 + ebx_1 * 0x84 - 0x84, nullptr)
            
            ebx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    *(arg2 + 0x15c8) = 0
    int32_t eax_5
    eax_5.b = 1
    return 1
}
