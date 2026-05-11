// ============================================================
// 函数名称: sub_4a2310
// 虚拟地址: 0x4a2310
// WARP GUID: 9c10d751-79c4-5d62-8b53-1b7a35cfc275
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49f520, sub_408ebc, sub_403e4c, sub_4a1b34, sub_403e1c, sub_49df54
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a2310(void* arg1, int32_t arg2 @ esi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t i_1 = 6
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    int32_t entry_ebx
    *(esp_2 - 4) = entry_ebx
    *(esp_2 - 8) = arg2
    *(esp_2 - 0xc) = &var_4
    *(esp_2 - 0x10) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x14) = fsbase->NtTib.ExceptionList
    void* esp_7 = esp_2 - 0x14
    fsbase->NtTib.ExceptionList = esp_7
    int32_t* esi = *(arg1 + 8)
    sub_49f520(esi, "Accept")
    char* var_c
    sub_403e4c(arg1 + 0x50, var_c)
    sub_49f520(esi, "Accept-Charset")
    char* var_10
    sub_403e4c(arg1 + 0x54, var_10)
    sub_49f520(esi, "Accept-Encoding")
    char* var_14
    sub_403e4c(arg1 + 0x58, var_14)
    sub_49f520(esi, "Accept-Language")
    char* var_18
    sub_403e4c(arg1 + 0x5c, var_18)
    sub_49f520(esi, "Host")
    char* var_1c
    sub_403e4c(arg1 + 0x78, var_1c)
    sub_49f520(esi, "From")
    char* var_20
    sub_403e4c(arg1 + 0x64, var_20)
    sub_49f520(esi, "Referer")
    char* var_24
    sub_403e4c(arg1 + 0x6c, var_24)
    sub_49f520(esi, "User-Agent")
    char* var_28
    sub_403e4c(arg1 + 0x70, var_28)
    sub_49f520(esi, "Range")
    int32_t var_34
    int32_t var_8
    
    if (var_8 != 0)
        *(esp_7 - 4) = 1
        void var_2c
        *(esp_7 - 8) = &var_2c
        int32_t ecx
        ecx.b = 1
        sub_49df54(ecx, &data_4a2558, &var_8)
        *(esp_7 - 4) = 1
        int32_t var_30
        *(esp_7 - 8) = &var_30
        int32_t ecx_1
        ecx_1.b = 1
        int32_t eax_20
        int32_t ecx_3
        eax_20, ecx_3 = sub_408ebc(sub_49df54(ecx_1, &data_4a2564, &var_8), 0)
        *(arg1 + 0x20) = eax_20
        *(esp_7 - 4) = 1
        *(esp_7 - 8) = &var_34
        ecx_3.b = 1
        *(arg1 + 0x1c) = sub_408ebc(sub_49df54(ecx_3, &data_4a2570, &var_8), 0)
    
    int32_t edi
    long double x87_r0
    long double x87_r1
    long double x87_r2
    sub_4a1b34(arg1, esi, edi, x87_r0, x87_r1, x87_r2)
    *(esp_7 + 0x20)
    fsbase->NtTib.ExceptionList = *(esp_7 + 0x18)
    *(esp_7 + 0x20) = sub_4a249b
    return sub_403e1c(&var_34, 0xc)
}
