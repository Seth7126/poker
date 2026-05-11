// ============================================================
// 函数名称: sub_4a048c
// 虚拟地址: 0x4a048c
// WARP GUID: 2969a317-efbd-5bd5-b08b-e16bd6a818ee
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_49ffc4
// ============================================================

int32_t* __fastcallsub_4a048c(int32_t arg1, char arg2, void* arg3 @ eax, int32_t* arg4, char arg5)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    int32_t ebx
    ebx.b = arg2
    int32_t ebx_2
    ebx_2.b = (*(arg3 + 0x24))[ebx u>> 2 & 0x3f]
    var_8.b = ebx_2.b
    int32_t ebx_3
    ebx_3.b = arg1.b
    int32_t edx_3
    edx_3.b = (*(arg3 + 0x24))[(zx.d(arg2) << 4 | ebx_3 u>> 4) & 0x3f]
    var_8:1.b = edx_3.b
    int32_t edx_4
    edx_4.b = arg1.b
    int32_t ecx
    ecx.b = arg5
    int32_t edx_7
    edx_7.b = (*(arg3 + 0x24))[(edx_4 << 2 | ecx u>> 6) & 0x3f]
    var_8:2.b = edx_7.b
    uint32_t eax_1
    eax_1.b = *(*(arg3 + 0x24) + (zx.d(arg5) & 0x3f))
    var_8:3.b = eax_1.b
    *arg4 = var_8
    return arg4
}
