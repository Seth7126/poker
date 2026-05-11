// ============================================================
// 函数名称: sub_4117ac
// 虚拟地址: 0x4117ac
// WARP GUID: 8dfcf8e0-24e1-5af8-b05d-24a923d9e0b0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_405ae8, sub_411774
// [被调用的父级函数]: sub_412594, sub_412558, sub_4126d8, sub_412730, sub_412348, sub_412410, sub_412474, sub_412628
// ============================================================

void __fastcallsub_4117ac(int32_t arg1, char** arg2) __noreturn
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t* var_18 = &var_4
    int32_t var_1c = 0x4117f4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_405ae8(arg2, &var_8)
    sub_411774(arg1, var_8)
    noreturn
}
