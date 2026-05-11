// ============================================================
// 函数名称: sub_41f898
// 虚拟地址: 0x41f898
// WARP GUID: c012391b-a104-5a86-9faf-25545446f632
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_41d040, sub_41d044
// [被调用的父级函数]: sub_41f5c0, sub_41f7e0, sub_41f90c
// ============================================================

void* __convention("regparm")sub_41f898(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t esi = arg2
    arg2.b = 1
    void* result = sub_4030a0(arg3, arg2)
    int32_t __saved_ebp
    int32_t* var_18 = &__saved_ebp
    int32_t (* var_1c)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(result + 8) = esi
    *(result + 0xc) = arg3
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_41d040(result)
    sub_41d044(*(arg1 + 0x20))
    *(arg1 + 0x20) = result
    return result
}
