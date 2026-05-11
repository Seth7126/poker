// ============================================================
// 函数名称: sub_447ca8
// 虚拟地址: 0x447ca8
// WARP GUID: 85281abe-a46b-539c-a85a-ed2310f6e9b7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_403e4c
// [被调用的父级函数]: sub_44a0a0, sub_4499c8
// ============================================================

int32_t* __convention("regparm")sub_447ca8(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* i = arg1
    for (void* i = arg1; i != 0; i = *(i + 0x24))
        if (*(i + 0x70) != 0)
            return sub_403e4c(arg2, *(i + 0x70))
    
    sub_403df8(arg2)
    return arg2
}
