// ============================================================
// 函数名称: sub_4ad614
// 虚拟地址: 0x4ad614
// WARP GUID: 177f933d-0b5e-5bb3-ac27-586c92e2a38d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408e4c, sub_404078, sub_4acba4, sub_403e4c, sub_4ad030, sub_403e1c
// [被调用的父级函数]: sub_4ad8a8
// ============================================================

int32_t __convention("regparm")sub_4ad614(void* arg1, char** arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    char* var_8 = nullptr
    void* var_c = nullptr
    int32_t var_10 = 0
    int32_t var_14 = 0
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char*** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** esi_2 = sub_4ad030(arg1, arg2)
    int32_t temp0 = *(arg1 + 0x34)
    
    if (temp0 != 0xffffffff)
        if (temp0 s> 0xffffffff)
        label_4ad64d:
            
            if (sub_404078(*(arg1 + 0x14)) == 0)
                char** var_2c = &var_8
                int32_t var_30_1 = *(arg1 + 0x34)
                int32_t var_34_1 = *(arg1 + 0x30)
                sub_408e4c()
                esp_1 = &var_2c
                ebp_1 = sub_4acba4("max-age", var_c, *esi_2, var_2c)
                sub_403e4c(esi_2, ebp_1[-1])
    else if (*(arg1 + 0x30) u> 0xffffffff)
        goto label_4ad64d
    
    *(esp_1 - 4) = &ebp_1[-3]
    void* ebp_2 = sub_4acba4("comment", *(arg1 + 0x3c), *esi_2)
    sub_403e4c(esi_2, *(ebp_2 - 0xc))
    *(esp_1 - 8) = ebp_2 - 0x10
    void* ebp_3 = sub_4acba4(&data_4ad70c, *(arg1 + 0x38), *esi_2)
    sub_403e4c(esi_2, *(ebp_3 - 0x10))
    *esp_1
    fsbase->NtTib.ExceptionList = *(esp_1 - 8)
    *esp_1 = sub_4ad6dd
    return sub_403e1c(ebp_3 - 0x10, 4)
}
