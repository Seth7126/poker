// ============================================================
// 函数名称: sub_4c95c4
// 虚拟地址: 0x4c95c4
// WARP GUID: 9e343322-4851-572c-b7a5-a16d428cde6d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c5614, sub_4837ec, sub_4c5694, sub_4d6cdc, sub_403010, sub_4c9540, sub_4c8aa0, sub_51f880, sub_51e034
// [被调用的父级函数]: sub_525597, sub_5255a0
// ============================================================

int32_tsub_4c95c4()
{
    // 第一条实际指令: sub_4c5694()
    sub_4c5694()
    sub_4c9540()
    sub_4d6cdc(*data_530304)
    *data_5301f4
    sub_51f880()
    int32_t i_2 = 0x14
    void* eax_5 = data_5301b0 + 0x8980
    void* edx_1 = data_5302e4 + 0x8980
    int32_t i
    
    do
        __builtin_memcpy(edx_1, eax_5, 0x18)
        edx_1 += 0x8d14
        eax_5 += 0x8d14
        i = i_2
        i_2 -= 1
    while (i != 1)
    sub_4837ec(*data_530304, *data_530a74, true)
    sub_4c5614()
    *data_5301f4
    sub_51e034()
    sub_4c8aa0(0)
    *(*data_53067c + 0x1660) = *(*data_5301f4 + 0x305a4)
    int32_t i_1
    
    for (i_1 = 0; i_1 != 0xb; i_1 += 1)
        int32_t edx_6 = i_1 * 5
        bool o_1 = unimplemented  {imul edx, eax, 0x5}
        
        if (o_1)
            sub_403010()
            noreturn
        
        int32_t ecx_2 = *data_53067c
        int32_t ebx_1 = *data_5301f4
        *(ecx_2 + (edx_6 << 1) + 0x844) = *(ebx_1 + (edx_6 << 1) + 0x305a8)
        *(ecx_2 + (edx_6 << 1) + 0x848) = *(ebx_1 + (edx_6 << 1) + 0x305ac)
        int32_t esi_3
        esi_3.w = *(ebx_1 + (edx_6 << 1) + 0x305b0)
        *(ecx_2 + (edx_6 << 1) + 0x84c) = esi_3.w
    
    return i_1
}
