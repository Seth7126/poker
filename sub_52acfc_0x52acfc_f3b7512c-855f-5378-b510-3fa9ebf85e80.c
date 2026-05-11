// ============================================================
// 函数名称: sub_52acfc
// 虚拟地址: 0x52acfc
// WARP GUID: f3b7512c-855f-5378-b510-3fa9ebf85e80
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c2be8, sub_529818, sub_4c1090, sub_403010
// [被调用的父级函数]: sub_4c62e8
// ============================================================

char* __convention("regparm")sub_52acfc(char* arg1, int32_t arg2)
{
    // 第一条实际指令: char* var_8 = arg1
    char* var_8 = arg1
    
    if (arg2 s> 1 && sub_4c1090().b != 0)
        sub_529818(*data_5302c4, 0)
    
    int32_t i_1 = *data_5300d0
    
    if (i_1 s> 0)
        int32_t var_14_1 = 1
        void* ebx_2 = data_5301b0 + 0x8978
        int32_t i
        
        do
            if (sub_4c2be8(var_14_1).b != 0)
                int32_t j_1 = 2
                arg1 = ebx_2 - 0x8978
                int32_t j
                
                do
                    if (*ebx_2 s>= 2)
                        bool o_1 = unimplemented  {imul ecx, dword [ebp-0x8], 0xd}
                        
                        if (o_1)
                            sub_403010()
                            noreturn
                        
                        void* ecx_2 = &var_8[arg2 * 0x34]
                        int32_t ecx_3 = sx.d(*arg1)
                        int32_t temp3_1 = *(ecx_2 + (ecx_3 << 2))
                        *(ecx_2 + (ecx_3 << 2)) += 1
                        
                        if (add_overflow(temp3_1, 1))
                            sub_403010()
                            noreturn
                    
                    arg1 = &arg1[0xd4]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            var_14_1 += 1
            ebx_2 += 0x8d14
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    char var_d
    arg1.b = var_d
    return arg1
}
