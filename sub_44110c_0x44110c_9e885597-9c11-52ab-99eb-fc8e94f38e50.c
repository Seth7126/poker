// ============================================================
// 函数名称: sub_44110c
// 虚拟地址: 0x44110c
// WARP GUID: 9e885597-9c11-52ab-99eb-fc8e94f38e50
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_420b80
// [被调用的父级函数]: sub_441174
// ============================================================

void __convention("regparm")sub_44110c(void* arg1, void* arg2)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    
    if (*(ebx + 0x47) == 0)
        return 
    
    arg1.b = *(ebx + 0x4b)
    char temp0_1 = arg1.b
    arg1.b -= 2
    
    if (temp0_1 u< 2)
        if (*(ebx + 0x4b) != 1)
            arg1.b = 0xa
            arg1.b = 0xa & *(ebx + 0x51)
        
        if (*(ebx + 0x4b) == 1 || 2 == arg1.b)
            *(arg2 - 4) = sub_420b80(*(arg2 - 4), *(*(arg2 - 8) + 0xc) + *(ebx + 0x34) + *(ebx + 0x3c))
    else if (temp0_1 == 2)
        *(arg2 - 0xc) += *(ebx + 0x3c)
}
