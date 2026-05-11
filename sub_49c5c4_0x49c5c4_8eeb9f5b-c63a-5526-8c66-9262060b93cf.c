// ============================================================
// 函数名称: sub_49c5c4
// 虚拟地址: 0x49c5c4
// WARP GUID: 8eeb9f5b-c63a-5526-8c66-9262060b93cf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e4c, sub_403df8, sub_49ada4
// [被调用的父级函数]: 无
// ============================================================

char** __convention("regparm")sub_49c5c4(int32_t* arg1, int32_t arg2, uint32_t* arg3, uint32_t* arg4, char** arg5)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_20 = ebx
    int32_t esi
    int32_t var_24 = esi
    int32_t edi
    int32_t var_28 = edi
    char* var_1c = nullptr
    int32_t* var_2c = &var_4
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8 = 0x10
    int16_t var_18
    (*data_53005c)(arg2, &var_18, &var_8, ExceptionList, var_30, var_2c)
    sub_49ada4()
    *arg3 = zx.d(var_18)
    (*(*arg1 + 0x7c))(var_8)
    sub_403e4c(arg5, var_1c)
    int16_t var_16
    int32_t eax_7
    eax_7.w = var_16
    *arg4 = zx.d((*data_5302f4)(eax_7))
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_49c659
    char** result = &var_1c
    sub_403df8(result)
    return result
}
