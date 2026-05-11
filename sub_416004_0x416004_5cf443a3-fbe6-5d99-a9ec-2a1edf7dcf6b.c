// ============================================================
// 函数名称: sub_416004
// 虚拟地址: 0x416004
// WARP GUID: 5cf443a3-fbe6-5d99-a9ec-2a1edf7dcf6b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0, sub_4106bc
// [被调用的父级函数]: sub_416028
// ============================================================

int32_t* __convention("regparm")sub_416004(void* arg1)
{
    // 第一条实际指令: int32_t* result = *(arg1 + 0x14)
    int32_t* result = *(arg1 + 0x14)
    
    if (result != 0)
        sub_4106bc(result)
        result = *(arg1 + 0x14)
        
        if (result[2] == 0)
            sub_4030d0(result)
            result = nullptr
            *(arg1 + 0x14) = 0
    
    return result
}
