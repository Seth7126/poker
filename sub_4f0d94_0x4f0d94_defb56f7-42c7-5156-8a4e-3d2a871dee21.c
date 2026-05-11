// ============================================================
// 函数名称: sub_4f0d94
// 虚拟地址: 0x4f0d94
// WARP GUID: defb56f7-42c7-5156-8a4e-3d2a871dee21
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4d1324, sub_4ff3d8
// ============================================================

void __fastcallsub_4f0d94(int32_t arg1, double* arg2, int32_t arg3 @ eax, float arg4, float arg5, float arg6)
{
    // 第一条实际指令: double var_84
    double var_84
    __builtin_memcpy(&var_84, arg3, 0x80)
    double var_64
    double var_44
    *arg2 = fconvert.d(fconvert.t(var_84) * fconvert.t(arg6) + fconvert.t(var_64) * fconvert.t(arg5)
        + fconvert.t(var_44) * fconvert.t(arg4))
    double var_7c
    double var_5c
    double var_3c
    arg2[1] = fconvert.d(fconvert.t(var_7c) * fconvert.t(arg6) + fconvert.t(var_5c) * fconvert.t(arg5)
        + fconvert.t(var_3c) * fconvert.t(arg4))
    double var_74
    double var_54
    double var_34
    arg2[2] = fconvert.d(fconvert.t(var_74) * fconvert.t(arg6) + fconvert.t(var_54) * fconvert.t(arg5)
        + fconvert.t(var_34) * fconvert.t(arg4))
}
