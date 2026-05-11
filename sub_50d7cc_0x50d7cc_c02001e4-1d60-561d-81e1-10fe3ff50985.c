// ============================================================
// 函数名称: sub_50d7cc
// 虚拟地址: 0x50d7cc
// WARP GUID: c02001e4-1d60-561d-81e1-10fe3ff50985
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_408e1c, sub_4040c4
// [被调用的父级函数]: sub_50deb4, sub_50f0e4
// ============================================================

char** __fastcallsub_50d7cc(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_408e1c(*(*data_530304 + 0x1358), &var_8)
    sub_4040c4(arg2, sub_50d82b+5, var_8)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_50d823
    char** result = &var_8
    sub_403df8(result)
    return result
}
