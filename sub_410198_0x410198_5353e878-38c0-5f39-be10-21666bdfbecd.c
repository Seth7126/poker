// ============================================================
// 函数名称: sub_410198
// 虚拟地址: 0x410198
// WARP GUID: 5353e878-38c0-5f39-be10-21666bdfbecd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_406c44, sub_410524
// [被调用的父级函数]: sub_4102e4
// ============================================================

void*sub_410198()
{
    // 第一条实际指令: void* result = sub_406c44()
    void* result = sub_406c44()
    int32_t* edi = *(result + 8)
    int32_t ebx_1 = edi[2] - 1
    
    if (ebx_1 s>= 0)
        int32_t i_1 = ebx_1 + 1
        int32_t esi_1 = 0
        int32_t i
        
        do
            result = (*(*sub_410524(edi, esi_1) + 0xc))()
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
