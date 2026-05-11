// ============================================================
// 函数名称: sub_4acf9c
// 虚拟地址: 0x4acf9c
// WARP GUID: abdc0422-ae0b-5290-a413-fafb5575f102
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e4c, sub_403df8, sub_40422c
// [被调用的父级函数]: sub_4ad544, sub_4ad5c0
// ============================================================

char** __convention("regparm")sub_4acf9c(void* arg1, char* arg2, char* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = arg3
    int32_t ebx
    int32_t var_c = ebx
    var_8 = arg2
    sub_40422c(var_8)
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_403e4c(arg1 + 0x14, var_8)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_4acfe4
    char** result = &var_8
    sub_403df8(result)
    return result
}
