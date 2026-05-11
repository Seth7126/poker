// ============================================================
// 函数名称: sub_405a78
// 虚拟地址: 0x405a78
// WARP GUID: 66165515-0788-5e70-9b00-71c49b15ce2d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_405a0c
// [被调用的父级函数]: sub_403c20
// ============================================================

int32_t* __convention("regparm")sub_405a78(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* var_c = &var_4
    int32_t (* var_10)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    arg1[1]
    sub_405a0c()
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_c_1)(int32_t arg1) = sub_405ae3
    int32_t* i
    
    if (arg1 != data_52e01c)
        for (i = data_52e01c; i != 0; i = *i)
            if (*i == arg1)
                *i = *arg1
                break
    else
        i = *arg1
        data_52e01c = i
    
    return i
}
