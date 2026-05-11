// ============================================================
// 函数名称: sub_402c90
// 虚拟地址: 0x402c90
// WARP GUID: ab841dcf-aa4c-5e9b-ab7b-376f693a441d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_47b5b8, sub_47a5fc, sub_4d6668, sub_4fb834, sub_47c160, sub_47a2ac, sub_484e24, sub_47a46c, sub_4d78f8, sub_490a14, sub_4c8aa0, sub_484c8c, sub_46d9ac, sub_50f7b8, sub_477368, sub_483f98, sub_483d54, sub_403668, sub_488509, sub_46d99f, sub_50928c, sub_497d17, sub_483128
// ============================================================

void __convention("regparm")sub_402c90(int32_t* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_c = arg3
    int32_t var_c = arg3
    uint32_t esi_1 = arg3 u>> 2
    
    if (esi_1 == 0)
    label_402cc1:
        int32_t esi_4 = var_c & 3
        
        if (esi_4 != 0)
            arg3.b = *arg1
            
            if (arg3.b == *arg2)
                if (esi_4 == 1)
                    return 
                
                arg3.b = *(arg1 + 1)
                
                if (arg3.b == *(arg2 + 1))
                    if (esi_4 == 2)
                        return 
                    
                    arg3.b = *(arg1 + 2)
                    *(arg2 + 2)
    else
        while (true)
            arg3 = *arg1
            int32_t ebx_1 = *arg2
            
            if (arg3 == ebx_1)
                int32_t esi_2 = esi_1 - 1
                
                if (esi_1 == 1)
                    arg1 = &arg1[1]
                    arg2 = &arg2[1]
                    goto label_402cc1
                
                arg3 = arg1[1]
                ebx_1 = arg2[1]
                
                if (arg3 == ebx_1)
                    arg1 = &arg1[2]
                    arg2 = &arg2[2]
                    esi_1 = esi_2 - 1
                    
                    if (esi_2 == 1)
                        goto label_402cc1
                    
                    continue
            
            if (arg3.b != ebx_1.b)
                break
            
            break
}
