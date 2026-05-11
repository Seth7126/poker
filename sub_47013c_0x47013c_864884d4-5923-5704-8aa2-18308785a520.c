// ============================================================
// 函数名称: sub_47013c
// 虚拟地址: 0x47013c
// WARP GUID: 864884d4-5923-5704-8aa2-18308785a520
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47ab08, sub_42afdc, sub_42affc, sub_408e1c, sub_47289c, sub_402b4c, sub_403e1c
// [被调用的父级函数]: sub_473684, sub_47d208, sub_473570
// ============================================================

int32_t __convention("regparm")sub_47013c(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_20 = ebx
    void* var_1c = nullptr
    void* var_18 = nullptr
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char eax = arg1[0x28b].b
    
    if (eax u>= 2 && eax != 3)
        arg1[0x28b].b = 1
        
        if (*(arg1 + 0xa52) != 0)
            arg1[0x295]
            arg1[0x294]()
        
        if (*(arg1 + 0x97d) == 0)
            int32_t eax_2
            int32_t edx_1
            eax_2, edx_1 = sub_402b4c(float.t(arg1[0xe]) / float.t(arg1[0xf]) * fconvert.t(500f))
            bool cond:0_1 = edx_1 == 0
            
            if (edx_1 == 0)
                cond:0_1 = eax_2 == 0x29b
            
            if (not(cond:0_1))
                double var_14_1 = fconvert.d((float.t(arg1[0xf])
                    + fconvert.t(fconvert.d(float.t(arg1[0xe]) / fconvert.t(4f) * fconvert.t(3f))))
                    / fconvert.t(2f))
                sub_42affc(arg1, sub_402b4c(fconvert.t(var_14_1)))
                sub_42afdc(arg1, sub_402b4c(fconvert.t(var_14_1) / fconvert.t(3f) * fconvert.t(4f)))
        
        arg1[0x28b].b = 2
        sub_47289c(arg1, arg1[0xe], arg1[0xf])
        arg1[0x38b] = arg1[0xe]
        arg1[0x38c] = arg1[0xf]
        sub_408e1c(arg1[0xe], &var_18)
        long double x87_r0
        void* ebx_2 = sub_47ab08(arg1, arg1[0x434], arg1[0x449], x87_r0, var_18)
        sub_408e1c(*(ebx_2 + 0x3c), &var_1c)
        sub_47ab08(ebx_2, *(ebx_2 + 0x10d0), *(ebx_2 + 0x1120), x87_r0, var_1c)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_24_1)(int32_t* arg1 @ ebp) = sub_470293
    return sub_403e1c(&var_1c, 2)
}
