// ============================================================
// 函数名称: sub_5193d0
// 虚拟地址: 0x5193d0
// WARP GUID: 1ca6eb19-02f2-5ad8-9e35-01e59206e3e4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_52ba68, sub_519ce0, sub_490c10, sub_403e4c, sub_490bbc, sub_403010
// [被调用的父级函数]: sub_527454, sub_52ba68
// ============================================================

void* __convention("regparm")sub_5193d0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t edi
    int32_t var_20 = edi
    int32_t* esp = &var_20
    void* esi_1 = arg1
    char var_5 = 0
    
    if (*(esi_1 + 0x979) == 0)
        int32_t var_c_1 = 2
        arg1 = *(data_530598 + 0x18)
        
        if (arg1 != 6)
            data_530598
            
            if (arg1 != 5)
                data_530598
                
                if (arg1 != 4)
                    data_530598
                    
                    if (arg1 == 3)
                        var_c_1 = 2
                else
                    var_c_1 = 5
            else
                var_c_1 = 8
        else
            var_c_1 = 0xc
        
        for (int32_t i = 1; i != 0xb; i += 1)
            if ((arg2 == 0 || arg2 == *(esi_1 + (i << 2) + 0xa30)) && *(esi_1 + (i << 2) + 0x97c) != 0
                    && *(esi_1 + (i << 2) + 0x9f4) s> 0
                    && sub_490c10(*(esi_1 + (i << 2) + 0x97c)).b != 0)
                int32_t eax_2 = *(esi_1 + (i << 2) + 0x9b8)
                
                if (eax_2 - 0x16 u< 4)
                    var_c_1 = 0
                else if (eax_2 - 0xd u< 2 || eax_2 - 0x13 u< 2)
                    int32_t eax_4 = var_c_1 s>> 1
                    bool c_1 = unimplemented  {sar eax, 0x1}
                    
                    if (var_c_1 s>> 1 s< 0)
                        eax_4 = adc.d(eax_4, 0, c_1)
                    
                    var_c_1 = eax_4
                else if (eax_2 == 0xf)
                    var_c_1 = 2
                
                float var_10_1 = fconvert.s(float.t(*(*(esi_1 + (i << 2) + 0x97c) + 0x40))
                    - float.t(var_c_1) / fconvert.t(2f) * fconvert.t(8000f))
                arg1 = *(data_530598 + 0x18)
                
                if (arg1 != 5)
                    data_530598
                    
                    if (arg1 s< 5)
                        long double x87_r7_4 = fconvert.t(var_10_1)
                        long double temp6_1 = fconvert.t(35000f)
                        x87_r7_4 - temp6_1
                        arg1.w = (x87_r7_4 < temp6_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_4, temp6_1) ? 1 : 0) << 0xa
                            | (x87_r7_4 == temp6_1 ? 1 : 0) << 0xe
                        
                        if (test_bit(arg1:1.b, 0))
                            var_10_1 = 35000f
                else
                    long double x87_r7_3 = fconvert.t(var_10_1)
                    long double temp5_1 = fconvert.t(25000f)
                    x87_r7_3 - temp5_1
                    arg1.w = (x87_r7_3 < temp5_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_3, temp5_1) ? 1 : 0) << 0xa
                        | (x87_r7_3 == temp5_1 ? 1 : 0) << 0xe
                    
                    if (test_bit(arg1:1.b, 0))
                        var_10_1 = 25000f
                
                if (*(esi_1 + (i << 2) + 0x9f4) == 1)
                    long double x87_r7_5 = float.t(sub_490bbc(*(esi_1 + (i << 2) + 0x97c)))
                    long double temp7_1 = fconvert.t(var_10_1)
                    x87_r7_5 - temp7_1
                    arg1.w = (x87_r7_5 < temp7_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_5, temp7_1) ? 1 : 0) << 0xa
                        | (x87_r7_5 == temp7_1 ? 1 : 0) << 0xe
                    
                    if (test_bit(arg1:1.b, 0))
                        var_5 = 3
        
        if (arg2 == 0 && var_5 == 0 && *(esi_1 + 0xac0) s> 0)
            var_5 = 3
            int32_t var_24 = *(esi_1 + 0xaac)
            esp = &var_24
            void* esi_2
            arg1, esi_2 = sub_519ce0(esi_1, *(esi_1 + 0xa70), *(esi_1 + 0xa98), var_24)
            int32_t ebx_1 = *(esi_2 + 0xa98)
            
            if (ebx_1 != 0xffffffff && *(esi_2 + 0xa84) != 0)
                int32_t var_28_1 = 0
                sub_52ba68(*(esi_2 + 0xa84), ebx_1, 0, esi_2)
                esp = &var_20
            
            int32_t temp4_1 = *(esi_2 + 0xac0)
            *(esi_2 + 0xac0) -= 1
            
            if (add_overflow(temp4_1, 0xffffffff))
                sub_403010()
                noreturn
            
            int32_t i_2 = *(esi_2 + 0xac0)
            
            if (i_2 s> 0)
                int32_t ebx_2 = 1
                int32_t i_1
                
                do
                    sub_403e4c(esi_2 + (ebx_2 << 2) + 0xa6c, *(esi_2 + (ebx_2 << 2) + 0xa70))
                    sub_403e4c(esi_2 + (ebx_2 << 2) + 0xa80, *(esi_2 + (ebx_2 << 2) + 0xa84))
                    *(esi_2 + (ebx_2 << 2) + 0xa94) = *(esi_2 + (ebx_2 << 2) + 0xa98)
                    *(esi_2 + (ebx_2 << 2) + 0xaa8) = *(esi_2 + (ebx_2 << 2) + 0xaac)
                    ebx_2 += 1
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
    
    arg1.b = var_5
    *esp
    esp[1]
    esp[2]
    return arg1
}
