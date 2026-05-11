// ============================================================
// 函数名称: sub_42f010
// 虚拟地址: 0x42f010
// WARP GUID: 42135869-e99d-5012-9a88-66078a412fda
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41cd24, sub_42a358
// [被调用的父级函数]: sub_42d8f4
// ============================================================

int32_t __convention("regparm")sub_42f010(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    int32_t* var_18 = &var_4
    int32_t (* var_1c)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(arg1 + 0x2c)
    (*(arg1 + 0x28))(ExceptionList, var_28, var_24, ExceptionList_1, var_1c, var_18)
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_42f05e
    sub_42a358()
    return sub_41cd24()
}
