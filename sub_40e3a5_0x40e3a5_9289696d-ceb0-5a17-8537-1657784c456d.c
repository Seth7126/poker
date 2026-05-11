// ============================================================
// 函数名称: sub_40e3a5
// 虚拟地址: 0x40e3a5
// WARP GUID: 9289696d-ceb0-5a17-8537-1657784c456d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40e360
// ============================================================

void __convention("regparm")sub_40e3a5(char* arg1) __noreturn
{
    // 第一条实际指令: arg1.b = arg1.b
    arg1.b = arg1.b
    *arg1 += arg1.b
    *arg1 |= arg1.b
    *arg1 += arg1.b
    arg1.b = arg1.b
    *arg1 += arg1.b
    *arg1 |= arg1.b
    *arg1 += arg1.b
    *arg1 |= arg1.b
    *arg1 += arg1.b
    trap(0xe3)
}
