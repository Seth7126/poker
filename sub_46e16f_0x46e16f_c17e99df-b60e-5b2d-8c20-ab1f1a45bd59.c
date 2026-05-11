// ============================================================
// 函数名称: sub_46e16f
// 虚拟地址: 0x46e16f
// WARP GUID: c17e99df-b60e-5b2d-8c20-ab1f1a45bd59
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47ab08, sub_47a1c0, sub_4836b0, sub_476bc0, sub_47a9e0
// [被调用的父级函数]: 无
// ============================================================

int32_t __stdcallsub_46e16f(char* arg1 @ eax, int32_t* arg2 @ esi, void* arg3 @ edi, int32_t arg4, void* arg5, void* arg6)
{
    // 第一条实际指令: *arg2 += 1
    *arg2 += 1
    *arg1 += arg1.b
    *(arg3 + 0x72) += arg1.b
    void* eax = arg6
    arg6 = arg5
    sub_47a9e0(*(eax + 0x113c), *(eax + 0x10d4), eax, 2)
    long double x87_r0
    void* ebx_2 = sub_47ab08(eax, *(eax + 0x10d4), 1, x87_r0, "Sound")
    sub_4836b0(ebx_2, *(ebx_2 + 0x10d4))
    sub_47a1c0(*(ebx_2 + 0x1134), *(ebx_2 + 0x10d4), ebx_2, 0)
    sub_47a1c0(*(ebx_2 + 0x1140), *(ebx_2 + 0x10d4), ebx_2, 0)
    sub_47a1c0(*(ebx_2 + 0x1130), *(ebx_2 + 0x10d4), ebx_2, 0)
    sub_47a1c0(*(ebx_2 + 0x1144), *(ebx_2 + 0x10d4), ebx_2, 0)
    sub_476bc0(*(ebx_2 + 0x1130), *(ebx_2 + 0x10d4), ebx_2, 0)
    return sub_476bc0(*(ebx_2 + 0x1144), *(ebx_2 + 0x10d4), ebx_2, 0)
}
