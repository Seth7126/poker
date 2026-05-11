// ============================================================
// 函数名称: sub_4ace2c
// 虚拟地址: 0x4ace2c
// WARP GUID: 04c9389f-e316-5736-9bc0-0c366e3acbe7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_403248, sub_4ad27c
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_4ace2c(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg2 != 0 && sub_403248(arg2, 0x4ac990) != 0)
        (*(*arg2 + 0x1c))()
        esp = &var_8
        ebp_1 = sub_4ad27c(arg1, var_8, arg1, arg2)
        arg1[0xa].b = arg2[0xa].b
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4ace94
    sub_403df8(&ebp_1[-1])
    return &ebp_1[-1]
}
