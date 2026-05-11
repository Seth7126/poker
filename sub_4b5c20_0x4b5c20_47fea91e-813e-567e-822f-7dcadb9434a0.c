// ============================================================
// 函数名称: sub_4b5c20
// 虚拟地址: 0x4b5c20
// WARP GUID: 47fea91e-813e-567e-822f-7dcadb9434a0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetModuleHandleA, GetProcAddress
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4b6678
// ============================================================

HMODULEsub_4b5c20()
{
    // 第一条实际指令: HMODULE hModule = GetModuleHandleA("ole32.dll")
    HMODULE hModule = GetModuleHandleA("ole32.dll")
    
    if (hModule != 0)
        data_52fe48 = GetProcAddress(hModule, "CoCreateInstanceEx")
        data_52fe4c = GetProcAddress(hModule, "CoInitializeEx")
        data_52fe50 = GetProcAddress(hModule, "CoAddRefServerProcess")
        data_52fe54 = GetProcAddress(hModule, "CoReleaseServerProcess")
        data_52fe58 = GetProcAddress(hModule, "CoResumeClassObjects")
        hModule = GetProcAddress(hModule, "CoSuspendClassObjects")
        data_52fe5c = hModule
    
    return hModule
}
