// ============================================================
// 函数名称: sub_52b63c
// 虚拟地址: 0x52b63c
// WARP GUID: 5d2fb359-1acf-545a-a7ee-2466958d81a6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404308, sub_40c024, sub_40422c, sub_404078, sub_4042c0, sub_404188, sub_51b4f0, sub_403e4c, sub_403df8, sub_403010
// [被调用的父级函数]: sub_52ba68
// ============================================================

void* __convention("regparm")sub_52b63c(void** arg1, void* arg2, void* arg3, void* arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    void* var_8 = arg3
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    var_8 = arg2
    sub_40422c(var_8)
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_1 = sub_40c024(0x52b7dc, var_8)
    void* esp_2
    void* ebp_2
    
    if (eax_1 s<= 0)
        ebp_2 = sub_51b4f0(*data_5303b8, *(arg4 - 0x14), arg4 - 8, *(arg4 - 0x10), *(arg4 - 0xc))
        esp_2 = &var_8
    else
        sub_404188(var_8, 0x52b7e8)
        
        if (eax_1 != 0)
            sub_4042c0(&var_8, eax_1, 1)
            sub_404308(*arg1, &var_8, eax_1)
            
            if (eax_1 == 1)
                ebp_1 = sub_51b4f0(*data_5303b8, *(arg4 - 4), arg4 - 8, *(arg4 - 0x10), *(arg4 - 0xc))
                esp_1 = &var_8
            
            *(esp_1 - 4) = *(ebp_1[2] - 0xc)
            *(esp_1 - 8) = 0
            int32_t ebx_2
            ebx_2, ebp_2 = sub_51b4f0(*data_5303b8, *(ebp_1[2] - 0x14), ebp_1[2] - 8)
            esp_2 = &esp_1[5]
            
            if (ebx_2 s> 1)
                *(esp_2 - 4) = *(*(ebp_2 + 8) - 0xc)
                *(esp_2 - 8) = *(*(ebp_2 + 8) - 0x10)
                ebp_2 = sub_51b4f0(*data_5303b8, *(*(ebp_2 + 8) - 4), *(ebp_2 + 8) - 8)
                esp_2 += 0x14
        else
            sub_4042c0(&var_8, eax_1, 1)
            sub_404308(*arg1, &var_8, eax_1)
            int32_t eax_7 = sub_404078(*(arg4 - 4))
            
            if (add_overflow(eax_7, 0xfffffffd))
                sub_403010()
                noreturn
            
            sub_404308(0x52b7f4, arg4 - 4, eax_7 - 3)
            ebp_2 = sub_51b4f0(*data_5303b8, *(arg4 - 4), arg4 - 8, *(arg4 - 0x10), *(arg4 - 0xc))
            esp_2 = &var_8
    
    sub_403e4c(arg1, *(ebp_2 - 4))
    *(esp_2 + 8)
    fsbase->NtTib.ExceptionList = *esp_2
    *(esp_2 + 8) = sub_52b7cf
    sub_403df8(ebp_2 - 4)
    return ebp_2 - 4
}
