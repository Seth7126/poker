// ============================================================
// 函数名称: sub_440f08
// 虚拟地址: 0x440f08
// WARP GUID: 4c2038ca-6e1e-5fa2-9067-07b06f86b00b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_40b4ec, sub_440ee0, sub_405ae8, sub_403df8
// [被调用的父级函数]: sub_431850, sub_42b9cc
// ============================================================

int32_t* __convention("regparm")sub_440f08(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t var_10 = 0
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (sub_440ee0(arg1) != 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        int32_t (* var_1c_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_440f80
        int32_t* result = &var_10
        sub_403df8(result)
        return result
    
    int32_t var_c = arg1[2]
    char var_8 = 0xb
    int32_t* var_28 = &var_c
    sub_405ae8(data_530724, &var_10)
    int32_t edx_1
    edx_1.b = 1
    sub_40b4ec(sub_40eacb+0x7d, edx_1, var_10, 0)
    sub_403828()
    noreturn
}
