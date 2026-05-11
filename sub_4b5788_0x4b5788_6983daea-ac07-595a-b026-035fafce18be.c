// ============================================================
// 函数名称: sub_4b5788
// 虚拟地址: 0x4b5788
// WARP GUID: 6983daea-ac07-595a-b026-035fafce18be
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: WSAStartup, LoadLibraryA, MessageBoxA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4b5874
// ============================================================

enum MESSAGEBOX_RESULTsub_4b5788()
{
    // 第一条实际指令: data_532ed4 = LoadLibraryA("wsock32.dll")
    data_532ed4 = LoadLibraryA("wsock32.dll")
    enum MESSAGEBOX_RESULT result = WSAStartup(0x101, 0x532d44)
    data_532ed8 = result
    
    if (data_532ed8 == 0)
        return result
    
    return MessageBoxA(nullptr, "Error initializing Winsock (Winsock not loaded)", "Application error", 
        0x2010)
}
