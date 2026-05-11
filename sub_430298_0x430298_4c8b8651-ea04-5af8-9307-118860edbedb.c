// ============================================================
// 函数名称: sub_430298
// 虚拟地址: 0x430298
// WARP GUID: 4c8b8651-ea04-5af8-9307-118860edbedb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_405b58
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_430298(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* esi = arg2
    int32_t* esi = arg2
    
    if (*(arg1 + 0x148) != 0 || *(arg1 + 0x144) == 0 || *(arg1 + 0x17c) == 0)
        sub_405b58(esi, *(arg1 + 0x148))
    else
        arg2.b = 1
        int32_t* edx = (*(data_52e744 + 0x24))()
        
        if (edx != 0)
            edx -= 0xffffff8c
        
        sub_405b58(esi, edx)
    
    char result
    
    if (*(arg1 + 0x1e8) != 0 || *esi != 0)
        result = 1
    else
        result = 0
    
    *(arg1 + 0x1e8) = result
    return result
}
