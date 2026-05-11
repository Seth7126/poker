// ============================================================
// 函数名称: sub_448f34
// 虚拟地址: 0x448f34
// WARP GUID: ad1087ef-c60c-5ff7-8e00-2c4622b3fa4e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetWindowTextA
// [内部子函数调用]: sub_404188, sub_403e4c, sub_448eec, sub_40423c, sub_403df8
// [被调用的父级函数]: sub_52de46, _start
// ============================================================

int32_t* __convention("regparm")sub_448f34(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char temp0 = *(arg1 + 0x94)
    
    if (temp0 == 0)
        sub_403e4c(arg1 + 0x7c, arg2)
    else
        sub_448eec(arg1, &var_8)
        sub_404188(var_8, arg2)
        
        if (temp0 != 0 || *(arg1 + 0x7c) != 0)
            PSTR lpString = sub_40423c(arg2)
            SetWindowTextA(*(arg1 + 0x24), lpString)
            sub_403df8(arg1 + 0x7c)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_448fb4
    int32_t* result = &var_8
    sub_403df8(result)
    return result
}
