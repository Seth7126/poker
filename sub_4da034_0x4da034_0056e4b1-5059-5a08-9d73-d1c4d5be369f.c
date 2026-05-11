// ============================================================
// 函数名称: sub_4da034
// 虚拟地址: 0x4da034
// WARP GUID: 0056e4b1-5059-5a08-9d73-d1c4d5be369f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_42afdc, sub_4030d0, sub_41bac4, sub_42affc, sub_44b7c0, sub_403df8, sub_4535a8, sub_402b4c
// [被调用的父级函数]: sub_4da10c
// ============================================================

int32_t* __convention("regparm")sub_4da034(void* arg1, int32_t arg2, void* arg3, void* arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_8 = arg3
    var_8 = arg1
    sub_40422c(var_8)
    int32_t* var_c = &var_4
    int32_t (* var_10)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4030d0(*(arg4 - 4))
    data_61c8c8
    int32_t edx
    edx.b = 1
    *(arg4 - 4) = sub_44b7c0(&data_44a750, edx)
    int32_t eax_4 = sub_402b4c(fconvert.t(data_61cfc4))
    sub_42afdc(*(arg4 - 4), eax_4)
    int32_t eax_7 = sub_402b4c(fconvert.t(data_61cfc8))
    sub_42affc(*(arg4 - 4), eax_7)
    int32_t edx_4
    edx_4.b = 1
    *(arg4 - 8) = sub_4535a8(sub_4532a0+0xa4, edx_4)
    (*(**(arg4 - 8) + 0x48))(ExceptionList, var_10, var_c)
    int32_t* eax_16 = sub_41bac4(*(*(arg4 - 4) + 0x128))
    *(arg4 - 8)
    (*(*eax_16 + 8))(var_8)
    sub_4030d0(*(arg4 - 8))
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4da108
    int32_t* result = &var_8
    sub_403df8(result)
    return result
}
