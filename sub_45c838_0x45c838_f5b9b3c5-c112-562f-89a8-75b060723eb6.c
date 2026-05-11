// ============================================================
// 函数名称: sub_45c838
// 虚拟地址: 0x45c838
// WARP GUID: f5b9b3c5-c112-562f-89a8-75b060723eb6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45c670
// ============================================================

int32_t __stdcallsub_45c838(void* arg1 @ eax, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* ebx = *(arg1 + 0x1a2)
    
    if (*(ebx + 0x18) == 0)
        *(ebx + 0x14)
        *(ebx + 8)
        *(ebx + 0xc) = (*(*(arg1 + 4) + 0x1c))(0, *(ebx + 0x10))
    
    int32_t eax_6 = arg2 - *arg3
    int32_t esi_3 = *(ebx + 0x10) - *(ebx + 0x18)
    
    if (eax_6 u< esi_3)
        esi_3 = eax_6
    
    int32_t eax_9 = *(arg1 + 0x70) - *(ebx + 0x14)
    
    if (eax_9 u< esi_3)
        esi_3 = eax_9
    
    *arg3
    *(ebx + 0xc)
    (*(*(arg1 + 0x1be) + 4))(esi_3)
    *arg3 += esi_3
    *(ebx + 0x18) += esi_3
    int32_t result = *(ebx + 0x10)
    
    if (result u<= *(ebx + 0x18))
        *(ebx + 0x14) += result
        *(ebx + 0x18) = 0
    
    return result
}
