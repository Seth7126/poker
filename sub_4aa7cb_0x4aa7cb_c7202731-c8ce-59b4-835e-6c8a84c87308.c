// ============================================================
// 函数名称: sub_4aa7cb
// 虚拟地址: 0x4aa7cb
// WARP GUID: c7202731-c8ce-59b4-835e-6c8a84c87308
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a5428, sub_403248, sub_409598, sub_494050, sub_405ae8, sub_494048, sub_409ae0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4aa7cb(char* arg1, int16_t arg2, int32_t* arg3, void* arg4 @ ebp)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *(arg4 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2, eflags)
    int32_t var_14
    __builtin_memset(&var_14, 0, 0x14)
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t esi_1 = *(arg4 + 8)
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    sub_494048(data_5325e4)
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_2 = sub_4a5428(esi_1)
    sub_409598(
        (*data_53002c)(esi_1, arg4 - 4, ExceptionList, var_30, arg4, ExceptionList_1, var_24, arg4), 
        arg4 - 0x10)
    *(arg4 - 0xc) = *(arg4 - 0x10)
    *(arg4 - 8) = 0xb
    sub_405ae8(data_530430, arg4 - 0x14)
    void* var_c
    sub_409ae0(0, arg4 - 0xc, *(arg4 - 0x14), var_c)
    int32_t* esi_2 = *(eax_2 + 0xc)
    int32_t var_8
    int32_t var_4
    
    if (sub_403248(esi_2, 0x4a9e20) != 0)
        *(arg4 - 4)
        (*(*esi_2 + 0x60))(var_8, var_4)
    
    int32_t* esi_3 = *(eax_2 + 0xc)
    
    if (sub_403248(esi_3, 0x4a9fcc) != 0)
        *(arg4 - 4)
        (*(*esi_3 + 0x44))(var_8, var_4)
    
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4aa8aa
    return sub_494050(data_5325e4)
}
