// ============================================================
// 函数名称: sub_4ab1c0
// 虚拟地址: 0x4ab1c0
// WARP GUID: 9525de82-28f7-5ee5-9952-d2883ae9d04f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4abbb0, sub_4a55b4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4ab1c0(void* arg1)
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
    sub_4abbb0(*(arg1 + 0x80), *(*(arg1 + 0x68) + 0xc), *(arg1 + 0x78))
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
