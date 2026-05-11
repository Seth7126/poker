// ============================================================
// 函数名称: sub_4ab224
// 虚拟地址: 0x4ab224
// WARP GUID: b5ea5994-41dd-56e1-a7f3-87d3e58177b4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4ab3e8, sub_403e4c, sub_4ab4f8
// [被调用的父级函数]: sub_4ab014, sub_4ab06a
// ============================================================

int32_tsub_4ab224()
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    edx.b = 1
    char** eax_1
    void* ebx_1
    eax_1, ebx_1 = sub_4ab3e8(sub_4a9d19+0x1f, edx)
    *(ebx_1 + 0x78) = eax_1
    eax_1[0xd] = ebx_1
    sub_403e4c(&eax_1[2], *(*(ebx_1 + 0x7c) + 4))
    sub_403e4c(&eax_1[3], *(*(ebx_1 + 0x7c) + 8))
    sub_403e4c(&eax_1[4], *(*(ebx_1 + 0x7c) + 0xc))
    eax_1[5] = *(*(ebx_1 + 0x7c) + 0x14)
    void* eax_7
    eax_7.b = *(*(ebx_1 + 0x7c) + 0x18)
    eax_1[6].b = eax_7.b
    sub_403e4c(&eax_1[7], *(*(ebx_1 + 0x7c) + 0x1c))
    sub_403e4c(&eax_1[8], *(*(ebx_1 + 0x7c) + 0x20))
    
    if (*(ebx_1 + 0x9a) == 0)
        *(eax_1 + 0x29) = 0
    else
        *(eax_1 + 0x29) = 1
    
    if (*(ebx_1 + 0x8a) == 0)
        eax_1[0xa].b = 0
    else
        eax_1[0xa].b = 1
    
    void* eax_10
    eax_10.b = *(*(ebx_1 + 0x7c) + 0x10)
    eax_1[1].b = eax_10.b
    void* eax_11
    eax_11.b = *(*(ebx_1 + 0x7c) + 0x11)
    *(eax_1 + 5) = eax_11.b
    return sub_4ab4f8(*(ebx_1 + 0x78), 0)
}
