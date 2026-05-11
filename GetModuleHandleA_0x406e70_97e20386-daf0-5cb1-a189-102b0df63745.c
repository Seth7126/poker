// ============================================================
// 函数名称: GetModuleHandleA
// 虚拟地址: 0x406e70
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_435ac4, sub_4b5c20, sub_4209cb, __cfltcvt_init, sub_40c8a0, sub_420174, sub_420d48
// ============================================================

HMODULE __stdcallGetModuleHandleA(PSTR lpModuleName)
{
    // 第一条实际指令: return GetModuleHandleA(lpModuleName) __tailcall
    return GetModuleHandleA(lpModuleName) __tailcall
}
