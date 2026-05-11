// ============================================================
// 函数名称: sub_4abda8
// 虚拟地址: 0x4abda8
// WARP GUID: 260ca33b-93ca-5f5d-b5e1-788d3885fa11
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_403248, sub_403260, sub_4ac04c, sub_4ac17c, sub_4abf13, sub_4ac224, sub_4a5414, sub_4ac1f4, sub_408e1c, sub_404138, sub_405ae8, sub_4ac1c4, sub_40b4b0
// [被调用的父级函数]: sub_4ab384
// ============================================================

int32_t __convention("regparm")sub_4abda8(void* arg1, void* arg2, void* arg3)
{
    // 第一条实际指令: void* ebp
    void* ebp
    void* const var_4 = ebp
    int32_t* ebp_1 = &var_4
    void* const var_24
    __builtin_memset(&var_24, 0, 0x20)
    int32_t* var_34 = &var_4
    int32_t (* var_38)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_4 = (*data_530194)(*(arg3 + 0x24), ExceptionList, var_38, var_34)
    *(arg1 + 0x14) = eax_4
    
    if (eax_4 == 0)
        return sub_4abf13(ebp_1) __tailcall
    
    char* var_10
    
    if (sub_4a5414(eax_4, arg1) s<= 0)
        sub_405ae8(data_530848, &var_10)
        int32_t edx_3
        edx_3.b = 1
        sub_40b4b0(sub_4aa582+0x6e, edx_3, var_10)
        sub_403828()
        noreturn
    
    var_4 = arg2
    (*data_530190)(*(arg1 + 0x14), var_4)
    var_4 = *(arg1 + 0x14)
    char* var_14
    
    if ((*data_53000c)(var_4) s<= 0)
        sub_405ae8(data_5306e4, &var_14)
        int32_t edx_5
        edx_5.b = 1
        sub_40b4b0(sub_4aa582+0x132, edx_5, var_14)
        sub_403828()
        noreturn
    
    var_4 = "Cipher: name = "
    void* const var_18
    sub_4ac1c4(sub_4ac04c(arg1), &var_18)
    void* const var_8_2 = var_18
    char* var_c = &data_4abf5c
    var_10 = "description = "
    char* var_1c
    sub_4ac17c(sub_4ac04c(arg1), &var_1c)
    var_14 = var_1c
    var_18 = &data_4abf5c
    var_1c = "bits = "
    void* eax_22
    int32_t ecx_5
    int32_t edx_8
    eax_22, ecx_5, edx_8 = sub_4ac04c(arg1)
    int32_t var_20
    sub_408e1c(sub_4ac1f4(eax_22, edx_8, ecx_5), &var_20)
    var_20 = var_20
    var_24 = &data_4abf5c
    void* const var_28 = "version = "
    sub_4ac224(sub_4ac04c(arg1), &var_24)
    void* const var_2c = var_24
    void* const var_30 = &data_4abf5c
    sub_404138(&var_c, 0xc)
    int32_t* esi_1 = *(arg1 + 0xc)
    
    if (sub_403248(esi_1, 0x4a9e20) == 0)
        return sub_4abf13(ebp_1) __tailcall
    
    sub_403260(esi_1, 0x4a9e20)
    (*(*esi_1 + 0x60))()
    return sub_4abf13(ebp_1) __tailcall
}
