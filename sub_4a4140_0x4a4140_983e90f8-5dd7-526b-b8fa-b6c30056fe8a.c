// ============================================================
// 函数名称: sub_4a4140
// 虚拟地址: 0x4a4140
// WARP GUID: 983e90f8-5dd7-526b-b8fa-b6c30056fe8a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetProcAddress
// [内部子函数调用]: sub_404248, sub_403df8, sub_40422c, sub_404080
// [被调用的父级函数]: sub_4a41b0
// ============================================================

int32_t* __convention("regparm")sub_4a4140(void* arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_8 = arg3
    int32_t ebx
    int32_t var_c = ebx
    var_8 = arg1
    sub_40422c(var_8)
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_404080(&var_8, 0x4a41ac)
    PSTR lpProcName = sub_404248(&var_8)
    GetProcAddress(data_52fd64, lpProcName)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_4a419e
    int32_t* result = &var_8
    sub_403df8(result)
    return result
}
