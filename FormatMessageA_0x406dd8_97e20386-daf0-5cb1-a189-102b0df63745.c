// ============================================================
// 函数名称: FormatMessageA
// 虚拟地址: 0x406dd8
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40ac70, sub_419e90
// ============================================================

uint32_t __stdcallFormatMessageA(enum FORMAT_MESSAGE_OPTIONS dwFlags, void* lpSource, uint32_t dwMessageId, uint32_t dwLanguageId, PSTR lpBuffer, uint32_t nSize, char** Arguments)
{
    // 第一条实际指令: return FormatMessageA(dwFlags, lpSource, dwMessageId, dwLanguageId, lpBuffer, nSize, Arguments) __tailcall
    return FormatMessageA(dwFlags, lpSource, dwMessageId, dwLanguageId, lpBuffer, nSize, Arguments)
        __tailcall
}
