// ============================================================
// 函数名称: CreateFileA
// 虚拟地址: 0x406d78
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_408f48, sub_49c444, sub_408f08
// ============================================================

HANDLE __stdcallCreateFileA(PSTR lpFileName, uint32_t dwDesiredAccess, enum FILE_SHARE_MODE dwShareMode, SECURITY_ATTRIBUTES* lpSecurityAttributes, enum FILE_CREATION_DISPOSITION dwCreationDisposition, enum FILE_FLAGS_AND_ATTRIBUTES dwFlagsAndAttributes, HANDLE hTemplateFile)
{
    // 第一条实际指令: return CreateFileA(lpFileName, dwDesiredAccess, dwShareMode, lpSecurityAttributes, dwCreationDisposition, dwFlagsAndAttributes, hTemplateFile) __tailcall
    return CreateFileA(lpFileName, dwDesiredAccess, dwShareMode, lpSecurityAttributes, 
        dwCreationDisposition, dwFlagsAndAttributes, hTemplateFile) __tailcall
}
