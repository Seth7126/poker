// ============================================================
// 函数名称: sub_4acc64
// 虚拟地址: 0x4acc64
// WARP GUID: bf149b73-5eff-5ede-a81d-0df9d6fadc7c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_404078, sub_403e4c, sub_404080, sub_403e1c
// [被调用的父级函数]: sub_4ad030, sub_4ad027
// ============================================================

int32_t __convention("regparm")sub_4acc64(char* arg1, char* arg2, char** arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    char* var_c = arg2
    sub_40422c(arg1)
    sub_40422c(var_c)
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (sub_404078(var_c) s> 0)
        sub_404080(&var_c, "; ")
    
    sub_404080(&var_c, arg1)
    sub_403e4c(arg3, var_c)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2) = sub_4acce1
    return sub_403e1c(&var_c, 2)
}
