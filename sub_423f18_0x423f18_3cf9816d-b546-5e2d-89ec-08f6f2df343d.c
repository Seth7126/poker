// ============================================================
// 函数名称: sub_423f18
// 虚拟地址: 0x423f18
// WARP GUID: 3cf9816d-b546-5e2d-89ec-08f6f2df343d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_424524
// [被调用的父级函数]: sub_424b94
// ============================================================

void __convention("regparm")sub_423f18(int32_t* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 != *(arg1 + 0x1f7))
    if (arg2 != *(arg1 + 0x1f7))
        *(arg1 + 0x1f7) = arg2
        sub_424524(arg1)
}
