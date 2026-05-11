// ============================================================
// 函数名称: sub_4ee360
// 虚拟地址: 0x4ee360
// WARP GUID: 9d2b0de8-1704-5490-be5a-426b6b8752de
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47ab08, sub_4040c4, sub_4837ec, sub_40401c, sub_4c0984, sub_403e1c
// [被调用的父级函数]: sub_4fc834, sub_502b24
// ============================================================

int32_tsub_4ee360()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_110 = ebx
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
    struct _EXCEPTION_REGISTRATION_RECORD* var_c = nullptr
    int32_t* var_114 = &var_4
    int32_t (* var_118)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax
    eax.b = *data_530144
    ebx.b = eax.b - 1 u< 2
    sub_4837ec(*data_530304, *data_530040, ebx.b)
    sub_4837ec(*data_530304, *data_530a00, ebx.b)
    
    if (ebx.b != 0)
        char var_10c[0x100]
        sub_40401c(sub_4c0984(*(*data_5301f4 + 0x21108), &var_10c), &var_10c)
        sub_4040c4(&var_8, "Blinds:   ", var_c)
        var_c = var_8
        long double x87_r0
        sub_47ab08(*data_530304, *data_530040, 1, x87_r0, var_c)
        esp = &var_8
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4ee432
    return sub_403e1c(&var_c, 2)
}
