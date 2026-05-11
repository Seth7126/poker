// ============================================================
// 函数名称: sub_4a7ff0
// 虚拟地址: 0x4a7ff0
// WARP GUID: 953a392c-c152-5708-a838-4542f23a4596
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_416044
// [被调用的父级函数]: sub_4b087b
// ============================================================

void* const __convention("regparm")sub_4a7ff0(void* arg1, void* arg2, char arg3)
{
    // 第一条实际指令: void* const result = sub_416044(arg1, arg2, arg3)
    void* const result = sub_416044(arg1, arg2, arg3)
    
    if (arg3 == 1)
        if (arg2 == *(arg1 + 0x70))
            result = nullptr
            *(arg1 + 0x70) = 0
        
        if (arg2 == *(arg1 + 0x74))
            *(arg1 + 0x74) = 0
            result = nullptr
            *(arg1 + 0xa4) = 0
    
    return result
}
