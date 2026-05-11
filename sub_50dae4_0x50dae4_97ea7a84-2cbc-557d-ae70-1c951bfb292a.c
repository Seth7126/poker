// ============================================================
// 函数名称: sub_50dae4
// 虚拟地址: 0x50dae4
// WARP GUID: 97ea7a84-2cbc-557d-ae70-1c951bfb292a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404138, sub_408e1c, sub_478234, sub_46910c, sub_51038c, sub_403e1c
// [被调用的父级函数]: sub_50d82b, sub_50e11c, sub_50d838
// ============================================================

int32_tsub_50dae4()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* var_8 = nullptr
    int32_t var_c = 0
    int32_t var_10 = 0
    int32_t var_14 = 0
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ebp_1
    int32_t* esi_2
    ebp_1, esi_2 = sub_46910c(*data_530304, "f_einl3", &var_c)
    int32_t var_2c = *(ebp_1 - 8)
    int32_t var_30 = 0
    void* var_34 = ebp_1 - 4
    int32_t var_38 = esi_2[0xe]
    void* const var_3c = "?ACTION=CREATE&PARAM1="
    sub_408e1c(esi_2[0x16], ebp_1 - 0x10)
    int32_t var_40 = *(ebp_1 - 0x10)
    sub_404138(ebp_1 - 0xc, 3)
    int32_t edi
    sub_51038c(esi_2, *(ebp_1 - 0xc), 6, esi_2, edi, var_8, var_4)
    *(esi_2 + 0x1b1f6) = 6
    esi_2[0x6c7e].b = 1
    sub_478234(*data_530304, *data_530a40, *data_530974)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_50db9b
    return sub_403e1c(ebp_1 - 0x10, 4)
}
