// ============================================================
// 函数名称: sub_43e0c8
// 虚拟地址: 0x43e0c8
// WARP GUID: 7b7d4db1-30f4-5510-9136-b41d499c2a3a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410524
// [被调用的父级函数]: sub_439ab4
// ============================================================

int32_t* __convention("regparm")sub_43e0c8(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* result = *(arg1 + 4)
    int32_t* result = *(arg1 + 4)
    int32_t esi_1 = result[2] - 1
    
    if (esi_1 s>= 0)
        int32_t i_1 = esi_1 + 1
        int32_t ebx_1 = 0
        int32_t i
        
        do
            result = sub_410524(*(arg1 + 4), ebx_1)
            
            if (arg2 == *result)
                result = sub_410524(*(arg1 + 4), ebx_1)
                *result = 0
            
            ebx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
