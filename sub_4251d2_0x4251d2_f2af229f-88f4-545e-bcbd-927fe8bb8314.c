// ============================================================
// 函数名称: sub_4251d2
// 虚拟地址: 0x4251d2
// WARP GUID: f2af229f-88f4-545e-bcbd-927fe8bb8314
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42eac0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4251d2(char* arg1, int32_t arg2, int32_t arg3 @ esi, int32_t arg4 @ edi)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* var_8 = &var_4
    int32_t** var_c = &var_8
    *arg1 += arg1.b
    sub_42eac0(arg1)
    char result = arg1[0x1f8]
    arg1[0x1fa] = result
    return result
}
