// ============================================================
// 函数名称: GetTickCount
// 虚拟地址: 0x406e98
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_511dcc, sub_510f54, sub_50f478, sub_48e9e4, sub_5082d0, sub_4f1860, sub_453718, sub_506f9c, sub_48e8e8, sub_527454, sub_512690, sub_511764, sub_5164e8, sub_513e4c, sub_50f0e4, sub_50fa27, sub_52ba68, sub_471144, sub_50d4b4, sub_51260b, sub_511fd8, sub_484e24, sub_46a8f8, sub_50deb4, sub_516d6c, sub_515920, sub_50d82b, sub_48e950, sub_478234, sub_50e8e4, sub_4c02cc, sub_46a1f8, sub_497dd4, sub_51038c, sub_50d838, sub_4e649b, sub_4dad04, sub_4ed7a0, sub_50d454, sub_4ceed4, sub_4cf900, sub_4f17d0, sub_511d74, sub_50b624, sub_515de8, sub_48be98, sub_50f7b8, sub_48e89c, sub_50003c, sub_508998, sub_511230, sub_51423e, sub_4c27e4, sub_48e980, sub_4702a8, sub_511198, sub_4077a0, sub_484b64, sub_514178
// ============================================================

uint32_t __stdcallGetTickCount()
{
    // 第一条实际指令: return GetTickCount() __tailcall
    return GetTickCount() __tailcall
}
