// ============================================================
// 函数名称: sub_4c30b4
// 虚拟地址: 0x4c30b4
// WARP GUID: b49a6c32-c0cc-5250-9c80-f626e3ac1815
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4c62e8, sub_4c3194
// ============================================================

int32_t __convention("regparm")sub_4c30b4(char arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_10 = ecx
    var_10.b = 0
    int32_t edi = 0
    int32_t i_1 = *data_5300d0
    
    if (i_1 s> 0)
        int32_t edx_1 = 1
        int32_t i
        
        do
            int32_t ecx_1 = edx_1 * 0x41
            bool o_1 = unimplemented  {imul ecx, edx, 0x41}
            
            if (o_1)
                sub_403010()
                noreturn
            
            if (*(*data_5301f4 + (ecx_1 << 3) + 0x1fea0) == 1)
                if (*(*data_5301f4 + (ecx_1 << 3) + 0x20084) == 0)
                    if (arg1 == 0)
                    label_4c312e:
                        int32_t temp1_1 = edi
                        edi += 1
                        
                        if (add_overflow(temp1_1, 1))
                            sub_403010()
                            noreturn
                    else
                        bool o_2 = unimplemented  {imul ecx, edx, 0x41}
                        
                        if (o_2)
                            sub_403010()
                            noreturn
                        
                        if (*(*data_5301f4 + edx_1 * 0x208 + 0x1fea4) s< *(*data_5301f4 + 0x21104))
                            goto label_4c312e
                
                if (arg1 != 0)
                    bool o_4 = unimplemented  {imul ecx, edx, 0x41}
                    
                    if (o_4)
                        sub_403010()
                        noreturn
                    
                    int32_t ecx_4
                    ecx_4.b = *(*data_5301f4 + edx_1 * 0x208 + 0x1fea2)
                    
                    if (ecx_4.b == 0)
                    label_4c315e:
                        int32_t temp2_1 = edi
                        edi += 1
                        
                        if (add_overflow(temp2_1, 1))
                            sub_403010()
                            noreturn
                    else
                        char temp3_1 = ecx_4.b
                        ecx_4.b -= 0xb
                        
                        if (temp3_1 == 0xb)
                            goto label_4c315e
            
            edx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (arg1 == 0 && edi s<= 1)
        var_10.b = 1
    
    if (arg1 != 0 && edi == 0)
        var_10.b = 1
    
    return var_10.b
}
