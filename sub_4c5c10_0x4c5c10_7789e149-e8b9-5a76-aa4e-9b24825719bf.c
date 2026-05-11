// ============================================================
// 函数名称: sub_4c5c10
// 虚拟地址: 0x4c5c10
// WARP GUID: 7789e149-e8b9-5a76-aa4e-9b24825719bf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c2b98, sub_4c2de8, sub_4c0924, sub_403010
// [被调用的父级函数]: sub_4c5cf4
// ============================================================

int32_tsub_4c5c10(void* arg1)
{
    // 第一条实际指令: void* esi = data_5301f4
    void* esi = data_5301f4
    int32_t result
    result.b = 1
    
    while (true)
        int32_t eax_2 = *(*esi + 0x456c)
        
        if (eax_2 s>= *(arg1 - 4))
            break
        
        int32_t temp0_1 = *(arg1 - 4)
        *(arg1 - 4) -= eax_2
        
        if (add_overflow(temp0_1, neg.d(eax_2)))
            sub_403010()
            noreturn
    
    while (*(arg1 - 4) s< 1)
        int32_t eax_4 = *(*esi + 0x456c)
        int32_t temp1_1 = *(arg1 - 4)
        *(arg1 - 4) += eax_4
        
        if (add_overflow(temp1_1, eax_4))
            sub_403010()
            noreturn
    
    if (*(arg1 - 5) != 0)
    label_4c5c74:
        *(arg1 - 4)
        bool o_3 = unimplemented  {imul eax, dword [edi], 0x41}
        
        if (o_3)
            sub_403010()
            noreturn
        
        int32_t eax_8
        eax_8.b = *(*esi + *(arg1 - 4) * 0x208 + 0x1fea0)
        
        if (eax_8.b == 0)
            result = 0
        
        if (*(arg1 - 6) != 0)
            *(arg1 - 4)
            *(arg1 - 4)
            bool o_4 = unimplemented  {imul edx, dword [edi], 0x41}
            
            if (o_4)
                sub_403010()
                noreturn
            
            *esi
            
            if (eax_8.b == 3)
                result = 0
        
        if (*(arg1 - 6) != 0)
            *(arg1 - 4)
            bool o_5 = unimplemented  {imul eax, dword [edi], 0x41}
            
            if (o_5)
                sub_403010()
                noreturn
            
            if (*(*esi + *(arg1 - 4) * 0x208 + 0x20084) != 0 && sub_4c2b98(0) == 0)
                result = 0
    else
        void* eax_6
        eax_6.b = *(*esi + 0xffec)
        char temp3_1 = eax_6.b
        eax_6.b -= 4
        
        if (temp3_1 == 4)
            goto label_4c5c74
        
        if (sub_4c0924() != 0)
            goto label_4c5c74
    
    if (sub_4c0924() != 0 && sub_4c2de8(0) s<= 0)
        result.b = 1
    
    return result
}
