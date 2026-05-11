// ============================================================
// 函数名称: sub_49ba5c
// 虚拟地址: 0x49ba5c
// WARP GUID: 1b7201eb-14fe-51eb-8319-a456d76c19e1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404138, sub_408e1c, sub_403e1c
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_49ba5c(char** arg1, char* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
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
    int32_t eax
    eax.b = *arg2
    sub_408e1c(eax, &var_8)
    int32_t var_2c = var_8
    void* const var_30 = &data_49bb08
    int32_t eax_1
    eax_1.b = arg2[1]
    sub_408e1c(eax_1, &var_c)
    int32_t var_34 = var_c
    void* const var_38 = &data_49bb08
    int32_t eax_2
    eax_2.b = arg2[2]
    sub_408e1c(eax_2, &var_10)
    int32_t var_3c = var_10
    void* const var_40 = &data_49bb08
    int32_t eax_3
    eax_3.b = arg2[3]
    sub_408e1c(eax_3, &var_14)
    int32_t var_44 = var_14
    sub_404138(arg1, 7)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_49baf7
    return sub_403e1c(&var_14, 4)
}
