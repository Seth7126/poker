// ============================================================
// 函数名称: sub_455fc0
// 虚拟地址: 0x455fc0
// WARP GUID: b5405e3a-e221-5509-8606-f1a1ed9c950e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_453420
// [被调用的父级函数]: sub_456030, sub_456060
// ============================================================

int32_t __convention("regparm")sub_455fc0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ebx = arg1[5]
    int32_t* ebx = arg1[5]
    int32_t eax_1 = sub_453420(ebx[8], 1, 0x1000, ebx[7])
    
    if (eax_1 u<= 0)
        if (ebx[9] != 0)
            *(*arg1 + 0x14) = 0x29
            (**arg1)()
        
        *(*arg1 + 0x14) = 0x74
        (*(*arg1 + 4))()
        char* eax_4 = ebx[8]
        *eax_4 = 0xff
        eax_4[1] = 0xd9
        eax_1 = 2
    
    *ebx = ebx[8]
    ebx[1] = eax_1
    ebx[9] = 0
    return 1
}
