// ============================================================
// 函数名称: sub_406190
// 虚拟地址: 0x406190
// WARP GUID: a2038ba5-05dc-5ee9-b5ba-37041c0888e2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402844, sub_405f4c
// [被调用的父级函数]: j_sub_406190
// ============================================================

void* __convention("regparm")sub_406190(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edx = *(arg1 + 4)
    int32_t edx = *(arg1 + 4)
    
    if (edx != 0xd7b0)
        if (edx - 0xd7b0 u> 3)
            return sub_402844(0x66)
        
        sub_405f4c(arg1)
    
    *(arg1 + 4) = arg2
    void* result = (*(arg1 + 0x18))()
    
    if (result == 0)
        return result
    
    return sub_402844(result)
}
