// ============================================================
// 函数名称: sub_436850
// 虚拟地址: 0x436850
// WARP GUID: d3348ba2-9a46-5893-8394-1cf37754274f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_440de8, sub_410524, sub_4032ac, sub_4391cc
// [被调用的父级函数]: sub_44695c
// ============================================================

int32_t __convention("regparm")sub_436850(void* arg1, void* arg2)
{
    // 第一条实际指令: char ebx = sub_440de8(*(arg2 + 8)).b
    char ebx = sub_440de8(*(arg2 + 8)).b
    int16_t eax_2 = sub_4391cc(*(arg2 + 4), ebx)
    int32_t esi_2 = *(*(arg1 + 0x24) + 8) - 1
    
    if (esi_2 s>= 0)
        int32_t i_1 = esi_2 + 1
        int32_t ebx_1 = 0
        int32_t i
        
        do
            if (eax_2 == *(sub_410524(*(arg1 + 0x24), ebx_1) + 0x68))
                int32_t* eax_7 = sub_410524(*(arg1 + 0x24), ebx_1)
                ebx_1.w = 0xfff0
                return sub_4032ac(eax_7)
            
            ebx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return 0
}
