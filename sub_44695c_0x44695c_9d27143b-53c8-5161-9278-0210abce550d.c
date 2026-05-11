// ============================================================
// 函数名称: sub_44695c
// 虚拟地址: 0x44695c
// WARP GUID: 9d27143b-53c8-5161-9278-0210abce550d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410524, sub_436850
// [被调用的父级函数]: sub_4469b0
// ============================================================

int32_tsub_44695c(void* arg1)
{
    // 第一条实际指令: void* eax_2 = *(*(arg1 - 4) + 0x2c8)
    void* eax_2 = *(*(arg1 - 4) + 0x2c8)
    
    if (eax_2 != 0)
        int32_t ebx_2 = *(eax_2 + 8) - 1
        
        if (ebx_2 s>= 0)
            int32_t i_1 = ebx_2 + 1
            int32_t esi_1 = 0
            int32_t i
            
            do
                if (sub_436850(sub_410524(*(*(arg1 - 4) + 0x2c8), esi_1), *(arg1 - 8)) != 0)
                    return 1
                
                esi_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    return 0
}
