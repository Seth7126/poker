// ============================================================
// 函数名称: sub_444090
// 虚拟地址: 0x444090
// WARP GUID: ccdbe695-3d5e-5653-acfb-cc59d9ac0afc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4471f4, sub_446f54, sub_446f30, sub_4471e0, sub_446f10, sub_443b40, sub_446f74
// [被调用的父级函数]: sub_4431dc, sub_445ad4, sub_445b91
// ============================================================

int32_t* __convention("regparm")sub_444090(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    arg1.b = *(ebx + 0x219)
    
    if (arg1.b != 0 && *(data_5317d8 + 0x38) != 0)
        int32_t* var_24_1 = nullptr
        
        if (arg1.b != 2)
            arg1.b = *(ebx + 0x219)
            
            if (arg1.b == 3 && *(data_5317dc + 0x5c) != 0)
                var_24_1 = *(sub_443b40(*(data_5317dc + 0x5c)) + 4)
            else if (arg1.b == 1)
                var_24_1 = *(sub_4471e0(data_5317dc, 0) + 4)
        else
            var_24_1 = *(sub_443b40(*(data_5317d8 + 0x38)) + 4)
        
        int32_t eax_13 = *(sub_443b40(ebx) + 4)
        arg1 = sub_4471f4(data_5317dc) - 1
        
        if (arg1 s>= 0)
            void* i_1 = arg1 + 1
            int32_t esi_1 = 0
            void* i
            
            do
                arg1 = *(sub_4471e0(data_5317dc, esi_1) + 4)
                
                if (arg1 == var_24_1)
                    arg1 = var_24_1
                    
                    if (arg1 != eax_13)
                        arg1 = sub_4471f4(data_5317dc)
                        
                        if (arg1 - 1 s>= 0)
                            void* j_1 = arg1
                            int32_t var_1c_1 = 0
                            void* j
                            
                            do
                                arg1 = *(sub_4471e0(data_5317dc, var_1c_1) + 4)
                                
                                if (arg1 == eax_13)
                                    arg1.b = ebx[0x86].b
                                    
                                    if (arg1.b == 4)
                                        int32_t eax_22 = ebx[0xe]
                                        int32_t ebp_1 = ebx[0xf]
                                        int32_t eax_25 = sub_446f54(sub_4471e0(data_5317dc, esi_1))
                                        int32_t eax_29 =
                                            sub_446f30(sub_4471e0(data_5317dc, esi_1)) - ebp_1
                                        int32_t eax_30 = eax_29 s>> 1
                                        bool c_1 = unimplemented  {sar eax, 0x1}
                                        
                                        if (eax_29 s>> 1 s< 0)
                                            eax_30 = adc.d(eax_30, 0, c_1)
                                        
                                        int32_t var_30_2 = eax_25 + eax_30
                                        sub_446f10(sub_4471e0(data_5317dc, esi_1))
                                        sub_446f74(sub_4471e0(data_5317dc, esi_1)) - ebx[0xe]
                                        unimplemented  {sar eax, 0x1}
                                        arg1 = (*(*ebx + 0x7c))(ebp_1, eax_22)
                                    else if (arg1.b != 6)
                                        int32_t ebp_11 = sub_446f10(sub_4471e0(data_5317dc, esi_1))
                                            + ebx[0xc] - sub_446f10(sub_4471e0(data_5317dc, var_1c_1))
                                        
                                        if (sub_446f10(sub_4471e0(data_5317dc, esi_1))
                                                + sub_446f74(sub_4471e0(data_5317dc, esi_1))
                                                s< ebx[0xe] + ebp_11)
                                            sub_446f10(sub_4471e0(data_5317dc, esi_1))
                                                + sub_446f74(sub_4471e0(data_5317dc, esi_1)) - ebx[0xe]
                                        
                                        int32_t var_18_1 = sub_446f54(sub_4471e0(data_5317dc, esi_1))
                                            + ebx[0xd] - sub_446f54(sub_4471e0(data_5317dc, var_1c_1))
                                        
                                        if (sub_446f54(sub_4471e0(data_5317dc, esi_1))
                                                + sub_446f30(sub_4471e0(data_5317dc, esi_1))
                                                s< var_18_1 + ebx[0xf])
                                            var_18_1 = sub_446f54(sub_4471e0(data_5317dc, esi_1))
                                                + sub_446f30(sub_4471e0(data_5317dc, esi_1)) - ebx[0xf]
                                        
                                        arg1 = (*(*ebx + 0x7c))(ebx[0xf], ebx[0xe])
                                    else
                                        int32_t eax_40 = ebx[0xe]
                                        int32_t ebp_5 = ebx[0xf]
                                        int32_t eax_43 = sub_446f54(sub_4471e0(data_5317dc, esi_1))
                                        int32_t eax_47 =
                                            sub_446f30(sub_4471e0(data_5317dc, esi_1)) - ebp_5
                                        int32_t eax_48 = eax_47 s>> 1
                                        bool c_3 = unimplemented  {sar eax, 0x1}
                                        
                                        if (eax_47 s>> 1 s< 0)
                                            eax_48 = adc.d(eax_48, 0, c_3)
                                        
                                        int32_t var_30_4 = eax_43 + eax_48
                                        sub_446f10(sub_4471e0(data_5317dc, esi_1))
                                        sub_446f74(sub_4471e0(data_5317dc, esi_1)) - ebx[0xe]
                                        unimplemented  {sar eax, 0x1}
                                        arg1 = (*(*ebx + 0x7c))(ebp_5, eax_40)
                                
                                var_1c_1 += 1
                                j = j_1
                                j_1 -= 1
                            while (j != 1)
                
                esi_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    return arg1
}
