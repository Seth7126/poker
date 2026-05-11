// ============================================================
// 函数名称: sub_437b9c
// 虚拟地址: 0x437b9c
// WARP GUID: 5f444073-14bd-5b82-ac37-588fe46029ef
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_410524
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_437b9c(void* arg1)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    void* esi = arg1
    *(esi + 0x4c) = 1
    
    if (*(esi + 0x50) s> 0)
        return 
    
    arg1 = *(esi + 0x40)
    
    if (arg1 != 0)
        int32_t edi_2 = *(arg1 + 8) - 1
        
        if (edi_2 s>= 0)
            int32_t i_1 = edi_2 + 1
            int32_t ebp_1 = 0
            int32_t i
            
            do
                ebx.w = 0xffff
                sub_4032ac(sub_410524(*(esi + 0x40), ebp_1))
                ebp_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    if (*(esi + 0x5a) != 0)
        *(esi + 0x5c)
        (*(esi + 0x58))()
}
