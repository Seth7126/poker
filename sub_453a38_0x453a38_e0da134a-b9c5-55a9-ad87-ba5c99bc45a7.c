// ============================================================
// 函数名称: sub_453a38
// 虚拟地址: 0x453a38
// WARP GUID: e0da134a-b9c5-55a9-ad87-ba5c99bc45a7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_453830, sub_456504, sub_45380c, sub_454d08
// [被调用的父级函数]: sub_4544c0, sub_454494
// ============================================================

void __convention("regparm")sub_453a38(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x3c) == 0)
    if (*(arg1 + 0x3c) == 0)
        return 
    
    void var_270
    sub_453830(arg1, &var_270)
    int32_t __saved_ebp
    int32_t* var_278 = &__saved_ebp
    int32_t (* var_27c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_1c0 = 0
    void var_1c8
    sub_456504(&var_1c8)
    int32_t var_15c
    *(arg1 + 0x28) = var_15c
    int32_t var_158
    *(arg1 + 0x2c) = var_158
    int32_t eax_5 = sub_454d08(&var_1c8)
    int32_t eax_6 = neg.d(eax_5)
    *(arg1 + 0x39) = (neg.d(sbb.d(eax_6, eax_6, eax_5 != 0))).b
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t var_278_1 = 0x453abe
    sub_45380c(&var_270)
}
