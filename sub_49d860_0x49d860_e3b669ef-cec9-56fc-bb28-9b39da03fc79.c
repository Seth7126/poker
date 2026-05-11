// ============================================================
// 函数名称: sub_49d860
// 虚拟地址: 0x49d860
// WARP GUID: e3b669ef-cec9-56fc-bb28-9b39da03fc79
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40a04c, sub_40a02c, sub_40ac5c, sub_403df8, sub_409ae0
// [被调用的父级函数]: sub_4a1dbb
// ============================================================

int32_t* __convention("regparm")sub_49d860(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_44 = ebx
    int32_t var_40 = 0
    int32_t* var_48 = &var_4
    int32_t (* var_4c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int16_t var_a
    int16_t var_6
    sub_40a02c(&var_6, &var_a, arg2, arg3)
    int32_t eax_1
    int32_t ecx_1
    eax_1, ecx_1 = sub_40a04c(arg2, arg3)
    int32_t var_3c = *((eax_1 << 2) + &data_52fb50)
    char var_38 = 0xb
    uint32_t var_34 = zx.d(var_6)
    char var_30 = 0
    int16_t var_8
    int32_t var_2c = (&data_52fb6c)[zx.d(var_8)]
    char var_28 = 0xb
    uint32_t var_24 = zx.d(var_a)
    char var_20 = 0
    sub_40ac5c(ecx_1, &var_40, "HH":"NN":"SS", arg2, arg3)
    int32_t var_1c = var_40
    char var_18 = 0xb
    void* const var_14 = &data_49d954
    char var_10 = 0xb
    sub_409ae0(5, &var_3c, "%s, %.2d %s %.4d %s %s", arg1)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_48_1)(int32_t* arg1 @ ebp) = sub_49d92a
    int32_t* result = &var_40
    sub_403df8(result)
    return result
}
