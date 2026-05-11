// ============================================================
// 函数名称: sub_4ee6b0
// 虚拟地址: 0x4ee6b0
// WARP GUID: 564ba4bc-19d1-5e42-9b62-49ee55dbf1fb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4f9658, sub_4fe478, sub_4ff3d8
// ============================================================

int32_t __convention("regparm")sub_4ee6b0(int32_t arg1)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    if (arg1 == 0xb)
        result.b = 1
    
    void* ecx_1
    ecx_1.b = *(*data_5301f4 + 4)
    ecx_1.b -= 5
    char temp0 = ecx_1.b
    ecx_1.b -= 2
    
    if (temp0 u< 2 && arg1 - 7 u< 4)
        result.b = 1
    
    return result
}
