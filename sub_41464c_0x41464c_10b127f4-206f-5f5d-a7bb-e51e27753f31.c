// ============================================================
// 函数名称: sub_41464c
// 虚拟地址: 0x41464c
// WARP GUID: 10b127f4-206f-5f5d-a7bb-e51e27753f31
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40e0dc, sub_403248, sub_404078, sub_413a60, sub_414aa0, sub_40e01c, sub_414630, sub_4032f0, sub_403df8, sub_404280, sub_41512c
// [被调用的父级函数]: sub_414154, sub_413b8c
// ============================================================

void** __convention("regparm")sub_41464c(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_1c = ebx
    struct _EXCEPTION_REGISTRATION_RECORD* esi
    struct _EXCEPTION_REGISTRATION_RECORD* var_20 = esi
    int32_t edi
    int32_t var_24 = edi
    void* var_c = nullptr
    int32_t* var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_2
    int32_t* var_34 = &var_4
    int32_t (* var_38)() = j_sub_403668
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    sub_41512c(arg1, &var_c, 0)
    int32_t* var_40 = &var_4
    int32_t (* var_44)() = j_sub_403668
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t i = 1
    int32_t eax_2 = sub_404078(var_c)
    int32_t var_14 = arg2
    arg1[0x1d].b = 1
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1
    
    while (true)
        int32_t i_1 = i
        
        for (; eax_2 s>= i; i += 1)
            if (*(var_c + i - 1) == 0x2e)
                break
        
        sub_404280(i - i_1, i_1, var_c, &arg1[0x1c])
        esp_1 = &ExceptionList
        
        if (eax_2 s< i)
            break
        
        void* eax_12 = sub_40e01c(sub_4032f0(*var_14), arg1[0x1c])
        
        if (eax_12 == 0)
            sub_413a60()
            noreturn
        
        int32_t var_18_1 = 0
        
        if (***eax_12 == 7)
            var_18_1 = sub_40e0dc(var_14, eax_12)
        
        if (sub_403248(var_18_1, 0x40ecb8) == 0)
            sub_414630(&var_4)
            noreturn
        
        var_14 = var_18_1
        i += 1
    
    int32_t* eax_24 = sub_40e01c(sub_4032f0(*var_14), arg1[0x1c])
    
    if (eax_24 == 0)
        arg1[0x1d].b = 0
        (*(*var_14 + 4))()
        esp_1 = &var_20
        arg1[0x1d].b = 1
        
        if (arg1[0x1c] != 0)
            sub_413a60()
            noreturn
    else
        sub_414aa0(arg1, var_14, eax_24)
    
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[5]
    fsbase->NtTib.ExceptionList = esp_1[3]
    esp_1[8]
    fsbase->NtTib.ExceptionList = esp_1[6]
    esp_1[8] = sub_414817
    void** result = &var_c
    sub_403df8(result)
    return result
}
