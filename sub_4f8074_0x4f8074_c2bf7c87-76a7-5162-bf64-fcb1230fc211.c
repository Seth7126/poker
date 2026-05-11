// ============================================================
// 函数名称: sub_4f8074
// 虚拟地址: 0x4f8074
// WARP GUID: c2bf7c87-76a7-5162-bf64-fcb1230fc211
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402b3c
// [被调用的父级函数]: sub_4f8278
// ============================================================

long double __stdcallsub_4f8074(float arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    long double x87_r7_3 = sub_402b3c(fconvert.t(arg1) * fconvert.t(3000f)) / fconvert.t(80f)
    return fconvert.t(fconvert.s(data_4f80a8 - x87_r7_3))
}
