// ============================================================
// 函数名称: sub_4ae88c
// 虚拟地址: 0x4ae88c
// WARP GUID: cda89bec-cf81-5161-b7dd-5573fcb2e128
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_49cf70, sub_4ae878, sub_49cb30
// [被调用的父级函数]: sub_4b0ddf
// ============================================================

int32_t* __convention("regparm")sub_4ae88c(void* arg1, void* arg2, void* arg3)
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
    *(arg1 + 0x24)
    int32_t* eax_1 = sub_4ae878()
    sub_49cf70(arg3)
    void* ebx_2 = sub_49cb30(eax_1[3], var_8)
    *(arg2 + 0xc)
    (*(**(ebx_2 + 0x10) + 8))(var_8)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4ae8ed
    int32_t* result = &var_8
    sub_403df8(result)
    return result
}
