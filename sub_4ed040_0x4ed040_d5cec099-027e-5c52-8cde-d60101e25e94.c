// ============================================================
// 函数名称: sub_4ed040
// 虚拟地址: 0x4ed040
// WARP GUID: d5cec099-027e-5c52-8cde-d60101e25e94
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4ec9b4, sub_404138, sub_4ed16c, sub_408e1c, sub_4d36c4, sub_524d14, sub_51f880, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4eca90, sub_4e649b
// ============================================================

int32_tsub_4ed040()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    char* var_c = nullptr
    int32_t var_10 = 0
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax
    eax.b = *((data_7a7644 << 3) + &data_7a6eb8)
    char temp0 = eax.b
    eax.b -= 6
    
    if (temp0 == 6)
        int32_t temp2_1 = data_7a7644
        data_7a7644 -= 1
        
        if (add_overflow(temp2_1, 0xffffffff))
            sub_403010()
            noreturn
    
    int32_t temp1 = data_7a7644
    data_7a7644 -= 1
    
    if (add_overflow(temp1, 0xffffffff))
        sub_403010()
        noreturn
    
    char i
    
    do
        int32_t temp3_1 = data_7a7644
        data_7a7644 -= 1
        
        if (add_overflow(temp3_1, 0xffffffff))
            sub_403010()
            noreturn
        
        int32_t eax_1
        eax_1.b = *((data_7a7644 << 3) + &data_7a6eb8)
        char temp4_1 = eax_1.b
        eax_1.b -= 2
        
        if (temp4_1 == 2)
            break
        
        i = eax_1.b
        eax_1.b -= 2
    while (i != 2)
    int32_t var_2c = *(*data_530304 + 0xa64)
    void* const var_30 = "\data\help\tut"
    sub_408e1c(data_7a7644, &var_10)
    int32_t var_34 = var_10
    sub_404138(&var_c, 3)
    sub_524d14(*data_5301f4, var_c, esi, &data_7a7644)
    *data_5301f4
    sub_51f880()
    
    if (*(*data_5301f4 + 0x10038) != 0)
        int32_t i_2 = *data_5300d0
        
        if (i_2 s> 0)
            int32_t esi_1 = 1
            int32_t i_1
            
            do
                sub_4d36c4(esi_1, 0, 6)
                esi_1 += 1
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    
    sub_4ec9b4()
    int32_t temp6 = data_7a7644
    data_7a7644 -= 1
    
    if (add_overflow(temp6, 0xffffffff))
        sub_403010()
        noreturn
    
    void* ebp_1 = sub_4ed16c(0)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4ed14a
    return sub_403e1c(ebp_1 - 0xc, 2)
}
