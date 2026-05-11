// ============================================================
// 函数名称: sub_4acc5b
// 虚拟地址: 0x4acc5b
// WARP GUID: b91204f7-258c-5e7d-bc4b-4ae907e9a07d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_404078, sub_403e4c, sub_404080, sub_403e1c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4acc5b(char* arg1, char* arg2, int32_t* arg3)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    int32_t entry_ebx
    *0x55000000 += entry_ebx:1.b
    int32_t var_c = entry_ebx
    char* var_8 = arg2
    sub_40422c(arg1)
    sub_40422c(var_8)
    void* const* var_10 = &__return_addr
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (sub_404078(var_8) s> 0)
        sub_404080(&var_8, "; ")
    
    sub_404080(&var_8, arg1)
    sub_403e4c(arg3, var_8)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_4acce1
    return sub_403e1c(&var_8, 2)
}
