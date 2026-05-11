// ============================================================
// 函数名称: sub_52c66c
// 虚拟地址: 0x52c66c
// WARP GUID: 2cb8011a-c54f-5c1a-a5ed-33563708d5d9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_516ec0, sub_517fc8, sub_516e74
// [被调用的父级函数]: sub_4c92f0, sub_4e6659, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_52c66c(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_c = &__saved_ebp
    int32_t (* var_10)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_516e74(arg1)
    sub_517fc8(arg1 + 0x89b0)
    sub_516ec0(arg1)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
