// ============================================================
// 函数名称: sub_405c73
// 虚拟地址: 0x405c73
// WARP GUID: 96fc2ead-eb5a-567d-bd9a-44e208b0e7e3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetLastError, WriteFile
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_405cb8
// ============================================================

enum WIN32_ERROR __convention("regparm")sub_405c73(int32_t* arg1)
{
    // 第一条实际指令: uint32_t nNumberOfBytesToWrite = arg1[3]
    uint32_t nNumberOfBytesToWrite = arg1[3]
    
    if (nNumberOfBytesToWrite s> 0)
        arg1[3] = 0
        uint32_t __saved_ecx
        
        if (WriteFile(*arg1, arg1[5], nNumberOfBytesToWrite, &__saved_ecx, nullptr) == 0)
            return GetLastError()
    
    return NO_ERROR
}
