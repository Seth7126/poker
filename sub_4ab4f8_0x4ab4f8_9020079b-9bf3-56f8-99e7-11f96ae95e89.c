// ============================================================
// 函数名称: sub_4ab4f8
// 虚拟地址: 0x4ab4f8
// WARP GUID: 9020079b-9bf3-56f8-99e7-11f96ae95e89
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_4ab790, sub_4095f8, sub_4aba0c, sub_40423c, sub_405ae8, sub_4ab7f4, sub_403e1c, sub_4095cc, sub_4aba4c, sub_40b4b0, sub_4ab4d8, sub_4ab9cc
// [被调用的父级函数]: sub_4aad8c, sub_4ab224
// ============================================================

int32_t __convention("regparm")sub_4ab4f8(void* arg1, char arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_1c
    __builtin_memset(&var_1c, 0, 0x18)
    int32_t ebx
    int32_t var_20 = ebx
    int32_t esi
    int32_t var_24 = esi
    int32_t edi
    int32_t var_28 = edi
    int32_t var_8
    var_8:3.b = arg2
    int32_t* var_2c = &var_4
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4ab4d8(arg1)
    
    if (*(arg1 + 5) == 0)
        if (var_8:3.b != 1)
            *(arg1 + 5) = 1
        else
            *(arg1 + 5) = 2
    
    int32_t eax_2
    void* ebp_1
    eax_2, ebp_1 = sub_4ab7f4(arg1)
    int32_t eax_5 = (*data_530a20)(eax_2)
    *(arg1 + 0x24) = eax_5
    
    if (eax_5 == 0)
        sub_405ae8(data_5308dc, ebp_1 - 8)
        int32_t edx_1
        edx_1.b = 1
        sub_40b4b0(sub_4aa3c5+0x2b, edx_1, *(ebp_1 - 8))
        sub_403828()
        noreturn
    
    int32_t var_c
    (*data_530558)(*(arg1 + 0x24), &data_4aa6c8, var_c, var_8)
    (*data_530568)(*(arg1 + 0x24), arg1)
    (*data_530400)(*(arg1 + 0x24))
    
    if (*(arg1 + 8) != 0 && sub_4ab9cc(arg1) == 0)
        sub_405ae8(data_52ffc4, ebp_1 - 0xc)
        int32_t edx_3
        edx_3.b = 1
        sub_40b4b0(sub_4aa410+0x48, edx_3, *(ebp_1 - 0xc))
        sub_403828()
        noreturn
    
    if (*(arg1 + 0xc) != 0 && sub_4aba0c(arg1) == 0)
        sub_405ae8(data_530240, ebp_1 - 0x10)
        int32_t edx_5
        edx_5.b = 1
        sub_40b4b0(sub_4aa478+0x48, edx_5, *(ebp_1 - 0x10))
        sub_403828()
        noreturn
    
    if (*(arg1 + 0x10) != 0 && sub_4aba4c(arg1) == 0)
        sub_405ae8(data_5306bc, ebp_1 - 0x14)
        int32_t edx_7
        edx_7.b = 1
        sub_40b4b0(sub_4aa4dc+0x48, edx_7, *(ebp_1 - 0x14))
        sub_403828()
        noreturn
    
    if (*(arg1 + 0x28) != 0)
        (*data_52ff28)(*(arg1 + 0x24), 0x4aa7d4)
    
    int32_t ecx_6
    int32_t esi_2
    
    if (*(arg1 + 0x20) == 0)
        int32_t eax_36
        eax_36, ecx_6 =
            (*data_530860)(*(arg1 + 0x24), "ALL:!ADH:RC4+RSA:+HIGH:+MEDIUM:+LOW:+SSLv2:+EXP")
        esi_2 = eax_36
    else
        void* eax_30 = sub_4095cc(sub_40423c(*(arg1 + 0x20)))
        esi_2 = (*data_530860)(*(arg1 + 0x24), eax_30)
        sub_4095f8(eax_30)
    
    if (esi_2 s<= 0)
        sub_405ae8(data_5302a4, ebp_1 - 0x18)
        int32_t edx_10
        edx_10.b = 1
        sub_40b4b0(sub_4aa582+6, edx_10, *(ebp_1 - 0x18))
        sub_403828()
        noreturn
    
    if (0 != *(arg1 + 0x18))
        ecx_6.b = *(arg1 + 0x29)
        sub_4ab790(arg1, *(arg1 + 0x18), ecx_6)
    
    if (*(ebp_1 - 1) == 1)
        (*data_5301c0)(*(arg1 + 0x24), arg1 + 0x2c, 4)
    
    if (*(arg1 + 8) != 0)
        void* eax_48 = sub_4095cc(sub_40423c(*(arg1 + 8)))
        int32_t eax_51 = (*data_530798)(eax_48)
        (*data_530200)(*(arg1 + 0x24), eax_51)
        sub_4095f8(eax_48)
    
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4ab753
    return sub_403e1c(ebp_1 - 0x18, 5)
}
