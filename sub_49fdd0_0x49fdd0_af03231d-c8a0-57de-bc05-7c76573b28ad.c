// ============================================================
// 函数名称: sub_49fdd0
// 虚拟地址: 0x49fdd0
// WARP GUID: af03231d-c8a0-57de-bc05-7c76573b28ad
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_40422c, sub_402980, sub_404078, sub_49ff64, sub_404248, sub_403ee0, sub_404080, sub_405ae8, sub_403df8, sub_412930, sub_403fa0, sub_40b4b0, sub_403e1c, sub_403010
// [被调用的父级函数]: 无
// ============================================================

void** __convention("regparm")sub_49fdd0(void* arg1, int32_t* arg2, int32_t* arg3, int32_t arg4 @ esi, int32_t arg5 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* i_2 = arg3
    int32_t* esp_1 = &i_2
    int32_t* i_1 = 4
    int32_t* i
    
    do
        *(esp_1 - 4) = 0
        *(esp_1 - 8) = 0
        esp_1 -= 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    *(esp_1 - 4) = i_1
    int32_t* i_3 = i_2
    i_2 = i_1
    int32_t entry_ebx
    *(esp_1 - 8) = entry_ebx
    *(esp_1 - 0xc) = arg4
    *(esp_1 - 0x10) = arg5
    i_2 = arg2
    sub_40422c(i_2)
    *(esp_1 - 0x14) = &var_4
    *(esp_1 - 0x18) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0x1c) = fsbase->NtTib.ExceptionList
    void* esp_9 = esp_1 - 0x1c
    fsbase->NtTib.ExceptionList = esp_9
    int32_t eax_3 = sub_404078(i_2) & 0x80000003
    
    if (eax_3 s< 0)
        eax_3 = ((eax_3 - 1) | 0xfffffffc) + 1
    
    if (eax_3 s> 0)
        char* var_20
        sub_405ae8(data_53001c, &var_20)
        int32_t edx_1
        edx_1.b = 1
        sub_40b4b0(0x4988ec, edx_1, var_20)
        sub_403828()
        noreturn
    
    void var_1c
    sub_403df8(&var_1c)
    int32_t eax_9 = sub_404078(i_2)
    int32_t ebx = 1
    void* var_14
    sub_403df8(&var_14)
    char* var_2c
    
    if (eax_9 s>= 1)
        do
            int32_t var_18
            sub_402980(sub_404248(&i_2) + ebx - 1, &var_18, 4)
            int32_t temp2_1 = ebx
            ebx += 4
            
            if (add_overflow(temp2_1, 4))
                sub_403010()
                noreturn
            
            void var_e
            *(esp_9 - 4) = &var_e
            void var_d
            *(esp_9 - 8) = &var_d
            char var_f
            sub_49ff64(&var_f, var_18, arg1)
            char eax_15 = *(arg1 + 0xa3)
            
            if (var_18:2.b == eax_15)
                sub_403fa0()
                char* var_24
                sub_404080(&var_14, var_24)
            else if (eax_15 != var_18:3.b)
                sub_403ee0(&var_2c, &var_f, 3)
                sub_404080(&var_14, var_2c)
            else
                char* var_28
                sub_403ee0(&var_28, &var_f, 2)
                sub_404080(&var_14, var_28)
        while (eax_9 s>= ebx)
    
    if (var_14 != 0)
        *(esp_9 - 4) = sub_404078(var_14)
        sub_412930(i_3, sub_404248(&var_14), *(esp_9 - 4))
    
    *(esp_9 + 8)
    fsbase->NtTib.ExceptionList = *esp_9
    *(esp_9 + 8) = sub_49ff5d
    sub_403e1c(&var_2c, 5)
    sub_403df8(&var_14)
    void** result = &i_2
    sub_403df8(result)
    return result
}
