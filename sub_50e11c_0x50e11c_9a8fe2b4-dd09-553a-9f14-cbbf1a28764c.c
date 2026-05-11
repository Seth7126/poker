// ============================================================
// 函数名称: sub_50e11c
// 虚拟地址: 0x50e11c
// WARP GUID: 9a8fe2b4-dd09-553a-9f14-cbbf1a28764c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47a960, sub_50f0e4, sub_50dbd4, sub_50deb4, sub_40401c, sub_50dae4, sub_50e090, sub_50e4b0, sub_403df8, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

void* __convention("regparm")sub_50e11c(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_14 = ebx
    void* var_10 = nullptr
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char eax = *(arg1 + 0x1b1f6)
    int32_t var_c
    void var_8
    
    if (eax != 4)
        if (eax == 5)
            if (arg2 == 1)
                int32_t ecx_6 = sub_47a960(*data_5308d8, *data_5307d8, *data_530304, &var_c)
                esp = &ExceptionList
                bool o_2 = unimplemented  {imul edx, dword [ebp-0x8], 0x17}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                sub_40401c(ecx_6, arg1 + var_c * 0xb8 + 0x120c0)
                sub_50dbd4(arg1, var_10)
            else if (arg2 == 2)
                sub_50dae4()
            else if (arg2 == 3)
                arg2.b = 1
                int32_t esi
                sub_50deb4(arg1, arg2.b, esi)
                esp = &var_8
    else if (arg2 == 1)
        struct _EXCEPTION_REGISTRATION_RECORD* ecx_3 =
            sub_47a960(*data_5308d8, *data_5307d8, *data_530304, &var_c)
        int32_t edx_2 = var_c
        
        if (add_overflow(edx_2, 0xffffffff))
            sub_403010()
            noreturn
        
        ebp_1 = sub_50e090(arg1, edx_2 - 1, ecx_3)
        esp = &var_8
    else if (arg2 == 3)
        arg2.b = 1
        sub_50f0e4(arg1, arg2.b)
        sub_50e4b0(arg1, 0)
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_50e221
    sub_403df8(&ebp_1[-3])
    return &ebp_1[-3]
}
