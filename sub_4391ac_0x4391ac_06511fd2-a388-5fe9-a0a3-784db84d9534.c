// ============================================================
// 函数名称: sub_4391ac
// 虚拟地址: 0x4391ac
// WARP GUID: 06511fd2-a388-5fe9-a0a3-784db84d9534
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40b56c, sub_403828, sub_4391a8
// [被调用的父级函数]: sub_43a014, sub_43bcb4, sub_43baf0, sub_43bba0, sub_439fb4, sub_43b974
// ============================================================

void __convention("regparm")sub_4391ac(char** arg1) __noreturn
{
    // 第一条实际指令: void* ebp
    void* ebp
    int32_t var_8 = sub_4391a8(ebp)
    int32_t edx
    edx.b = 1
    sub_40b56c("\nEMenuError", edx, arg1)
    noreturn sub_403828() __tailcall
}
