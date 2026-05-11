// ============================================================
// 函数名称: sub_51a454
// 虚拟地址: 0x51a454
// WARP GUID: 6892daa4-766c-5a5e-8285-92d5aec6cf1b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49292c, sub_492c54, sub_409040, sub_402d20, sub_404188, sub_403e4c, sub_408e80, sub_51aaa0, sub_403e1c, sub_404280, sub_51a3a8, sub_403010
// [被调用的父级函数]: sub_51a7f4, sub_51a79c
// ============================================================

int32_t __convention("regparm")sub_51a454(void* arg1, int32_t arg2 @ esi, int32_t arg3 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t* ebp_1 = &var_4
    int32_t i_2 = 4
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_2
        i_2 -= 1
    while (i != 1)
    *(esp_2 - 4) = i_2
    int32_t entry_ebx
    *(esp_2 - 8) = entry_ebx
    *(esp_2 - 0xc) = arg2
    *(esp_2 - 0x10) = arg3
    *(esp_2 - 0x14) = &var_4
    *(esp_2 - 0x18) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x1c) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_2 - 0x1c
    int32_t temp1 = *(arg1 + 0x960)
    bool cond:0 = temp1 != 0
    
    if (temp1 == 0)
        cond:0 = arg1 != 0xfffff6a0
        sub_403e4c(arg1 + 0x960, "xx")
    
    void* var_c
    *(esp_2 - 0x20) = &var_c
    sub_404280(1, 2, *(arg1 + 0x960))
    void* esp_11 = esp_2 - 0x1c
    sub_404188(var_c, 0x51a798)
    int32_t i_1
    bool z
    
    if (cond:0)
        char* var_10
        *(esp_11 - 4) = &var_10
        sub_404280(1, 2, *(arg1 + 0x960))
        *(arg1 + 0x964) = sub_408e80(var_10)
        i_1 = 0
        z = entry_ebx == entry_ebx
    else
        int32_t eax_6 = sub_402d20(6)
        i_1 = eax_6 + 1
        z = eax_6 == 0xffffffff
        
        if (add_overflow(eax_6, 1))
            sub_403010()
            noreturn
    
    void* var_14
    *(esp_11 - 4) = &var_14
    sub_404280(1, 1, *(arg1 + 0x960))
    sub_404188(var_14, 0x51a798)
    
    if (not(z))
        char* var_18
        *(esp_11 - 4) = &var_18
        sub_404280(1, 1, *(arg1 + 0x960))
        *(arg1 + 0x968) = sub_408e80(var_18)
        arg2 = 0
    else
        int32_t eax_14 = sub_402d20(6)
        i_1 = eax_14 + 1
        
        if (add_overflow(eax_14, 1))
            sub_403010()
            noreturn
    
    while (arg2 s> 0)
        if (add_overflow(arg2, 0xffffffff))
            sub_403010()
            noreturn
        
        void* eax_19 = ebp_1[-1]
        int32_t temp9_1 = *(eax_19 + 0x968)
        *(eax_19 + 0x968) += 1
        
        if (add_overflow(temp9_1, 1))
            sub_403010()
            noreturn
        
        i_1, ebp_1, arg2 = sub_51a3a8(*(ebp_1[-1] + 0x968), 1, &ebp_1[-6])
        
        if (sub_409040(ebp_1[-6]) == 0)
            *(ebp_1[-1] + 0x968) = 1
    
    while (i_1 s> 0)
        if (add_overflow(i_1, 0xffffffff))
            sub_403010()
            noreturn
        
        void* eax_25 = ebp_1[-1]
        int32_t temp10_1 = *(eax_25 + 0x964)
        *(eax_25 + 0x964) += 1
        
        if (add_overflow(temp10_1, 1))
            sub_403010()
            noreturn
        
        i_1, ebp_1 = sub_51a3a8(*(ebp_1[-1] + 0x968), *(ebp_1[-1] + 0x964), &ebp_1[-7])
        
        if (sub_409040(ebp_1[-7]) == 0)
            *(ebp_1[-1] + 0x964) = 1
    
    void* ebp_2 = sub_51a3a8(*(ebp_1[-1] + 0x968), *(ebp_1[-1] + 0x964), &ebp_1[-8])
    sub_403e4c(*(*(ebp_2 - 4) + 4) + 0x300, *(ebp_2 - 0x20))
    *(esp_11 - 4) = ebp_2
    *(esp_11 - 8) = j_sub_40353c
    *(esp_11 - 0xc) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_11 - 0xc
    void* ebp_3 = sub_49292c(*(*(ebp_2 - 4) + 4))
    *(*(ebp_3 - 4) + 0x978) = 1
    sub_492c54(*(*(ebp_3 - 4) + 4))
    *(esp_11 - 4)
    fsbase->NtTib.ExceptionList = *(esp_11 - 0xc)
    int32_t edx_9
    edx_9.b = 1
    sub_51aaa0(*data_5303b8, edx_9)
    *(esp_11 + 8)
    fsbase->NtTib.ExceptionList = *esp_11
    *(esp_11 + 8) = 0x51a77d
    return sub_403e1c(ebp_3 - 0x24, 8)
}
