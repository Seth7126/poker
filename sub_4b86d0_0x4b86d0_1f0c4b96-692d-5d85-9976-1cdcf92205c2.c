// ============================================================
// 函数名称: sub_4b86d0
// 虚拟地址: 0x4b86d0
// WARP GUID: 1f0c4b96-692d-5d85-9976-1cdcf92205c2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402d38, sub_4b8204, sub_4b7354, sub_402b4c, sub_403010
// [被调用的父级函数]: sub_4b8c38
// ============================================================

int32_t __convention("regparm")sub_4b86d0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void var_42
    void var_42
    int16_t* esi_1
    int16_t* edi
    edi, esi_1 = __builtin_memcpy(&var_42, arg2, 0x10)
    *edi = *esi_1
    int32_t edi_2 = 0x5f5e0ff
    int16_t var_a = 0xfff6
    
    if (add_overflow(*(arg1 + 0x62280), 0xffffffff))
        sub_403010()
        noreturn
    
    int32_t var_14_1 = 0
    int32_t edx_16 = *(arg1 + 0x62280)
    
    if (add_overflow(edx_16, 0xffffffff))
        sub_403010()
        noreturn
    
    if (add_overflow(edx_16 - 1, 0xffffffff))
        sub_403010()
        noreturn
    
    if (edx_16 - 2 s>= 0)
        int32_t i_1 = edx_16 - 1
        int32_t var_10_2 = 0
        int32_t i
        
        do
            bool o_31 = unimplemented  {imul eax, dword [ebp-0xc], 0x5}
            
            if (o_31)
                sub_403010()
                noreturn
            
            int32_t eax_11 = sub_4b8204(arg1 + 0x7ec + var_10_2 * 0x14, &var_42)
            bool o_32 = unimplemented  {imul eax, dword [ebp-0xc], 0x5}
            
            if (o_32)
                sub_403010()
                noreturn
            
            int32_t ebx_6
            
            if (*(arg1 + 0x7ec + var_10_2 * 0x14 + 0x12) != 0xfffe)
                bool o_34 = unimplemented  {imul eax, dword [ebp-0xc], 0x5}
                
                if (o_34)
                    sub_403010()
                    noreturn
                
                if (*(arg1 + 0x7ec + var_10_2 * 0x14 + 0x12) != 0xffff)
                    bool o_36 = unimplemented  {imul eax, ebx, 0x2}
                    
                    if (o_36)
                        sub_403010()
                        noreturn
                    
                    ebx_6 = sub_402b4c(float.t(eax_11 * 2))
                else
                    bool o_35 = unimplemented  {imul eax, ebx, 0x3}
                    
                    if (o_35)
                        sub_403010()
                        noreturn
                    
                    ebx_6 = sub_402b4c(float.t(eax_11 * 3))
            else
                bool o_33 = unimplemented  {imul eax, ebx, 0x1}
                
                if (o_33)
                    sub_403010()
                    noreturn
                
                ebx_6 = sub_402b4c(float.t(eax_11))
            
            if (edi_2 s> ebx_6)
                var_14_1 = var_10_2
                edi_2 = ebx_6
            
            var_10_2 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    bool o_37 = unimplemented  {imul eax, dword [ebp-0x10], 0x5}
    
    if (o_37)
        sub_403010()
        noreturn
    
    int32_t eax_21
    eax_21.w = *(arg1 + 0x7ec + var_14_1 * 0x14 + 0x12)
    var_a = eax_21.w
    sub_4b7354(data_532f3c, var_14_1, *(*data_5301f4 + 0x10020))
    int32_t result
    result.w = var_a
    return result
}
