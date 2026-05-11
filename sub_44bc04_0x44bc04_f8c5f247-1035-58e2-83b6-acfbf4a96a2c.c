// ============================================================
// 函数名称: sub_44bc04
// 虚拟地址: 0x44bc04
// WARP GUID: f8c5f247-1035-58e2-83b6-acfbf4a96a2c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_44bc5c
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_44bc04(int32_t* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 != *(arg1 + 0x139))
    if (arg2 != *(arg1 + 0x139))
        *(arg1 + 0x139) = arg2
        sub_44bc5c(arg1)
}
