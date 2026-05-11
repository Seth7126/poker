// ============================================================
// 函数名称: sub_4b7068
// 虚拟地址: 0x4b7068
// WARP GUID: de1aeee5-d350-5ca0-b2de-0de39c28fbdb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c2be8, sub_4c2de8, sub_4c2d7c, sub_402b4c, sub_403010
// [被调用的父级函数]: sub_4b77e0, sub_4babf8
// ============================================================

int32_tsub_4b7068()
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    if (*(*data_5301f4 + 0x21128) s<= 0x14 && *(*data_5301f4 + 0x4584) s>= 6)
        result = 1
    else if (*(*data_5301f4 + 0x21128) s> 0x3c || *(*data_5301f4 + 0x4584) s< 4)
        int32_t eax_10 = *(*data_5301f4 + 0x21128)
        
        if (eax_10 s> 0x5a || *(*data_5301f4 + 0x4584) s< 2)
            data_5301f4
            
            if (eax_10 s> 0x96)
                data_5301f4
                
                if (eax_10 s> 0xc8)
                    data_5301f4
                    
                    if (eax_10 s> 0xfa)
                        data_5301f4
                        
                        if (eax_10 s> 0x12c)
                            data_5301f4
                            
                            if (eax_10 s> 0x190)
                                data_5301f4
                                
                                if (eax_10 s> 0x1f4)
                                    data_5301f4
                                    
                                    if (eax_10 s> 0x258)
                                        data_5301f4
                                        
                                        if (eax_10 s> 0x2bc)
                                            data_5301f4
                                            
                                            result = eax_10 s> 0x320 ? 0x12 : 0x11
                                        else
                                            result = 0x10
                                    else
                                        result = 0xf
                                else
                                    result = 0xe
                            else
                                result = 0xd
                        else
                            result = 0xb
                    else
                        result = 9
                else
                    result = 7
            else
                result = 5
        else
            result = 3
    else
        result = 2
    
    int32_t var_8 = 0
    int32_t esi_1 = *data_5300d0
    
    if (esi_1 s>= 2)
        int32_t i_1 = esi_1 - 1
        int32_t ebx_1 = 2
        int32_t i
        
        do
            if (sub_4c2d7c(ebx_1) != 0 && sub_4c2be8(ebx_1) != 0)
                int32_t temp2_1 = var_8
                var_8 += 1
                
                if (add_overflow(temp2_1, 1))
                    sub_403010()
                    noreturn
            
            ebx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (var_8 s>= 4)
        result = sub_402b4c(float.t(result) * data_4b72b4)
    else if (var_8 == 3)
        result = sub_402b4c(float.t(result) * data_4b72c0)
    else if (var_8 == 2)
        result = sub_402b4c(float.t(result) * data_4b72cc)
    
    if (sub_4c2be8(1) == 0)
        result = sub_402b4c(float.t(result) * data_4b72d8)
    
    if (sub_4c2de8(0) == 2)
        return sub_402b4c(float.t(result) * data_4b72b4)
    
    if (sub_4c2de8(0) != 3)
        return result
    
    return sub_402b4c(float.t(result) * data_4b72c0)
}
