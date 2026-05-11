// ============================================================
// 函数名称: sub_405c44
// 虚拟地址: 0x405c44
// WARP GUID: e7fdd748-cf4c-5ea3-bfa0-9cb8231ae808
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetLastError, ReadFile
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_405cb8
// ============================================================

enum WIN32_ERROR __convention("regparm")sub_405c44(int32_t* arg1)
{
    // 第一条实际指令: arg1[4] = 0
    arg1[4] = 0
    arg1[3] = 0
    
    if (ReadFile(*arg1, arg1[5], arg1[2], &arg1[4], nullptr) == 0)
        enum WIN32_ERROR result = GetLastError()
        
        if (result != ERROR_BROKEN_PIPE)
            return result
    
    return 0
}
