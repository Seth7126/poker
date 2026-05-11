// ============================================================
// 函数名称: sub_440bfc
// 虚拟地址: 0x440bfc
// WARP GUID: a2336220-2087-538b-8c7e-bc9f1737aff4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: VirtualAlloc
// [内部子函数调用]: sub_440bf4, sub_402980
// [被调用的父级函数]: sub_4445ed, sub_440cb8, sub_42d8f4, sub_4481cc
// ============================================================

int32_t __stdcallsub_440bfc(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: if (data_5317e8 == 0)
    if (data_5317e8 == 0)
        int32_t* eax_1 = VirtualAlloc(nullptr, 0x1000, MEM_COMMIT, PAGE_EXECUTE_READWRITE)
        *eax_1 = data_5317e4
        sub_402980(0x52e994, &eax_1[1], 2)
        *(eax_1 + 6) = sub_440bf4(eax_1 + 5, sub_440bd4)
        void* ebx_1 = eax_1 + 0xa
        
        do
            *ebx_1 = 0xe8
            *(ebx_1 + 1) = sub_440bf4(ebx_1, &eax_1[1])
            *(ebx_1 + 5) = data_5317e8
            data_5317e8 = ebx_1
            ebx_1 += 0xd
        while (ebx_1 - eax_1 s< 0xffc)
        
        data_5317e4 = eax_1
    
    int32_t result = data_5317e8
    void* ebx_2 = data_5317e8
    data_5317e8 = *(ebx_2 + 5)
    *(ebx_2 + 5) = arg1
    *(ebx_2 + 9) = arg2
    return result
}
