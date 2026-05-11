// ============================================================
// 函数名称: sub_40cca8
// 虚拟地址: 0x40cca8
// WARP GUID: a5fbe0cd-0ab3-50c1-8ee7-ec80cf47c7d6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: LoadLibraryA, SetErrorMode
// [内部子函数调用]: sub_40423c
// [被调用的父级函数]: sub_4b6cbc, sub_448668
// ============================================================

uint32_t __convention("regparm")sub_40cca8(int32_t arg1, enum THREAD_ERROR_MODE arg2, int16_t arg3 @ x87control)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_14 = ebx
    uint32_t uMode = SetErrorMode(arg2)
    int32_t* var_18_1 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int16_t x87status
    int16_t temp0
    temp0, x87status = __fnstcw_memmem16(arg3)
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    HMODULE var_c = LoadLibraryA(sub_40423c(arg1))
    fsbase->NtTib.ExceptionList = ExceptionList
    __fnclex()
    int16_t x87control
    int16_t x87status_2
    x87control, x87status_2 = __fldcw_memmem16(temp0)
    fsbase->NtTib.ExceptionList = ExceptionList_1
    int32_t (* var_18_2)(int32_t* arg1 @ ebp) = sub_40cd21
    return SetErrorMode(uMode)
}
