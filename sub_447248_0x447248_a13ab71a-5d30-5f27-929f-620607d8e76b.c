// ============================================================
// 函数名称: sub_447248
// 虚拟地址: 0x447248
// WARP GUID: a13ab71a-5d30-5f27-929f-620607d8e76b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_44836c, sub_444c73
// ============================================================

int32_t __convention("regparm")sub_447248(void* arg1)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x5c)
    int32_t eax = *(arg1 + 0x5c)
    
    if (eax != *(arg1 + 0x68))
        *(arg1 + 0x68) = eax
        
        if (*(arg1 + 0x92) != 0)
            *(arg1 + 0x94)
            (*(arg1 + 0x90))()
    
    int32_t result = *(arg1 + 0x58)
    
    if (result != *(arg1 + 0x64))
        *(arg1 + 0x64) = result
        
        if (*(arg1 + 0x8a) != 0)
            *(arg1 + 0x8c)
            return (*(arg1 + 0x88))()
    
    return result
}
