// ============================================================
// 函数名称: GetDeviceCaps
// 虚拟地址: 0x4070b8
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41f9ac, sub_473938, sub_446fc8, sub_41dd80, sub_41a978, sub_41d214, sub_41a590, sub_41e440, sub_454878, sub_41a478, sub_45442c
// ============================================================

int32_t __stdcallGetDeviceCaps(HDC hdc, int32_t index)
{
    // 第一条实际指令: return GetDeviceCaps(hdc, index) __tailcall
    return GetDeviceCaps(hdc, index) __tailcall
}
