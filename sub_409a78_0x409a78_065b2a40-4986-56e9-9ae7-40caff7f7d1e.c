// ============================================================
// 函数名称: sub_409a78
// 虚拟地址: 0x409a78
// WARP GUID: 065b2a40-4986-56e9-9ae7-40caff7f7d1e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_409680, sub_4093b0
// [被调用的父级函数]: sub_491a48, sub_4473f4, sub_435eac, sub_44ce04
// ============================================================

char* __fastcallsub_409a78(int32_t arg1, char* arg2, char* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: int32_t var_14 = sub_4093b0(arg2)
    int32_t var_14 = sub_4093b0(arg2)
    int32_t var_18 = arg1
    *(arg3 + sub_409680(arg2, 0x7fffffff, arg3, arg2, arg1, arg4)) = 0
    return arg3
}
