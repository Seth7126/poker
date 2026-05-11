// ============================================================
// 函数名称: sub_491d6c
// 虚拟地址: 0x491d6c
// WARP GUID: f1d4f0c4-8316-5e1f-ae86-93a0bcfbb662
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42afdc, sub_491d44
// [被调用的父级函数]: sub_491cd4, sub_4928a4
// ============================================================

int32_t __convention("regparm")sub_491d6c(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax_1 = sub_491d44(arg1)
    int32_t eax_1 = sub_491d44(arg1)
    sub_42afdc(arg1, (arg1[0xa9] - 1) * eax_1 + 1)
    return (*(*arg1 + 0x74))()
}
