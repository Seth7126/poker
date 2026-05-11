// ============================================================
// 函数名称: sub_4ae554
// 虚拟地址: 0x4ae554
// WARP GUID: bbd5741b-18fa-58b4-af36-767ffe9daf95
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4ae408, sub_40422c, sub_403e1c, sub_4ade38
// [被调用的父级函数]: sub_4b06c8
// ============================================================

int32_t __convention("regparm")sub_4ae554(int32_t* arg1, char* arg2, void* arg3)
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
    arg1[0x10]
    sub_4ae408(arg1, sub_4ade38(), arg2, var_c)
    fsbase->NtTib.ExceptionList = arg2
    __return_addr = sub_4ae5bb
    return sub_403e1c(&var_c, 2)
}
