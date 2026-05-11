// ============================================================
// 函数名称: sub_454400
// 虚拟地址: 0x454400
// WARP GUID: 941df8a6-d042-5d97-a388-841e5555744c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_454400(void* arg1)
{
    // 第一条实际指令: if (*(*(arg1 + 0x20) + 8) == 0)
    if (*(*(arg1 + 0x20) + 8) == 0)
        int32_t* esi_1 = *(arg1 + 0x24)
        void* result
        
        if (esi_1 != 0)
            result = (*(*esi_1 + 0x1c))()
        
        if (esi_1 == 0 || result.b != 0)
            result.b = 1
            return result
    
    return 0
}
