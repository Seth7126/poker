// ============================================================
// 函数名称: GetSystemMetrics
// 虚拟地址: 0x4074e8
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4203cf, sub_424560, sub_41f68c, sub_40c258, sub_41f6a0, sub_41a978
// ============================================================

int32_t __stdcallGetSystemMetrics(enum SYSTEM_METRICS_INDEX nIndex)
{
    // 第一条实际指令: return GetSystemMetrics(nIndex) __tailcall
    return GetSystemMetrics(nIndex) __tailcall
}
