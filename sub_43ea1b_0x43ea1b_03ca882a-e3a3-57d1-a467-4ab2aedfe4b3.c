// ============================================================
// 函数名称: sub_43ea1b
// 虚拟地址: 0x43ea1b
// WARP GUID: 03ca882a-e3a3-57d1-a467-4ab2aedfe4b3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_43ea1b(char* arg1, char* arg2, int16_t arg3, char arg4) __noreturn
{
    // 第一条实际指令: *(arg2 + arg1) += arg3.b
    *(arg2 + arg1) += arg3.b
    *arg1 += arg1.b
    arg1.b = 0xe7
    arg4 += arg2.b
    void* eax
    eax:1.b = (&arg1[1]):1.b + arg3:1.b
    *eax += arg3.b + 1
    *eax
    trap(0xd)
}
