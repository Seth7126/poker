// ============================================================
// 函数名称: sub_4364c4
// 虚拟地址: 0x4364c4
// WARP GUID: d3c2e8a7-0b9d-5dab-8815-ef4f39cdf01d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404188, sub_403e4c
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_4364c4(void* arg1, char* arg2)
{
    // 第一条实际指令: int32_t* result = sub_404188(arg2, *(arg1 + 0x48))
    int32_t* result = sub_404188(arg2, *(arg1 + 0x48))
    bool z
    
    if (not(z))
        sub_403e4c(arg1 + 0x48, arg2)
        result = *(arg1 + 0x4c)
        
        if (result != 0)
            return (*(*result + 0x30))()
    
    return result
}
