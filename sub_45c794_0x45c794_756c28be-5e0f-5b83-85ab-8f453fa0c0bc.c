// ============================================================
// 函数名称: sub_45c794
// 虚拟地址: 0x45c794
// WARP GUID: 756c28be-5e0f-5b83-85ab-8f453fa0c0bc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45c670
// ============================================================

int32_t __stdcallsub_45c794(void* arg1 @ eax, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: void* ebx = *(arg1 + 0x1a2)
    void* ebx = *(arg1 + 0x1a2)
    
    if (*(ebx + 0x18) == 0)
        *(ebx + 0x14)
        *(ebx + 8)
        *(ebx + 0xc) = (*(*(arg1 + 4) + 0x1c))(1, *(ebx + 0x10))
    
    int32_t eax_3 = *(ebx + 0x18)
    (*(*(arg1 + 0x1b6) + 4))(*(ebx + 0x10), ebx + 0x18, *(ebx + 0xc), arg3)
    int32_t eax_6 = *(ebx + 0x18)
    
    if (eax_6 u> eax_3)
        int32_t eax_7 = eax_6 - eax_3
        *(ebx + 0xc)
        (*(*(arg1 + 0x1be) + 4))(eax_7)
        *arg2 += eax_7
    
    int32_t result = *(ebx + 0x10)
    
    if (result u<= *(ebx + 0x18))
        *(ebx + 0x14) += result
        *(ebx + 0x18) = 0
    
    return result
}
