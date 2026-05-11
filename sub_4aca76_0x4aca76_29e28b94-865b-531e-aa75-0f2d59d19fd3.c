// ============================================================
// 函数名称: sub_4aca76
// 虚拟地址: 0x4aca76
// WARP GUID: 29e28b94-865b-531e-aa75-0f2d59d19fd3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4aca53
// ============================================================

int32_t __convention("regparm")sub_4aca76(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4 @ ebp, int32_t arg5 @ esi)
{
    // 第一条实际指令: *(arg4 + (arg3 << 3) + 0x4a) += arg3.b
    *(arg4 + (arg3 << 3) + 0x4a) += arg3.b
    *(arg1 + 1) += (arg1 + 1).b
    char* eax
    eax.b = (arg1 + 1).b | 0x41
    *eax += arg3.b
    eax.b |= 0x41
    *(arg5 + (arg3 << 3)) += arg3:1.b
    *(arg4 + arg3 + 0x41) += eax:1.b
    *(arg5 + arg3 + 0x41) += (arg2 - 1):1.b
    *(arg5 + arg3 + 0x41) += arg3:1.b
    eax[0xffffffd8] += arg3:1.b
    eax[0x44004ad8] += arg3:1.b
    int32_t eflags
    char temp0
    char temp1
    temp0, temp1, eflags = __aad_immb(0x4a, eax.b, eax:1.b)
    eax.b = temp0
    eax:1.b = temp1
    eax.b += arg3:1.b
    undefined
}
