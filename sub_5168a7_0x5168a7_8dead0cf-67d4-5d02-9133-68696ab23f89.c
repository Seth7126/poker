// ============================================================
// 函数名称: sub_5168a7
// 虚拟地址: 0x5168a7
// WARP GUID: 8dead0cf-67d4-5d02-9133-68696ab23f89
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_512d78, sub_510e64, sub_512654, sub_509ed4, sub_5166d8, sub_50c5e0, sub_50918c, sub_511d74, sub_50b624, sub_513ae4, sub_509dc4, sub_512e7c, sub_50d2f4, sub_514cc4, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_5168a7(char* arg1, int32_t* arg2, void* arg3 @ ebp, uint16_t* arg4 @ esi, void* arg5 @ edi)
{
    // 第一条实际指令: *arg2 -= 1
    *arg2 -= 1
    *arg1 += arg1.b
    void* entry_ebx
    *(entry_ebx + 0x5f) += arg1:1.b
    int32_t eflags
    int16_t temp0
    temp0, eflags = __arpl_memw_gpr16(*(arg5 + 0x6e), arg3.w)
    *(arg5 + 0x6e) = temp0
    int32_t esi = __outsb(arg2.w, *arg4, arg4, eflags)
    int32_t eflags_1
    int32_t gsbase
    int16_t temp0_1
    temp0_1, eflags_1 = __arpl_memw_gpr16(*(gsbase + esi + arg3), esi.w)
    *(gsbase + esi + arg3) = temp0_1
    *(arg3 - 0x75) += arg2.b
    arg1.b = __in_al_dx(arg2.w, eflags_1)
    void* var_4 = entry_ebx
    arg1[0x1c8] = 0
    
    if (*(arg1 + 0x58) == 0)
        *(arg1 + 0x54) = 0
    
    if (sub_50d2f4() != 0 || *(arg1 + 0x54) - 1 u>= 2)
        int32_t ecx_2 = sub_50b624(3, nullptr, esi, arg5)
        
        if (arg1[0x5c] == 0)
            if (*(arg1 + 0x54) s<= 0)
                sub_513ae4(ecx_2, 0x66)
            else
                sub_513ae4(ecx_2, 1)
                sub_509dc4()
                
                if (*(arg1 + 0x54) == 2)
                    sub_50b624(7, nullptr, esi, arg5)
        
        arg1[0x5c] = 0
        return sub_514cc4(arg1, "c_disconnect.")
    
    sub_514cc4(arg1, sub_516a2b+5)
    
    if (*(arg1 + 0x54) == 2)
        sub_509ed4(sub_512d78(arg1))
    
    int32_t ecx
    int32_t edx
    void* ebx_1
    ecx, edx, ebx_1 = sub_510e64(arg1)
    *(ebx_1 + 0x350)
    bool o_1 = unimplemented  {imul eax, dword [ebx+0x350], 0xe9}
    
    if (o_1)
        sub_403010()
        noreturn
    
    if (*(ebx_1 + *(ebx_1 + 0x350) * 0x3a4 + 0x185) == 0)
        return sub_511d74(ebx_1, 2, 0xbb8)
    
    *(ebx_1 + 0x345) = 0
    *(ebx_1 + 0x350)
    bool o_2 = unimplemented  {imul eax, dword [ebx+0x350], 0xe9}
    
    if (o_2)
        sub_403010()
        noreturn
    
    *(ebx_1 + *(ebx_1 + 0x350) * 0x3a4 + 0x185) = 0
    sub_50918c(ecx, edx)
    sub_512654(ebx_1)
    int32_t ecx_1
    ecx_1.b = 1
    
    if (sub_5166d8(ebx_1, *(ebx_1 + 0x350), ecx_1) == 0)
        sub_514cc4(ebx_1, "create ERSATZHOST fehlgeschlagen")
    else
        sub_514cc4(ebx_1, "create ERSATZHOST erfolgreich")
        
        if (*(ebx_1 + 0x54) == 1)
            sub_50c5e0(1, 1)
    
    sub_511d74(ebx_1, 1, 0x2ee0)
    return sub_512e7c(0x2ee0, ebx_1 + 0x3640)
}
