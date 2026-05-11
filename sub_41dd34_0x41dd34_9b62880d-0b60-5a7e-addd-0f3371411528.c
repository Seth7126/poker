// ============================================================
// 函数名称: sub_41dd34
// 虚拟地址: 0x41dd34
// WARP GUID: 9b62880d-0b60-5a7e-addd-0f3371411528
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40cc98, sub_41dfd0
// [被调用的父级函数]: sub_41e1b4, sub_41e04c, sub_41e08c
// ============================================================

int32_t __convention("regparm")sub_41dd34(int32_t arg1)
{
    // 第一条实际指令: sub_41dfd0(arg1)
    sub_41dfd0(arg1)
    void* eax_1 = *(arg1 + 0x20)
    *(eax_1 + 0x50) = 0
    *(eax_1 + 0x54) = 0
    return sub_40cc98(eax_1 + 0x6c)
}
