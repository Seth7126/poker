// ============================================================
// 函数名称: sub_414264
// 虚拟地址: 0x414264
// WARP GUID: f7caf40b-cff5-5a51-bbee-a34a2b5aea2f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_413a6c, sub_414430, sub_415210
// [被调用的父级函数]: sub_4148a8
// ============================================================

long double __convention("regparm")sub_414264(void* arg1)
{
    // 第一条实际指令: float var_c
    float var_c
    int32_t ecx
    
    if (sub_415210(ecx) != 0xf)
        *(arg1 + 0x10) -= 1
        var_c = fconvert.s(float.t(sub_414430(arg1)))
    else
        sub_413a6c(arg1, &var_c, 4)
    
    return fconvert.t(var_c)
}
