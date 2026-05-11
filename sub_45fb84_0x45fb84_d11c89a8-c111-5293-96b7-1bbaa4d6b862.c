// ============================================================
// 函数名称: sub_45fb84
// 虚拟地址: 0x45fb84
// WARP GUID: d11c89a8-c111-5293-96b7-1bbaa4d6b862
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45fd34, sub_4600bc, sub_46002c
// ============================================================

int32_t __convention("regparm")sub_45fb84(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_14 = ecx
    int32_t* edi = arg1[5]
    char* ebx = *edi
    int32_t esi = edi[1]
    uint32_t i_1
    
    while (true)
        if (esi == 0)
            if (edi[3](arg1) == 0)
                return 0
            
            ebx = *edi
            esi = edi[1]
        
        uint32_t ebp_1 = zx.d(*ebx)
        ebx = &ebx[1]
        esi -= 1
        
        if (ebp_1 != 0xff)
            uint32_t i
            
            do
                void* edx_1 = *(arg1 + 0x1aa)
                *(edx_1 + 0x5c) += 1
                *edi = ebx
                edi[1] = esi
                
                if (esi == 0)
                    if (edi[3](arg1) == 0)
                        return 0
                    
                    ebx = *edi
                    esi = edi[1]
                
                i = zx.d(*ebx)
                ebx = &ebx[1]
                esi -= 1
            while (i != 0xff)
        
        do
            if (esi == 0)
                if (edi[3](arg1) == 0)
                    return 0
                
                ebx = *edi
                esi = edi[1]
            
            i_1 = zx.d(*ebx)
            ebx = &ebx[1]
            esi -= 1
        while (i_1 == 0xff)
        
        if (i_1 != 0)
            break
        
        void* edx_2 = *(arg1 + 0x1aa)
        *(edx_2 + 0x5c) += 2
        *edi = ebx
        edi[1] = esi
    
    if (*(*(arg1 + 0x1aa) + 0x5c) != 0)
        void* eax_11 = *arg1
        *(eax_11 + 0x14) = 0x70
        *(eax_11 + 0x18) = *(*(arg1 + 0x1aa) + 0x5c)
        *(eax_11 + 0x1c) = i_1
        (*(*arg1 + 4))(arg1)
        *(*(arg1 + 0x1aa) + 0x5c) = 0
    
    *(arg1 + 0x192) = i_1
    *edi = ebx
    edi[1] = esi
    return 1
}
