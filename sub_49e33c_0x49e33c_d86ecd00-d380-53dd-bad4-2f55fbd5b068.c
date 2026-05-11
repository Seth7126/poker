// ============================================================
// 函数名称: sub_49e33c
// 虚拟地址: 0x49e33c
// WARP GUID: d86ecd00-d380-53dd-bad4-2f55fbd5b068
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404248, sub_409d14, sub_403e4c, sub_409ae0
// [被调用的父级函数]: sub_49d978
// ============================================================

char* __fastcallsub_49e33c(int32_t arg1, char** arg2, int16_t arg3 @ eax, double arg4)
{
    // 第一条实际指令: char edx = arg3.b
    char edx = arg3.b
    long double x87_r7 = fconvert.t(arg4)
    long double temp1 = fconvert.t(0f)
    x87_r7 - temp1
    arg3.b = test_bit(
        ((x87_r7 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp1) ? 1 : 0) << 0xa
            | (x87_r7 == temp1 ? 1 : 0) << 0xe):1.b, 
        6)
    
    if ((arg3.b & edx) != 0)
        return sub_403e4c(arg2, "GMT")
    
    uint16_t var_c
    int16_t var_a
    uint16_t var_8
    int16_t var_6
    sub_409d14(&var_a, &var_8, &var_6, &var_c, arg4.d, arg4:4.d)
    uint32_t var_1c = zx.d(var_6)
    char var_18_1 = 0
    uint32_t var_14_1 = zx.d(var_8)
    char var_10_1 = 0
    sub_409ae0(1, &var_1c, " %0.2d%0.2d", arg2)
    long double x87_r7_1 = fconvert.t(arg4)
    long double temp2_1 = fconvert.t(0f)
    x87_r7_1 - temp2_1
    char* result
    
    if (not(test_bit(
            ((x87_r7_1 < temp2_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp2_1 ? 1 : 0) << 0xe):1.b, 
            0)))
        result = sub_404248(arg2)
        *result = 0x2b
    else
        result = sub_404248(arg2)
        *result = 0x2d
    
    return result
}
