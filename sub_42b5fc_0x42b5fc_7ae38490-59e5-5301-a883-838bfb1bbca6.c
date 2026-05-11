// ============================================================
// 函数名称: sub_42b5fc
// 虚拟地址: 0x42b5fc
// WARP GUID: 7ae38490-59e5-5301-a883-838bfb1bbca6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_42b1f4, sub_42b238
// ============================================================

int32_t __convention("regparm")sub_42b5fc(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_24 = *arg2
    int32_t var_24 = *arg2
    int32_t var_20 = arg2[1]
    (*(*arg1 + 0x40))(var_24)
    int32_t var_14
    int32_t var_28 = arg1[0xe] - var_14 + var_24
    arg1[0xd]
    arg1[0xc]
    int32_t var_10
    return (*(*arg1 + 0x7c))(arg1[0xf] - var_10 + var_20, var_28)
}
