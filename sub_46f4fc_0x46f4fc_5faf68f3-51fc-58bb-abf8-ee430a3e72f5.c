// ============================================================
// 函数名称: sub_46f4fc
// 虚拟地址: 0x46f4fc
// WARP GUID: 5faf68f3-51fc-58bb-abf8-ee430a3e72f5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_406010, sub_405f4c, sub_402824, sub_4062e1, sub_403df8, sub_405e46, sub_403010
// [被调用的父级函数]: sub_524d14
// ============================================================

char** __convention("regparm")sub_46f4fc(void* arg1, int32_t arg2, char* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_158 = ebx
    int32_t esi
    int32_t var_15c = esi
    char* var_8 = arg3
    sub_40422c(var_8)
    int32_t* var_160 = &var_4
    int32_t (* var_164)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void var_154
    sub_405e46(&var_154, var_8)
    sub_402824(sub_4062e1())
    bool o = unimplemented  {imul eax, esi, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    sub_402824(sub_406010(&var_154, *(arg1 + 0xab0) + arg2 * 0x81c0))
    sub_402824(sub_405f4c(&var_154))
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_160_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_46f59a
    char** result = &var_8
    sub_403df8(result)
    return result
}
