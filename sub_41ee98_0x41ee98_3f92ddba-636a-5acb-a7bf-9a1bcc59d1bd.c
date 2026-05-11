// ============================================================
// 函数名称: sub_41ee98
// 虚拟地址: 0x41ee98
// WARP GUID: 3f92ddba-636a-5acb-a7bf-9a1bcc59d1bd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41dc74, sub_41e2f0
// [被调用的父级函数]: sub_4375ac, sub_437e28, sub_4377d0
// ============================================================

void* const __convention("regparm")sub_41ee98(int32_t arg1, char arg2)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x20)
    void* esi = *(arg1 + 0x20)
    void* const result
    
    if (*(esi + 0x3c) != 1 || *(esi + 0x3e) != 1)
        result = nullptr
    else
        result.b = 1
    
    if (arg2 == result.b)
        return result
    
    sub_41e2f0(arg1)
    void var_60
    __builtin_memcpy(&var_60, esi + 0x18, 0x54)
    int32_t var_48_1 = 0
    int16_t eax_1
    eax_1.b = arg2
    int16_t var_3c_1 = eax_1
    int16_t var_3a_1 = eax_1
    int16_t var_50_1 = eax_1
    int16_t var_4e_1 = eax_1
    sub_41dc74(*(esi + 0x10), *(esi + 8), arg1, &var_60)
    return (*(*arg1 + 0x10))()
}
