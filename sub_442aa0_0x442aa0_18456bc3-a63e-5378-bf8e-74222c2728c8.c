// ============================================================
// 函数名称: sub_442aa0
// 虚拟地址: 0x442aa0
// WARP GUID: 18456bc3-a63e-5378-bf8e-74222c2728c8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: MulDiv
// [内部子函数调用]: sub_42b1f4, sub_42e3a0, sub_42e3a8, sub_42c754, sub_431420, sub_442dd0, sub_418ad4, sub_42b238, sub_418acc, sub_442028, sub_42dc00
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_442aa0(int32_t* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    sub_42e3a0(arg1)
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    arg1[0x94] = 0
    arg1[0x95] = 0
    arg1[0x96] = 0
    int32_t* eax_3
    eax_3.b = data_5314d1
    eax_3.b ^= 1
    arg1[0x87].b = eax_3.b
    char ebx_2
    void* ebp_1
    ebx_2, ebp_1 = sub_42dc00(arg1, arg2)
    
    if (*(*(ebp_1 - 4) + 0x244) != 0 && *(*(ebp_1 - 4) + 0x258) s> 0)
        if ((*(*(ebp_1 - 4) + 0x88) & 0x10) != 0 && *(*(ebp_1 - 4) + 0x244) != *(data_5317dc + 0x34))
            void* esi_2 = *(*(ebp_1 - 4) + 0x58)
            MulDiv(sub_418acc(esi_2), *(data_5317dc + 0x34), *(*(ebp_1 - 4) + 0x244))
            sub_418ad4(esi_2)
        
        *(*(ebp_1 - 4) + 0x244) = *(data_5317dc + 0x34)
        int32_t nNumerator = sub_442dd0(*(ebp_1 - 4))
        int32_t eax_23 = *(*(ebp_1 - 4) + 0x258)
        
        if (nNumerator != eax_23)
            ebx_2 = 1
            sub_442028(*(ebp_1 - 4), nNumerator, eax_23)
            sub_431420(*(ebp_1 - 4), nNumerator, *(*(ebp_1 - 4) + 0x258))
            
            if ((*(*(ebp_1 - 4) + 0x88) & 4) != 0)
                *(*(ebp_1 - 4) + 0x250) =
                    MulDiv(*(*(ebp_1 - 4) + 0x250), nNumerator, *(*(ebp_1 - 4) + 0x258))
            
            if ((*(*(ebp_1 - 4) + 0x88) & 8) != 0)
                *(*(ebp_1 - 4) + 0x254) =
                    MulDiv(*(*(ebp_1 - 4) + 0x254), nNumerator, *(*(ebp_1 - 4) + 0x258))
    
    int32_t eax_40 = *(*(ebp_1 - 4) + 0x250)
    
    if (eax_40 s> 0)
        sub_42b1f4(*(ebp_1 - 4), eax_40)
    
    int32_t eax_43 = *(*(ebp_1 - 4) + 0x254)
    
    if (eax_43 s> 0)
        sub_42b238(*(ebp_1 - 4), eax_43)
    
    *(*(ebp_1 - 4) + 0x88) = 0
    
    if (ebx_2 == 0)
        sub_442028(*(ebp_1 - 4), 1, 1)
        sub_431420(*(ebp_1 - 4), 1, 1)
    
    sub_42c754(*(ebp_1 - 4), 0)
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_442ca7
    return sub_42e3a8(*(ebp_1 - 4))
}
