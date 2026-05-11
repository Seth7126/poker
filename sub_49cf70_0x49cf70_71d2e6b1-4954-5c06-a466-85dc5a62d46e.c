// ============================================================
// 函数名称: sub_49cf70
// 虚拟地址: 0x49cf70
// WARP GUID: 71d2e6b1-4954-5c06-a466-85dc5a62d46e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e4c, sub_403df8, sub_49cfe0
// [被调用的父级函数]: sub_4b008c, sub_4ae88c
// ============================================================

int32_t* __convention("regparm")sub_49cf70(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edx
    edx.b = 3
    void* ebx_2
    void* ebp_1
    char** esi_2
    ebx_2, ebp_1, esi_2 = sub_49cfe0(arg1, edx.b, &var_8)
    sub_403e4c(ebx_2 + 0xc, *(ebp_1 - 4))
    void* ebp_2 = sub_49cfe0(ebx_2, 0, esi_2)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_49cfd0
    sub_403df8(ebp_2 - 4)
    return ebp_2 - 4
}
