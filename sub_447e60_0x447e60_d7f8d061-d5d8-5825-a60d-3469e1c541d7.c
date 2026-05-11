// ============================================================
// 函数名称: sub_447e60
// 虚拟地址: 0x447e60
// WARP GUID: d7f8d061-d5d8-5825-a60d-3469e1c541d7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: WaitForSingleObject, SetEvent, GetCurrentThreadId, CloseHandle, UnhookWindowsHookEx
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_449ec0
// ============================================================

int32_tsub_447e60()
{
    // 第一条实际指令: if (data_5317f4 != 0)
    if (data_5317f4 != 0)
        UnhookWindowsHookEx(data_5317f4)
    
    data_5317f4 = 0
    
    if (data_5317f8 != 0)
        SetEvent(data_5317f0)
        
        if (GetCurrentThreadId() != data_5317ec)
            WaitForSingleObject(data_5317f8, 0xffffffff)
        
        CloseHandle(data_5317f8)
        data_5317f8 = 0
    
    return 0
}
