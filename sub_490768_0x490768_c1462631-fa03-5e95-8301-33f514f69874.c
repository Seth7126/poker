// ============================================================
// 函数名称: sub_490768
// 虚拟地址: 0x490768
// WARP GUID: c1462631-fa03-5e95-8301-33f514f69874
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_40422c, sub_48fff8, sub_404138, sub_490090, sub_40401c, sub_40301c, sub_403e1c
// [被调用的父级函数]: sub_490b6c, sub_490d38, sub_490ca0, sub_490c10, sub_490ce8, sub_490eb4, sub_490c64, sub_4909b8, sub_490b08, sub_490bbc
// ============================================================

int32_t __convention("regparm")sub_490768(void** arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_118 = ebx
    int32_t esi
    int32_t var_11c = esi
    char* var_10 = nullptr
    int32_t var_14 = 0
    char* var_c = nullptr
    sub_40422c(arg2)
    int32_t* var_120 = &var_4
    int32_t (* var_124)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg3 == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        int32_t (* var_120_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_490813
        return sub_403e1c(&var_14, 4)
    
    sub_490090(arg3, &var_c)
    int32_t var_12c = arg3
    char var_114[0x100]
    sub_40401c(sub_40301c(*arg1, &var_114), &var_114)
    int32_t var_130 = var_14
    void* const var_134 = &data_490824
    sub_404138(&var_10, 3)
    int32_t edx_3
    edx_3.b = 1
    sub_48fff8(0x48fdf8, edx_3, var_10, arg2)
    sub_403828()
    noreturn
}
