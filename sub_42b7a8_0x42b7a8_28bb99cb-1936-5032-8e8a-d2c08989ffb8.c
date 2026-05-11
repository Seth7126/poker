// ============================================================
// 函数名称: sub_42b7a8
// 虚拟地址: 0x42b7a8
// WARP GUID: 28bb99cb-1936-5032-8e8a-d2c08989ffb8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b754, sub_42b778, sub_404188, sub_40423c, sub_403df8
// [被调用的父级函数]: sub_4807f4, sub_4e6659, sub_4b4efc, sub_446b40, sub_4b4d28, sub_42d2c0, sub_44c778, sub_42b558, sub_432d3c, sub_446dd8, sub_42a8cc, sub_4e649b
// ============================================================

int32_t* __convention("regparm")sub_42b7a8(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx
    sub_42b778(ecx, &var_8)
    sub_404188(var_8, arg2)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_42b804
    int32_t* result = &var_8
    sub_403df8(result)
    return result
}
