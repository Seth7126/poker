// ============================================================
// 函数名称: sub_50f700
// 虚拟地址: 0x50f700
// WARP GUID: 04a4c41e-a7f4-557e-b51c-c34be064a1fd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_4040c4, sub_404188, sub_51038c, sub_403e1c
// [被调用的父级函数]: sub_50fa27, sub_50f7b8
// ============================================================

int32_t __convention("regparm")sub_50f700(int32_t* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    void* var_c = nullptr
    char* var_10 = nullptr
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    sub_40422c(arg2)
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    arg1[0x13] = arg3
    int32_t var_28 = 0
    sub_4040c4(&var_10, arg2, "?ACTION=GET_STATE")
    int32_t edi
    sub_51038c(arg1, var_10, 5, arg3, edi, &var_c, 0)
    sub_404188(var_c, sub_50f7af+5)
    int32_t eax_4
    eax_4.b = true
    fsbase->NtTib.ExceptionList = arg2
    __return_addr = sub_50f786
    return sub_403e1c(&var_10, 3)
}
