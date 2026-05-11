// ============================================================
// 函数名称: sub_45b208
// 虚拟地址: 0x45b208
// WARP GUID: e6b7af6e-127c-5348-a6fa-7d40512a20f2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45b3ac
// ============================================================

void* __convention("regparm")sub_45b208(void* arg1)
{
    // 第一条实际指令: void* edx = *(arg1 + 0x19a)
    void* edx = *(arg1 + 0x19a)
    int32_t i = 0
    void* var_14 = *(arg1 + 0xd4)
    
    while (*(arg1 + 0x20) s> i)
        uint32_t ebx_2 = *(var_14 + 0xc) * *(var_14 + 0x24)
        int32_t temp0_1 = divs.dp.d(sx.q(ebx_2), *(arg1 + 0x12e))
        uint32_t ecx_3 = modu.dp.d(0:(*(var_14 + 0x2c)), ebx_2)
        
        if (ecx_3 == 0)
            ecx_3 = ebx_2
        
        if (i == 0)
            *(edx + 0x48) = divs.dp.d(sx.q(ecx_3 - 1), temp0_1) + 1
        
        int32_t ebx_3 = *(*(edx + (*(edx + 0x40) << 2) + 0x38) + (i << 2))
        
        for (int32_t j = 0; j s< temp0_1 * 2; j += 1)
            *(ebx_3 + ((j + ecx_3) << 2)) = *(ebx_3 + (ecx_3 << 2) - 4)
        
        i += 1
        var_14 += 0x54
    
    return arg1
}
