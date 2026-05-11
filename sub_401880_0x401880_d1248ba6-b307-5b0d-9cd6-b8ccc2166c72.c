// ============================================================
// 函数名称: sub_401880
// 虚拟地址: 0x401880
// WARP GUID: d1248ba6-b307-5b0d-9cd6-b8ccc2166c72
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4014d4, sub_4016b4, sub_40176c, sub_4015d8, sub_4014bc
// [被调用的父级函数]: sub_402014
// ============================================================

int32_t* __convention("regparm")sub_401880(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t edi_2 = (arg1 + 0x3fff) & 0xffffc000
    int32_t edi_2 = (arg1 + 0x3fff) & 0xffffc000
    
    while (true)
        int32_t* result_1 = data_531468
        
        while (true)
            int32_t* result
            
            if (result_1 == &data_531468)
                result = sub_4015d8(edi_2, arg2)
                
                if (*arg2 != 0)
                    int32_t var_18
                    sub_4014d4(&data_531468, arg2, &var_18)
                    
                    if (var_18 != 0)
                        break
                    
                    sub_4016b4(*arg2, arg2[1], &var_18)
                    result = nullptr
                    *arg2 = 0
            else if (edi_2 s> result_1[3])
                result_1 = *result_1
                continue
            else
                result = sub_40176c(result_1[2], edi_2, arg2)
                
                if (*arg2 != 0)
                    result_1[2] += arg2[1]
                    result = arg2[1]
                    result_1[3] -= result
                    
                    if (result_1[3] == 0)
                        result = result_1
                        sub_4014bc(result)
            
            return result
}
