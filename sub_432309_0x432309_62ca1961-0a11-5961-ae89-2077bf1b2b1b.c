// ============================================================
// 函数名称: sub_432309
// 虚拟地址: 0x432309
// WARP GUID: 62ca1961-0a11-5961-ae89-2077bf1b2b1b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c650, sub_431f30
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_432309(char* arg1, int32_t* arg2, int32_t* arg3, void* arg4 @ ebp)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *(arg4 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2.w, eflags)
    void* ebp
    int32_t esi_1
    ebp, esi_1 = sub_431f30(arg3, arg2, arg1, *(arg4 + 8), *(arg4 + 0xc))
    return sub_42c650(arg3, arg1, *(ebp + 8), *(ebp + 0xc))
}
