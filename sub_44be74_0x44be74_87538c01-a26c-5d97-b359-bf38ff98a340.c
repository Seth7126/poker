// ============================================================
// 函数名称: sub_44be74
// 虚拟地址: 0x44be74
// WARP GUID: 87538c01-a26c-5d97-b359-bf38ff98a340
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42e994
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_44be74(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* ebx_1
    void* ebx_1
    void* esi_1
    ebx_1, esi_1 = sub_42e994(arg1, arg2)
    int32_t eax_1
    eax_1.b = *(ebx_1 + 0x204)
    *(esi_1 + 4) |= *((eax_1 << 2) + &data_52eab4)
    void* result = data_53040c
    
    if (*result != 0 && *(ebx_1 + 0x138) != 0 && *(ebx_1 + 0x204) == 1)
        *(esi_1 + 4) &= 0xff7fffff
        *(esi_1 + 8) |= 0x200
    
    *(esi_1 + 0x24) &= 0xfffffffc
    return result
}
