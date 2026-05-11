// ============================================================
// 函数名称: sub_4fc3f8
// 虚拟地址: 0x4fc3f8
// WARP GUID: c3fca8f1-e9de-510b-a8a4-8ac34abbb02f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_4fb48c, sub_404078, sub_4042c0, sub_404188, sub_46c038, sub_48c0c8, sub_4ee7d8, sub_403df8, sub_46fd7c, sub_4699b8, sub_420b10, sub_402b4c, sub_404280, sub_403010
// [被调用的父级函数]: sub_50003c, sub_4fc834
// ============================================================

int32_t* __convention("regparm")sub_4fc3f8(void* arg1, int32_t arg2, char arg3, long double arg4 @ st0, float arg5)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_30 = ebx
    int32_t esi
    int32_t var_34 = esi
    int32_t edi
    int32_t var_38 = edi
    char* var_28 = nullptr
    void* var_8 = arg1
    sub_40422c(var_8)
    int32_t* var_3c = &var_4
    int32_t (* var_40)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4fb48c(arg2, 0x4d)
    (*data_5306b4)(0xc1400000, 0x3f800000, 0, 0, ExceptionList, var_40, var_3c)
    float var_18
    
    if (arg2 != 1)
        (*data_5301d4)(0x3cf5c28f, 0x3f11eb85, 0x3df5c28f)
    else
        (*data_5301d4)(0x3eeb851f, 0x3e051eb8, 0x3ec7ae14)
        var_18 = -12f
        (*data_5306b4)(var_18, 0x3f800000, 0, 0)
    
    int32_t var_c_3
    __builtin_strncpy(&var_c_3, "fff?", 4)
    (*data_5301d4)(0, 0xbf000000, var_c_3)
    int32_t var_10_4 = 0x3d99999a
    int32_t var_14_4 = 0x3f19999a
    (*data_53006c)(0xde1)
    (*data_530034)(0xbe2)
    (*data_53006c)(0xb50)
    (*data_530334)(0x302, 0x303)
    int32_t var_24
    __builtin_memcpy(&var_24, *data_530304 + 0x1088, 0x10)
    float var_c_9
    
    if (arg2 != 1)
        var_c_9 = fconvert.s(data_4fc7d8 * fconvert.t(arg5))
    else
        var_c_9 = fconvert.s(data_4fc7cc * fconvert.t(arg5))
    
    int32_t var_20
    int32_t var_1c
    (*data_530518)(var_24, var_20, var_1c, fconvert.s(fconvert.t(var_18) * fconvert.t(var_c_9)))
    sub_404280(1, 1, var_8, &var_28)
    sub_404188(var_28, 0x4fc7ec)
    long double st0
    
    if (&var_8 == 4)
        sub_4042c0(&var_8, 1, 1)
        
        if (*(*data_5301f4 + 4) != 7 || *data_5300d0 s< 5 || arg2 != 2)
            int32_t var_c_13 = 0
            int32_t var_10_8 = 0
            int32_t var_14_7 = 0
            int32_t var_18_3 = 0
            ebp_1 = sub_46fd7c(*data_530304, var_8)
            var_20.q = fconvert.d(fneg(arg4) * data_4fc7f0)
            (*data_5306a4)(var_20)
        else
            int32_t var_c_12 = 0
            int32_t var_10_7 = 0
            int32_t var_14_6 = 0
            int32_t var_18_2 = 0
            ebp_1 = sub_46fd7c(*data_530304, var_8)
            st0 = sub_420b10(3f, fconvert.s(arg4))
            float var_20_1
            var_20_1.q = fconvert.d(fneg(st0) * data_4fc7f0)
            (*data_5306a4)(var_20_1)
    
    if (sub_4ee7d8() != 0)
        (*data_5306a4)(0xb130ef01, 0x3fc9c128, 0, 0, 0, 0)
    
    if (arg3 == 0)
        if (sub_404078(ebp_1[-1]) s> 1)
            int32_t eax_48 = sub_404078(ebp_1[-1])
            
            if (add_overflow(eax_48, 0xffffffff))
                sub_403010()
                noreturn
            
            ebp_1[-0xa] = eax_48 - 1
            unimplemented  {fild st0, dword [ebp-0x28]}
            unimplemented  {fld st0, tword [0x4fc814]}
            unimplemented  {fmulp st1, st0}
            unimplemented  {fmulp st1, st0}
            unimplemented  {fadd dword [ebp-0xc]}
            ebp_1[-3] = fconvert.s(unimplemented  {fstp dword [ebp-0xc], st0})
            unimplemented  {fstp dword [ebp-0xc], st0}
    else
        ebp_1 = sub_46fd7c(*data_530304, ebp_1[-1])
        unimplemented  {fld st0, tword [0x4fc7fc]}
        unimplemented  {fmulp st1, st0}
        unimplemented  {fmulp st1, st0}
        unimplemented  {fld st0, tword [0x4fc808]}
        unimplemented  {faddp st1, st0}
        unimplemented  {faddp st1, st0}
        unimplemented  {fmul st0, dword [ebp-0x10]}
        ebp_1[-3] = fconvert.s(unimplemented  {fstp dword [ebp-0xc], st0})
        unimplemented  {fstp dword [ebp-0xc], st0}
    
    int32_t var_c_15 = 0
    unimplemented  {fld st0, dword [ebp-0xc]}
    unimplemented  {fmul st0, dword [0x4fc820]}
    int32_t var_10_10 = sub_402b4c(st0)
    unimplemented  {fld st0, dword [0x4fc824]}
    unimplemented  {fmul st0, dword [ebp-0x10]}
    int32_t var_14_9 = sub_402b4c(st0)
    void* ebp_2 = sub_46c038(*data_530304, 0, 0, 0f, ebp_1[2], 0x14)
    (*data_53006c)(0xb50)
    (*data_530034)(0xde1)
    (*data_530034)(0xbe2)
    (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, *(ebp_2 + 8))
    int32_t ecx = sub_4699b8(*data_530304)
    
    if (arg3 == 0)
        unimplemented  {fld st0, tword [0x4fc828]}
        unimplemented  {fmul st0, dword [ebp-0x10]}
        *(ebp_2 - 0x10) = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
        unimplemented  {fstp dword [ebp-0x10], st0}
    else
        int32_t var_14_11
        __builtin_strncpy(&var_14_11, "Mbp?", 0xc)
        int32_t var_10_12
        int32_t var_c_20
        ecx = (*data_5306a4)(0x8d4fdf3b, 0x3f826e97, 0xd2f1a9fc, var_14_11, var_10_12, var_c_20)
        unimplemented  {fld st0, tword [0x4fc828]}
        unimplemented  {fmul st0, dword [ebp-0x10]}
        *(ebp_2 - 0x10) = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
        unimplemented  {fstp dword [ebp-0x10], st0}
    
    int32_t var_c_21 = *(ebp_2 - 0x10)
    void* ebp_3 = sub_48c0c8(*data_530304, *(ebp_2 - 4), ecx, 0, 0x3f800000)
    (*data_530034)(0xb50)
    (*data_53051c)(0x203)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4fc7c0
    sub_403df8(ebp_3 - 0x24)
    sub_403df8(ebp_3 - 4)
    return ebp_3 - 4
}
