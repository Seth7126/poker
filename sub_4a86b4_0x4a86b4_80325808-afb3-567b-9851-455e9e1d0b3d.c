// ============================================================
// 函数名称: sub_4a86b4
// 虚拟地址: 0x4a86b4
// WARP GUID: 80325808-afb3-567b-9851-455e9e1d0b3d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40cc98, sub_4a86fc
// [被调用的父级函数]: sub_4b1304, sub_4a8784
// ============================================================

int32_t __convention("regparm")sub_4a86b4(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* var_c = &var_4
    int32_t (* var_10)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4a86fc(arg1, 0xffffffff)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_c_1)(int32_t arg1) = sub_4a86f6
    return sub_40cc98(&arg1[0x2a])
}
