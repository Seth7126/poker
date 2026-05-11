// ============================================================
// 函数名称: sub_423fa8
// 虚拟地址: 0x423fa8
// WARP GUID: a9261478-f6a7-5c0d-a769-b68826ec404f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42ee80
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_423fa8(void* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 != *(arg1 + 0x1fa))
    if (arg2 != *(arg1 + 0x1fa))
        *(arg1 + 0x1fa) = arg2
        sub_42ee80(arg1)
}
