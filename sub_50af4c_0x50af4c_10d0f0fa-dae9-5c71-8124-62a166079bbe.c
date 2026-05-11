// ============================================================
// 函数名称: sub_50af4c
// 虚拟地址: 0x50af4c
// WARP GUID: 10d0f0fa-dae9-5c71-8124-62a166079bbe
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_408e80, sub_403e1c, sub_403df8, sub_404280, sub_403010
// [被调用的父级函数]: sub_508414
// ============================================================

void** __convention("regparm")sub_50af4c(void* arg1, int32_t* arg2, int32_t arg3 @ esi, int32_t arg4 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t i_2 = 6
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_2
        i_2 -= 1
    while (i != 1)
    int32_t entry_ebx
    *(esp_2 - 4) = entry_ebx
    *(esp_2 - 8) = arg3
    *(esp_2 - 0xc) = arg4
    void* var_8 = arg1
    sub_40422c(var_8)
    *(esp_2 - 0x10) = &var_4
    *(esp_2 - 0x14) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x18) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_2 - 0x18
    char* var_10
    *(esp_2 - 0x1c) = &var_10
    sub_404280(1, 1, var_8)
    *arg2 = sub_408e80(var_10)
    char* var_14
    *(esp_2 - 0x1c) = &var_14
    sub_404280(1, 2, var_8)
    arg2[1] = sub_408e80(var_14)
    char* var_18
    *(esp_2 - 0x1c) = &var_18
    sub_404280(1, 3, var_8)
    arg2[2] = sub_408e80(var_18)
    char* var_1c
    *(esp_2 - 0x1c) = &var_1c
    sub_404280(1, 4, var_8)
    arg2[3] = sub_408e80(var_1c)
    char* var_20
    *(esp_2 - 0x1c) = &var_20
    sub_404280(1, 5, var_8)
    arg2[4] = sub_408e80(var_20)
    char* var_24
    *(esp_2 - 0x1c) = &var_24
    sub_404280(1, 6, var_8)
    arg2[5] = sub_408e80(var_24)
    char* var_28
    void* esp_19
    *esp_19 = &var_28
    sub_404280(1, 7, var_8)
    void* esp_22 = esp_2 - 0x18
    arg2[6] = sub_408e80(var_28)
    arg2[8] = 0
    arg2[9] = 0
    arg2[7] = 0
    char* var_34
    
    for (int32_t i_1 = 1; i_1 != 9; i_1 += 1)
        char* var_2c
        *(esp_22 - 4) = &var_2c
        
        if (add_overflow(i_1, 0xffffffff))
            sub_403010()
            noreturn
        
        int32_t edi = (i_1 - 1) * 3
        bool o_2 = unimplemented  {imul edi, eax, 0x3}
        
        if (o_2)
            sub_403010()
            noreturn
        
        if (add_overflow(edi, 7))
            sub_403010()
            noreturn
        
        if (add_overflow(edi + 7, 1))
            sub_403010()
            noreturn
        
        sub_404280(1, edi + 8, var_8)
        int32_t eax_26 = sub_408e80(var_2c)
        char* var_30
        *(esp_22 - 4) = &var_30
        
        if (add_overflow(edi + 7, 2))
            sub_403010()
            noreturn
        
        sub_404280(1, edi + 9, var_8)
        sub_408e80(var_30)
        *(esp_22 - 4) = &var_34
        
        if (add_overflow(edi + 7, 3))
            sub_403010()
            noreturn
        
        sub_404280(1, edi + 0xa, var_8)
        sub_408e80(var_34)
        
        if (eax_26 == 1)
            int32_t temp6_1 = arg2[7]
            arg2[7] += 1
            
            if (add_overflow(temp6_1, 1))
                sub_403010()
                noreturn
        else if (eax_26 == 2)
            int32_t temp7_1 = arg2[8]
            arg2[8] += 1
            
            if (add_overflow(temp7_1, 1))
                sub_403010()
                noreturn
        else if (eax_26 == 3)
            int32_t temp8_1 = arg2[8]
            arg2[8] += 1
            
            if (add_overflow(temp8_1, 1))
                sub_403010()
                noreturn
        else if (eax_26 == 4)
            int32_t temp9_1 = arg2[9]
            arg2[9] += 1
            
            if (add_overflow(temp9_1, 1))
                sub_403010()
                noreturn
    
    *(esp_22 - 4) = &arg2[0xb]
    sub_404280(0x21, 0x20, var_8)
    *(esp_22 + 8)
    fsbase->NtTib.ExceptionList = *esp_22
    *(esp_22 + 8) = sub_50b1a2
    sub_403e1c(&var_34, 0xa)
    void** result = &var_8
    sub_403df8(result)
    return result
}
