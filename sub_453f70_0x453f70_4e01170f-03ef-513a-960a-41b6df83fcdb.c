// ============================================================
// 函数名称: sub_453f70
// 虚拟地址: 0x453f70
// WARP GUID: 4e01170f-03ef-513a-960a-41b6df83fcdb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetPaletteEntries
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_453ff8
// ============================================================

uint32_t __convention("regparm")sub_453f70(void* arg1, HPALETTE arg2)
{
    // 第一条实际指令: PALETTEENTRY palEntries[0x100]
    PALETTEENTRY palEntries[0x100]
    uint32_t result = GetPaletteEntries(arg2, 0, 0x100, &palEntries)
    uint32_t result_1 = result
    
    if (result_1 != 0)
        result = (*(*(arg1 + 4) + 8))(3)
        *(arg1 + 0x84) = result
        *(arg1 + 0x80) = result_1
        
        if (result_1 - 1 s>= 0)
            int32_t i_1 = result_1
            int32_t edx_1 = 0
            result = &palEntries
            int32_t i
            
            do
                int32_t* esi = *(arg1 + 0x84)
                void* ecx_2
                ecx_2.b = *result
                *(esi[2] + edx_1) = ecx_2.b
                void* ecx_3
                ecx_3.b = *(result + 1)
                *(esi[1] + edx_1) = ecx_3.b
                void* ecx_4
                ecx_4.b = *(result + 2)
                *(*esi + edx_1) = ecx_4.b
                edx_1 += 1
                result += 4
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    return result
}
