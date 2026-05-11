// ============================================================
// 函数名称: sub_4ad27c
// 虚拟地址: 0x4ad27c
// WARP GUID: 64ea87ca-67e1-59d9-aee3-8c581f4cc90a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408b34, sub_40422c, sub_404078, sub_404138, sub_404188, sub_4088f0, sub_403e4c, sub_40cc98, sub_4030a0, sub_4118f4, sub_411a80, sub_404364, sub_403df8, sub_403e1c, sub_49df54, sub_403010
// [被调用的父级函数]: sub_4ae408, sub_4ace2c
// ============================================================

char** __convention("regparm")sub_4ad27c(int32_t* arg1, char* arg2, int32_t arg3 @ esi, int32_t arg4 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t i_1 = 8
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    *(esp_2 - 4) = i_1
    int32_t entry_ebx
    *(esp_2 - 8) = entry_ebx
    *(esp_2 - 0xc) = arg3
    *(esp_2 - 0x10) = arg4
    char* var_c = arg2
    sub_40422c(var_c)
    *(esp_2 - 0x14) = &var_4
    *(esp_2 - 0x18) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x1c) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_2 - 0x1c
    sub_404188(var_c, arg1[3])
    *(esp_2 - 0x14)
    fsbase->NtTib.ExceptionList = *(esp_2 - 0x1c)
    *(esp_2 - 0x14) = sub_4ad4d6
    int32_t var_48
    sub_403e1c(&var_48, 0xe)
    char** result = &var_c
    sub_403df8(result)
    return result
}
