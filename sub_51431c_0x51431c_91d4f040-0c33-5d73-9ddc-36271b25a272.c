// ============================================================
// 函数名称: sub_51431c
// 虚拟地址: 0x51431c
// WARP GUID: 91d4f040-0c33-5d73-9ddc-36271b25a272
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_50a240, sub_50d52c, sub_515920, sub_402bdc, sub_403df8
// [被调用的父级函数]: sub_508998
// ============================================================

void* __convention("regparm")sub_51431c(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_190 = ebx
    int32_t esi
    int32_t var_194 = esi
    int32_t edi
    int32_t var_198 = edi
    int32_t var_18c = 0
    int32_t* var_19c = &var_4
    int32_t (* var_1a0)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    void var_88
    sub_50d52c(0, &var_88)
    int32_t* var_1a8 = &var_4
    int32_t (* var_1ac)() = j_sub_40353c
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_84 = 7
    char var_81 = 3
    int32_t var_6c = arg2
    char var_82 = 1
    void* ebp_1 = sub_50a240(arg2, &var_18c)
    sub_404054(ebp_1 - 0x184, *(ebp_1 - 0x188), 0xff)
    sub_402bdc(ebp_1 - 0x60, ebp_1 - 0x184, 0x40)
    sub_515920(arg1, ebp_1 - 0x84, nullptr)
    fsbase->NtTib.ExceptionList = ExceptionList
    fsbase->NtTib.ExceptionList = ExceptionList_1
    int32_t (* var_19c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_5143e6
    sub_403df8(ebp_1 - 0x188)
    return ebp_1 - 0x188
}
