// ============================================================
// 函数名称: sub_43647c
// 虚拟地址: 0x43647c
// WARP GUID: 366cfb41-6168-5cfc-87f8-eef100089922
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410414, sub_4105a0, sub_43640c
// [被调用的父级函数]: sub_4366f4
// ============================================================

int32_t __convention("regparm")sub_43647c(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = arg2
    int32_t esi = arg2
    int32_t result = sub_43640c(arg1)
    
    if (result s>= 0)
        int32_t* edi_1 = *(*(arg1 + 0x4c) + 0x24)
        int32_t edx_1 = edi_1[2]
        
        if (esi s< 0)
            esi = 0
        
        if (edx_1 s<= esi)
            esi = edx_1 - 1
        
        if (result != esi)
            sub_410414(edi_1, result)
            return sub_4105a0(*(*(arg1 + 0x4c) + 0x24), esi, arg1)
    
    return result
}
