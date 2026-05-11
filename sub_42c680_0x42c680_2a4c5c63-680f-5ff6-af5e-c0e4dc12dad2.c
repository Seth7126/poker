// ============================================================
// 函数名称: sub_42c680
// 虚拟地址: 0x42c680
// WARP GUID: 2a4c5c63-680f-5ff6-af5e-c0e4dc12dad2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_42c620
// ============================================================

int32_t __convention("regparm")sub_42c680(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t result_5 = *(arg1[0x19] + 0x14)
    int32_t result_5 = *(arg1[0x19] + 0x14)
    int32_t result_1
    
    result_1 = result_5 u<= 0 ? 0 : result_5
    
    int32_t result_6 = *(arg1[0x19] + 0x10)
    int32_t result_2
    
    result_2 = result_6 u<= 0 ? 0 : result_6
    
    int32_t result_7 = *(arg1[0x19] + 0xc)
    int32_t result_3
    
    result_3 = result_7 u<= 0 ? 0 : result_7
    
    int32_t result_8 = *(arg1[0x19] + 8)
    int32_t result_4
    
    result_4 = result_8 u<= 0 ? 0 : result_8
    
    int32_t result = (*(*arg1 + 0x38))(&result_4, &result_3)
    
    if (result_3 s> 0)
        result = *arg2
    
    if (result_3 s> 0 && result s> result_3)
        result = result_3
        *arg2 = result
    else if (result_1 s> 0)
        result = *arg2
        
        if (result s< result_1)
            result = result_1
            *arg2 = result
    
    if (result_4 s> 0)
        result = *arg3
    
    if (result_4 s> 0 && result s> result_4)
        result = result_4
        *arg3 = result
    else if (result_2 s> 0)
        result = *arg3
        
        if (result s< result_2)
            result = result_2
            *arg3 = result
    
    return result
}
