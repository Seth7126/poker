// ============================================================
// 函数名称: sub_459b60
// 虚拟地址: 0x459b60
// WARP GUID: 32d64e29-8574-5434-99fb-40fc90362481
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_459290, sub_4590dc, sub_459a30
// [被调用的父级函数]: sub_456790
// ============================================================

int32_t* __convention("regparm")sub_459b60(int32_t* arg1)
{
    // 第一条实际指令: void* (__convention("regparm")** eax_1)(int32_t* arg1) = (*arg1[1])()
    void* (__convention("regparm")** eax_1)(int32_t* arg1) = (*arg1[1])()
    *(arg1 + 0x1be) = eax_1
    *eax_1 = sub_459a70
    eax_1[2] = sub_459b4c
    eax_1[3] = sub_459b50
    eax_1[0x11] = 0
    eax_1[0xd] = 0
    
    if (arg1[0x1d] s> 4)
        void* eax_2 = *arg1
        *(eax_2 + 0x14) = 0x36
        *(eax_2 + 0x18) = 4
        (**arg1)()
    
    if (arg1[0x17] s> 0x100)
        void* eax_4 = *arg1
        *(eax_4 + 0x14) = 0x38
        *(eax_4 + 0x18) = 0x100
        (**arg1)()
    
    sub_4590dc(arg1)
    sub_459290(arg1)
    
    if (arg1[0x15] != 2)
        return arg1
    
    return sub_459a30(arg1)
}
