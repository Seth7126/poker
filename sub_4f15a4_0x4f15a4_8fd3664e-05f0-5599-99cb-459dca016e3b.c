// ============================================================
// 函数名称: sub_4f15a4
// 虚拟地址: 0x4f15a4
// WARP GUID: 8fd3664e-05f0-5599-99cb-459dca016e3b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_51ad40, sub_403010
// [被调用的父级函数]: sub_5047f4
// ============================================================

void* __convention("regparm")sub_4f15a4(int32_t arg1)
{
    // 第一条实际指令: int32_t ebx = arg1
    int32_t ebx = arg1
    int32_t eax = ebx * 5
    bool o = unimplemented  {imul eax, ebx, 0x5}
    
    if (o)
        sub_403010()
        noreturn
    
    if (*(data_5304b0 + (eax << 2) - 8) s>= 7)
        bool o_1 = unimplemented  {imul edx, ebx, 0x5}
        
        if (o_1)
            sub_403010()
            noreturn
        
        if (*(data_5304b0 + (eax << 2) - 0x10) != *(data_5304b0 + ebx * 0x14 - 8))
            if (*(*data_5301f4 + 4) != 2)
            label_4f163b:
                int32_t eax_11 = ebx * 5
                bool o_4 = unimplemented  {imul eax, ebx, 0x5}
                
                if (o_4)
                    sub_403010()
                    noreturn
                
                int32_t var_14_1 = *(data_5304b0 + (eax_11 << 2) - 4)
                *(data_5304b0 + (eax_11 << 2) - 8)
                sub_51ad40(*data_5303b8, 0xa)
            else
                int32_t esi_1 = ebx * 5
                bool o_2 = unimplemented  {imul esi, ebx, 0x5}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                if (*(data_5304b0 + (esi_1 << 2) - 0x10) != 0xf
                        && *(data_5304b0 + (esi_1 << 2) - 8) != 0xf)
                    goto label_4f163b
                
                bool o_3 = unimplemented  {imul eax, ebx, 0x5}
                
                if (o_3)
                    sub_403010()
                    noreturn
                
                int32_t eax_7 = *(data_5304b0 + ebx * 0x14 - 4)
                
                if (eax_7 == 1 || eax_7 - 4 u< 2)
                    goto label_4f163b
    
    int32_t eax_14 = ebx * 5
    bool o_5 = unimplemented  {imul eax, ebx, 0x5}
    
    if (o_5)
        sub_403010()
        noreturn
    
    void* edx_7 = data_5304b0
    *(edx_7 + (eax_14 << 2) - 0xc)
    bool o_6 = unimplemented  {imul edx, dword [edx+eax*4-0xc], 0x35}
    
    if (o_6)
        sub_403010()
        noreturn
    
    void* ecx_3 = data_5304b0
    *(ecx_3 + (eax_14 << 2) - 0x10)
    bool o_7 = unimplemented  {imul ecx, dword [ecx+eax*4-0x10], 0x2345}
    
    if (o_7)
        sub_403010()
        noreturn
    
    *(*data_5301f4 + 0x2a22a) = *(data_5301b0 + *(ecx_3 + (eax_14 << 2) - 0x10) * 0x8d14
        + *(edx_7 + (eax_14 << 2) - 0xc) * 0xd4 - 0x8de8)
    *(*data_5301f4 + 0x2a230) = *(data_5304b0 + (eax_14 << 2) - 8)
    *(*data_5301f4 + 0x2a234) = *(data_5304b0 + (eax_14 << 2) - 4)
    *(*data_5301f4 + 0x2a238) = *(data_5304b0 + (eax_14 << 2) - 0x10)
    *(*data_5301f4 + 0x2a23c) = *(data_5304b0 + (eax_14 << 2) - 0xc)
    void* edx_18 = data_5304b0
    *(edx_18 + (eax_14 << 2) - 0xc)
    bool o_8 = unimplemented  {imul edx, dword [edx+eax*4-0xc], 0x35}
    
    if (o_8)
        sub_403010()
        noreturn
    
    void* ecx_16 = data_5304b0
    *(ecx_16 + (eax_14 << 2) - 0x10)
    bool o_9 = unimplemented  {imul eax, dword [ecx+eax*4-0x10], 0x2345}
    
    if (o_9)
        sub_403010()
        noreturn
    
    void* eax_17 = data_5301b0 + *(ecx_16 + (eax_14 << 2) - 0x10) * 0x8d14
        + *(edx_18 + (eax_14 << 2) - 0xc) * 0xd4 - 0x8d8c
    *(eax_17 + 0x6c) = 0
    *(eax_17 + 0x58) = 0
    *eax_17 = 0
    void* result = data_53070c
    int32_t temp4 = *result
    *result -= 1
    
    if (add_overflow(temp4, 0xffffffff))
        sub_403010()
        noreturn
    
    int32_t edx_21 = *data_53070c
    
    if (edx_21 s>= ebx)
        int32_t i_1 = edx_21 - ebx + 1
        bool o_11 = unimplemented  {imul eax, ebx, 0x5}
        
        if (o_11)
            sub_403010()
            noreturn
        
        result = data_5304b0 + ebx * 0x14
        int32_t i
        
        do
            __builtin_memcpy(result - 0x14, result, 0x14)
            *(result - 0x10)
            bool o_12 = unimplemented  {imul ecx, dword [eax-0x10], 0x2345}
            
            if (o_12)
                sub_403010()
                noreturn
            
            *(result - 0xc)
            bool o_13 = unimplemented  {imul esi, dword [eax-0xc], 0x35}
            
            if (o_13)
                sub_403010()
                noreturn
            
            *(data_5301b0 + *(result - 0x10) * 0x8d14 + *(result - 0xc) * 0xd4 - 0x8d2c) = ebx
            ebx += 1
            result += 0x14
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
