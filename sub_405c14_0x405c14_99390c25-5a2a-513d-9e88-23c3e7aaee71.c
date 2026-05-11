// ============================================================
// 函数名称: sub_405c14
// 虚拟地址: 0x405c14
// WARP GUID: 99390c25-5a2a-513d-9e88-23c3e7aaee71
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: InterlockedDecrement
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40118d, sub_428788
// ============================================================

int32_t __stdcallsub_405c14(int32_t* arg1)
{
    // 第一条实际指令: int32_t result
    int32_t result
    int32_t edx
    result, edx = InterlockedDecrement(&arg1[1])
    
    if (result == 0)
        edx.b = 1
        (*(*arg1 - 4))()
    
    return result
}
