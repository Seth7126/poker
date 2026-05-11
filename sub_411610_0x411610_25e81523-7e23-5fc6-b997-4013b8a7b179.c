// ============================================================
// 函数名称: sub_411610
// 虚拟地址: 0x411610
// WARP GUID: 25e81523-7e23-5fc6-b997-4013b8a7b179
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4116c8, sub_403248
// [被调用的父级函数]: sub_411668
// ============================================================

int32_tsub_411610(void* arg1)
{
    // 第一条实际指令: int32_t* esi = *(*(arg1 - 4) + 0x20)
    int32_t* esi = *(*(arg1 - 4) + 0x20)
    int32_t result
    
    if (esi == 0)
        result.b = (*(**(arg1 - 8) + 0x14))() s> 0
    else
        result.b = 1
        
        if (sub_403248(esi, &data_40efb4) != 0)
            result.b = sub_4116c8(*(arg1 - 8), esi).b ^ 1
    
    return result
}
