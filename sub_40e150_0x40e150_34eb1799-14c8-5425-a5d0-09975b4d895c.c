// ============================================================
// 函数名称: sub_40e150
// 虚拟地址: 0x40e150
// WARP GUID: 34eb1799-14c8-5425-a5d0-09975b4d895c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_414820, sub_4138b8, sub_414aa0, sub_4132fc
// ============================================================

char* __convention("regparm")sub_40e150(void* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: char* esi_1 = **arg2
    char* esi_1 = **arg2
    int32_t ebx
    ebx.b = 4
    
    if (*esi_1 != 7)
        ebx.b = esi_1[1]
        ebx.b = esi_1[ebx + 2]
    
    arg2[4]
    int32_t esi_2 = arg2[2]
    char temp0 = *(arg2 + 0xb)
    
    if (temp0 u<= 0xfe)
        if (temp0 u< 0xfe)
            return esi_2()
        
        return (*(sx.d(esi_2.w) + *arg1))()
    
    char* result = arg1 + (esi_2 & 0xffffff)
    *result = arg3.b
    
    if (ebx.b u>= 2)
        *result = arg3.w
        
        if (ebx.b u>= 4)
            *result = arg3
    
    return result
}
