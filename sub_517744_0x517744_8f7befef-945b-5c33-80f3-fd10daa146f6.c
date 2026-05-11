// ============================================================
// 函数名称: sub_517744
// 虚拟地址: 0x517744
// WARP GUID: 8f7befef-945b-5c33-80f3-fd10daa146f6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_517880, sub_517dc0, sub_517e44, sub_51763c
// ============================================================

int32_t __convention("regparm")sub_517744(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_4_1 = ecx
    
    if (*(*data_5301f4 + 4) == 7)
        return 0
    
    int32_t result = 0
    int32_t edx_2 = *(data_7aa4c8 + 0xc)
    
    if (edx_2 - 1 u< 4)
        if (edx_2 == sx.d(arg1:1.b))
            result.b = 1
        
        if (arg1.b == 4)
            result.b = 1
    else if (edx_2 - 0xb u< 2 && arg1.b == 4)
        result.b = 1
    
    return result
}
