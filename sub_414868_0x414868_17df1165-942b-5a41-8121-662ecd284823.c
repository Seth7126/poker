// ============================================================
// 函数名称: sub_414868
// 虚拟地址: 0x414868
// WARP GUID: 17df1165-942b-5a41-8121-662ecd284823
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4103c8, sub_413114
// [被调用的父级函数]: sub_414aa0
// ============================================================

int32_t __convention("regparm")sub_414868(int32_t arg1, int32_t arg2, char* arg3, void* arg4)
{
    // 第一条实际指令: int32_t var_18 = arg2
    int32_t var_18 = arg2
    arg2.b = 1
    int32_t* eax_3 = sub_413114(arg1, arg2, 0x4130ec, arg3, nullptr, var_18, *(*(arg4 - 4) + 0x18))
    return sub_4103c8(*(*(arg4 - 4) + 0x30), eax_3)
}
