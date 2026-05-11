// ============================================================
// 函数名称: sub_464bd8
// 虚拟地址: 0x464bd8
// WARP GUID: 045073d3-5108-581d-951a-03e393df1874
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_464d6c, sub_464c08
// ============================================================

int32_t __convention("regparm")sub_464bd8(void* arg1)
{
    // 第一条实际指令: int32_t* esi = *(*(arg1 + 0x20) + 0x14)
    int32_t* esi = *(*(arg1 + 0x20) + 0x14)
    
    if (esi[3]() == 0)
        int32_t* eax_2 = *(arg1 + 0x20)
        *(*eax_2 + 0x14) = 0x16
        (**eax_2)()
    
    *(arg1 + 0x10) = *esi
    int32_t result = esi[1]
    *(arg1 + 0x14) = result
    return result
}
