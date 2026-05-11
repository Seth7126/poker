// ============================================================
// 函数名称: sub_49fa84
// 虚拟地址: 0x49fa84
// WARP GUID: 3ae61872-5a1a-5cb1-80ab-112e4686dd6d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_49eaf8, sub_40cc98, sub_404078
// [被调用的父级函数]: sub_49fafc
// ============================================================

int32_t __convention("regparm")sub_49fa84(int32_t* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = ExceptionList_1
    void* esi = arg2
    arg2.b = 1
    int32_t* var_c = sub_4030a0(arg3, arg2)
    var_c = &var_4
    int32_t (* var_10_1)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_404078(esi)
    sub_49eaf8(var_c)
    (*(*arg1 + 0x30))(arg3, ExceptionList, var_10_1, var_c)
    fsbase->NtTib.ExceptionList = arg3
    __return_addr = sub_49faf3
    return sub_40cc98(&var_c)
}
