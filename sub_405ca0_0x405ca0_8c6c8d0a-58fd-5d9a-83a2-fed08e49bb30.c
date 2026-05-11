// ============================================================
// 函数名称: sub_405ca0
// 虚拟地址: 0x405ca0
// WARP GUID: 8c6c8d0a-58fd-5d9a-83a2-fed08e49bb30
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetLastError, CloseHandle
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_405cb8
// ============================================================

enum WIN32_ERROR __convention("regparm")sub_405ca0(int32_t* arg1)
{
    // 第一条实际指令: HANDLE hObject = *arg1
    HANDLE hObject = *arg1
    arg1[1] = 0xd7b0
    BOOL eax = CloseHandle(hObject)
    
    if (eax != 1)
        return GetLastError()
    
    return eax - 1
}
