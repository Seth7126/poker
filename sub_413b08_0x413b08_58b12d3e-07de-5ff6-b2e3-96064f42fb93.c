// ============================================================
// 函数名称: sub_413b08
// 虚拟地址: 0x413b08
// WARP GUID: 58b12d3e-07de-5ff6-b2e3-96064f42fb93
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_413a6c, sub_41366c, sub_403df8, sub_413600, sub_41512c
// [被调用的父级函数]: sub_414aa0
// ============================================================

int32_t* __convention("regparm")sub_413b08(struct _EXCEPTION_REGISTRATION_RECORD* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    int32_t var_c = 0
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_41366c(arg1, 6)
    char var_5
    int32_t ecx = sub_413a6c(arg1, &var_5, 1)
    
    if (var_5 != 1)
        arg1->__offset(0x10).d -= 1
        sub_41512c(arg1, &var_c, ecx)
        sub_413600()
        noreturn
    
    sub_413a6c(arg1, &var_5, 1)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_14_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_413b81
    int32_t* result = &var_c
    sub_403df8(result)
    return result
}
