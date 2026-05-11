// ============================================================
// 函数名称: sub_424338
// 虚拟地址: 0x424338
// WARP GUID: ea8437e2-ef05-53c0-86eb-fc93f00259bb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42e994, sub_42e8c0
// [被调用的父级函数]: sub_424c48
// ============================================================

void* __convention("regparm")sub_424338(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* ebx_1
    void* ebx_1
    void* esi_1
    ebx_1, esi_1 = sub_42e994(arg1, arg2)
    sub_42e8c0(sub_4243ec, esi_1)
    int32_t edx_2
    edx_2.b = *(ebx_1 + 0x1f4)
    int32_t eax_4 = *(esi_1 + 4) | 0xc0 | *((edx_2 << 2) + &data_52e67c)
    edx_2.b = *(ebx_1 + 0x1f5) != 0
    int32_t edx_4
    edx_4.b = *(ebx_1 + 0x1f6)
    int32_t edx_5
    edx_5.b = *(ebx_1 + 0x1fb)
    int32_t edx_6
    edx_6.b = *(ebx_1 + 0x1f9)
    int32_t edx_7
    edx_7.b = *(ebx_1 + 0x1fa)
    int32_t eax_9 = eax_4 | *(((edx_2 & 0x7f) << 2) + &data_52e694) | *((edx_4 << 2) + &data_52e69c)
        | *((edx_5 << 2) + &data_52e6a4) | *((edx_6 << 2) + &data_52e6b0)
        | *((edx_7 << 2) + &data_52e6b8)
    *(esi_1 + 4) = eax_9
    void* result = data_53040c
    
    if (*result != 0 && *(ebx_1 + 0x138) != 0 && *(ebx_1 + 0x1f4) == 1)
        *(esi_1 + 4) &= 0xff7fffff
        *(esi_1 + 8) |= 0x200
    
    return result
}
