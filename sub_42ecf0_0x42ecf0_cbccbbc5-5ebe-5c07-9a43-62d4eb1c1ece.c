// ============================================================
// 函数名称: sub_42ecf0
// 虚拟地址: 0x42ecf0
// WARP GUID: cbccbbc5-5ebe-5c07-9a43-62d4eb1c1ece
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42ecf4
// [被调用的父级函数]: sub_42ec9c
// ============================================================

int32_t __convention("regparm")sub_42ecf0(char* arg1)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    return sub_42ecf4(arg1) __tailcall
}
