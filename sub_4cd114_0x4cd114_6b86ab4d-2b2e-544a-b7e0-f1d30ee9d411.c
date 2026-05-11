// ============================================================
// 函数名称: sub_4cd114
// 虚拟地址: 0x4cd114
// WARP GUID: 6b86ab4d-2b2e-544a-b7e0-f1d30ee9d411
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4cc848, sub_5179dc, sub_517b0c, sub_52b194, sub_52b220, sub_517bc0, sub_403010
// [被调用的父级函数]: sub_4cd498
// ============================================================

int32_tsub_4cd114(void* arg1)
{
    // 第一条实际指令: __builtin_memcpy(arg1 - 0x104, arg1 - 0x514, 0x104)
    __builtin_memcpy(arg1 - 0x104, arg1 - 0x514, 0x104)
    __builtin_memcpy(arg1 - 0x208, arg1 - 0x514, 0x104)
    void* edi_5 = arg1 - 0x30c
    char* esi_5 = arg1 - 0x52c
    void* eax_1
    eax_1.b = *esi_5
    char edx_2 = eax_1.b
    char temp1_1
    
    if (edx_2 != 5)
        temp1_1 = edx_2 - 5
    
    if (edx_2 == 5 || temp1_1 == 4)
        sub_52b194(arg1 - 0x104)
        sub_52b194(arg1 - 0x208)
    else if (eax_1.b == 6)
        sub_52b220(arg1 - 0x104)
        sub_52b220(arg1 - 0x208)
    
    sub_517bc0(edi_5)
    sub_517bc0(arg1 - 0x410)
    char i = 0
    char var_1b = 0
    int32_t ebx = 1
    int32_t var_10 = 1
    int32_t var_c = 0
    *(edi_5 + 0x100) = 0
    
    do
        char var_11_1 = 1
        int32_t eax_14 = *(arg1 + (ebx << 2) - 0x108)
        
        if (*(edi_5 + 0x100) != 0 && (esi_5[8] == 0 || sx.d(*(edi_5 + 0x100)) != *(esi_5 + 0xc)))
            int16_t var_1a_1 = (*(edi_5 + (sx.d(*(edi_5 + 0x100)) << 2) - 4)).w
            
            if (esi_5[0x14] != 0 && sub_4cc848(sx.d(var_1a_1.b)) != sx.d(eax_14.b)
                    && (var_1a_1.b != 9 || eax_14.b != 8))
                var_11_1 = 0
            
            int32_t eax_17
            
            if (esi_5[0x15] != 0)
                eax_17.b = eax_14.b
                
                if (eax_17.b != var_1a_1.b)
                    var_11_1 = 0
            
            if (esi_5[0x16] != 0)
                eax_17.b = eax_14:1.b
                
                if (eax_17.b != var_1a_1:1.b)
                    var_11_1 = 0
        else if (esi_5[0x17] != 0 && eax_14.b != 8)
            var_11_1 = 0
        
        if (var_11_1 == 0)
            if (var_c == 0)
                int32_t eax_22 = sx.d(*(edi_5 + 0x100))
                int32_t eax_23 = eax_22 + ebx
                
                if (add_overflow(eax_22, ebx))
                    sub_403010()
                    noreturn
                
                int32_t eax_25 = sx.d(*(arg1 - 0x310))
                var_c = eax_23 - eax_25
                
                if (add_overflow(eax_23, neg.d(eax_25)))
                    sub_403010()
                    noreturn
                
                if (var_c == 0)
                    int32_t temp6_1 = var_c
                    var_c += 1
                    
                    if (add_overflow(temp6_1, 1))
                        sub_403010()
                        noreturn
            
            if (ebx s>= sx.d(*(arg1 - 4)))
                ebx = var_c
                
                if (ebx == var_10)
                    int32_t temp5_1 = ebx
                    ebx += 1
                    
                    if (add_overflow(temp5_1, 1))
                        sub_403010()
                        noreturn
                
                var_10 = ebx
                var_c = 0
                __builtin_memcpy(arg1 - 0x104, arg1 - 0x208, 0x104)
                __builtin_memcpy(edi_5, arg1 - 0x410, 0x104)
            else
                int32_t temp3_1 = ebx
                ebx += 1
                
                if (add_overflow(temp3_1, 1))
                    sub_403010()
                    noreturn
        else
            sub_5179dc(edi_5, eax_14)
            sub_517b0c(arg1 - 0x104, ebx)
        
        if (sx.d(*(edi_5 + 0x100)) == *(esi_5 + 4))
            i = 1
        
        if (esi_5[8] != 0)
            if (var_1b == 0 && sx.d(*(edi_5 + 0x100)) == *(esi_5 + 0xc))
                var_c = 0
                var_1b = 1
                ebx = 1
                var_10 = 1
                __builtin_memcpy(arg1 - 0x410, edi_5, 0x104)
                __builtin_memcpy(arg1 - 0x208, arg1 - 0x104, 0x104)
            
            if (var_1b != 0 && add_overflow(*(esi_5 + 0xc), *(esi_5 + 0x10)))
                sub_403010()
                noreturn
        
        void* edx_8
        edx_8.w = *(arg1 - 4)
        
        if (ebx s> sx.d(edx_8.w))
            break
        
        if (edx_8.w s< 1)
            break
    while (i == 0)
    
    int32_t result
    result.b = i
    return result
}
