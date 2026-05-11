// ============================================================
// 函数名称: sub_4a1b34
// 虚拟地址: 0x4a1b34
// WARP GUID: faaa5059-008f-5d6d-82eb-fd7e68da375d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408b34, sub_49f520, sub_408ebc, sub_49e0cc, sub_49e52c, sub_403e4c, sub_40a074, sub_403df8, sub_403e1c, sub_408e80
// [被调用的父级函数]: sub_4a2b90, sub_4a22af, sub_4a2310
// ============================================================

int32_t __convention("regparm")sub_4a1b34(void* arg1, int32_t arg2 @ esi, int32_t arg3 @ edi, long double arg4 @ st0, long double arg5 @ st1, long double arg6 @ st2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_1 = &var_4
    int32_t i_1 = 6
    int32_t i
    
    do
        *(esp_1 - 4) = 0
        *(esp_1 - 8) = 0
        esp_1 -= 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    int32_t entry_ebx
    *(esp_1 - 4) = entry_ebx
    *(esp_1 - 8) = arg2
    *(esp_1 - 0xc) = arg3
    *(esp_1 - 0x10) = &var_4
    *(esp_1 - 0x14) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0x18) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_1 - 0x18
    int32_t* esi = *(arg1 + 8)
    sub_49f520(esi, "Connection")
    char* var_c
    sub_403e4c(arg1 + 0xc, var_c)
    sub_49f520(esi, "Content-Version")
    char* var_10
    sub_403e4c(arg1 + 0x28, var_10)
    sub_49f520(esi, "Content-Encoding")
    char* var_14
    sub_403e4c(arg1 + 0x10, var_14)
    sub_49f520(esi, "Content-Language")
    char* var_18
    sub_403e4c(arg1 + 0x14, var_18)
    sub_49f520(esi, "Content-Type")
    char* var_1c
    sub_403e4c(arg1 + 0x24, var_1c)
    sub_49f520(esi, "Content-Length")
    void* var_24
    char* var_20
    int32_t eax_13 = sub_408ebc(sub_408b34(var_24, &var_20), 0xffffffff)
    *(arg1 + 0x18) = eax_13
    eax_13.b = eax_13 s>= 0
    *(arg1 + 0x4c) = eax_13.b
    sub_49f520(esi, "Date")
    char* var_28
    void* ebp_1 = sub_49e52c(var_28, arg4, arg5)
    *(arg1 + 0x30) = fconvert.d(arg4)
    sub_49f520(esi, "Last-Modified")
    void* ebp_2 = sub_49e52c(*(ebp_1 - 0x28), arg5, arg6)
    *(arg1 + 0x40) = fconvert.d(arg5)
    int32_t ecx_3
    int32_t edx_6
    ecx_3, edx_6 = sub_49f520(esi, "Expires")
    long double x87_r3
    
    if (sub_49e0cc(*(ebp_2 - 4), edx_6, ecx_3) == 0)
        ebp_2 = sub_49e52c(*(ebp_2 - 4), arg6, x87_r3)
        *(arg1 + 0x38) = fconvert.d(arg6)
    else
        int32_t eax_22 = sub_408e80(*(ebp_2 - 4))
        
        if (eax_22 s< 0)
            *(arg1 + 0x38) = 0
            *(arg1 + 0x3c) = 0
        else
            long double st0_1 = sub_40a074(arg6, x87_r3)
            *(ebp_2 - 0x2c) = eax_22
            *(arg1 + 0x38) = fconvert.d(st0_1 + float.t(*(ebp_2 - 0x2c)) / fconvert.t(86400f))
    sub_49f520(esi, sub_4a1dbb+5)
    sub_403e4c(arg1 + 0x48, *(ebp_2 - 0x30))
    *(esp_1 - 0x10)
    fsbase->NtTib.ExceptionList = *(esp_1 - 0x18)
    *(esp_1 - 0x10) = sub_4a1cdf
    sub_403df8(ebp_2 - 0x30)
    return sub_403e1c(ebp_2 - 0x28, 0xa)
}
