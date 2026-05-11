// ============================================================
// 函数名称: sub_4432c0
// 虚拟地址: 0x4432c0
// WARP GUID: bfa14c93-2239-5a29-9e01-1fef66341203
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_416194
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_4432c0(void* arg1, void* arg2, void* arg3 @ eax, void* arg4)
{
    // 第一条实际指令: int32_t result = sub_416194(arg1, arg2, arg3, arg4)
    int32_t result = sub_416194(arg1, arg2, arg3, arg4)
    
    if (*(arg3 + 0x238) == 0)
        return result
    
    return (*(**(arg3 + 0x238) + 0x2c))(arg4)
}
