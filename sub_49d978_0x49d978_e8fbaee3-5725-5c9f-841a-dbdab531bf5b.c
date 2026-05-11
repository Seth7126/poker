// ============================================================
// 函数名称: sub_49d978
// 虚拟地址: 0x49d978
// WARP GUID: e8fbaee3-5725-5c9f-841a-dbdab531bf5b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40a04c, sub_49dd18, sub_49e33c, sub_40a02c, sub_40ac5c, sub_403e1c, sub_409ae0
// [被调用的父级函数]: sub_4ad714, sub_4ad707, sub_4a1dbb
// ============================================================

int32_t __convention("regparm")sub_49d978(int16_t arg1, long double arg2 @ st0, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_48 = ebx
    int32_t esi
    int32_t var_4c = esi
    char* var_40 = nullptr
    char* var_44 = nullptr
    int32_t* var_50 = &var_4
    int32_t (* var_54)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int16_t var_a
    int16_t var_6
    sub_40a02c(&var_6, &var_a, arg3, arg4)
    int32_t edx
    int32_t var_5c_1 = edx
    int32_t eax_1
    int32_t ecx_1
    eax_1, ecx_1 = sub_40a04c(arg3, arg4)
    int32_t var_3c = *((eax_1 << 2) + &data_52fb50)
    char var_38 = 0xb
    uint32_t var_34 = zx.d(var_6)
    char var_30 = 0
    int16_t var_8
    int32_t var_2c = (&data_52fb6c)[zx.d(var_8)]
    char var_28 = 0xb
    uint32_t var_24 = zx.d(var_a)
    char var_20 = 0
    sub_40ac5c(ecx_1, &var_40, "HH":"NN":"SS", arg3, arg4)
    char* var_1c = var_40
    char var_18 = 0xb
    sub_49e33c(sub_49dd18(arg2), &var_44, arg1, fconvert.d(arg2))
    double var_14
    var_14.d = var_44
    var_14:4.b = 0xb
    void var_c
    sub_409ae0(5, &var_3c, "%s, %d %s %d %s %s", var_c)
    fsbase->NtTib.ExceptionList = var_8.d
    __return_addr = sub_49da61
    return sub_403e1c(&var_44, 2)
}
