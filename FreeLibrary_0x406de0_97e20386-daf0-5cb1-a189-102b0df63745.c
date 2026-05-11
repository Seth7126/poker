// ============================================================
// 函数名称: FreeLibrary
// 虚拟地址: 0x406de0
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4b2e4c, sub_435e38, sub_453098, sub_453138, sub_4b3ac8, sub_4480dd, sub_499a38, sub_48fb60, sub_4b5820, sub_499a2f, sub_4a53bc, sub_4b6e1c
// ============================================================

BOOL __stdcallFreeLibrary(HMODULE hLibModule)
{
    // 第一条实际指令: return FreeLibrary(hLibModule) __tailcall
    return FreeLibrary(hLibModule) __tailcall
}
