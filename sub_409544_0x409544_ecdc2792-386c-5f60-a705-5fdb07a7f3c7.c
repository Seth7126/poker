// ============================================================
// 函数名称: sub_409544
// 虚拟地址: 0x409544
// WARP GUID: ecdc2792-386c-5f60-a705-5fdb07a7f3c7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40c150
// ============================================================

void* __convention("regparm")sub_409544(char* arg1, char* arg2)
{
    // 第一条实际指令: if (arg1 != 0 && arg2 != 0)
    if (arg1 != 0 && arg2 != 0)
        char* edi_1 = arg2
        char* eax
        eax.b = 0
        int32_t i = 0xffffffff
        
        while (i != 0)
            bool cond:0_1 = 0 != *edi_1
            edi_1 = &edi_1[1]
            i -= 1
            
            if (not(cond:0_1))
                break
        
        int32_t ecx_1 = not.d(i)
        
        if (ecx_1 != 1)
            char* edi_2 = arg1
            int32_t i_1 = 0xffffffff
            
            while (i_1 != 0)
                bool cond:1_1 = 0 != *edi_2
                edi_2 = &edi_2[1]
                i_1 -= 1
                
                if (not(cond:1_1))
                    break
            
            int32_t ecx_3 = not.d(i_1)
            char* i_2 = ecx_3 - (ecx_1 - 1)
            bool cond:3_1 = ecx_3 != ecx_1 - 1
            bool cond:5_1 = ecx_3 != ecx_1 - 1
            
            if (ecx_3 u> ecx_1 - 1)
                char* edi_3 = arg1
                
                while (true)
                    eax.b = *arg2
                    void* esi_3 = &arg2[1]
                    
                    while (i_2 != 0)
                        char temp2_1 = *edi_3
                        cond:3_1 = eax.b != temp2_1
                        cond:5_1 = eax.b != temp2_1
                        edi_3 = &edi_3[1]
                        i_2 -= 1
                        
                        if (eax.b == temp2_1)
                            break
                    
                    if (cond:5_1)
                        break
                    
                    char* var_10_1 = edi_3
                    int32_t i_3 = ecx_1 - 2
                    
                    while (i_3 != 0)
                        char temp3_1 = *esi_3
                        char temp4_1 = *edi_3
                        cond:3_1 = temp3_1 != temp4_1
                        cond:5_1 = temp3_1 != temp4_1
                        esi_3 += 1
                        edi_3 = &edi_3[1]
                        i_3 -= 1
                        
                        if (temp3_1 != temp4_1)
                            break
                    
                    edi_3 = var_10_1
                    
                    if (not(cond:3_1))
                        return &edi_3[0xffffffff]
    
    return nullptr
}
