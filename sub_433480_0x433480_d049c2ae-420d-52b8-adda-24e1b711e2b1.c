// ============================================================
// 函数名称: sub_433480
// 虚拟地址: 0x433480
// WARP GUID: d049c2ae-420d-52b8-adda-24e1b711e2b1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_433384, sub_433370
// [被调用的父级函数]: sub_433b34, sub_433ab0, sub_4336a8, sub_4351dc, sub_433f3c, sub_433528, sub_4333cc
// ============================================================

int32_t __convention("regparm")sub_433480(void* arg1, char arg2)
{
    // 第一条实际指令: if (arg1 != *(*(arg1 + 0x1c) + 0x64))
    if (arg1 != *(*(arg1 + 0x1c) + 0x64))
        void* esi_1 = *(*(arg1 + 0x1c) + 0x64)
        int32_t eax_3
        
        if (esi_1 == *(arg1 + 0x14) && *(arg1 + 4) != 0)
            eax_3 = sub_433370(esi_1)
        
        if (esi_1 != *(arg1 + 0x14) || *(arg1 + 4) == 0 || eax_3 != 1)
            void* i_1
            
            for (void* i = arg1; i != *(*(arg1 + 0x1c) + 0x64); i = i_1)
                i_1 = *(i + 0x14)
                
                if (arg2 == *(i_1 + 0x10))
                    int32_t eax_14 = sub_433384(i)
                    return *(i + 0x20) - eax_14
            
            void* eax_17 = *(arg1 + 0x1c)
            void* edx_2 = *(eax_17 + 0x64)
            
            if (arg2 != *(edx_2 + 0x10))
                return *(edx_2 + 0x20)
            
            return *(eax_17 + 0x68)
    
    (*(**(*(arg1 + 0x1c) + 0x14) + 0x40))()
    (*(**(*(arg1 + 0x1c) + 0x14) + 0x84))()
    int32_t var_1c
    int32_t var_14
    
    if (arg2 != 1)
        return var_14 - var_1c
    int32_t var_18
    int32_t var_10
    return var_10 - var_18
}
