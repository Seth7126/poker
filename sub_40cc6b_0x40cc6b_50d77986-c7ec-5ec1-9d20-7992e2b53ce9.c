// ============================================================
// 函数名称: sub_40cc6b
// 虚拟地址: 0x40cc6b
// WARP GUID: 50d77986-c7ec-5ec1-9d20-7992e2b53ce9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: InterlockedDecrement, SetEvent
// [内部子函数调用]: sub_40c9a4
// [被调用的父级函数]: sub_40cbc8
// ============================================================

int32_t __stdcallsub_40cc6b(void* arg1 @ ebp, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (InterlockedDecrement(*(arg1 - 4) + 0x20) != 0)
    if (InterlockedDecrement(*(arg1 - 4) + 0x20) != 0)
        char result = sub_40c9a4(*(arg1 - 4))
        
        if (result == 0)
            return result
    
    return SetEvent(*(*(arg1 - 4) + 0x1c))
}
