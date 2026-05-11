// ============================================================
// 函数名称: sub_46e0ac
// 虚拟地址: 0x46e0ac
// WARP GUID: 1b531128-94d1-5dff-8c35-53a5b94db38c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47ab08, sub_47a1c0, sub_4836b0, sub_476bc0, sub_47a9e0
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_46e0ac(void* arg1)
{
    // 第一条实际指令: sub_47a9e0(*(arg1 + 0x113c), *(arg1 + 0x10d4), arg1, 1)
    sub_47a9e0(*(arg1 + 0x113c), *(arg1 + 0x10d4), arg1, 1)
    long double x87_r0
    void* ebx_1 = sub_47ab08(arg1, *(arg1 + 0x10d4), 1, x87_r0, sub_46e16f+5)
    sub_4836b0(ebx_1, *(ebx_1 + 0x10d4))
    sub_47a1c0(*(ebx_1 + 0x1134), *(ebx_1 + 0x10d4), ebx_1, 1)
    sub_47a1c0(*(ebx_1 + 0x1140), *(ebx_1 + 0x10d4), ebx_1, 1)
    sub_47a1c0(*(ebx_1 + 0x1130), *(ebx_1 + 0x10d4), ebx_1, 1)
    sub_47a1c0(*(ebx_1 + 0x1144), *(ebx_1 + 0x10d4), ebx_1, 1)
    sub_476bc0(*(ebx_1 + 0x1130), *(ebx_1 + 0x10d4), ebx_1, 1)
    return sub_476bc0(*(ebx_1 + 0x1144), *(ebx_1 + 0x10d4), ebx_1, 1)
}
