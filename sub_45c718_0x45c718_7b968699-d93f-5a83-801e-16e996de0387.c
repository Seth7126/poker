// ============================================================
// 函数名称: sub_45c718
// 虚拟地址: 0x45c718
// WARP GUID: 7b968699-d93f-5a83-801e-16e996de0387
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45c670
// ============================================================

int32_t* __stdcallsub_45c718(void* arg1 @ eax, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: void* ebx = *(arg1 + 0x1a2)
    void* ebx = *(arg1 + 0x1a2)
    int32_t eax_3 = arg2 - *arg3
    int32_t ecx_1 = *(ebx + 0x10)
    
    if (eax_3 u> ecx_1)
        eax_3 = ecx_1
    
    int32_t var_10 = 0
    (*(*(arg1 + 0x1b6) + 4))(eax_3, &var_10, *(ebx + 0xc), arg5)
    *(ebx + 0xc)
    *arg3
    (*(*(arg1 + 0x1be) + 4))(var_10)
    *arg3 += var_10
    return arg3
}
