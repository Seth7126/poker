// ============================================================
// 函数名称: sub_440e70
// 虚拟地址: 0x440e70
// WARP GUID: 41715c37-3e5c-53d7-a66a-9faa99daa26c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403fa0, sub_43e290, sub_408988, sub_403e1c
// [被调用的父级函数]: sub_425275, sub_43d3e0, sub_423db4
// ============================================================

int32_t __fastcallsub_440e70(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_8 = nullptr
    void* var_c = nullptr
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_43e290(arg2, &var_8)
    void* eax_2 = var_8
    sub_403fa0()
    void* eax_4
    eax_4.b = sub_408988(var_c, eax_2) == 0
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_440ed5
    return sub_403e1c(&var_c, 2)
}
