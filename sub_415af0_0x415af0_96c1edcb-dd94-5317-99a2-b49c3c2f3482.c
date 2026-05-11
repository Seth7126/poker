// ============================================================
// 函数名称: sub_415af0
// 虚拟地址: 0x415af0
// WARP GUID: 96c1edcb-dd94-5317-99a2-b49c3c2f3482
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df0, sub_4030d0
// [被调用的父级函数]: sub_415b58
// ============================================================

void __convention("regparm")sub_415af0(int32_t* arg1) __noreturn
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* var_14 = &var_4
    int32_t var_18 = 0x415b4a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*arg1 + 4))(ExceptionList, var_18, var_14)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t var_14_1 = 0x415b51
    int32_t ebx
    ebx.b = *(arg1 + 0xe)
    uint32_t esi = arg1[4]
    *(arg1 + 0xf) = 1
    (**arg1)(var_14_1)
    
    if (ebx.b != 0)
        sub_4030d0(arg1)
    
    sub_403df0(esi)
    noreturn
}
