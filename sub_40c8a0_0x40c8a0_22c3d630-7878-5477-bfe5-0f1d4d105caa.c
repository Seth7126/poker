// ============================================================
// 函数名称: sub_40c8a0
// 虚拟地址: 0x40c8a0
// WARP GUID: 22c3d630-7878-5477-bfe5-0f1d4d105caa
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetModuleHandleA, GetProcAddress
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40da04
// ============================================================

HMODULEsub_40c8a0()
{
    // 第一条实际指令: HMODULE hModule = GetModuleHandleA("kernel32.dll")
    HMODULE hModule = GetModuleHandleA("kernel32.dll")
    
    if (hModule != 0)
        hModule = GetProcAddress(hModule, "GetDiskFreeSpaceExA")
        data_52e13c = hModule
    
    if (data_52e13c == 0)
        hModule = sub_40930b+9
        data_52e13c = 0x409314
    
    return hModule
}
