// ============================================================
// 函数名称: sub_41131c
// 虚拟地址: 0x41131c
// WARP GUID: 5123098e-b663-5ad2-96d6-c823d9dcf915
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_411284, sub_405b40
// [被调用的父级函数]: sub_4113dc, sub_411380
// ============================================================

int32_t** __convention("regparm")sub_41131c(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* var_8 = nullptr
    int32_t __saved_ecx
    int32_t __saved_ecx_2 = __saved_ecx
    int32_t __saved_edx
    int32_t __saved_edx_1 = __saved_edx
    int32_t edi
    int32_t var_14 = edi
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_405b40(&var_8)
    sub_411284(arg1, &var_8)
    
    if (var_8 != 0)
        (*(*var_8 + 0x10))()
        esp = &var_8
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_411378
    int32_t** result = &var_8
    sub_405b40(result)
    return result
}
