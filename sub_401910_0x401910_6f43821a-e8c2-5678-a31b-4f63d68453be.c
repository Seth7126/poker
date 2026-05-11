// ============================================================
// 函数名称: sub_401910
// 虚拟地址: 0x401910
// WARP GUID: 6f43821a-e8c2-5678-a31b-4f63d68453be
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4014d4, sub_4016b4, sub_40163c, sub_40176c, sub_4014bc
// [被调用的父级函数]: sub_402040
// ============================================================

int32_t* __convention("regparm")sub_401910(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t edi_2 = (arg2 + 0x3fff) & 0xffffc000
    int32_t edi_2 = (arg2 + 0x3fff) & 0xffffc000
    int32_t* result
    
    while (true)
        int32_t* i
        
        for (i = data_531468; i != &data_531468; i = *i)
            if (arg1 == i[2])
                break
        
        int32_t var_20
        int32_t var_1c
        int32_t var_18
        
        if (arg1 != i[2])
        label_4019a3:
            sub_40163c(arg1, edi_2, &var_20)
            
            if (var_20 != 0)
                sub_4014d4(&data_531468, &var_20, &var_18)
                
                if (var_18 != 0)
                    continue
                
                sub_4016b4(var_20, var_1c, &var_18)
                result = arg3
                *result = 0
                break
        else if (edi_2 s> i[3])
            sub_40163c(i[2] + i[3], edi_2 - i[3], &var_20)
            
            if (var_20 == 0)
                goto label_4019a3
            
            sub_4014d4(&data_531468, &var_20, &var_18)
            
            if (var_18 != 0)
                continue
            
            sub_4016b4(var_20, var_1c, &var_18)
            result = arg3
            *result = 0
            break
        int32_t ebp_1 = i[2]
        
        if (arg1 != ebp_1 || edi_2 s> i[3])
            result = arg3
            *result = 0
        else
            sub_40176c(ebp_1, edi_2, arg3)
            result = arg3
            
            if (*result != 0)
                i[2] += arg3[1]
                result = arg3[1]
                i[3] -= result
                
                if (i[3] == 0)
                    result = i
                    sub_4014bc(result)
        
        break
    
    return result
}
