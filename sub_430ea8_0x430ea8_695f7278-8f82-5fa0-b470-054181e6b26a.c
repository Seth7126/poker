// ============================================================
// 函数名称: sub_430ea8
// 虚拟地址: 0x430ea8
// WARP GUID: 695f7278-8f82-5fa0-b470-054181e6b26a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4190bc, sub_42e898, sub_42d024
// [被调用的父级函数]: sub_443f90
// ============================================================

int32_t __convention("regparm")sub_430ea8(int32_t* arg1)
{
    // 第一条实际指令: sub_42d024(arg1)
    sub_42d024(arg1)
    arg1[0x18]
    return sub_42e898(sub_4190bc(arg1[0x4c]), 0xb009)
}
