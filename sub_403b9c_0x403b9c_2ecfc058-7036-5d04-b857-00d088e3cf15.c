// ============================================================
// 函数名称: sub_403b9c
// 虚拟地址: 0x403b9c
// WARP GUID: 2ecfc058-7036-5d04-b857-00d088e3cf15
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_405570
// [被调用的父级函数]: sub_403c20
// ============================================================

void*sub_403b9c()
{
    // 第一条实际指令: uint32_t i = data_531038
    uint32_t i = data_531038
    char* ebx = "  at 00000000"
    
    do
        int32_t edx_1 = 0
        char temp1_1 = (modu.dp.d(edx_1:i, 0xa)).b
        i = divu.dp.d(edx_1:i, 0xa)
        *ebx = temp1_1 + 0x30
        ebx -= 1
    while (i != 0)
    
    void* eax_1 = sub_405570(data_531040)
    void* i_1 = data_531040 - eax_1
    char* ebx_1 = "0"
    
    do
        void* edx_6
        edx_6.b = *((i_1 & 0xf)
            + "0123456789ABCDEF                                                                \r\n")
        *ebx_1 = edx_6.b
        ebx_1 -= 1
        i_1 u>>= 4
    while (i_1 != 0)
    
    return i_1
}
