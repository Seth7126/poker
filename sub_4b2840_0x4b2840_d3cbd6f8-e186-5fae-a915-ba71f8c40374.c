// ============================================================
// 函数名称: sub_4b2840
// 虚拟地址: 0x4b2840
// WARP GUID: d3cbd6f8-e186-5fae-a915-ba71f8c40374
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42e994, sub_4b2754, sub_42e8c0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4b2840(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: sub_4b2754()
    sub_4b2754()
    void* ebx_1
    void* esi_1
    ebx_1, esi_1 = sub_42e994(arg1, arg2)
    sub_42e8c0(sub_4b28bf+1, esi_1)
    int32_t edx_2
    edx_2.b = *(ebx_1 + 0x1f0)
    int32_t edx_3
    edx_3.b = *(ebx_1 + 0x1f2)
    int32_t edx_4
    edx_4.b = *(ebx_1 + 0x1f1)
    *(esi_1 + 4) = *(esi_1 + 4) | *((edx_2 << 2) + &data_52fde8) | *((edx_3 << 2) + &data_52fdf0)
        | *((edx_4 << 2) + &data_52fdfc) | 0x40 | 0x20
    int32_t result = (*(esi_1 + 0x24) & 0xfffffffc) | 8
    *(esi_1 + 0x24) = result
    
    if (*(ebx_1 + 0x200) == 0)
        *(esi_1 + 4) |= 0x80
    
    return result
}
