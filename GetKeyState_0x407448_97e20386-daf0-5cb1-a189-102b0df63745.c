// ============================================================
// 函数名称: GetKeyState
// 虚拟地址: 0x407448
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_440d94, sub_445a38, sub_43cf80, sub_440de8, sub_429540
// ============================================================

int16_t __stdcallGetKeyState(int32_t nVirtKey)
{
    // 第一条实际指令: return GetKeyState(nVirtKey) __tailcall
    return GetKeyState(nVirtKey) __tailcall
}
