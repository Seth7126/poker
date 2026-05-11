// ============================================================
// 函数名称: sub_4fc34e
// 虚拟地址: 0x4fc34e
// WARP GUID: ec995ce9-e6e7-5d36-b391-422f1439ef96
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4fc34e(char* arg1, int32_t, int32_t arg3, int32_t arg4 @ edi) __noreturn
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    int32_t entry_ebx
    *(arg4 + (arg3 << 2) - 0x3e) -= entry_ebx
    *(arg4 + (arg3 << 2) - 1) -= entry_ebx.b
    int32_t eflags
    int32_t eflags_1
    char temp0
    char temp1
    temp0, temp1, eflags_1 = __aas(arg1.b, arg1:1.b, eflags)
    arg1.b = temp0
    arg1:1.b = temp1
    *arg1 += arg1.b
    trap(0xcc)
}
