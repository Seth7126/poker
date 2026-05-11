// ============================================================
// 函数名称: sub_43d360
// 虚拟地址: 0x43d360
// WARP GUID: 07cf415c-b5d3-52e9-8e70-26f947501217
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43cc28, sub_437bec, sub_415df8, sub_437c30
// [被调用的父级函数]: sub_43d39c
// ============================================================

int32_t* __convention("regparm")sub_43d360(void* arg1, void* arg2)
{
    // 第一条实际指令: void* eax = *(arg1 + 0x3c)
    void* eax = *(arg1 + 0x3c)
    
    if (eax != 0)
        sub_437bec(eax, *(arg1 + 0x38))
    
    *(arg1 + 0x3c) = arg2
    
    if (arg2 != 0)
        sub_437c30(arg2, *(arg1 + 0x38))
        sub_415df8(*(arg1 + 0x3c), arg1)
    
    return sub_43cc28(arg1)
}
