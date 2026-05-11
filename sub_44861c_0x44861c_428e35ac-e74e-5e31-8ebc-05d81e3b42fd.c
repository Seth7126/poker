// ============================================================
// 函数名称: sub_44861c
// 虚拟地址: 0x44861c
// WARP GUID: 428e35ac-e74e-5e31-8ebc-05d81e3b42fd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: BeginPaint, EndPaint, DrawIcon
// [内部子函数调用]: sub_448d04
// [被调用的父级函数]: sub_448668
// ============================================================

BOOLsub_44861c(void* arg1)
{
    // 第一条实际指令: PAINTSTRUCT paint
    PAINTSTRUCT paint
    DrawIcon(BeginPaint(*(*(arg1 - 4) + 0x24), &paint), 0, 0, sub_448d04(*(arg1 - 4)))
    return EndPaint(*(*(arg1 - 4) + 0x24), &paint)
}
