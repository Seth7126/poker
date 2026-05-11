// ============================================================
// 函数名称: sub_4142f0
// 虚拟地址: 0x4142f0
// WARP GUID: 4b760062-230f-5191-b4c2-ff926b5255f2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_413a6c, sub_414430, sub_415210
// [被调用的父级函数]: sub_4148a8
// ============================================================

long double __convention("regparm")sub_4142f0(void* arg1)
{
    // 第一条实际指令: double var_10
    double var_10
    int32_t ecx
    
    if (sub_415210(ecx) != 0x11)
        *(arg1 + 0x10) -= 1
        var_10 = fconvert.d(float.t(sub_414430(arg1)))
    else
        sub_413a6c(arg1, &var_10, 8)
    
    return fconvert.t(var_10)
}
