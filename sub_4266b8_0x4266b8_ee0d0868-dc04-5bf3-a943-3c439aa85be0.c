// ============================================================
// 函数名称: sub_4266b8
// 虚拟地址: 0x4266b8
// WARP GUID: ee0d0868-dc04-5bf3-a943-3c439aa85be0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GlobalLock, GlobalUnlock, SetClipboardData, GlobalAlloc
// [内部子函数调用]: sub_42663c, sub_4265f4, sub_402980
// [被调用的父级函数]: sub_42679c
// ============================================================

BOOL __convention("regparm")sub_4266b8(BOOL arg1, int16_t arg2, int32_t arg3, uint32_t arg4)
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
    sub_42663c(arg1)
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_2
    HGLOBAL hMem = GlobalAlloc(0x2002, arg4)
    int32_t* var_28_1 = &var_4
    int32_t (* var_2c_1)() = j_sub_40353c
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t eax_2 = GlobalLock(hMem)
    int32_t* var_34_1 = &var_4
    int32_t (* var_38)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_402980(arg3, eax_2, arg4)
    sub_4265f4(arg1)
    SetClipboardData(zx.d(arg2), hMem)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_34_2)(void* arg1 @ ebp, int32_t arg2, int32_t arg3, void* const arg4, 
        int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9) = sub_426752
    return GlobalUnlock(hMem)
}
