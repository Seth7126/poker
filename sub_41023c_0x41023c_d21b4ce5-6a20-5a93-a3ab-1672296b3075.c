// ============================================================
// 函数名称: sub_41023c
// 虚拟地址: 0x41023c
// WARP GUID: d21b4ce5-6a20-5a93-a3ab-1672296b3075
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403058, sub_4055a0, sub_405598, sub_40401c, sub_40301c, sub_403df8, sub_41023c, sub_4100b4
// [被调用的父级函数]: sub_4102e4, sub_41023c
// ============================================================

struct _EXCEPTION_REGISTRATION_RECORD** __convention("regparm")sub_41023c(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10c = ebx
    int32_t esi
    int32_t var_110 = esi
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
    int32_t* var_114 = &var_4
    int32_t (* var_118)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1 != &data_40f80c && arg1 != *(arg2 - 8))
        sub_403058(arg1)
        sub_41023c(arg2)
        char var_108[0xfc]
        sub_40401c(sub_40301c(arg1, &var_108), &var_108)
        esp = &var_8
        sub_4100b4(var_8, sub_4055a0(sub_405598()), arg2 - 4)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4102d9
    struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
    sub_403df8(result)
    return result
}
