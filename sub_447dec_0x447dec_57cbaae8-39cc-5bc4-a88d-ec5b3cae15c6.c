// ============================================================
// 函数名称: sub_447dec
// 虚拟地址: 0x447dec
// WARP GUID: 57cbaae8-39cc-5bc4-a88d-ec5b3cae15c6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetCurrentThreadId, SetWindowsHookExA, CreateThread, CreateEventA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_44a0a0
// ============================================================

HHOOK __fastcallsub_447dec(uint32_t arg1)
{
    // 第一条实际指令: uint32_t threadId = arg1
    uint32_t threadId = arg1
    HHOOK result = data_5317d8
    
    if (result->__offset(0x95).b == 0)
        if (data_5317f4 == 0)
            result = SetWindowsHookExA(WH_GETMESSAGE, sub_447da8, nullptr, GetCurrentThreadId())
            data_5317f4 = result
        
        if (data_5317f0 == 0)
            result = CreateEventA(nullptr, 0, 0, nullptr)
            data_5317f0 = result
        
        if (data_5317f8 == 0)
            result = CreateThread(nullptr, 0x3e8, sub_447d4c, nullptr, THREAD_CREATE_RUN_IMMEDIATELY, 
                &threadId)
            data_5317f8 = result
    
    return result
}
