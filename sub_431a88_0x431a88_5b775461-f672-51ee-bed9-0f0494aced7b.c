// ============================================================
// 函数名称: sub_431a88
// 虚拟地址: 0x431a88
// WARP GUID: 5b775461-f672-51ee-bed9-0f0494aced7b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410414, sub_4105a0, sub_431a64
// [被调用的父级函数]: sub_42db2c, sub_431ae4
// ============================================================

int32_t __convention("regparm")sub_431a88(void* arg1, int16_t arg2)
{
    // 第一条实际指令: int16_t esi = arg2
    int16_t esi = arg2
    int32_t result = sx.d(sub_431a64(arg1))
    
    if (result s>= 0)
        int32_t* ebp_1 = *(*(arg1 + 0x24) + 0x16c)
        int32_t edx_1 = ebp_1[2]
        
        if (esi s< 0)
            esi = 0
        
        if (edx_1 s<= sx.d(esi))
            esi = edx_1.w - 1
        
        int32_t edi_1 = sx.d(esi)
        
        if (result != edi_1)
            sub_410414(ebp_1, result)
            return sub_4105a0(*(*(arg1 + 0x24) + 0x16c), edi_1, arg1)
    
    return result
}
