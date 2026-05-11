// ============================================================
// 函数名称: sub_4142a4
// 虚拟地址: 0x4142a4
// WARP GUID: 2c00c804-6762-5dad-9766-625d356edf65
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_413a6c, sub_414430, sub_415210
// [被调用的父级函数]: sub_4148a8
// ============================================================

long double __convention("regparm")sub_4142a4(void* arg1)
{
    // 第一条实际指令: int64_t var_10
    int64_t var_10
    int32_t ecx
    
    if (sub_415210(ecx) != 0x10)
        *(arg1 + 0x10) -= 1
        var_10 = int.q(float.t(sub_414430(arg1)) * fconvert.t(10000f))
    else
        sub_413a6c(arg1, &var_10, 8)
    
    return float.t(var_10)
}
