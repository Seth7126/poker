// ============================================================
// 函数名称: sub_42ed58
// 虚拟地址: 0x42ed58
// WARP GUID: 87b4c6b6-5a55-557f-acc1-d5c0fe521a5d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410524, sub_410580
// [被调用的父级函数]: sub_42eda0
// ============================================================

int32_t __convention("regparm")sub_42ed58(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi_1 = sub_410580(*(arg1 + 0x180), arg2) + 1
    int32_t esi_1 = sub_410580(*(arg1 + 0x180), arg2) + 1
    int32_t ebx_2 = *(*(arg1 + 0x180) + 8) - 1
    
    if (ebx_2 s>= esi_1)
        int32_t i_1 = ebx_2 - esi_1 + 1
        int32_t i
        
        do
            int32_t result = *(sub_410524(*(arg1 + 0x180), esi_1) + 0x14c)
            
            if (result != 0)
                return result
            
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return 0
}
