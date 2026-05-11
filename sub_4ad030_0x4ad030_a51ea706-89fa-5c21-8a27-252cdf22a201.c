// ============================================================
// 函数名称: sub_4ad030
// 虚拟地址: 0x4ad030
// WARP GUID: a51ea706-89fa-5c21-8a27-252cdf22a201
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4acc64, sub_4acba4, sub_403e4c, sub_403e1c
// [被调用的父级函数]: sub_4ad614
// ============================================================

int32_t __convention("regparm")sub_4ad030(void* arg1, char** arg2)
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
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_30 = sub_4acba4(*(arg1 + 0x18), *(arg1 + 0x24), nullptr, arg2) - 4
    int32_t* esp_1 = &var_30
    void* ebp_2 = sub_4acba4("path", *(arg1 + 0x1c), *arg2, var_30)
    sub_403e4c(arg2, *(ebp_2 - 4))
    
    if (*(arg1 + 0x28) == 0)
        void* var_34 = ebp_2 - 8
        esp_1 = &var_34
        ebp_2 = sub_4acba4("expires", *(arg1 + 0x14), *arg2, var_34)
        sub_403e4c(arg2, *(ebp_2 - 8))
    
    *(esp_1 - 4) = ebp_2 - 0xc
    void* ebp_3 = sub_4acba4(&data_4ad128, *(arg1 + 0x10), *arg2)
    sub_403e4c(arg2, *(ebp_3 - 0xc))
    
    if (*(arg1 + 0x20) != 0)
        ebp_3 = sub_4acc64(sub_4ad123+0x15, *arg2, ebp_3 - 0x10)
        sub_403e4c(arg2, *(ebp_3 - 0x10))
    
    esp_1[1]
    fsbase->NtTib.ExceptionList = *(esp_1 - 4)
    esp_1[1] = sub_4ad0f9
    return sub_403e1c(ebp_3 - 0x10, 4)
}
