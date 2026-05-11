// ============================================================
// 函数名称: sub_4741fc
// 虚拟地址: 0x4741fc
// WARP GUID: f9747268-e845-55de-b361-eba77de89470
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_4755b0, sub_403e1c
// [被调用的父级函数]: sub_46a954
// ============================================================

int32_t __convention("regparm")sub_4741fc(void* arg1, void* arg2, void* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    sub_40422c(arg2)
    sub_40422c(arg3)
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ebp_1 = sub_4755b0(arg1, arg2, arg3)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2) = sub_474258
    return sub_403e1c(ebp_1 - 8, 2)
}
