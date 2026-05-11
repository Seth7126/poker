// ============================================================
// 函数名称: sub_419794
// 虚拟地址: 0x419794
// WARP GUID: 664b3dc8-1d91-52df-9063-7c30b57e8b56
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: LeaveCriticalSection, EnterCriticalSection
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_43329c, sub_4329c4, sub_41932c, sub_4b6830, sub_41ceb4, sub_418028, sub_444f24, sub_4199dc, sub_434670, sub_41cf54
// ============================================================

int32_t __convention("regparm")sub_419794(void* arg1)
{
    // 第一条实际指令: EnterCriticalSection(&data_531688)
    EnterCriticalSection(&data_531688)
    *(arg1 + 0x50) += 1
    LeaveCriticalSection(&data_531688)
    return EnterCriticalSection(arg1 + 0x38)
}
