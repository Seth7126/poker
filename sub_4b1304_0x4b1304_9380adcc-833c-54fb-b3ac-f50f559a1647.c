// ============================================================
// 函数名称: sub_4b1304
// 虚拟地址: 0x4b1304
// WARP GUID: 9380adcc-833c-54fb-b3ac-f50f559a1647
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a86b4, sub_404078, sub_404138, sub_4a8678, sub_4af710, sub_4a21b4, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_4b0322, sub_4b008c
// ============================================================

int32_t __convention("regparm")sub_4b1304(void* arg1, int32_t arg2 @ esi, int32_t arg3 @ edi)
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
    int32_t entry_ebx
    *(esp_2 - 4) = entry_ebx
    *(esp_2 - 8) = arg2
    *(esp_2 - 0xc) = arg3
    *(esp_2 - 0x10) = &var_4
    *(esp_2 - 0x14) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x18) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_2 - 0x18
    (*(**(arg1 + 8) + 0x10))()
    int32_t ebx_1
    void* ebp_1
    ebx_1, ebp_1 = sub_4a21b4(*(*(arg1 + 4) + 0x10c), *(*(arg1 + 8) + 8))
    
    if (ebx_1 != 0)
        sub_4af710(*(*(ebp_1 - 4) + 4), ebx_1, *(*(ebp_1 - 4) + 8))
    
    sub_4a8678(*(*(ebp_1 - 4) + 4), 0xffffffff)
    *(esp_2 - 0xc) = ebp_1
    *(esp_2 - 0x10) = j_sub_40353c
    *(esp_2 - 0x14) = fsbase->NtTib.ExceptionList
    void* esp_12 = esp_2 - 0x14
    fsbase->NtTib.ExceptionList = esp_12
    void* ebx_2 = *(*(ebp_1 - 4) + 8)
    int32_t eax_13
    eax_13.b = *(ebx_2 + 0x90)
    
    switch (eax_13)
        case 0
            *(esp_12 - 4) = "HEAD "
            *(esp_12 - 8) = *(ebx_2 + 0x8c)
            *(esp_12 - 0xc) = " HTTP/"
            int32_t* esi = *(*(ebp_1 - 4) + 4)
            int32_t eax_15
            eax_15.b = esi[0x3d].b
            *(esp_12 - 0x10) = (&data_52fdc8)[eax_15]
            sub_404138(ebp_1 - 8, 4)
            *(ebp_1 - 8)
            (*(*esi + 0x7c))()
        case 1
            *(esp_12 - 4) = "GET "
            *(esp_12 - 8) = *(ebx_2 + 0x8c)
            *(esp_12 - 0xc) = " HTTP/"
            int32_t* esi_1 = *(*(ebp_1 - 4) + 4)
            int32_t eax_19
            eax_19.b = esi_1[0x3d].b
            *(esp_12 - 0x10) = (&data_52fdc8)[eax_19]
            sub_404138(ebp_1 - 0xc, 4)
            *(ebp_1 - 0xc)
            (*(*esi_1 + 0x7c))()
        case 2
            *(esp_12 - 4) = "POST "
            *(esp_12 - 8) = *(ebx_2 + 0x8c)
            *(esp_12 - 0xc) = " HTTP/"
            int32_t* esi_2 = *(*(ebp_1 - 4) + 4)
            int32_t eax_23
            eax_23.b = esi_2[0x3d].b
            *(esp_12 - 0x10) = (&data_52fdc8)[eax_23]
            sub_404138(ebp_1 - 0x10, 4)
            *(ebp_1 - 0x10)
            (*(*esi_2 + 0x7c))()
        case 3
            *(esp_12 - 4) = "OPTIONS "
            *(esp_12 - 8) = *(ebx_2 + 0x8c)
            *(esp_12 - 0xc) = " HTTP/"
            int32_t* esi_3 = *(*(ebp_1 - 4) + 4)
            int32_t eax_27
            eax_27.b = esi_3[0x3d].b
            *(esp_12 - 0x10) = (&data_52fdc8)[eax_27]
            sub_404138(ebp_1 - 0x14, 4)
            *(ebp_1 - 0x14)
            (*(*esi_3 + 0x7c))()
        case 4
            *(esp_12 - 4) = "TRACE "
            *(esp_12 - 8) = *(ebx_2 + 0x8c)
            *(esp_12 - 0xc) = " HTTP/"
            int32_t* esi_4 = *(*(ebp_1 - 4) + 4)
            int32_t eax_31
            eax_31.b = esi_4[0x3d].b
            *(esp_12 - 0x10) = (&data_52fdc8)[eax_31]
            sub_404138(ebp_1 - 0x18, 4)
            *(ebp_1 - 0x18)
            (*(*esi_4 + 0x7c))()
        case 5
            *(esp_12 - 4) = "PUT "
            *(esp_12 - 8) = *(ebx_2 + 0x8c)
            *(esp_12 - 0xc) = " HTTP/"
            int32_t* esi_5 = *(*(ebp_1 - 4) + 4)
            int32_t eax_35
            eax_35.b = esi_5[0x3d].b
            *(esp_12 - 0x10) = (&data_52fdc8)[eax_35]
            sub_404138(ebp_1 - 0x1c, 4)
            *(ebp_1 - 0x1c)
            (*(*esi_5 + 0x7c))()
        case 7
            *(esp_12 - 4) = "CONNECT "
            *(esp_12 - 8) = *(ebx_2 + 0x8c)
            *(esp_12 - 0xc) = " HTTP/"
            int32_t* esi_6 = *(*(ebp_1 - 4) + 4)
            int32_t eax_39
            eax_39.b = esi_6[0x3d].b
            *(esp_12 - 0x10) = (&data_52fdc8)[eax_39]
            sub_404138(ebp_1 - 0x20, 4)
            *(ebp_1 - 0x20)
            (*(*esi_6 + 0x7c))()
    
    int32_t i_4 = (*(**(*(*(ebp_1 - 4) + 8) + 8) + 0x14))()
    
    if (add_overflow(i_4, 0xffffffff))
        sub_403010()
        noreturn
    
    if (i_4 - 1 s>= 0)
        int32_t i_3 = i_4
        int32_t ebx_3 = 0
        int32_t i_1
        
        do
            (*(**(*(*(ebp_1 - 4) + 8) + 8) + 0xc))()
            
            if (sub_404078(*(ebp_1 - 0x24)) s> 0)
                (*(**(*(*(ebp_1 - 4) + 8) + 8) + 0xc))()
                *(ebp_1 - 0x28)
                (*(**(*(ebp_1 - 4) + 4) + 0x7c))()
            
            ebx_3 += 1
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    (*(**(*(ebp_1 - 4) + 4) + 0x7c))()
    void* ebp_2 = sub_4a86b4(*(*(ebp_1 - 4) + 4))
    *(esp_12 + 0x14)
    fsbase->NtTib.ExceptionList = *(esp_12 + 0xc)
    *(esp_12 + 0x20)
    fsbase->NtTib.ExceptionList = *(esp_12 + 0x18)
    *(esp_12 + 0x20) = sub_4b163e
    return sub_403e1c(ebp_2 - 0x28, 9)
}
