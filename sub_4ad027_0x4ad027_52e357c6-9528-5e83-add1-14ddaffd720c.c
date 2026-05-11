// ============================================================
// 函数名称: sub_4ad027
// 虚拟地址: 0x4ad027
// WARP GUID: 52e357c6-9528-5e83-add1-14ddaffd720c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4acc64, sub_4acba4, sub_403e4c, sub_403e1c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4ad027(char* arg1, char** arg2, int32_t* arg3)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    int32_t entry_ebx
    *0x55000000 += entry_ebx:1.b
    int32_t var_4 = 0
    int32_t var_8 = 0
    int32_t var_c = 0
    int32_t var_10 = 0
    int32_t var_14 = entry_ebx
    int32_t esi
    int32_t var_18 = esi
    void* const* var_1c = &__return_addr
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_2c = sub_4acba4(*(arg1 + 0x18), *(arg1 + 0x24), nullptr, arg2) - 4
    int32_t* esp_1 = &var_2c
    void* ebp_1 = sub_4acba4("path", *(arg1 + 0x1c), *arg2, var_2c)
    sub_403e4c(arg2, *(ebp_1 - 4))
    
    if (arg1[0x28] == 0)
        void* var_30 = ebp_1 - 8
        esp_1 = &var_30
        ebp_1 = sub_4acba4("expires", *(arg1 + 0x14), *arg2, var_30)
        sub_403e4c(arg2, *(ebp_1 - 8))
    
    *(esp_1 - 4) = ebp_1 - 0xc
    void* ebp_2 = sub_4acba4(&data_4ad128, *(arg1 + 0x10), *arg2)
    sub_403e4c(arg2, *(ebp_2 - 0xc))
    
    if (arg1[0x20] != 0)
        ebp_2 = sub_4acc64(sub_4ad123+0x15, *arg2, ebp_2 - 0x10)
        sub_403e4c(arg2, *(ebp_2 - 0x10))
    
    esp_1[1]
    fsbase->NtTib.ExceptionList = *(esp_1 - 4)
    esp_1[1] = sub_4ad0f9
    return sub_403e1c(ebp_2 - 0x10, 4)
}
