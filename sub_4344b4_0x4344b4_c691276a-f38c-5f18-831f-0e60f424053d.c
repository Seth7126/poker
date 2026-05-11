// ============================================================
// 函数名称: sub_4344b4
// 虚拟地址: 0x4344b4
// WARP GUID: c691276a-f38c-5f18-831f-0e60f424053d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DrawFrameControl
// [内部子函数调用]: sub_419b40, sub_40faac
// [被调用的父级函数]: sub_434594
// ============================================================

BOOL __convention("regparm")sub_4344b4(int32_t arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: int32_t edi = *(*(arg3 - 8) + 0x18)
    int32_t edi = *(*(arg3 - 8) + 0x18)
    void param1
    sub_40faac(edi + arg1 - 2, arg2, arg1, &param1, edi + arg2 - 2)
    return DrawFrameControl(sub_419b40(*(arg3 - 4)), &param1, DFC_CAPTION, DFCS_CAPTIONCLOSE)
}
