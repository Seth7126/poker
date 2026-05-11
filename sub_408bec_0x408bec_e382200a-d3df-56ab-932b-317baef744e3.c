// ============================================================
// 函数名称: sub_408bec
// 虚拟地址: 0x408bec
// WARP GUID: e382200a-d3df-56ab-932b-317baef744e3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402980, sub_4043ac, sub_403ee0, sub_40423c, sub_4093c8, sub_40c218, sub_403df8
// [被调用的父级函数]: sub_412000
// ============================================================

int32_t* __convention("regparm")sub_408bec(int32_t* arg1, char arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* var_14 = arg3
    int32_t* var_14 = arg3
    int32_t* result = arg3
    sub_403df8(result)
    
    if (*arg1 != 0)
        result = *arg1
        
        if (arg2 == *result)
            *arg1 += 1
            int32_t ebp_1 = 1
            char* edi_1 = *arg1
            *arg1 = sub_40c218(*arg1, arg2)
            
            while (*arg1 != 0)
                *arg1 += 1
                
                if (arg2 != **arg1)
                    break
                
                *arg1 += 1
                ebp_1 += 1
                *arg1 = sub_40c218(*arg1, arg2)
            
            if (*arg1 == 0)
                *arg1 = sub_4093c8(edi_1)
            
            result = *arg1 - edi_1
            
            if (result s> 1)
                if (ebp_1 != 1)
                    sub_4043ac(arg3, result - ebp_1)
                    void* ebp_2 = sub_40423c(*arg3)
                    *arg1 = sub_40c218(edi_1, arg2)
                    
                    while (*arg1 != 0)
                        *arg1 += 1
                        
                        if (arg2 != **arg1)
                            break
                        
                        sub_402980(edi_1, ebp_2, *arg1 - edi_1)
                        ebp_2 += *arg1 - edi_1
                        *arg1 += 1
                        edi_1 = *arg1
                        *arg1 = sub_40c218(*arg1, arg2)
                    
                    if (*arg1 == 0)
                        *arg1 = sub_4093c8(edi_1)
                    
                    return sub_402980(edi_1, ebp_2, *arg1 - edi_1 - 1)
                
                void* ecx_1 = result - 1
                result = arg3
                sub_403ee0(result, edi_1, ecx_1)
    
    return result
}
