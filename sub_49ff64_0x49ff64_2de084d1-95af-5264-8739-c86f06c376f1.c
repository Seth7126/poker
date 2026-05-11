// ============================================================
// 函数名称: sub_49ff64
// 虚拟地址: 0x49ff64
// WARP GUID: 2de084d1-95af-5264-8739-c86f06c376f1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_49fdd0
// ============================================================

char* __fastcallsub_49ff64(char* arg1, int32_t arg2, int32_t arg3 @ eax, char* arg4, char* arg5)
{
    // 第一条实际指令: char* var_8 = arg1
    char* var_8 = arg1
    int32_t edx
    edx.b = arg2.b
    int32_t ebx
    ebx.b = arg2:1.b
    int32_t ebx_3
    ebx_3.b = arg2:2.b
    int32_t ebx_6
    ebx_6.b = arg2:3.b
    uint32_t edx_5 = zx.d(*(arg3 + edx + 0x23)) << 0x12 | zx.d(*(arg3 + ebx + 0x23)) << 0xc
        | zx.d(*(arg3 + ebx_3 + 0x23)) << 6 | zx.d(*(arg3 + ebx_6 + 0x23))
    uint32_t var_8_2 = edx_5
    uint32_t eax
    eax.b = var_8_2:2.b
    *arg1 = eax.b
    edx_5.b = var_8_2:1.b
    *arg5 = edx_5.b
    edx_5.b = var_8_2.b
    *arg4 = edx_5.b
    return arg4
}
