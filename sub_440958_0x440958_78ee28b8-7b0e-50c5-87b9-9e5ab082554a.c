// ============================================================
// 函数名称: sub_440958
// 虚拟地址: 0x440958
// WARP GUID: 78ee28b8-7b0e-50c5-87b9-9e5ab082554a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetCurrentThreadId, EnumThreadWindows
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4463a4, sub_448668, sub_449520
// ============================================================

int32_t __convention("regparm")sub_440958(int32_t arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    int32_t var_8 = 0
    int32_t result = data_52e984
    int32_t edx = data_52e990
    data_52e984 = arg1
    data_52e990 = 0
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t* var_2c = &var_4
    int32_t (* var_30)() = j_sub_40353c
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    EnumThreadWindows(GetCurrentThreadId(), sub_440908, 0)
    int32_t var_8_1 = data_52e990
    fsbase->NtTib.ExceptionList = ExceptionList
    fsbase->NtTib.ExceptionList = ExceptionList_1
    int32_t (* var_20_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_440a02
    data_52e990 = edx
    data_52e984 = result
    return result
}
