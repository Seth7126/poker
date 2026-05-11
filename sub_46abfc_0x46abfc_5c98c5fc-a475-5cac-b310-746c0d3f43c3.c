// ============================================================
// 函数名称: sub_46abfc
// 虚拟地址: 0x46abfc
// WARP GUID: 5c98c5fc-a475-5cac-b310-746c0d3f43c3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_405ec1, sub_409040, sub_40422c, j_sub_404444, sub_404080, sub_402824, sub_403e1c, j_sub_406190, sub_405e46, sub_405f4c
// [被调用的父级函数]: sub_46f000
// ============================================================

int32_t __convention("regparm")sub_46abfc(void* arg1, char* arg2, void* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    void* var_c = arg3
    sub_40422c(arg2)
    sub_40422c(var_c)
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_405e46(arg1 + 0x6c8, arg2)
    
    if (sub_409040(arg2) == 0)
        sub_402824(j_sub_406190())
    
    sub_404080(&var_c, "\r\n")
    sub_402824(j_sub_406190())
    sub_402824(sub_405ec1(j_sub_404444()))
    sub_402824(sub_405f4c(arg1 + 0x6c8))
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2) = sub_46acba
    return sub_403e1c(&var_c, 2)
}
