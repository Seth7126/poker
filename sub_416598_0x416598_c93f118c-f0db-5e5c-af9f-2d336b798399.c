// ============================================================
// 函数名称: sub_416598
// 虚拟地址: 0x416598
// WARP GUID: c93f118c-f0db-5e5c-af9f-2d336b798399
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_416718, sub_416724
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_416598(void* arg1, void* arg2)
{
    // 第一条实际指令: void* result = *(arg1 + 0x10)
    void* result = *(arg1 + 0x10)
    
    if (arg2 != result)
        if (result != 0)
            result = sub_416724(result, arg1)
        
        *(arg1 + 0x10) = arg2
        
        if (arg2 != 0)
            return sub_416718(arg2, arg1)
    
    return result
}
