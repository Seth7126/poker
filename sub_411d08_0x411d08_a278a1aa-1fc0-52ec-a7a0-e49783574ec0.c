// ============================================================
// 函数名称: sub_411d08
// 虚拟地址: 0x411d08
// WARP GUID: a278a1aa-1fc0-52ec-a7a0-e49783574ec0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4128c0, sub_403ee0, sub_4116b4, sub_4115f8, sub_4128a4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_411d08(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    char* var_c = nullptr
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    sub_4115f8(arg1)
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_403ee0(&var_c, 0, sub_4128c0(arg2) - sub_4128a4(arg2))
    (*(*arg2 + 4))(ExceptionList, var_28, var_24, ExceptionList_1, var_1c, var_18)
    (*(*arg1 + 0x2c))(arg1)
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_411d90
    return sub_4116b4(arg1)
}
