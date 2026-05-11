// ============================================================
// 函数名称: sub_529170
// 虚拟地址: 0x529170
// WARP GUID: 12d95dad-2cb6-5e35-ba3c-01b9e06f8000
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_52abb4, sub_402d20, sub_403010, sub_402bdc, sub_5293a8, sub_402bc0
// [被调用的父级函数]: sub_4c96bc
// ============================================================

int32_t __convention("regparm")sub_529170(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    void* ebx
    void* var_124 = ebx
    *(arg1 + 0xbefc) = arg2
    *(arg1 + 0xbf00) = arg3
    int32_t eax_3 = *(arg1 + 0xbefc)
    
    if (eax_3 s>= 0)
        int32_t var_18_1 = eax_3 + 1
        int32_t var_14_1 = 0
        int32_t i
        
        do
            ebp_1[-4]
            bool o_1 = unimplemented  {imul eax, dword [ebp-0x10], 0x112}
            
            if (o_1)
                sub_403010()
                noreturn
            
            ebx = ebp_1[-1] + ebp_1[-4] * 0x890 + 0xb2c
            *(ebx + 0x880) = ebp_1[-2]
            *(ebx + 0x884) = ebp_1[-2]
            *(ebx + 0x888) = 1
            *(ebx + 0x88c) = 0
            *(ebx + 0x889) = 0
            int32_t eax_8 = *(ebx + 0x880)
            
            if (eax_8 s> 0)
                ebp_1[-6] = eax_8
                int32_t j
                
                do
                    ebp_1[-1]
                    int32_t esi_2
                    ebp_1, esi_2 = sub_5293a8(ebp_1 - 0x119, 0)
                    int32_t edi_1 = esi_2 * 0x22
                    bool o_2 = unimplemented  {imul edi, esi, 0x22}
                    
                    if (o_2)
                        sub_403010()
                        noreturn
                    
                    *(ebx + (edi_1 << 3) - 4) = 1
                    sub_402bc0(ebx + (edi_1 << 3) - 0x10c, ebp_1 - 0x119)
                    
                    if (*(ebp_1 - 0x19) == 0)
                        int32_t eax_13 = sub_402d20(3)
                        
                        if (add_overflow(eax_13, 4))
                            sub_403010()
                            noreturn
                        
                        *(ebx + (edi_1 << 3) - 8) = eax_13 + 4
                    else
                        int32_t eax_11 = sub_402d20(3)
                        
                        if (add_overflow(eax_11, 1))
                            sub_403010()
                            noreturn
                        
                        *(ebx + (edi_1 << 3) - 8) = eax_11 + 1
                    
                    *(ebx + (edi_1 << 3) - 0xc) = 0x64
                    *(ebx + (edi_1 << 3) - 0x110) = *(*data_5301f4 + 0x20070)
                    bool o_5 = unimplemented  {imul eax, esi, 0x22}
                    
                    if (o_5)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_19 = *(ebx + esi_2 * 0x110 - 0x110)
                    int32_t temp8_1 = *(ebx + 0x88c)
                    *(ebx + 0x88c) += eax_19
                    
                    if (add_overflow(temp8_1, eax_19))
                        sub_403010()
                        noreturn
                    
                    j = ebp_1[-6]
                    ebp_1[-6] -= 1
                while (j != 1)
            
            ebp_1[-4] += 1
            i = ebp_1[-5]
            ebp_1[-5] -= 1
        while (i != 1)
    
    ebp_1[-4] = 2
    
    do
        ebp_1[-1]
        ebp_1 = sub_5293a8(ebp_1 - 0x119, 0)
        ebp_1[-4]
        bool o_7 = unimplemented  {imul eax, dword [ebp-0x10], 0x65}
        
        if (o_7)
            sub_403010()
            noreturn
        
        sub_402bdc(*data_5301f4 + ebp_1[-4] * 0x65 + 0x10e43, ebp_1 - 0x119, 0x64)
        ebx.b = *(ebp_1 - 0x19)
        
        if (ebx.b == 0)
            int32_t eax_25 = sub_402d20(4)
            
            if (add_overflow(eax_25, 4))
                sub_403010()
                noreturn
            
            *(*data_5301f4 + (ebp_1[-4] << 2) + 0x111cc) = eax_25 + 4
        else
            int32_t eax_23 = sub_402d20(3)
            
            if (add_overflow(eax_23, 1))
                sub_403010()
                noreturn
            
            *(*data_5301f4 + (ebp_1[-4] << 2) + 0x111cc) = eax_23 + 1
        
        *(*data_5301f4 + ebp_1[-4] + 0x111ef) = ebx.b
        ebp_1[-4] += 1
    while (ebp_1[-4] != 9)
    
    ebp_1[-1]
    int32_t result = sub_52abb4() * 0x15
    bool o_10 = unimplemented  {imul eax, eax, 0x15}
    
    if (o_10)
        sub_403010()
        noreturn
    
    __builtin_memcpy(ebp_1[-1] + 4, ebp_1[-1] + (result << 3) + 0xac, 0xa8)
    result.b = *(ebp_1 - 9)
    *ebp_1
    return result
}
