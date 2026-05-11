// ============================================================
// 函数名称: sub_4a8450
// 虚拟地址: 0x4a8450
// WARP GUID: 42e6ee33-8904-5e43-b598-f333bb47ec57
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_4040c4
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_4a8450(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4040c4(&var_8, arg2, sub_4a84a7+5)
    (*(*arg1 + 0x78))(ExceptionList, var_18, var_14)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4a849f
    int32_t* result = &var_8
    sub_403df8(result)
    return result
}
