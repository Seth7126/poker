// ============================================================
// 函数名称: sub_4543d2
// 虚拟地址: 0x4543d2
// WARP GUID: 8e61ee02-0898-5aa1-b984-f53ed2bd5df6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_45380c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4543d2(int32_t arg1, void* arg2, int32_t* arg3 @ ebp, int32_t arg4)
{
    // 第一条实际指令: int32_t eflags
    int32_t eflags
    __cli(eflags)
    int32_t* entry_ebx
    int32_t var_4 = *entry_ebx
    bool c
    *(arg2 + 0x59) = rrc.b(*(arg2 + 0x59), 0x59, c)
    TEB* fsbase
    *(fsbase + arg1) = arg2
    sub_45380c(&arg3[-0x9f])
    *arg3
    return arg3[-2]
}
