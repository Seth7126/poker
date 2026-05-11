// ============================================================
// 函数名称: sub_4479e8
// 虚拟地址: 0x4479e8
// WARP GUID: b751babf-3c43-5e9f-897d-d247fe5daeb6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4103c8, sub_4105a0, sub_4477d8, sub_44722c, sub_410524, sub_447838, sub_447240
// [被调用的父级函数]: sub_447b8c
// ============================================================

void** __convention("regparm")sub_4479e8(char arg1, void* arg2)
{
    // 第一条实际指令: void* ecx = (*(**(arg2 - 8) + 8))()
    void* ecx = (*(**(arg2 - 8) + 8))()
    
    if (*(arg2 - 0xc) != 0 && *(*(arg2 - 0xc) + 0x24) == 0 && (*(*(arg2 - 0xc) + 0x20) & 0x10) == 0
            && *(*(arg2 - 0xc) + 0x47) != 0)
        void* eax_10
        eax_10.b = *(*(arg2 - 0xc) + 0x4b)
        
        if (eax_10.b == arg1 && *(*(arg2 - 0xc) + 0x213) != 1)
            ecx = sub_4103c8(*(arg2 - 8), *(arg2 - 0xc))
    
    int32_t edi_1 = sub_447240(*(arg2 - 0x10)) - 1
    
    if (edi_1 s>= 0)
        int32_t i_2 = edi_1 + 1
        int32_t var_c_1 = 0
        int32_t i
        
        do
            void* ebx_1 = sub_44722c(*(arg2 - 0x10), var_c_1)
            
            if (*(ebx_1 + 0x24) == 0)
                void* eax_21
                eax_21.b = *(ebx_1 + 0x4b)
                
                if (eax_21.b == arg1 && (*(ebx_1 + 0x20) & 0x10) == 0 && *(ebx_1 + 0x47) != 0
                        && *(ebx_1 + 0x213) != 1 && ebx_1 != *(arg2 - 0xc))
                    int32_t j
                    
                    for (j = 0; j s< *(*(arg2 - 8) + 8); j += 1)
                        ecx.b = arg1
                        char eax_29
                        eax_29, ecx = sub_4477d8(ebx_1, sub_410524(*(arg2 - 8), j), ecx)
                        
                        if (eax_29 != 0)
                            break
                    
                    ecx = sub_4105a0(*(arg2 - 8), j, ebx_1)
            
            var_c_1 += 1
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    void** result = *(arg2 - 8)
    int32_t edi_3 = result[2] - 1
    
    if (edi_3 s>= 0)
        int32_t i_3 = edi_3 + 1
        int32_t var_c_2 = 0
        int32_t i_1
        
        do
            int32_t edx_6
            edx_6.b = arg1
            result = sub_447838(sub_410524(*(arg2 - 8), var_c_2), edx_6.b, ecx)
            ecx = arg2
            var_c_2 += 1
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    return result
}
