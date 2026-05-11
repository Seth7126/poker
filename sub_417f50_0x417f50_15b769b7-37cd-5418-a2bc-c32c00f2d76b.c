// ============================================================
// 函数名称: sub_417f50
// 虚拟地址: 0x417f50
// WARP GUID: 15b769b7-37cd-5418-a2bc-c32c00f2d76b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_417d2c, sub_417e28, sub_417d38
// [被调用的父级函数]: sub_418f78, sub_418cb0, sub_4187b0
// ============================================================

int32_t __convention("regparm")sub_417f50(struct _EXCEPTION_REGISTRATION_RECORD* arg1, int32_t* arg2, struct _EXCEPTION_REGISTRATION_RECORD* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg3
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    var_8 = arg1
    sub_417d2c(var_8)
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi_1 = arg2[4]
    
    if (arg3 != esi_1)
        arg3->Handler += 1
        arg2[4] = arg3
        int32_t* ebx_1
        ebx_1.w = 0xfffd
        sub_4032ac(arg2)
        esp = &var_8
        ebp_1 = sub_417e28(var_8, esi_1)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_417fb3
    return sub_417d38(ebp_1[-1])
}
