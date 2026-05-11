// ============================================================
// 函数名称: sub_45c8d0
// 虚拟地址: 0x45c8d0
// WARP GUID: 680d0b37-43f6-5618-ac3d-e5191e5f14d1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_460254
// [被调用的父级函数]: sub_456790
// ============================================================

int32_t __convention("regparm")sub_45c8d0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_10 = ecx
    void (__convention("regparm")** eax_1)(int32_t* arg1, int32_t arg2) = (**(arg1 + 4))(arg2)
    int32_t result = 0
    *(arg1 + 0x1a2) = eax_1
    *eax_1 = sub_45c670
    eax_1[2] = 0
    eax_1[3] = 0
    
    if (*(arg1 + 0x50) != 0)
        int32_t edi_1 = *(arg1 + 0x12a)
        eax_1[4] = edi_1
        
        if (arg2 == 0)
            *(arg1 + 0x6c)
            *(arg1 + 0x74)
            result = (*(*(arg1 + 4) + 8))(eax_1[4])
            eax_1[3] = result
        else
            int32_t eax_3 = *(arg1 + 0x6c) * *(arg1 + 0x74)
            int32_t eax_5 = sub_460254(*(arg1 + 0x70), edi_1)
            result = (*(*(arg1 + 4) + 0x10))(eax_1[4], eax_5, eax_3)
            eax_1[2] = result
    
    return result
}
