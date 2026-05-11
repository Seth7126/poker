// ============================================================
// 函数名称: sub_4c54b4
// 虚拟地址: 0x4c54b4
// WARP GUID: b0332ff5-7038-5e91-884c-ad3fc6a3e06e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404138, sub_408e1c, sub_403e1c
// [被调用的父级函数]: sub_5223e8
// ============================================================

int32_t __fastcallsub_4c54b4(int32_t arg1, char** arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
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
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ebx_1 = 0
    int32_t i_1 = *data_5300d0
    
    if (i_1 s> 0)
        int32_t eax_1 = 1
        int32_t i
        
        do
            int32_t edi_1 = *(*data_5301f4 + (eax_1 << 2) + 0xffa4)
            
            if (ebx_1 s< edi_1)
                *data_5301f4
                ebx_1 = edi_1
            
            eax_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t var_30 = 0
    sub_408e1c(*(*data_5301f4 + 0x4584), &var_10)
    int32_t var_34 = var_10
    void* const var_38 = " von "
    int32_t var_3c = var_c
    void* const var_40 = " Runden gespielt, "
    sub_408e1c(ebx_1, &var_14)
    int32_t var_44 = var_14
    void* const var_48 = " von "
    int32_t var_4c = var_8
    void* const var_50 = " max. Punkten erreicht"
    sub_404138(arg2, 9)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4c5573
    return sub_403e1c(&var_14, 4)
}
