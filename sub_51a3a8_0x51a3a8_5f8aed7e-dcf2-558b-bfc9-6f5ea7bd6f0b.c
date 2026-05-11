// ============================================================
// 函数名称: sub_51a3a8
// 虚拟地址: 0x51a3a8
// WARP GUID: 5f8aed7e-dcf2-558b-bfc9-6f5ea7bd6f0b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404138, sub_408e1c, sub_403e1c
// [被调用的父级函数]: sub_51a68f, sub_51a454
// ============================================================

int32_t __convention("regparm")sub_51a3a8(int32_t arg1, int32_t arg2, char** arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    int32_t var_c = 0
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t edi
    int32_t var_18 = edi
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_28 = *(*data_530304 + 0xa64)
    void* const var_2c = "\data\music\"
    sub_408e1c(arg1, &var_8)
    int32_t var_30 = var_8
    sub_408e1c(arg2, &var_c)
    int32_t var_34 = var_c
    void* const var_38 = ".mp3"
    sub_404138(arg3, 5)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_51a425
    return sub_403e1c(&var_c, 2)
}
