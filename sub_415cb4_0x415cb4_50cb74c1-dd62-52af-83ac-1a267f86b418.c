// ============================================================
// 函数名称: sub_415cb4
// 虚拟地址: 0x415cb4
// WARP GUID: 50cb74c1-dd62-52af-83ac-1a267f86b418
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: PeekMessageA, MsgWaitForMultipleObjects, GetExitCodeThread, WaitForSingleObject, GetCurrentThreadId
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_415bc4, sub_4a8f18, sub_49692d, sub_4a8ea2
// ============================================================

uint32_t __convention("regparm")sub_415cb4(void* arg1)
{
    // 第一条实际指令: HANDLE var_20 = *(arg1 + 4)
    HANDLE var_20 = *(arg1 + 4)
    
    if (GetCurrentThreadId() != *data_530a7c)
        WaitForSingleObject(var_20, 0xffffffff)
    else
        while (MsgWaitForMultipleObjects(1, &var_20, 0, 0xffffffff, QS_SENDMESSAGE) == 0x1)
            MSG msg
            PeekMessageA(&msg, nullptr, 0, 0, PM_NOREMOVE)
    
    uint32_t exitCode
    GetExitCodeThread(var_20, &exitCode)
    return exitCode
}
