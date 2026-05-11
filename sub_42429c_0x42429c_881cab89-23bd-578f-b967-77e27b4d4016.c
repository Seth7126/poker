// ============================================================
// 函数名称: sub_42429c
// 虚拟地址: 0x42429c
// WARP GUID: 881cab89-23bd-578f-b967-77e27b4d4016
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b6fc, sub_4095ac, sub_402980, sub_403ee0, sub_4095f8, sub_42b6ec, sub_4095c0
// [被调用的父级函数]: 无
// ============================================================

char** __convention("regparm")sub_42429c(int32_t* arg1, char** arg2)
{
    // 第一条实际指令: int32_t eax_1 = (*(*arg1 + 0xbc))()
    int32_t eax_1 = (*(*arg1 + 0xbc))()
    int32_t eax_3 = (*(*arg1 + 0xb8))()
    sub_403ee0(arg2, 0, eax_3)
    
    if (eax_3 == 0)
        return arg2
    
    sub_42b6ec()
    void* eax_6 = sub_4095ac(1)
    int32_t __saved_ebp
    int32_t* var_1c = &__saved_ebp
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_42b6fc(sub_4095c0(eax_6), eax_6)
    sub_402980(eax_6 + eax_1, *arg2, eax_3)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t var_1c_1 = 0x424331
    return sub_4095f8(eax_6)
}
