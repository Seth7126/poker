// ============================================================
// 函数名称: sub_40ad6c
// 虚拟地址: 0x40ad6c
// WARP GUID: 5efb4711-6301-5e16-9859-f9d674b000cb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetThreadLocale
// [内部子函数调用]: sub_40ad30, sub_403e4c, sub_403e1c
// [被调用的父级函数]: sub_40c310
// ============================================================

int32_tsub_40ad6c()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    int32_t var_c = 0
    char* var_10 = nullptr
    char* var_14 = nullptr
    char* var_18 = nullptr
    char* var_1c = nullptr
    int32_t ebx
    int32_t var_20 = ebx
    int32_t esi
    int32_t var_24 = esi
    int32_t edi
    int32_t var_28 = edi
    int32_t* var_2c = &var_4
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    uint32_t var_8_1 = GetThreadLocale()
    int32_t i = 1
    void* esi_1 = &data_53151c
    void* edi_1 = &data_53154c
    
    do
        int32_t* var_38_1 = &var_4
        sub_40ad30("@{@", i - 1, i + 0x43, &var_10, 0xb)
        sub_403e4c(esi_1, var_10)
        int32_t* var_38_2 = &var_4
        sub_40ad30(&data_52e1a8, i - 1, i + 0x37, &var_14, 0xb)
        sub_403e4c(edi_1, var_14)
        i += 1
        edi_1 += 4
        esi_1 += 4
    while (i != 0xd)
    
    int32_t i_1 = 1
    void* esi_2 = &data_53157c
    void* edi_2 = &data_531598
    
    do
        int32_t temp1_1 = mods.dp.d(sx.q(i_1 + 5), 7)
        int32_t* var_38_3 = &var_4
        sub_40ad30(&data_52e1d8, i_1 - 1, temp1_1 + 0x31, &var_18, 6)
        sub_403e4c(esi_2, var_18)
        int32_t* var_38_4 = &var_4
        sub_40ad30(&data_52e1f4, i_1 - 1, temp1_1 + 0x2a, &var_1c, 6)
        sub_403e4c(edi_2, var_1c)
        i_1 += 1
        edi_2 += 4
        esi_2 += 4
    while (i_1 != 8)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_2c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_40ae86
    return sub_403e1c(&var_1c, 4)
}
