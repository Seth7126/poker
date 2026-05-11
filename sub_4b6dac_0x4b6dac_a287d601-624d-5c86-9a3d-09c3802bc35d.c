// ============================================================
// 函数名称: sub_4b6dac
// 虚拟地址: 0x4b6dac
// WARP GUID: a287d601-624d-5c86-9a3d-09c3802bc35d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_405ba0, sub_405b40
// [被调用的父级函数]: sub_4b6b50
// ============================================================

struct _EXCEPTION_REGISTRATION_RECORD** __convention("regparm")sub_4b6dac(struct _EXCEPTION_REGISTRATION_RECORD* arg1, int32_t arg2, struct _EXCEPTION_REGISTRATION_RECORD* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg3
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    var_8 = arg1
    sub_405ba0(var_8)
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_532f1c != 0)
        data_532f1c(var_8, arg2, arg3, arg5, arg4)
        esp = &var_8
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4b6e12
    struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
    sub_405b40(result)
    return result
}
