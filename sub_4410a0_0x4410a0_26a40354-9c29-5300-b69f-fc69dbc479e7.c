// ============================================================
// 函数名称: sub_4410a0
// 虚拟地址: 0x4410a0
// WARP GUID: 26a40354-9c29-5300-b69f-fc69dbc479e7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_420b80
// [被调用的父级函数]: sub_441174
// ============================================================

void __convention("regparm")sub_4410a0(void* arg1, void* arg2)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    
    if (*(ebx + 0x47) == 0)
        return 
    
    arg1.b = *(ebx + 0x4b)
    char temp0_1 = arg1.b
    arg1.b -= 1
    char temp1_1
    
    if (temp0_1 u>= 1)
        temp1_1 = arg1.b
        arg1.b -= 2
    
    if (temp0_1 u< 1 || temp1_1 == 2)
        if (*(ebx + 0x4b) != 3)
            arg1.b = 5
            arg1.b = 5 & *(ebx + 0x51)
        
        if (*(ebx + 0x4b) == 3 || 1 == arg1.b)
            *(arg2 - 4) = sub_420b80(*(arg2 - 4), *(*(arg2 - 8) + 0xc) + *(ebx + 0x30) + *(ebx + 0x38))
    else
        char temp2_1 = arg1.b
        arg1.b -= 1
        
        if (temp2_1 == 1)
            *(arg2 - 0xc) += *(ebx + 0x38)
}
