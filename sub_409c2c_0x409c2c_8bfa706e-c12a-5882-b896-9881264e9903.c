// ============================================================
// 函数名称: sub_409c2c
// 虚拟地址: 0x409c2c
// WARP GUID: 8bfa706e-c12a-5882-b896-9881264e9903
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_409c9c
// ============================================================

double* __fastcallsub_409c2c(int16_t arg1, int16_t arg2, double* arg3 @ eax, double* arg4, int16_t arg5)
{
    // 第一条实际指令: char var_5 = 0
    char var_5 = 0
    
    if (arg3.w u< 0x18 && arg2 u< 0x3c && arg1 u< 0x3c && arg5 u< 0x3e8)
        *arg4 = fconvert.d(
            float.t(zx.d(arg3.w) * 0x36ee80 + zx.d(arg2) * 0xea60 + zx.d(arg1) * 0x3e8 + zx.d(arg5))
            / fconvert.t(86400000f))
        var_5 = 1
    
    arg3.b = var_5
    return arg3
}
