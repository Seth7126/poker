// ============================================================
// 函数名称: sub_4a9554
// 虚拟地址: 0x4a9554
// WARP GUID: 756521bc-755c-5bcd-bf94-1e6b176c46b6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_416044
// [被调用的父级函数]: 无
// ============================================================

void* const __convention("regparm")sub_4a9554(void* arg1, void* arg2, char arg3)
{
    // 第一条实际指令: void* const result = sub_416044(arg1, arg2, arg3)
    void* const result = sub_416044(arg1, arg2, arg3)
    
    if (arg3 == 1 && arg2 == *(arg1 + 0x70))
        result = nullptr
        *(arg1 + 0x70) = 0
    
    return result
}
