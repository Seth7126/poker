// ============================================================
// 函数名称: sub_43c1b4
// 虚拟地址: 0x43c1b4
// WARP GUID: 856a9f58-dd44-573c-8762-6e47190bc028
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43b94c, sub_416044, sub_43bd98
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_43c1b4(int32_t* arg1, void* arg2, char arg3)
{
    // 第一条实际指令: void* result = sub_416044(arg1, arg2, arg3)
    void* result = sub_416044(arg1, arg2, arg3)
    
    if (arg3 == 1)
        result = sub_43b94c(arg1)
        
        if (arg2 == result)
            return sub_43bd98(arg1, nullptr)
    
    return result
}
