// ============================================================
// 函数名称: sub_4cf4e4
// 虚拟地址: 0x4cf4e4
// WARP GUID: a650be11-6549-5d0a-9807-551f4f7167af
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4ce534
// ============================================================

void* __fastcallsub_4cf4e4(int32_t arg1, int32_t arg2, void* arg3 @ eax, char arg4)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    eax.b = arg1.b
    bool o = unimplemented  {imul eax, eax, 0xd4f}
    
    if (o)
        sub_403010()
        noreturn
    
    bool o_1 = unimplemented  {imul ebx, edx, 0x2e9c}
    
    if (o_1)
        sub_403010()
        noreturn
    
    bool var_5 = *(arg2 * 0x174e0 + &data_532f70 + eax * 0x353c - 0x14010) s> 0
    void* result
    
    if (var_5 != 0)
        int32_t eax_1
        eax_1.b = arg1.b
        int32_t eax_2 = eax_1 * 0xd4f
        bool o_2 = unimplemented  {imul eax, eax, 0xd4f}
        
        if (o_2)
            sub_403010()
            noreturn
        
        bool o_3 = unimplemented  {imul ebx, edx, 0x2e9c}
        
        if (o_3)
            sub_403010()
            noreturn
        
        *(arg2 * 0x174e0 + &data_532f70 + (eax_2 << 2) - 0x14010)
        bool o_4 = unimplemented  {imul eax, dword [ebx+eax*4-0x14010], 0xa}
        
        if (o_4)
            sub_403010()
            noreturn
        
        int32_t ebx_4
        ebx_4.b = arg1.b
        bool o_5 = unimplemented  {imul ebx, ebx, 0xd4f}
        
        if (o_5)
            sub_403010()
            noreturn
        
        bool o_6 = unimplemented  {imul edi, edx, 0x2e9c}
        
        if (o_6)
            sub_403010()
            noreturn
        
        void* var_c_1
        
        if (*(arg2 * 0x174e0 + &data_532f70 + ebx_4 * 0x353c
                + *(arg2 * 0x174e0 + &data_532f70 + (eax_2 << 2) - 0x14010) * 0x50 - 0x17518) == 0)
            int32_t eax_6
            eax_6.b = arg1.b
            int32_t eax_7 = eax_6 * 0xd4f
            bool o_10 = unimplemented  {imul eax, eax, 0xd4f}
            
            if (o_10)
                sub_403010()
                noreturn
            
            bool o_11 = unimplemented  {imul ebx, edx, 0x2e9c}
            
            if (o_11)
                sub_403010()
                noreturn
            
            *(arg2 * 0x174e0 + &data_532f70 + (eax_7 << 2) - 0x14010)
            bool o_12 = unimplemented  {imul eax, dword [ebx+eax*4-0x14010], 0xa}
            
            if (o_12)
                sub_403010()
                noreturn
            
            int32_t ebx_9
            ebx_9.b = arg1.b
            bool o_13 = unimplemented  {imul ebx, ebx, 0xd4f}
            
            if (o_13)
                sub_403010()
                noreturn
            
            bool o_14 = unimplemented  {imul edi, edx, 0x2e9c}
            
            if (o_14)
                sub_403010()
                noreturn
            
            var_c_1 = *(arg2 * 0x174e0 + &data_532f70 + ebx_9 * 0x353c
                + *(arg2 * 0x174e0 + &data_532f70 + (eax_7 << 2) - 0x14010) * 0x50 - 0x17514)
        else
            int32_t temp6_1 = *(arg3 + 0x10)
            *(arg3 + 0x10) += 1
            
            if (add_overflow(temp6_1, 1))
                sub_403010()
                noreturn
            
            int32_t eax_4 = *(arg3 + 0x10)
            
            if (add_overflow(eax_4, 0xffffffff))
                sub_403010()
                noreturn
            
            var_c_1 = eax_4 - 1
            bool o_9 = unimplemented  {imul eax, dword [ebp-0x8], 0x2}
            
            if (o_9)
                sub_403010()
                noreturn
            
            *(arg3 + var_c_1 * 0x10 + 0x1a) = 0
        
        int32_t edi_5 = var_c_1 * 2
        bool o_15 = unimplemented  {imul edi, dword [ebp-0x8], 0x2}
        
        if (o_15)
            sub_403010()
            noreturn
        
        result.b = *(arg3 + (edi_5 << 3) + 0x1a)
        
        if (result.b == 0)
        label_4cf65a:
            
            if ((*(arg3 + (edi_5 << 3) + 0x1a) != 2 || arg4 != 4)
                    && (*(arg3 + (edi_5 << 3) + 0x1a) != 4 || arg4 != 2))
                *(arg3 + (edi_5 << 3) + 0x20) = 0
            else
                *(arg3 + (edi_5 << 3) + 0x20) =
                    fconvert.s(fconvert.t(1f) - fconvert.t(*(arg3 + (edi_5 << 3) + 0x20)))
            
            void* ebx_6
            ebx_6.b = arg4
            *(arg3 + (edi_5 << 3) + 0x1a) = ebx_6.b
            *(arg3 + (edi_5 << 3) + 0x14) = arg2.b
            *(arg3 + (edi_5 << 3) + 0x18) = arg1.b
            bool o_16 = unimplemented  {imul ecx, ecx, 0xd4f}
            
            if (o_16)
                sub_403010()
                noreturn
            
            bool o_17 = unimplemented  {imul edx, edx, 0x2e9c}
            
            if (o_17)
                sub_403010()
                noreturn
            
            int32_t edx_2 = *(arg2 * 0x174e0 + &data_532f70 + (arg1 & 0x7f) * 0x353c - 0x14010)
            
            if (add_overflow(edx_2, 0xffffffff))
                sub_403010()
                noreturn
            
            *(arg3 + (edi_5 << 3) + 0x16) = edx_2.b - 1
            *(arg3 + (edi_5 << 3) + 0x1c) = 0x42480000
            int32_t ecx_2
            ecx_2.b = *(arg3 + (edi_5 << 3) + 0x18)
            int32_t ecx_3 = ecx_2 * 0xd4f
            bool o_19 = unimplemented  {imul ecx, ecx, 0xd4f}
            
            if (o_19)
                sub_403010()
                noreturn
            
            int32_t ebx_11
            ebx_11.b = *(arg3 + (edi_5 << 3) + 0x14)
            int32_t ebx_12 = ebx_11 * 0x2e9c
            bool o_20 = unimplemented  {imul ebx, ebx, 0x2e9c}
            
            if (o_20)
                sub_403010()
                noreturn
            
            int32_t edx_4
            edx_4.b = *(arg3 + (edi_5 << 3) + 0x16)
            int32_t edx_5 = edx_4 * 0xa
            bool o_21 = unimplemented  {imul edx, edx, 0xa}
            
            if (o_21)
                sub_403010()
                noreturn
            
            *((ebx_12 << 3) + &data_532f70 + (ecx_3 << 2) + (edx_5 << 3) - 0x174c4) = var_c_1
            *((ebx_12 << 3) + &data_532f70 + (ecx_3 << 2) + (edx_5 << 3) - 0x174c8) = 0
        else
            result.b -= 2
            char temp12_1 = result.b
            result.b -= 3
            
            if (temp12_1 u< 3)
                goto label_4cf65a
    
    result.b = var_5
    return result
}
