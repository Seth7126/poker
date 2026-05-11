// ============================================================
// 函数名称: sub_497fb4
// 虚拟地址: 0x497fb4
// WARP GUID: b049b941-5690-5a42-8145-f97364f03a6c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404078, sub_4042c0, sub_404188, sub_404080, sub_403e1c, sub_403fa0, sub_403df8, sub_404280
// [被调用的父级函数]: sub_4981b4
// ============================================================

int32_t __convention("regparm")sub_497fb4(int32_t arg1, int32_t* arg2, void* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_18
    __builtin_memset(&var_18, 0, 0x14)
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi
    int32_t var_20 = esi
    int32_t edi
    int32_t var_24 = edi
    int32_t* var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_403df8(arg2)
    int32_t eax_5
    
    while (true)
        eax_5 = sub_404078(*(arg3 - 4))
        
        if (eax_5 s<= 0)
            break
        
        char* var_c
        sub_404280(1, 1, *(arg3 - 4), &var_c)
        char* eax_7 = var_c
        sub_403fa0()
        void* var_10
        sub_404188(eax_7, var_10)
        
        if (eax_5 == 0)
            break
        
        char* var_8
        sub_404280(1, 1, *(arg3 - 4), &var_8)
        sub_404080(arg2, var_8)
        sub_4042c0(arg3 - 4, 1, 1)
    
    char* var_14
    sub_404280(1, 1, *(arg3 - 4), &var_14)
    char* eax_10 = var_14
    sub_403fa0()
    sub_404188(eax_10, var_18)
    
    if (eax_5 == 0)
        sub_4042c0(arg3 - 4, 1, 1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_28_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_4980ac
    return sub_403e1c(&var_18, 5)
}
