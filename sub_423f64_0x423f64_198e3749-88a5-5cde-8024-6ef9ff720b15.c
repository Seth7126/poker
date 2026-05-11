// ============================================================
// 函数名称: sub_423f64
// 虚拟地址: 0x423f64
// WARP GUID: 198e3749-88a5-5cde-8024-6ef9ff720b15
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42ee80
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_423f64(void* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 != *(arg1 + 0x1f9))
    if (arg2 != *(arg1 + 0x1f9))
        *(arg1 + 0x1f9) = arg2
        sub_42ee80(arg1)
}
