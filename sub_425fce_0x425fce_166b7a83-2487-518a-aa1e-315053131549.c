// ============================================================
// 函数名称: sub_425fce
// 虚拟地址: 0x425fce
// WARP GUID: 166b7a83-2487-518a-aa1e-315053131549
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_440d94, sub_425ce4, sub_407800, sub_42cb68, sub_42bdf4, sub_425c24
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_425fce(char* arg1, void* arg2)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    char* esi = arg1
    arg1.w = *(arg2 + 4)
    char eax = sub_440d94(arg1.w)
    
    if (esi[0x4d] == 1 && esi[0x206] != 0 && ((eax & 1) == 0 || (eax & 4) != 0))
        int32_t var_18
        sub_407800(*(arg2 + 8), &var_18)
        LRESULT eax_3 = sub_425ce4(esi, &var_18, 1)
        
        if (eax_3 s>= 0 && sub_425c24(esi, eax_3) != 0)
            return sub_42bdf4(esi, 0, 0xffffffff)
    
    void* result = sub_42cb68(esi, arg2)
    
    if (esi[0x4d] == 1)
        if (esi[0x206] == 0)
            return sub_42bdf4(esi, 0, 0xffffffff)
        
        if ((eax & 4) == 0 && (eax & 1) == 0)
            return sub_42bdf4(esi, 0, 0xffffffff)
    
    return result
}
