// ============================================================
// 函数名称: sub_47c090
// 虚拟地址: 0x47c090
// WARP GUID: e8cb9a8b-503a-5780-bca9-c748f22bb066
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* const __fastcallsub_47c090(int32_t arg1, int32_t arg2, void* const arg3 @ eax, char arg4)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    void* const ebx = arg3
    *(ebx + 0x978) = fconvert.s(float.t(arg2) / fconvert.t(20f))
    long double x87_r7_2 = fconvert.t(*(ebx + 0x978))
    long double temp1 = fconvert.t(0f)
    x87_r7_2 - temp1
    arg3.w = (x87_r7_2 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_2, temp1) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp1 ? 1 : 0) << 0xe
    
    if (test_bit(arg3:1.b, 0))
        arg3 = nullptr
        *(ebx + 0x978) = 0
    
    if (arg1.b != 0)
        if (arg4 == 0)
            arg3 = nullptr
            *(ebx + 0x978) = 0
        else
            *(ebx + 0x978) = 0xc2c80000
    
    return arg3
}
