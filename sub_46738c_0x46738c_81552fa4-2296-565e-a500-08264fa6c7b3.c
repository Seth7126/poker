// ============================================================
// 函数名称: sub_46738c
// 虚拟地址: 0x46738c
// WARP GUID: 81552fa4-2296-565e-a500-08264fa6c7b3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: RegCloseKey
// [内部子函数调用]: sub_4672f4
// [被调用的父级函数]: sub_4e5e3c
// ============================================================

char**sub_46738c()
{
    // 第一条实际指令: void* eax
    void* eax
    void* edx
    char** hKey = sub_4672f4(eax, edx)
    
    if (hKey != 0)
        RegCloseKey(hKey)
    
    char** result
    result.b = hKey != 0
    return result
}
