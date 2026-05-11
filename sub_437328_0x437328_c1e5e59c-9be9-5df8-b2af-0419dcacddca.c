// ============================================================
// 函数名称: sub_437328
// 虚拟地址: 0x437328
// WARP GUID: c1e5e59c-9be9-5df8-b2af-0419dcacddca
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ImageList_Create
// [内部子函数调用]: sub_403828, sub_43754c, sub_405ae8, sub_403df8, sub_40b4b0
// [被调用的父级函数]: sub_43715c
// ============================================================

char** __convention("regparm")sub_437328(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t esi_1 = arg1[0xb]
    int32_t eax
    eax.b = *(arg1 + 0x35)
    HIMAGELIST eax_5 =
        ImageList_Create(arg1[0xa], arg1[9], *((eax << 2) + &data_52e86c) | 0xfe, esi_1, esi_1)
    arg1[0xc] = eax_5
    
    if (eax_5 == 0)
        sub_405ae8(data_5306a8, &var_8)
        int32_t edx_2
        edx_2.b = 1
        sub_40b4b0(sub_40eacb+0x7d, edx_2, var_8)
        sub_403828()
        noreturn
    
    int32_t eax_7 = arg1[0xe]
    
    if (eax_7 != 0x1fffffff)
        sub_43754c(arg1, eax_7)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_4373be
    char** result = &var_8
    sub_403df8(result)
    return result
}
