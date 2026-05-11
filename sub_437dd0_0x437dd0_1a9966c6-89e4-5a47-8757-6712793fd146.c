// ============================================================
// 函数名称: sub_437dd0
// 虚拟地址: 0x437dd0
// WARP GUID: 1a9966c6-89e4-5a47-8757-6712793fd146
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4160a0, sub_437d74
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_437dd0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: sub_4160a0(arg1, arg2)
    sub_4160a0(arg1, arg2)
    int32_t __saved_ebp
    sub_437d74(&__saved_ebp)
    return (*(*arg2 + 8))(sub_4381c4, arg1, sub_43813c, arg1)
}
