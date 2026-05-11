// ============================================================
// 函数名称: sub_4ed16c
// 虚拟地址: 0x4ed16c
// WARP GUID: b7731c56-5577-584f-bc11-57a77978ef20
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4ed7a0, sub_4040c4, sub_404138, sub_52452c, sub_408e1c, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_4ed7a0, sub_4eca90, sub_4ee134, sub_4ed040
// ============================================================

int32_t __convention("regparm")sub_4ed16c(char arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
    char* var_c = nullptr
    char* var_10 = nullptr
    int32_t var_14 = 0
    int32_t ebx
    int32_t var_18 = ebx
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1 != 0)
        int32_t var_28_1 = 1
        sub_408e1c(data_7a7644, &var_c)
        sub_4040c4(&var_8, "tut", var_c)
        struct _EXCEPTION_REGISTRATION_RECORD* var_2c_1 = var_8
        int32_t var_30_1 = *(*data_530304 + 0xa64)
        void* const var_34_1 = "\data\help\tut"
        sub_408e1c(data_7a7644, &var_14)
        int32_t var_38_1 = var_14
        sub_404138(&var_10, 3)
        esp = &var_8
        int32_t esi
        int32_t edi
        sub_52452c(*data_5301f4, var_10, var_c, esi, edi, var_8.b)
    
    int32_t temp0 = data_7a7644
    data_7a7644 += 1
    
    if (add_overflow(temp0, 1))
        sub_403010()
        noreturn
    
    int32_t eax_9
    eax_9.b = *((data_7a7644 << 3) + &data_7a6eb8)
    
    if (eax_9.b - 2 u< 3 || eax_9.b - 7 u< 3)
        sub_4ed7a0()
    else
        data_7a7644
        char temp3_1 = eax_9.b
        eax_9.b -= 5
        
        if (temp3_1 == 5)
            *(*data_5301f4 + 0x10024) = 0
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4ed258
    return sub_403e1c(&var_14, 4)
}
