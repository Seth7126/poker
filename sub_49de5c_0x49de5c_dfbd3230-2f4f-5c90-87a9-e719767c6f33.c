// ============================================================
// 函数名称: sub_49de5c
// 虚拟地址: 0x49de5c
// WARP GUID: dfbd3230-2f4f-5c90-87a9-e719767c6f33
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404078, sub_404188, sub_4088f0, sub_403e4c, sub_403e1c, sub_404364, sub_403df8, sub_404280, sub_403010
// [被调用的父级函数]: sub_49df54
// ============================================================

int32_t __convention("regparm")sub_49de5c(int32_t* arg1, void* arg2, char arg3, char** arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
    int32_t var_c = 0
    int32_t var_10 = 0
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    var_8:3.b = arg3
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_404188(arg2, 0x49df50)
    int32_t esi_1 = sub_404364(arg2, *arg1)
    
    if (esi_1 != 0)
        *(esp_1 - 4) = arg4
        
        if (add_overflow(esi_1, 0xffffffff))
            sub_403010()
            noreturn
        
        sub_404280(esi_1 - 1, 1, *arg1)
        
        if (var_8:3.b != 0)
            *(esp_1 - 4) = arg1
            int32_t eax_13 = sub_404078(arg2)
            
            if (add_overflow(eax_13, esi_1))
                sub_403010()
                noreturn
            
            sub_404280(0x7fffffff, eax_13 + esi_1, *arg1)
    else
        sub_403e4c(arg4, *arg1)
        
        if (var_8:3.b != 0)
            sub_403df8(arg1)
    
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = sub_49df3c
    return sub_403e1c(&var_10, 2)
}
