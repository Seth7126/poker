// ============================================================
// 函数名称: sub_449ef8
// 虚拟地址: 0x449ef8
// WARP GUID: 2a966d38-100e-5a49-ae42-57942c9f7ee0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetCursor, GetIconInfo
// [内部子函数调用]: sub_41ade0, sub_40276c, sub_41ae98, sub_40886c, sub_449ee8
// [被调用的父级函数]: sub_44a0a0
// ============================================================

int32_tsub_449ef8()
{
    // 第一条实际指令: int32_t result = (*data_5302cc)(0xe)
    int32_t result = (*data_5302cc)(0xe)
    ICONINFO piconinfo
    
    if (GetIconInfo(GetCursor(), &piconinfo) == 0)
        return result
    
    int32_t __saved_ebp
    int32_t* var_3c_2 = &__saved_ebp
    int32_t (* var_40_1)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    sub_41ade0()
    int32_t var_10
    int32_t var_c
    void* eax_7 = sub_40886c(var_c + var_10)
    int32_t* var_48 = &__saved_ebp
    int32_t (* var_4c)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ebx_1 = eax_7 + var_c
    
    if (sub_41ae98(ebx_1) != 0 && *(eax_7 + 0xe) == 1)
        int32_t eax_11 = *(eax_7 + 4)
        int32_t edx_4 = (eax_11 * zx.d(*(eax_7 + 0xe)) + 0x1f) & 0xffffffe0
        
        if (edx_4 s< 0)
            edx_4 += 7
        
        int32_t edx_5 = edx_4 s>> 3
        int32_t __saved_edi_1 = eax_11 * edx_5
        void* ebx_3 = ebx_1 + var_10 - __saved_edi_1
        int32_t var_8_1 = sub_449ee8(ebx_3, __saved_edi_1, 0xff)
        
        if (var_8_1 == 0 && *(eax_7 + 8) s>= *(eax_7 + 4) * 2)
            var_8_1 = sub_449ee8(ebx_3 - __saved_edi_1, __saved_edi_1, 0)
        
        int32_t var_8_3 = divs.dp.d(sx.q(var_8_1), edx_5) - piconinfo.yHotspot
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_48_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) =
        sub_44a012
    return sub_40276c(eax_7)
}
