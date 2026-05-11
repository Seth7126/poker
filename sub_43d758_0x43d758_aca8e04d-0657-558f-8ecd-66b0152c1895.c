// ============================================================
// 函数名称: sub_43d758
// 虚拟地址: 0x43d758
// WARP GUID: aca8e04d-0657-558f-8ecd-66b0152c1895
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43d768
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_43d758(HANDLE arg1, char arg2)
{
    // 第一条实际指令: if (arg2 != *(arg1 + 0x35))
    if (arg2 != *(arg1 + 0x35))
        *(arg1 + 0x35) = arg2
        sub_43d768(arg1)
}
