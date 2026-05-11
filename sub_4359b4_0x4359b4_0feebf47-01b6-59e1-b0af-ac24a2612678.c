// ============================================================
// 函数名称: sub_4359b4
// 虚拟地址: 0x4359b4
// WARP GUID: 0feebf47-01b6-59e1-b0af-ac24a2612678
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetCursorPos
// [内部子函数调用]: sub_40c854
// [被调用的父级函数]: sub_4702a8, sub_4ca778, sub_4ca36c, sub_4dad04, sub_4cb03c, sub_4cac30
// ============================================================

BOOL __fastcallsub_4359b4(int32_t arg1, POINT* arg2)
{
    // 第一条实际指令: BOOL result = GetCursorPos(arg2)
    BOOL result = GetCursorPos(arg2)
    sub_40c854(result)
    return result
}
