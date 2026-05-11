// ============================================================
// 函数名称: sub_436724
// 虚拟地址: 0x436724
// WARP GUID: b9b6cb44-a921-53d2-aa5f-54eb6b99d8bc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_437bec, sub_415df8, sub_437c30
// [被调用的父级函数]: sub_436764
// ============================================================

void* __convention("regparm")sub_436724(void* arg1, void* arg2)
{
    // 第一条实际指令: void* eax = *(arg1 + 0x2c)
    void* eax = *(arg1 + 0x2c)
    
    if (eax != 0)
        sub_437bec(eax, *(arg1 + 0x28))
    
    *(arg1 + 0x2c) = arg2
    
    if (arg2 == 0)
        return arg2
    
    sub_437c30(arg2, *(arg1 + 0x28))
    return sub_415df8(*(arg1 + 0x2c), arg1)
}
