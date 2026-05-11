// ============================================================
// 函数名称: sub_431468
// 虚拟地址: 0x431468
// WARP GUID: c6ae20ba-5bb8-5c92-b4ab-df20c47436b8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_431420, sub_42e3a0, sub_42e3a8, sub_42b3f4
// [被调用的父级函数]: sub_4420cc
// ============================================================

int32_t __convention("regparm")sub_431468(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = arg3
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    sub_42e3a0(arg1)
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_431420(arg1, arg2, arg3)
    sub_42b3f4(arg1, arg2, arg3)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_4314c0
    return sub_42e3a8(arg1)
}
