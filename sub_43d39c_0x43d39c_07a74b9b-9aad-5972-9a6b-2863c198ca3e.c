// ============================================================
// 函数名称: sub_43d39c
// 虚拟地址: 0x43d39c
// WARP GUID: 07a74b9b-9aad-5972-9a6b-2863c198ca3e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43d360, sub_416044
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_43d39c(void* arg1, void* arg2, char arg3)
{
    // 第一条实际指令: int32_t* result = sub_416044(arg1, arg2, arg3)
    int32_t* result = sub_416044(arg1, arg2, arg3)
    
    if (arg2 == *(arg1 + 0x3c) && arg3 == 1)
        return sub_43d360(arg1, nullptr)
    
    return result
}
