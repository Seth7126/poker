// ============================================================
// 函数名称: sub_4202fc
// 虚拟地址: 0x4202fc
// WARP GUID: 99766223-9cc9-5687-a9c2-1ba299074ea0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetProcAddress
// [内部子函数调用]: sub_40423c, sub_403df8, sub_40422c, sub_4202fc
// [被调用的父级函数]: sub_420897, sub_4203cf, sub_42046c, sub_4206e7, sub_4202fc, sub_4204e7, sub_4207bf, sub_42057b, sub_420613
// ============================================================

struct _EXCEPTION_REGISTRATION_RECORD** __convention("regparm")sub_4202fc(char arg1, int32_t arg2, struct _EXCEPTION_REGISTRATION_RECORD* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg3
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    var_8 = arg3
    sub_40422c(var_8)
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_1
    eax_1.b = arg1
    
    if ((&data_5316ec)[eax_1] == 0)
        int32_t esi_2
        
        if (data_5316e8 == 0)
            esi_2 = 0
        else
            if (arg1 == 0 && data_5316f4 == 0)
                data_5316dc
                eax_1.b = 4
                esp_1 = &var_8
                data_5316dc = sub_4202fc()
                
                if (data_5316f4 == 0)
                    sub_403df8(&var_8)
            
            *(esp_1 - 4) = sub_40423c(var_8)
            *(esp_1 - 8) = data_5316e8
            esi_2 = GetProcAddress()
        
        if (esi_2 != 0 && arg1 != 0)
            data_5316f4 = 1
        
        int32_t eax_8
        eax_8.b = arg1
        (&data_5316ec)[eax_8] = 1
    
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = sub_4203c2
    struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
    sub_403df8(result)
    return result
}
