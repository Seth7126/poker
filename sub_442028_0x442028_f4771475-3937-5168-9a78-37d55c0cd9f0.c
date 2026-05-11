// ============================================================
// 函数名称: sub_442028
// 虚拟地址: 0x442028
// WARP GUID: f4771475-3937-5168-9a78-37d55c0cd9f0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: MulDiv
// [内部子函数调用]: sub_4418c0, sub_441770
// [被调用的父级函数]: sub_4420cc, sub_442deb, sub_442aa0
// ============================================================

void* __convention("regparm")sub_442028(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg3 != arg2)
    if (arg3 != arg2)
        if ((*(arg1 + 0x20) & 1) == 0)
            *(*(arg1 + 0x1f0) + 0x1e) = 1
            *(*(arg1 + 0x1f4) + 0x1e) = 1
        
        sub_441770(*(arg1 + 0x1f0), 0)
        sub_441770(*(arg1 + 0x1f4), 0)
        
        if (*(arg1 + 0x1f8) == 0)
            void* ebp_1 = *(arg1 + 0x1f0)
            
            if (*(ebp_1 + 0x1e) != 0)
                MulDiv(*(ebp_1 + 0x10), arg2, arg3)
                sub_4418c0(ebp_1)
            
            void* ebp_2 = *(arg1 + 0x1f4)
            
            if (*(ebp_2 + 0x1e) != 0)
                MulDiv(*(ebp_2 + 0x10), arg2, arg3)
                sub_4418c0(ebp_2)
    
    *(*(arg1 + 0x1f0) + 0x1e) = 0
    void* result = *(arg1 + 0x1f4)
    *(result + 0x1e) = 0
    return result
}
