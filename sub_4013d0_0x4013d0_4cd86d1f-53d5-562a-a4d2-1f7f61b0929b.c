// ============================================================
// 函数名称: sub_4013d0
// 虚拟地址: 0x4013d0
// WARP GUID: 4cd86d1f-53d5-562a-a4d2-1f7f61b0929b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetStartupInfoA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_406ad4
// ============================================================

uint32_tsub_4013d0()
{
    // 第一条实际指令: STARTUPINFOA startupInfo
    STARTUPINFOA startupInfo
    GetStartupInfoA(&startupInfo)
    
    if ((startupInfo.dwFlags.b & 1) == 0)
        return 0xa
    
    return zx.d(startupInfo.wShowWindow)
}
