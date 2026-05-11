// ============================================================
// 函数名称: sub_48f6a4
// 虚拟地址: 0x48f6a4
// WARP GUID: 76c0586e-dce5-5e77-9f68-202b542a8994
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_412ac8, sub_403df8, sub_40422c, sub_48f760
// [被调用的父级函数]: sub_490ef8, sub_48f5f8
// ============================================================

int32_t* __convention("regparm")sub_48f6a4(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t edi
    int32_t var_18 = edi
    void* var_8 = arg1
    sub_40422c(var_8)
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t* var_28 = &var_4
    int32_t var_2c = 0x48f6fc
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_48f760(sub_412ac8(var_8, 1, sub_40f1d9+0xcf, 0x20), arg2)
    fsbase->NtTib.ExceptionList = ExceptionList
    fsbase->NtTib.ExceptionList = ExceptionList_1
    int32_t (__stdcall* var_1c_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_48f72c
    int32_t* result = &var_8
    sub_403df8(result)
    return result
}
