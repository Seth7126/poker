// ============================================================
// 函数名称: sub_41b890
// 虚拟地址: 0x41b890
// WARP GUID: 56656b16-5f1b-57d7-9b19-1a8b68748272
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4103c8
// [被调用的父级函数]: sub_41b7e4
// ============================================================

int32_t __convention("regparm")sub_41b890(void* arg1, int16_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_c = sub_4103c8(*(arg1 + 4), arg3)
    int32_t var_c = sub_4103c8(*(arg1 + 4), arg3)
    int32_t __saved_ebp
    int32_t* var_1c = &__saved_ebp
    int32_t (* var_20)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4103c8(*(arg1 + 8), zx.d(arg2))
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
