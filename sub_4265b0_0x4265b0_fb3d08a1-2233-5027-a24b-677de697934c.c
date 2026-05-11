// ============================================================
// 函数名称: sub_4265b0
// 虚拟地址: 0x4265b0
// WARP GUID: fb3d08a1-2233-5027-a24b-677de697934c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: EmptyClipboard
// [内部子函数调用]: sub_42663c, sub_426610
// [被调用的父级函数]: sub_4265f4, sub_42652c
// ============================================================

int32_t __convention("regparm")sub_4265b0(BOOL arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    sub_42663c(arg1)
    int32_t* var_c = &var_4
    int32_t (* var_10)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    EmptyClipboard()
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_c_1)(int32_t arg1) = sub_4265ef
    return sub_426610(arg1)
}
