// ============================================================
// 函数名称: sub_496294
// 虚拟地址: 0x496294
// WARP GUID: cd7ee91b-4c65-5b2d-b252-d5ec74679b12
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4956a4, sub_49562b
// ============================================================

int32_t __convention("regparm")sub_496294(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t __saved_ebp
    int32_t* var_18 = &__saved_ebp
    int32_t (* var_1c)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*arg1 - 0x14))(ExceptionList, var_1c, var_18)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
