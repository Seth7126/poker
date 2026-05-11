// ============================================================
// 函数名称: sub_42ad4c
// 虚拟地址: 0x42ad4c
// WARP GUID: f699e67a-f1f6-5bb0-a09b-3cfec1eb3f0c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42abc0, sub_42abf0, sub_416044, sub_42b730
// [被调用的父级函数]: sub_493764, sub_423d50, sub_442994, sub_4b54bc
// ============================================================

void* __convention("regparm")sub_42ad4c(int32_t* arg1, void* arg2, char arg3)
{
    // 第一条实际指令: void* result = sub_416044(arg1, arg2, arg3)
    void* result = sub_416044(arg1, arg2, arg3)
    
    if (arg3 == 1)
        if (arg2 == arg1[0x1b])
            return sub_42b730(arg1, nullptr)
        
        result = sub_42abc0(arg1)
        
        if (arg2 == result)
            return sub_42abf0(arg1, nullptr)
    
    return result
}
