// ============================================================
// 函数名称: sub_4c5694
// 虚拟地址: 0x4c5694
// WARP GUID: c1843221-13fb-5e33-bda9-6689f556d09d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47a140, sub_47b304
// [被调用的父级函数]: sub_4c95c4
// ============================================================

int32_tsub_4c5694()
{
    // 第一条实际指令: void* ebx = data_530304
    void* ebx = data_530304
    void* esi = data_5301f0
    sub_47b304(*data_52ff7c, *(esi + 0x1c), *ebx, *(*data_5301f4 + 0x20088))
    sub_47b304(*data_5300dc, *(esi + 0x1c), *ebx, *(*data_5301f4 + 0x20084))
    void* eax_9
    eax_9.b = *(*data_5301f4 + 0x2008d)
    eax_9.b ^= 1
    sub_47a140(*data_5307a4, *(esi + 0x1c), *ebx, eax_9.b)
    sub_47b304(*data_530890, *(esi + 0x1c), *ebx, *(*data_5301f4 + 0x20068))
    int32_t edx_4 = *(*data_5301f4 + 0x20070)
    int32_t eax_18
    
    if (edx_4 == 0x64)
        eax_18 = 1
    else if (edx_4 != 0xc8)
        eax_18 = 3
    else
        eax_18 = 2
    
    sub_47b304(*data_53071c, *(esi + 0x1c), *ebx, eax_18)
    int32_t edx_6 = *(*data_5301f4 + 0x20074)
    int32_t eax_23
    
    if (edx_6 == 2)
        eax_23 = 1
    else if (edx_6 != 4)
        eax_23 = 3
    else
        eax_23 = 2
    
    sub_47b304(*data_530a70, *(esi + 0x1c), *ebx, eax_23)
    void* eax_27 = *data_5301f4 + 0x2006c
    int32_t eax_28
    
    if (*(eax_27 + 0x10) != 0)
        eax_28 = 2
    else if (*(eax_27 + 0x11) == 0)
        eax_28 = 3
    else
        eax_28 = 1
    
    sub_47b304(*data_530030, *(esi + 0x1c), *ebx, eax_28)
    int32_t edx_9 = *(*data_5301f4 + 0x20078)
    int32_t eax_33
    
    if (edx_9 == 0x186a0)
        eax_33 = 1
    else if (edx_9 == 7)
        eax_33 = 2
    else if (edx_9 == 0xa)
        eax_33 = 3
    else if (edx_9 == 0xf)
        eax_33 = 4
    else if (edx_9 == 0x14)
        eax_33 = 5
    else if (edx_9 != 0x19)
        eax_33 = 7
    else
        eax_33 = 6
    
    return sub_47b304(*data_5308a4, *(esi + 0x1c), *ebx, eax_33)
}
