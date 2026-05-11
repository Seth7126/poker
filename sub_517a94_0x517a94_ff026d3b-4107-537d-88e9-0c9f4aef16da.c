// ============================================================
// 函数名称: sub_517a94
// 虚拟地址: 0x517a94
// WARP GUID: ff026d3b-4107-537d-88e9-0c9f4aef16da
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_517b0c
// [被调用的父级函数]: sub_4bca48, sub_4c02cc, sub_4bdac0, sub_4bf070
// ============================================================

void __convention("regparm")sub_517a94(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    int32_t i_1 = sx.d(*(arg1 + 0x100))
    
    if (i_1 s<= 0)
        return 
    
    int32_t esi_1 = 1
    void* edx = arg1
    int32_t i
    
    do
        ebx.b = *edx
        
        if (ebx.b == arg2.b)
            ebx.b = *(edx + 1)
            
            if (ebx.b == arg2:1.b)
                sub_517b0c(arg1, esi_1)
                break
        
        esi_1 += 1
        edx += 4
        i = i_1
        i_1 -= 1
    while (i != 1)
}
