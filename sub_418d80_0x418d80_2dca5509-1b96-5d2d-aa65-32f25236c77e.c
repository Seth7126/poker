// ============================================================
// 函数名称: sub_418d80
// 虚拟地址: 0x418d80
// WARP GUID: 2dca5509-1b96-5d2d-aa65-32f25236c77e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_418480, sub_417ed8, sub_418470
// [被调用的父级函数]: sub_418dd8, sub_418eb4, sub_418ee4
// ============================================================

int32_t __convention("regparm")sub_418d80(void* arg1, char* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    sub_418470(arg1)
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_417ed8(data_5316a4, arg1, arg2)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_418dcc
    return sub_418480(arg1)
}
