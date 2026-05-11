// ============================================================
// 函数名称: sub_447d4c
// 虚拟地址: 0x447d4c
// WARP GUID: 27d05fe2-76ce-517f-b288-80e0f897a7d7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetCursorPos, GetCurrentThreadId, WaitForSingleObject
// [内部子函数调用]: sub_42a1a8, sub_449ec0
// [被调用的父级函数]: sub_447dec
// ============================================================

enum WAIT_EVENTsub_447d4c()
{
    // 第一条实际指令: data_5317ec = GetCurrentThreadId()
    data_5317ec = GetCurrentThreadId()
    enum WAIT_EVENT result
    
    while (true)
        result = WaitForSingleObject(data_5317f0, 0x64)
        
        if (result != WAIT_TIMEOUT)
            break
        
        if (data_5317d8 != 0 && *(data_5317d8 + 0x50) != 0)
            int32_t point
            GetCursorPos(&point)
            
            if (sub_42a1a8(&point) == 0)
                sub_449ec0(data_5317d8)
    
    return result
}
