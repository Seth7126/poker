// ============================================================
// 函数名称: sub_417d44
// 虚拟地址: 0x417d44
// WARP GUID: 6d6fa3cf-8784-511b-a4e5-399a1a370bc0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_417d2c, sub_402980, sub_417d38, sub_417cb8, sub_402754, sub_408968
// [被调用的父级函数]: sub_417ed8, sub_418c44, sub_418718, sub_418f10
// ============================================================

int32_t __convention("regparm")sub_417d44(void* arg1, char* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int16_t eax_2 = sub_417cb8(arg2, zx.d(*(arg1 + 0x20)))
    sub_417d2c(arg1)
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* i
    
    for (i = *(arg1 + 4); i != 0; i = *i)
        if (eax_2 == i[3].w && sub_408968(&i[4], arg2, zx.d(*(arg1 + 0x20))) != 0)
            break
    
    if (i == 0)
        i = sub_402754(zx.d(*(arg1 + 0x20)) + 0x10)
        *i = *(arg1 + 4)
        i[1] = 0
        i[2] = *arg2
        i[3].w = eax_2
        sub_402980(arg2, &i[4], zx.d(*(arg1 + 0x20)))
        *(arg1 + 4) = i
    
    i[1] += 1
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_18_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4) =
        sub_417e1f
    return sub_417d38(arg1)
}
