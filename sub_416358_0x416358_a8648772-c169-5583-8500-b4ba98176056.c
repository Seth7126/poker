// ============================================================
// 函数名称: sub_416358
// 虚拟地址: 0x416358
// WARP GUID: a8648772-c169-5583-8500-b4ba98176056
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4105a0, sub_410580, sub_410414
// [被调用的父级函数]: sub_4430c0
// ============================================================

void* __convention("regparm")sub_416358(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = arg2
    int32_t esi = arg2
    void* result = *(arg1 + 4)
    
    if (result != 0)
        result = sub_410580(*(result + 0x10), arg1)
        
        if (result s>= 0)
            int32_t* edi_1 = *(*(arg1 + 4) + 0x10)
            int32_t edx_2 = edi_1[2]
            
            if (esi s< 0)
                esi = 0
            
            if (edx_2 s<= esi)
                esi = edx_2 - 1
            
            if (result != esi)
                sub_410414(edi_1, result)
                return sub_4105a0(*(*(arg1 + 4) + 0x10), esi, arg1)
    
    return result
}
