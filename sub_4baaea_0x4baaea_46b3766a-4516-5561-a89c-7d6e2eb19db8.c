// ============================================================
// 函数名称: sub_4baaea
// 虚拟地址: 0x4baaea
// WARP GUID: 46b3766a-4516-5561-a89c-7d6e2eb19db8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4baaea(char* arg1) __noreturn
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    trap(0xcc)
}
