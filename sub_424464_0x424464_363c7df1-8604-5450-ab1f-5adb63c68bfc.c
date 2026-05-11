// ============================================================
// 函数名称: sub_424464
// 虚拟地址: 0x424464
// WARP GUID: 363c7df1-8604-5450-ab1f-5adb63c68bfc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42eac0
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_424464(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    arg1[0x7f].b = 1
    int32_t* var_c = &var_4
    int32_t (* var_10)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_42eac0(arg1)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_c_1)(void* arg1 @ ebp, int32_t arg2) = sub_4244aa
    arg1[0x7f].b = 0
    return arg1
}
