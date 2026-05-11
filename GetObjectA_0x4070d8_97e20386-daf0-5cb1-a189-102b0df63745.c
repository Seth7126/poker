// ============================================================
// 函数名称: GetObjectA
// 虚拟地址: 0x4070d8
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_418664, sub_41ac98, sub_41ec48, sub_419f48, sub_41d870, sub_41e300, sub_41e26c, sub_41aa68, sub_41ea20, sub_41d214, sub_41d7e1, sub_41a6cc, sub_41d8d4, sub_41e4f8, sub_41d812
// ============================================================

int32_t __stdcallGetObjectA(HGDIOBJ h, int32_t c, void* pv)
{
    // 第一条实际指令: return GetObjectA(h, c, pv) __tailcall
    return GetObjectA(h, c, pv) __tailcall
}
