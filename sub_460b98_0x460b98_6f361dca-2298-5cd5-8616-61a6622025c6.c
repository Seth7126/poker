// ============================================================
// 函数名称: sub_460b98
// 虚拟地址: 0x460b98
// WARP GUID: 6f361dca-2298-5cd5-8616-61a6622025c6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_460b5c
// [被调用的父级函数]: sub_460be4
// ============================================================

void* __fastcallsub_460b98(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: if (arg2 s> 4)
    if (arg2 s> 4)
        return sub_460b5c(0, arg2, arg3, arg4, arg1, 0)
    
    *arg3 = arg2
    int32_t ebx_1 = 0
    void* esi_1 = &arg3[1]
    
    if (arg2 s> 0)
        do
            *esi_1 = ebx_1
            ebx_1 += 1
            esi_1 += 4
        while (arg2 s> ebx_1)
    
    arg3[6] = 0
    arg3[5] = 0
    arg3[7] = arg1
    arg3[8] = arg4
    return &arg3[9]
}
