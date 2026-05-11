// ============================================================
// 函数名称: sub_410d8c
// 虚拟地址: 0x410d8c
// WARP GUID: b4473629-e6b0-590e-8e92-afd7d7ee93cb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_40401c, sub_410d4c, sub_40301c, sub_403df8, sub_409ae0
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_410d8c(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_11c = ebx
    int32_t esi
    int32_t var_120 = esi
    int32_t edi
    int32_t var_124 = edi
    int32_t var_18 = 0
    int32_t* var_128 = &var_4
    int32_t (* var_12c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_118[0x100]
    
    if (arg1[1] == 0)
        sub_40401c(sub_40301c(*arg1, &var_118), &var_118)
    else
        ebx.w = 0xfffe
        sub_4032ac(arg1[1], &var_18, 0, arg2)
        int32_t var_14 = var_18
        char var_10_1 = 0xb
        void* eax_3 = sub_410d4c(arg1)
        char var_8 = 0
        sub_409ae0(1, &var_14, sub_410e33+5, eax_3)
        esp = &var_8
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_410e28
    int32_t* result = &var_18
    sub_403df8(result)
    return result
}
