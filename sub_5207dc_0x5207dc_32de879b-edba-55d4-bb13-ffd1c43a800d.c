// ============================================================
// 函数名称: sub_5207dc
// 虚拟地址: 0x5207dc
// WARP GUID: 32de879b-edba-55d4-bb13-ffd1c43a800d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_4040c4, sub_404078, sub_4042c0, sub_404188, sub_403e4c, sub_408e1c, sub_404080, sub_40401c, sub_46fd7c, sub_403e1c, sub_403df8, sub_404280, sub_403010
// [被调用的父级函数]: sub_4fc834, sub_4d88f8, sub_5223e8, sub_520efc, sub_4c4c9c, sub_5285a8, sub_4c4ceb, sub_4ed284, sub_4c39c8
// ============================================================

void* __convention("regparm")sub_5207dc(int32_t arg1, int32_t arg2, char arg3, void** arg4, char* arg5)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t var_1c
    __builtin_memset(&var_1c, 0, 0x18)
    int32_t ebx
    int32_t var_20 = ebx
    int32_t esi
    int32_t var_24 = esi
    int32_t edi
    int32_t var_28 = edi
    int32_t var_8
    var_8:3.b = arg3
    sub_40422c(arg5)
    int32_t* var_2c = &var_4
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_c
    sub_408e1c(arg2, &var_c)
    sub_4040c4(arg4, "Spieler ", var_c)
    
    if (arg2 s>= 1 && arg2 s<= 8)
        bool o_1 = unimplemented  {imul edx, ebx, 0x65}
        
        if (o_1)
            sub_403010()
            noreturn
        
        int32_t ecx_2 = *data_5301f4
        sub_40401c(ecx_2, ecx_2 + arg2 * 0x65 + 0x10e43)
    
    if (arg5 != 0)
        sub_403e4c(arg4, arg5)
    
    edi.w = 0x7d
    
    if (*(*data_5301f4 + 4) == 7)
        edi.w = 0x78
    
    char ebx_2 = 0
    
    while (*(ebp_1 - 1) != 0)
        int16_t edi_1
        ebp_1, edi_1 = sub_46fd7c(*data_530304, *arg4)
        unimplemented  {fmul st0, dword [0x5209f4]}
        ebp_1[-4].w = edi_1
        unimplemented  {fild st0, word [ebp-0x10]}
        unimplemented  {fcompp } f- unimplemented  {fcompp }
        bool c0_1 = unimplemented  {fcompp } f< unimplemented  {fcompp }
        bool c2_1 = is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp })
        bool c3_1 = unimplemented  {fcompp } f== unimplemented  {fcompp }
        unimplemented  {fcompp }
        unimplemented  {fcompp }
        int16_t top = top + 1
        int16_t eax_21 =
            (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe | (top & 7) << 0xb
        
        if (not(test_bit(eax_21:1.b, 0)))
            break
        
        sub_404280(1, sub_404078(*arg4), *arg4, &ebp_1[-3])
        sub_404188(ebp_1[-3], 0x5209f0)
        
        if (test_bit(eax_21:1.b, 6))
            sub_4042c0(arg4, sub_404078(*arg4), 1)
        
        sub_4042c0(arg4, sub_404078(*arg4), 1)
        sub_404080(arg4, U".")
        ebx_2 = 1
    
    if (ebx_2 != 0)
        int32_t eax_24 = sub_404078(*arg4)
        bool z_2 = eax_24 == 1
        
        if (add_overflow(eax_24, 0xffffffff))
            sub_403010()
            noreturn
        
        sub_404280(1, eax_24 - 1, *arg4, &ebp_1[-5])
        sub_404188(ebp_1[-5], 0x520a00)
        
        if (z_2)
            int32_t eax_28 = sub_404078(*arg4)
            z_2 = eax_28 == 1
            
            if (add_overflow(eax_28, 0xffffffff))
                sub_403010()
                noreturn
            
            sub_4042c0(arg4, eax_28 - 1, 1)
        
        sub_404280(1, sub_404078(*arg4), *arg4, &ebp_1[-6])
        sub_404188(ebp_1[-6], 0x5209f0)
        
        if (z_2)
            sub_404080(arg4, U".")
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_2c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_5209c8
    sub_403e1c(&ebp_1[-6], 2)
    sub_403e1c(&ebp_1[-3], 2)
    sub_403df8(&ebp_1[3])
    return &ebp_1[3]
}
