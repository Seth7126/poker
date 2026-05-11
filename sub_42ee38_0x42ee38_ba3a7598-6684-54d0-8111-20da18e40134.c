// ============================================================
// 函数名称: sub_42ee38
// 虚拟地址: 0x42ee38
// WARP GUID: ba3a7598-6684-54d0-8111-20da18e40134
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410524, sub_42ee38
// [被调用的父级函数]: sub_443be4, sub_443288, sub_42ee98, sub_445ad4, sub_42e780, sub_445f30, sub_432c9c, sub_42ee38
// ============================================================

void __convention("regparm")sub_42ee38(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[0x53] == 0)
    if (arg1[0x53] == 0)
        return 
    
    void* eax = arg1[0x60]
    
    if (eax != 0)
        int32_t esi_2 = *(eax + 8) - 1
        
        if (esi_2 s>= 0)
            int32_t i_1 = esi_2 + 1
            int32_t edi_1 = 0
            int32_t i
            
            do
                sub_410524(arg1[0x60], edi_1)
                sub_42ee38()
                edi_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    (*(*arg1 + 0xa0))()
}
