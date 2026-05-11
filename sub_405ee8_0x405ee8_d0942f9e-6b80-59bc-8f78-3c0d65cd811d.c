// ============================================================
// 函数名称: sub_405ee8
// 虚拟地址: 0x405ee8
// WARP GUID: d0942f9e-6b80-59bc-8f78-3c0d65cd811d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetLastError, ReadFile
// [内部子函数调用]: sub_402844
// [被调用的父级函数]: sub_52c7c8
// ============================================================

uint32_t __fastcallsub_405ee8(int32_t arg1, uint8_t* arg2, int32_t* arg3 @ eax, uint32_t* arg4)
{
    // 第一条实际指令: enum WIN32_ERROR eax_4
    enum WIN32_ERROR eax_4
    
    if (arg3[1] - 0xd7b1 u> 2)
        eax_4 = ERROR_TOO_MANY_SEM_REQUESTS
    else
        uint32_t numberOfBytesRead = 0
        
        if (ReadFile(*arg3, arg2, arg3[2] * arg1, &numberOfBytesRead, nullptr) != 1)
            eax_4 = GetLastError()
        else
            uint32_t result = divu.dp.d(0:numberOfBytesRead, arg3[2])
            
            if (arg4 != 0)
                *arg4 = result
                return result
            
            if (result == arg1)
                return result
            
            eax_4 = ERROR_TOO_MANY_SEMAPHORES
    
    sub_402844(eax_4)
    return 0
}
