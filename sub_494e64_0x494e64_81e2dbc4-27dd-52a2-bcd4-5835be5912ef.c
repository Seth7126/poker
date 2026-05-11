// ============================================================
// 函数名称: sub_494e64
// 虚拟地址: 0x494e64
// WARP GUID: 81e2dbc4-27dd-52a2-bcd4-5835be5912ef
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: WSAGetLastError
// [内部子函数调用]: sub_403828, sub_40b5a8, sub_40ac70, sub_406c44, sub_403df8
// [被调用的父级函数]: sub_495888, sub_49492a, sub_495c64, sub_495877, sub_495150, sub_4957d4, sub_4955b8, sub_495638
// ============================================================

int32_t* __convention("regparm")sub_494e64(int32_t arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_24 = ebx
    int32_t esi
    int32_t var_28 = esi
    int32_t var_20 = 0
    int32_t* var_2c = &var_4
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1 != 0)
        uint32_t eax = WSAGetLastError()
        char var_8
        esp = &var_8
        
        if (eax != 0x2733)
            if (*(sub_406c44() + 0x14) == 0)
                sub_40ac70(eax, &var_20)
                int32_t var_1c = var_20
                char var_18 = 0xb
                uint32_t var_14 = eax
                char var_10 = 0
                int32_t edx
                int32_t var_c = edx
                var_8 = 0xb
                var_10.d = 2
                int32_t edx_2
                edx_2.b = 1
                sub_40b5a8(0x4940dc, edx_2, data_530808, var_10, &var_1c)
                sub_403828()
                noreturn
            
            (*(sub_406c44() + 0x14))()
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_494f13
    int32_t* result = &var_20
    sub_403df8(result)
    return result
}
