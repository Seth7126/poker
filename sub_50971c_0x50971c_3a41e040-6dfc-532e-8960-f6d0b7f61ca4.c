// ============================================================
// 函数名称: sub_50971c
// 虚拟地址: 0x50971c
// WARP GUID: 3a41e040-6dfc-532e-8960-f6d0b7f61ca4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4766f8, sub_404078, sub_469ac0, sub_47a7ec, sub_403df8, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_51e1c0, sub_4e649b
// ============================================================

void*sub_50971c()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    void* ebx_1 = data_530304
    void* esi_1 = data_530674
    void* edi_1 = data_5308e8
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(*ebx_1 + 0x8a0) = *esi_1
    int32_t ecx
    sub_469ac0(*ebx_1, *esi_1, ecx)
    sub_4766f8(*ebx_1, *esi_1, *edi_1)
    *esi_1
    bool o = unimplemented  {imul eax, dword [esi], 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    *(*(*ebx_1 + 0xab0) + *esi_1 * 0x81c0 + 0x8134) = (*edi_1).w
    *esi_1
    bool o_1 = unimplemented  {imul eax, dword [esi], 0x1038}
    
    if (o_1)
        sub_403010()
        noreturn
    
    *(*(*ebx_1 + 0xab0) + *esi_1 * 0x81c0 + 0x8132) = (*edi_1).w
    *esi_1
    bool o_2 = unimplemented  {imul eax, dword [esi], 0x1038}
    
    if (o_2)
        sub_403010()
        noreturn
    
    *edi_1
    bool o_3 = unimplemented  {imul edx, dword [edi], 0x23}
    
    if (o_3)
        sub_403010()
        noreturn
    
    *(*(*ebx_1 + 0xab0) + *esi_1 * 0x81c0 + *edi_1 * 0x118 - 0x87) = 1
    *esi_1
    *ebx_1
    void* ebp_1 = sub_47a7ec(*edi_1, &var_8, 0)
    int16_t eax_9 = sub_404078(*(ebp_1 - 4))
    *esi_1
    bool o_4 = unimplemented  {imul edx, dword [esi], 0x1038}
    
    if (o_4)
        sub_403010()
        noreturn
    
    *edi_1
    bool o_5 = unimplemented  {imul edx, dword [edi], 0x23}
    
    if (o_5)
        sub_403010()
        noreturn
    
    *(*(*ebx_1 + 0xab0) + *esi_1 * 0x81c0 + *edi_1 * 0x118 - 0x86) = eax_9
    *(*ebx_1 + 0x9b0) = 1
    *(*ebx_1 + 0x9b4) = *edi_1
    *(*ebx_1 + 0x9b8) = *esi_1
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_509849
    sub_403df8(ebp_1 - 4)
    return ebp_1 - 4
}
