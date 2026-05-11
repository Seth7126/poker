// ============================================================
// 函数名称: sub_4cddb4
// 虚拟地址: 0x4cddb4
// WARP GUID: 94e9b08f-375d-53a9-9fda-42e417414676
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4cc200, sub_4cc6a0, sub_403010
// [被调用的父级函数]: sub_4c62e8
// ============================================================

int32_tsub_4cddb4()
{
    // 第一条实际指令: char var_5 = 0
    char var_5 = 0
    int32_t result = *data_5300d0
    
    if (result s>= 0)
        int32_t i_1 = result + 1
        int32_t var_c_1 = 0
        int32_t i
        
        do
            int32_t var_10_1
            int32_t esi_1
            
            if (var_c_1 != 0)
                esi_1 = var_c_1
                var_10_1 = 0x1c
            else
                esi_1 = 0xa
                var_10_1 = 0x54
            
            if (var_5 != 0)
                break
            
            if (esi_1 == 0xa)
            label_4cde28:
                int32_t edi_1 = 0
                int32_t ebx_1 = 0
                void* var_18_1 = &data_532f70
                
                do
                    if (edi_1 == 0)
                        result = sub_4cc200(esi_1, ebx_1.b)
                    
                    if (edi_1 == 0 && result s> var_10_1)
                        edi_1 = 2
                    else if (esi_1 == 0xa || edi_1 != 0)
                    label_4cde77:
                        bool o_2 = unimplemented  {imul eax, esi, 0x2e9c}
                        
                        if (o_2)
                            sub_403010()
                            noreturn
                        
                        if (*(var_18_1 + esi_1 * 0x174e0 - 0x14010) s<= 0)
                            if (edi_1 == 2)
                                var_5 = 1
                                break
                        else if (edi_1 == 1 || edi_1 == 2)
                            var_5 = 1
                            break
                    else
                        if (sub_4cc200(esi_1, ebx_1.b) s>= 5)
                            goto label_4cde77
                        
                        result = sub_4cc6a0(esi_1, ebx_1.b)
                        
                        if (result.b == 0)
                            goto label_4cde77
                        
                        edi_1 = 1
                    
                    ebx_1 += 1
                    var_18_1 += 0x353c
                while (ebx_1.b != 5)
            else
                bool o_1 = unimplemented  {imul eax, esi, 0x41}
                
                if (o_1)
                    sub_403010()
                    noreturn
                
                if (*(*data_5301f4 + esi_1 * 0x208 + 0x1fea0) != 0)
                    goto label_4cde28
            
            var_c_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    result.b = var_5
    return result
}
