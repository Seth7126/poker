// ============================================================
// 函数名称: sub_41a420
// 虚拟地址: 0x41a420
// WARP GUID: 2b6796ef-f422-5f65-8e27-926f7556a641
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetSystemInfo
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41a628, sub_41a6cc
// ============================================================

uint32_t __convention("regparm")sub_41a420(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: SYSTEM_INFO systemInfo
    SYSTEM_INFO systemInfo
    uint32_t result = GetSystemInfo(&systemInfo)
    int32_t ecx_1 = arg2 - 1
    
    if (arg2 - 1 s>= 0)
        if (systemInfo.wProcessorLevel == 3)
            int32_t temp2_1
            
            do
                int32_t eax_2 = *(arg1 + (ecx_1 << 2))
                int32_t ebx_1
                ebx_1:1.b = eax_2.b
                ebx_1.b = eax_2:1.b
                result = eax_2 u>> 0x10
                int32_t ebx_2
                ebx_2.b = result.b
                *(arg1 + (ecx_1 << 2)) = ebx_2
                temp2_1 = ecx_1
                ecx_1 -= 1
            while (temp2_1 - 1 s>= 0)
        else
            int32_t temp1_1
            
            do
                result = _bswap(*(arg1 + (ecx_1 << 2))) u>> 8
                *(arg1 + (ecx_1 << 2)) = result
                temp1_1 = ecx_1
                ecx_1 -= 1
            while (temp1_1 - 1 s>= 0)
    
    return result
}
