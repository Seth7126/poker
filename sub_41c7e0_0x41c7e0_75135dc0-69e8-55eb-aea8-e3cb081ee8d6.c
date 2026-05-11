// ============================================================
// 函数名称: sub_41c7e0
// 虚拟地址: 0x41c7e0
// WARP GUID: 75135dc0-69e8-55eb-aea8-e3cb081ee8d6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41c8f4, sub_41c3a4
// [被调用的父级函数]: sub_41c820
// ============================================================

void* __convention("regparm")sub_41c7e0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg1[8] == 0)
    if (arg1[8] == 0)
        sub_41c3a4(arg1)
    
    void* result = arg1[8]
    *(result + 0x1c) = 0
    
    if (arg2 == *(result + 0xc))
        return result
    
    sub_41c8f4(arg1)
    *(arg1[8] + 0xc) = arg2
    return (*(*arg1 + 0x10))()
}
