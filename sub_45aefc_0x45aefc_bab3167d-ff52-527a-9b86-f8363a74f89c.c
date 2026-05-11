// ============================================================
// 函数名称: sub_45aefc
// 虚拟地址: 0x45aefc
// WARP GUID: bab3167d-ff52-527a-9b86-f8363a74f89c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45b4f4
// ============================================================

void* __convention("regparm")sub_45aefc(void* arg1)
{
    // 第一条实际指令: void* eax = *(arg1 + 0x19a)
    void* eax = *(arg1 + 0x19a)
    int32_t edx = *(arg1 + 0x12e)
    int32_t eax_2 = (**(arg1 + 4))(eax)
    *(eax + 0x38) = eax_2
    *(eax + 0x3c) = eax_2 + (*(arg1 + 0x20) << 2)
    int32_t i = 0
    void* result = *(arg1 + 0xd4)
    void* result_1 = result
    
    while (i s< *(arg1 + 0x20))
        int32_t temp0_1 = divs.dp.d(sx.q(*(result_1 + 0xc) * *(result_1 + 0x24)), *(arg1 + 0x12e))
        void* eax_10 = (**(arg1 + 4))() + (temp0_1 << 2)
        *(*(eax + 0x38) + (i << 2)) = eax_10
        result = eax_10 + (((edx + 4) * temp0_1) << 2)
        *(*(eax + 0x3c) + (i << 2)) = result
        i += 1
        result_1 += 0x54
    
    return result
}
