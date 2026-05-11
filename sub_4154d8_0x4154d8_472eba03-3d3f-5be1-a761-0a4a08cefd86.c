// ============================================================
// 函数名称: sub_4154d8
// 虚拟地址: 0x4154d8
// WARP GUID: 472eba03-3d3f-5be1-a761-0a4a08cefd86
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_415370, sub_403df8, sub_41512c
// [被调用的父级函数]: sub_415310, sub_415520
// ============================================================

int32_t* __convention("regparm")sub_4154d8(struct _EXCEPTION_REGISTRATION_RECORD* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    int32_t ebx
    int32_t var_c = ebx
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx
    sub_41512c(arg1, &var_8, ecx)
    sub_415370(arg1)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_41551c
    int32_t* result = &var_8
    sub_403df8(result)
    return result
}
