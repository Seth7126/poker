// ============================================================
// 函数名称: sub_436764
// 虚拟地址: 0x436764
// WARP GUID: 1116d567-8fd9-519c-a83f-fab73aa0ecd2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_436724, sub_4367cc, sub_416044, sub_403248
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_436764(void* arg1, int32_t* arg2, char arg3)
{
    // 第一条实际指令: char result = sub_416044(arg1, arg2, arg3)
    char result = sub_416044(arg1, arg2, arg3)
    
    if (arg3 == 1)
        if (arg2 == *(arg1 + 0x2c))
            return sub_436724(arg1, nullptr)
        
        result = sub_403248(arg2, &data_43607c)
        
        if (result != 0)
            return sub_4367cc(arg1, arg2)
    
    return result
}
