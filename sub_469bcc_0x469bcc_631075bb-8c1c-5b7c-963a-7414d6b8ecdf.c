// ============================================================
// 函数名称: sub_469bcc
// 虚拟地址: 0x469bcc
// WARP GUID: 631075bb-8c1c-5b7c-963a-7414d6b8ecdf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4702a8, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_469bcc(float arg1 @ eax)
{
    // 第一条实际指令: *(arg1 i+ 0xabd) = 1
    *(arg1 i+ 0xabd) = 1
    int32_t result = *(arg1 i+ 0x8a0) * 0x1038
    bool o = unimplemented  {imul eax, eax, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    if (*(*(arg1 i+ 0xab0) + (result << 3) + 1) != 0)
        do
            int32_t edx
            edx.b = 1
            sub_4702a8(arg1, edx.b)
            result = *(arg1 i+ 0x8a0)
            
            if (*(arg1 i+ 0xabd) == 0)
                break
            
            result *= 0x1038
            bool o_1 = unimplemented  {imul eax, eax, 0x1038}
            
            if (o_1)
                sub_403010()
                noreturn
            
            if (*(*(arg1 i+ 0xab0) + (result << 3) + 1) == 0)
                break
        while (*(arg1 i+ 0xa2c) != 3)
    
    *(arg1 i+ 0xabd) = 0
    return result
}
