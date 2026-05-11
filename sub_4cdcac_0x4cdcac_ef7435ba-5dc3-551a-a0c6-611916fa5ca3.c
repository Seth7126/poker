// ============================================================
// 函数名称: sub_4cdcac
// 虚拟地址: 0x4cdcac
// WARP GUID: ef7435ba-5dc3-551a-a0c6-611916fa5ca3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4d5ba0, sub_4ceed4, sub_4d5b64, sub_403010, sub_4d5b1c
// [被调用的父级函数]: sub_4c62e8
// ============================================================

int32_tsub_4cdcac()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t edi
    int32_t var_18 = edi
    int32_t* esp_1 = &var_18
    int32_t eax
    int32_t var_8 = eax
    char var_a = 4
    char ebx_1 = 0
    int32_t i
    
    while (true)
        if (var_a != 0 && ebx_1 == 0)
            int32_t eax_1
            eax_1.b = var_a
            bool o_1 = unimplemented  {imul eax, eax, 0xd4f}
            
            if (o_1)
                sub_403010()
                noreturn
            
            if (*(eax_1 * 0x353c + &data_608020) s<= 0)
                eax.b = var_a
                int32_t eax_2 = sub_4d5b1c(eax.b)
                
                if (add_overflow(eax_2, 0xffffffff))
                    sub_403010()
                    noreturn
                
                var_a = sub_4d5b64(eax_2 - 1).b
                continue
            else
                ebx_1 = 1
                continue
        
        eax.b = var_a
        i = sub_4d5ba0(eax.b)
        ebx_1 = 5
        break
    
    int32_t eax_4
    
    do
        if (ebx_1 == 5)
            eax_4.b = var_a
            int32_t eax_5 = sub_4d5b1c(eax_4.b)
            
            if (add_overflow(eax_5, 0xffffffff))
                sub_403010()
                noreturn
            
            ebx_1 = sub_4d5b64(eax_5 - 1)
        
        eax_4 = sub_4d5ba0(ebx_1)
        
        if (i s>= eax_4)
            *(esp_1 - 4) = sub_4d5ba0(ebx_1)
            *(esp_1 - 8) = 1
            *(esp_1 - 0xc) = 4
            *(esp_1 - 0x10) = 1
            esp_1 -= 0x10
            sub_4ceed4(var_8, 9, 0xa)
            int32_t i_1 = i
            i -= eax_4
            
            if (add_overflow(i_1, neg.d(eax_4)))
                sub_403010()
                noreturn
        
        if (ebx_1 != 0)
            int32_t eax_13 = sub_4d5b1c(ebx_1)
            
            if (add_overflow(eax_13, 0xffffffff))
                sub_403010()
                noreturn
            
            ebx_1 = sub_4d5b64(eax_13 - 1).b
        else
            ebx_1 = 5
    while (i != 0)
    
    eax_4.b = var_a
    *(esp_1 - 4) = sub_4d5ba0(eax_4.b)
    *(esp_1 - 8) = 1
    *(esp_1 - 0xc) = 4
    *(esp_1 - 0x10) = 1
    sub_4ceed4(var_8, 0xa, 9)
    char var_9
    int32_t result
    result.b = var_9
    *(esp_1 - 0x10)
    *(esp_1 - 0xc)
    *(esp_1 - 8)
    *esp_1
    esp_1[1]
    return result
}
