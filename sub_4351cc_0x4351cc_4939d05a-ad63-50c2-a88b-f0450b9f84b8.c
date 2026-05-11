// ============================================================
// 函数名称: sub_4351cc
// 虚拟地址: 0x4351cc
// WARP GUID: 4939d05a-ad63-50c2-a88b-f0450b9f84b8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4336a8
// [被调用的父级函数]: sub_434a1c, sub_434c80, sub_4351a4, sub_43512c, sub_433d44
// ============================================================

void __convention("regparm")sub_4351cc(void* arg1, void* arg2)
{
    // 第一条实际指令: if (*(arg1 + 0x6c) == 0)
    if (*(arg1 + 0x6c) == 0)
        sub_4336a8(arg2)
}
