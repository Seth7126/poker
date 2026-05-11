// ============================================================
// 函数名称: sub_453718
// 虚拟地址: 0x453718
// WARP GUID: 41c38e55-8733-5e16-b053-097c672a8039
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_402b58, sub_4032ac, sub_40faac
// [被调用的父级函数]: sub_453830, sub_453acc
// ============================================================

void* __convention("regparm")sub_453718(void* arg1)
{
    // 第一条实际指令: void* result = *(arg1 + 8)
    void* result = *(arg1 + 8)
    
    if (result != 0 && *(result + 0x14) != 0)
        void* result_1 = result
        uint32_t eax = GetTickCount()
        result = *(result_1 + 0x20)
        
        if (eax - result s>= 0x1f4)
            *(result_1 + 0x20) = eax
            
            if (result != 0)
                void var_1c
                int32_t var_10
                
                if (*(arg1 + 0xc) == 0)
                    sub_40faac(0, 0, 0, &var_1c, 0)
                else
                    sub_40faac(*(arg1 + 0x6c), *(result_1 + 0x24), 0, &var_1c, *(arg1 + 0x88))
                    
                    if (var_10 s< *(result_1 + 0x24))
                        var_10 = *(arg1 + 0x70)
                
                int32_t ecx_4
                int16_t x87control
                result, ecx_4 = sub_402b58(x87control, 
                    (float.t(*(result_1 + 4)) / float.t(*(result_1 + 8)) + float.t(*(result_1 + 0xc)))
                        * fconvert.t(100f) / float.t(*(result_1 + 0x10)))
                
                if (result != *(result_1 + 0x1c))
                    *(result_1 + 0x1c) = result
                    
                    if (*(arg1 + 0xc) != 0)
                        *(result_1 + 0x24) = *(arg1 + 0x88)
                    
                    int32_t var_18
                    int32_t eax_5
                    eax_5.b = var_10 - var_18 s>= 4
                    ecx_4.b = 1
                    int32_t* esi_1 = *(result_1 + 0x14)
                    result_1.w = 0xfffd
                    return sub_4032ac(esi_1, esi_1, ecx_4, 0, &var_1c, eax_5, result)
    
    return result
}
