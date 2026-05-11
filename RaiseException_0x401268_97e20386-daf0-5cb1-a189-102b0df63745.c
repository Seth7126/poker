// ============================================================
// 函数名称: RaiseException
// 虚拟地址: 0x401268
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_403828, sub_403500, sub_4034a4, sub_40351c, sub_403440, sub_40345c, sub_4034d8, sub_403490
// ============================================================

void __stdcallRaiseException(uint32_t dwExceptionCode, uint32_t dwExceptionFlags, uint32_t nNumberOfArguments, uint32_t* lpArguments) __noreturn
{
    // 第一条实际指令: noreturn RaiseException(dwExceptionCode, dwExceptionFlags, nNumberOfArguments, lpArguments) __tailcall
    noreturn RaiseException(dwExceptionCode, dwExceptionFlags, nNumberOfArguments, lpArguments)
        __tailcall
}
