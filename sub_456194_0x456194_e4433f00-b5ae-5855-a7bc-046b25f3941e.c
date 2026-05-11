// ============================================================
// 函数名称: sub_456194
// 虚拟地址: 0x456194
// WARP GUID: e4433f00-b5ae-5855-a7bc-046b25f3941e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45638c, sub_4560cc
// ============================================================

int32_t __convention("regparm")sub_456194(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x10) != 0xcc)
    if (*(arg1 + 0x10) != 0xcc)
        (**(arg1 + 0x196))()
        *(arg1 + 0x88) = 0
        *(arg1 + 0x10) = 0xcc
    
    while (*(*(arg1 + 0x196) + 8) != 0)
        while (true)
            int32_t edx_5 = *(arg1 + 0x88)
            
            if (edx_5 u>= *(arg1 + 0x70))
                (*(*(arg1 + 0x196) + 4))()
                (**(arg1 + 0x196))()
                *(arg1 + 0x88) = 0
                break
            
            void* eax_1 = *(arg1 + 8)
            
            if (eax_1 != 0)
                *(eax_1 + 4) = edx_5
                *(eax_1 + 8) = *(arg1 + 0x70)
                (**(arg1 + 8))()
            
            int32_t esi_1 = *(arg1 + 0x88)
            (*(*(arg1 + 0x19a) + 4))(0)
            
            if (esi_1 == *(arg1 + 0x88))
                return 0
    
    int32_t edx_8 = 0xce
    
    if (*(arg1 + 0x40) == 0)
        edx_8 = 0xcd
    
    *(arg1 + 0x10) = edx_8
    return 1
}
