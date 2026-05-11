// ============================================================
// 函数名称: sub_414da8
// 虚拟地址: 0x414da8
// WARP GUID: b9c4eea2-027f-554f-83ef-48d894ffd7bb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4103c8, sub_414d38, sub_4030d0, sub_40c9e0, sub_415108, sub_4030a0, sub_410524, sub_406c44, sub_410580, sub_40fc0c, sub_41512c
// [被调用的父级函数]: sub_412a1c
// ============================================================

int32_t* __convention("regparm")sub_414da8(int32_t* arg1, int32_t* arg2, int32_t arg3 @ esi, int32_t arg4 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t i_2 = 5
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
    *(esp_2 - 0xc) = arg3
    *(esp_2 - 0x10) = arg4
    *(esp_2 - 0x14) = &var_4
    *(esp_2 - 0x18) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x1c) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_2 - 0x1c
    sub_415108(i_2)
    int32_t var_10 = 0
    sub_40c9e0(data_531618)
    *(esp_2 - 0x20) = &var_4
    *(esp_2 - 0x24) = j_sub_4037f0
    *(esp_2 - 0x28) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_2 - 0x28
    *(esp_2 - 0x2c) = &var_4
    *(esp_2 - 0x30) = j_sub_40353c
    *(esp_2 - 0x34) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_2 - 0x34
    int32_t ecx = (*(*arg1 + 0x24))()
    int32_t* var_10_1
    
    if (arg2 != 0)
        var_10_1 = arg2
        void var_24
        int32_t ecx_4 = sub_41512c(arg1, &var_24, ecx)
        void var_28
        
        if ((var_10_1[8].b & 0x10) == 0)
            var_10_1[8].w |= 1
            var_10_1[8].w |= 2
            char* var_30
            sub_41512c(arg1, &var_30, ecx_4)
            int32_t var_2c
            sub_414d38(var_30, &var_2c)
            (*(*var_10_1 + 0x18))()
        else
            sub_41512c(arg1, &var_28, ecx_4)
    else
        void* var_1c
        sub_41512c(arg1, &var_1c, ecx)
        char* eax_5
        int32_t edx_1
        eax_5, edx_1 = sub_40fc0c(var_1c)
        edx_1.b = 1
        int32_t* eax_6
        int32_t ecx_2
        eax_6, ecx_2 = (*(eax_5 + 0x2c))()
        var_10_1 = eax_6
        int32_t var_20
        sub_41512c(arg1, &var_20, ecx_2)
        (*(*var_10_1 + 0x18))()
    
    arg1[6] = var_10_1
    arg1[7] = var_10_1
    void* eax_20
    int32_t ecx_6
    int32_t edx_11
    eax_20, ecx_6, edx_11 = sub_406c44()
    
    if (*(eax_20 + 8) == 0)
        edx_11.b = 1
        arg1[0xd] = sub_4030a0(ecx_6, edx_11)
    else
        arg1[0xd] = *(sub_406c44() + 8)
    
    *esp_2 = &var_4
    *(esp_2 - 4) = j_sub_4037f0
    *(esp_2 - 8) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_2 - 8
    
    if (sub_410580(arg1[0xd], arg1[6]) s< 0)
        sub_4103c8(arg1[0xd], arg1[6])
    
    arg1[0xa] = arg1[6]
    void* eax_35 = arg1[6]
    *(eax_35 + 0x20) |= 1
    void* eax_37 = arg1[6]
    *(eax_37 + 0x20) |= 2
    (*(*arg1[6] + 0x14))()
    void* eax_41 = arg1[6]
    *(eax_41 + 0x20) &= 0xfffd
    
    if (*(sub_406c44() + 8) == 0)
        int32_t ebx_2 = *(arg1[0xd] + 8) - 1
        
        if (ebx_2 s>= 0)
            int32_t i_3 = ebx_2 + 1
            int32_t var_14_1 = 0
            int32_t i_1
            
            do
                (*(*sub_410524(arg1[0xd], var_14_1) + 0xc))()
                var_14_1 += 1
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    
    esp_2[3]
    fsbase->NtTib.ExceptionList = esp_2[1]
    esp_2[3] = sub_414fca
    
    if (*(sub_406c44() + 8) == 0)
        sub_4030d0(arg1[0xd])
    
    arg1[0xd] = 0
    return arg1
}
