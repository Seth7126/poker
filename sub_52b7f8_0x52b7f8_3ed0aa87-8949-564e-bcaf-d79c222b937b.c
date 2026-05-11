// ============================================================
// 函数名称: sub_52b7f8
// 虚拟地址: 0x52b7f8
// WARP GUID: 3ed0aa87-8949-564e-bcaf-d79c222b937b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40c024, sub_40422c, sub_403e90, sub_4042c0, sub_52b40c, sub_51b4f0, sub_403df8, sub_403e1c, sub_52b570, sub_404280, sub_403010
// [被调用的父级函数]: sub_52ba68
// ============================================================

int32_t __convention("regparm")sub_52b7f8(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t var_8 = 0
    int32_t var_c = 0
    int32_t var_10 = 0
    int32_t var_14 = 0
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t edi
    int32_t var_20 = edi
    sub_40422c(arg1)
    int32_t* esi_2 = arg2 - 0xc
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t i
    
    do
        void* eax_1 = sub_40c024(0x52b8e4, ebp_1[-1])
        
        if (eax_1 != 0)
            *(esp_1 - 4) = &ebp_1[-2]
            
            if (add_overflow(eax_1, 0xffffffff))
                sub_403010()
                noreturn
            
            sub_404280(eax_1 - 1, 1, ebp_1[-1])
            sub_4042c0(&ebp_1[-1], 1, eax_1)
        else
            sub_403e90(&ebp_1[-2], ebp_1[-1])
        
        void* ebp_2
        int32_t* edi_3
        ebp_2, edi_3 = sub_52b40c(ebp_1[-2], &ebp_1[-3])
        void* ebp_3
        ebp_3, esi_2 = sub_52b570(*(ebp_2 - 0xc), *esi_2, ebp_2 - 0x10)
        esp_1[8] = *esi_2
        esp_1[7] = 0
        i, ebp_1 = sub_51b4f0(*data_5303b8, *(ebp_3 - 0x10), edi_3)
        esp_1 = &esp_1[9]
        sub_403df8(edi_3)
    while (i != 0)
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = sub_52b8d4
    return sub_403e1c(&ebp_1[-4], 4)
}
