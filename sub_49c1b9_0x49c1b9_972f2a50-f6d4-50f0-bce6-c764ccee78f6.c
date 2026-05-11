// ============================================================
// 函数名称: sub_49c1b9
// 虚拟地址: 0x49c1b9
// WARP GUID: 972f2a50-f6d4-50f0-bce6-c764ccee78f6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_49c1b9(int32_t* arg1, int32_t, char arg3) __noreturn
{
    // 第一条实际指令: *arg1 += arg1
    *arg1 += arg1
    *arg1 += arg1.b
    void* entry_ebx
    *(entry_ebx - 0x3e3affc0) ^= arg1.b
    *(entry_ebx + 0x4589fc45) += arg3 - 1
    trap(0xd)
}
