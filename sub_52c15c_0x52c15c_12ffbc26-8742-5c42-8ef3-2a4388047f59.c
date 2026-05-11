// ============================================================
// 函数名称: sub_52c15c
// 虚拟地址: 0x52c15c
// WARP GUID: 12ffbc26-8742-5c42-8ef3-2a4388047f59
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_52c0c8, sub_403010
// [被调用的父级函数]: sub_4ee958
// ============================================================

int32_t __convention("regparm")sub_52c15c(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t i_2 = *(arg1 + 0x8978)
    int32_t i_2 = *(arg1 + 0x8978)
    
    if (add_overflow(i_2, 1))
        sub_403010()
        noreturn
    
    int32_t i_1 = i_2
    
    if (i_1 s> 0)
        int32_t result = 1
        void* ebx_1 = arg1
        int32_t i
        
        do
            if (sub_52c0c8(arg2, (*ebx_1).w) != 0)
                return result
            
            result += 1
            ebx_1 += 0xd4
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return i_2 + 1
}
