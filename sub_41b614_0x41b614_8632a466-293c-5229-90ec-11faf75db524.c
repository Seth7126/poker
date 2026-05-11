// ============================================================
// 函数名称: sub_41b614
// 虚拟地址: 0x41b614
// WARP GUID: 8632a466-293c-5229-90ec-11faf75db524
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4103c8, sub_403e4c, sub_408a34, sub_404b7c, sub_403df8
// [被调用的父级函数]: sub_41bd08, sub_41b3fc, sub_41b494
// ============================================================

char** __convention("regparm")sub_41b614(int32_t* arg1, void* arg2, char* arg3, int32_t arg4, int32_t arg5)
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
    char* var_10 = nullptr
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_1 = sub_404b7c()
    sub_408a34(arg2, &var_10)
    sub_403e4c(&eax_1[1], var_10)
    *eax_1 = arg4
    sub_403e4c(&eax_1[2], arg3)
    eax_1[3] = arg5
    sub_4103c8(arg1, eax_1)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_20_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_41b69e
    char** result = &var_10
    sub_403df8(result)
    return result
}
