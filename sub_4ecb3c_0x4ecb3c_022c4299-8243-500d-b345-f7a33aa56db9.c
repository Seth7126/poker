// ============================================================
// 函数名称: sub_4ecb3c
// 虚拟地址: 0x4ecb3c
// WARP GUID: 022c4299-8243-500d-b345-f7a33aa56db9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_48380c, sub_4d69e8, sub_404138, sub_403df8, sub_4ecdcc
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

char**sub_4ecb3c()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    void* esi_1 = data_5301f4
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_48380c(*data_530304, *data_53033c)
    *(*esi_1 + 0x111f9) = 1
    *(*esi_1 + 0x111f8) = 0
    *(*esi_1 + 0x111fa) = 0
    int32_t var_20 = *(*data_530304 + 0xa64)
    void* const var_24 = "\data\help\tutorial_"
    int32_t var_28 = *(*data_530304 + 0x1354)
    void* const var_2c = ".txt"
    sub_404138(&var_8, 4)
    int32_t* esi_2 = sub_4ecdcc(var_8)
    data_7a7644 = 0
    sub_4d69e8(*data_530304, 3)
    *(*esi_2 + 0xffec) = 0
    *(*esi_2 + 0xfff0) = 0
    *(*esi_2 + 0x4584) = 0
    *(*esi_2 + 0x10020) = 1
    *(*esi_2 + 0x2006c) = 1
    *(*esi_2 + 0x2009c) = 4
    *(*esi_2 + 0x200a8) = 0
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4ecc3e
    char** result = &var_8
    sub_403df8(result)
    return result
}
