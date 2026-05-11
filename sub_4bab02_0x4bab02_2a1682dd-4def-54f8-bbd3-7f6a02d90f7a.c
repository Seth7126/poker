// ============================================================
// 函数名称: sub_4bab02
// 虚拟地址: 0x4bab02
// WARP GUID: 2a1682dd-4def-54f8-bbd3-7f6a02d90f7a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4bab02(char* arg1, char arg2, void* arg3) __noreturn
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *0xd70a3d70 = arg1
    *0x3ff8 = arg1
    *arg1 += arg1.b
    *(arg3 - 0x33) &= arg1.b
    breakpoint
}
