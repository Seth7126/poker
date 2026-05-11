// ============================================================
// 函数名称: sub_422e60
// 虚拟地址: 0x422e60
// WARP GUID: 7c60ae15-d63f-5a67-ad3d-d06f258d7c38
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_422e60(char* arg1, int16_t arg2, int16_t arg3, int32_t arg4 @ ebp, int32_t arg5 @ edi) __noreturn
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1.b = *0x422f
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1[0x2f] += arg3:1.b
    *(arg5 + arg4 + 0x2000042) += (arg2 + 1).b
    *arg1 += arg1.b
    *0x64940042 |= arg3:1.b
    *arg1 += arg1.b
    *arg1
    int32_t eflags
    char* eax
    eax.b = __in_al_dx(arg2 + 1, eflags)
    *eax += arg3.b + 2
    *eax
    trap(0xd)
}
