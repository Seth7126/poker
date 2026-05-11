// ============================================================
// 函数名称: sub_41c7a4
// 虚拟地址: 0x41c7a4
// WARP GUID: a49ac69f-4021-5181-afc8-5b118b8166a9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41c8f4, sub_41c3a4
// [被调用的父级函数]: sub_41c707, sub_41c730
// ============================================================

void* __convention("regparm")sub_41c7a4(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg1[8] == 0)
    if (arg1[8] == 0)
        sub_41c3a4(arg1)
    
    void* result = arg1[8]
    *(result + 0x20) = 0
    
    if (arg2 == *(result + 0x10))
        return result
    
    sub_41c8f4(arg1)
    *(arg1[8] + 0x10) = arg2
    return (*(*arg1 + 0x10))()
}
