// ============================================================
// 函数名称: sub_4c2b1c
// 虚拟地址: 0x4c2b1c
// WARP GUID: abea4f6b-f530-57bc-b93e-80791efb823d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404138, sub_403df8, sub_40422c
// [被调用的父级函数]: sub_4c96bc, sub_5223e8, sub_4c62e8
// ============================================================

struct _EXCEPTION_REGISTRATION_RECORD** __convention("regparm")sub_4c2b1c(struct _EXCEPTION_REGISTRATION_RECORD* arg1, int32_t arg2, struct _EXCEPTION_REGISTRATION_RECORD* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg3
    var_8 = arg1
    sub_40422c(var_8)
    int32_t* var_c = &var_4
    int32_t (* var_10)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (var_8 != 0)
        int32_t var_18_1 = *data_530714
        void* const var_1c_1 = &data_4c2b94
        struct _EXCEPTION_REGISTRATION_RECORD* var_20_1 = var_8
        sub_404138(data_530714, 3)
        esp = &var_8
    else
        sub_403df8(data_530714)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4c2b86
    struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
    sub_403df8(result)
    return result
}
