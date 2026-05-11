// ============================================================
// 函数名称: sub_43c230
// 虚拟地址: 0x43c230
// WARP GUID: ed3c12ed-a4fd-50bb-a4b6-026d0a6b26ea
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_439630, sub_43bd18
// [被调用的父级函数]: sub_43c258, sub_43c230
// ============================================================

int32_t __convention("regparm")sub_43c230(int32_t* arg1)
{
    // 第一条实际指令: sub_439630(sub_43c230, arg1[0x17], arg1)
    sub_439630(sub_43c230, arg1[0x17], arg1)
    sub_43bd18(arg1, 1)
    return 0
}
