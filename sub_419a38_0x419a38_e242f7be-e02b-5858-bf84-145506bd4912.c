// ============================================================
// 函数名称: sub_419a38
// 虚拟地址: 0x419a38
// WARP GUID: e242f7be-e02b-5858-bf84-145506bd4912
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: LeaveCriticalSection, EnterCriticalSection
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41cd24, sub_432a43, sub_4b6830, sub_41ceb4, sub_434793, sub_42a30f, sub_43331e, sub_444fb5, sub_42a358, sub_419592, sub_418028, sub_41cf54
// ============================================================

int32_t __convention("regparm")sub_419a38(void* arg1)
{
    // 第一条实际指令: LeaveCriticalSection(arg1 + 0x38)
    LeaveCriticalSection(arg1 + 0x38)
    EnterCriticalSection(&data_531688)
    *(arg1 + 0x50) -= 1
    return LeaveCriticalSection(&data_531688)
}
