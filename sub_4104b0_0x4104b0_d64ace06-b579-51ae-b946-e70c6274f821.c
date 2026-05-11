// ============================================================
// 函数名称: sub_4104b0
// 虚拟地址: 0x4104b0
// WARP GUID: d64ace06-b579-51ae-b946-e70c6274f821
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_405ae8, sub_410478
// [被调用的父级函数]: sub_410618, sub_41631c, sub_4105a0, sub_410718, sub_410670, sub_410414, sub_4106dc, sub_410524, sub_41085c, sub_411380
// ============================================================

void __fastcallsub_4104b0(int32_t arg1, char** arg2) __noreturn
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t* var_14 = &var_4
    int32_t var_18 = 0x4104f8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_405ae8(arg2, &var_8)
    sub_410478(arg1, var_8)
    noreturn
}
