// ============================================================
// 函数名称: sub_42b1a0
// 虚拟地址: 0x42b1a0
// WARP GUID: c2f56fc2-6292-5aa2-a76c-c47289ff7716
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_433b34, sub_42d1d4, sub_4336a8, sub_42b128, sub_44c778
// ============================================================

int32_t __convention("regparm")sub_42b1a0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: return (*(*arg1 + 0x7c))(arg2[3] - arg2[1], arg2[2] - *arg2)
    return (*(*arg1 + 0x7c))(arg2[3] - arg2[1], arg2[2] - *arg2)
}
