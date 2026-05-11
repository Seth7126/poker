// ============================================================
// 函数名称: sub_496a58
// 虚拟地址: 0x496a58
// WARP GUID: de8b3bb7-1de5-5e48-83e2-638241e6bf82
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_495a58, sub_496da0
// [被调用的父级函数]: sub_497624
// ============================================================

int32_t* __fastcallsub_496a58(int32_t* arg1, int32_t* arg2, int32_t* arg3 @ eax, struct _EXCEPTION_REGISTRATION_RECORD* arg4, int16_t arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    eax_1.w = arg5
    struct _EXCEPTION_REGISTRATION_RECORD* eax_2
    eax_2.b = arg3[0x16].b == 1
    int32_t* result
    int32_t edx_1
    result, edx_1 = sub_495a58(*arg1, *arg2, arg3, eax_2.b, arg4, eax_1.w, *arg6)
    
    if (arg3[2].b != 0 && arg3[0x16].b == 1)
        edx_1.b = 1
        result = sub_496da0(0, edx_1, sub_49452c+0x8c, arg3)
        arg3[0x1b] = result
    
    return result
}
