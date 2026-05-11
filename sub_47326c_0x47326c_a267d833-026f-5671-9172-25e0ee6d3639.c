// ============================================================
// 函数名称: sub_47326c
// 虚拟地址: 0x47326c
// WARP GUID: a267d833-026f-5671-9172-25e0ee6d3639
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ShowWindow, SetForegroundWindow, ShowCursor
// [内部子函数调用]: sub_403008, sub_4807f4, sub_42afdc, sub_473938, sub_52d9cc, sub_42afb8, sub_42affc, sub_4318d0, sub_42b220, sub_52d80c, sub_403df8, sub_52d8ac, sub_453088, sub_42b1dc, sub_42af98, sub_40b4b0, sub_409ae0, sub_403010
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_47326c(char* arg1, char* arg2, void* arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, int32_t arg6 @ edi)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *(arg4 + 0x20)
    void* esp_1 = *(arg4 + 0x20) * 0x646c6942
    bool c = unimplemented  {imul esp, dword [ebp+0x20], 0x646c6942}
    void* esp_2
    
    if (not(c))
        arg1[0xa2c] = 1
        *(arg4 - 5) = 0
        *(arg4 - 6) = 0
        arg2 = nullptr
        *(esp_1 - 4) = arg4
        esp_2 = esp_1 - 4
        goto label_4732f0
    
    *(esp_1 - 4) = 0x616d7269
    esp_2 = esp_1 - 4
    char* entry_ebx
    TEB* fsbase
    int32_t eflags
    
    if (&__return_addr != 0xffffffff)
        arg2:1.b += arg1.b
        arg4 += 1
        __cli(__sti(eflags))
        char temp5_1 = *entry_ebx
        *entry_ebx += arg2:1.b
        *(arg4 + 0x68) = rlc.b(*(arg4 + 0x68), arg3.b, temp5_1 + arg2:1.b u< temp5_1)
        *(esp_2 - 4) = *arg2
        esp_2 -= 4
    label_4732f8:
        *(fsbase + arg2) = esp_2
        arg1 = *(*(arg4 - 4) + 0xdb8)
        arg2 = arg1 * 3
        bool o_1 = unimplemented  {imul edx, eax, 0x3}
        
        if (o_1)
            sub_403010()
            noreturn
        
        arg3 = *(*(arg4 - 4) + 0xa20)
    else
        uint8_t* edi
        uint8_t temp0_1
        temp0_1, edi = __insb(arg6, arg2.w, eflags)
        *edi = temp0_1
        char temp2_1 = entry_ebx[0x75]
        uint8_t temp1_1 = modu.dp.b(arg1.w, temp2_1)
        arg1.b = divu.dp.b(arg1.w, temp2_1)
        arg1:1.b = temp1_1
        __outsb(arg2.w, *arg5, arg5, eflags)
        char temp6_1 = entry_ebx[0x69] & arg2:1.b
        entry_ebx[0x69] = temp6_1
        
        if (temp6_1 u< 0)
        label_4732f0:
            *(esp_2 - 4) = j_sub_403668
            *(esp_2 - 8) = *(fsbase + arg2)
            esp_2 -= 8
            goto label_4732f8
        
        *(arg3 + 0x75) &= arg1:1.b
        *(arg4 + 0x6e) &= arg1:1.b
        char temp7_1 = entry_ebx[0x74] & arg2.b
        entry_ebx[0x74] = temp7_1
        uint16_t* esi_1 = *(esp_2 + 4)
        __outsb((*(esp_2 + 0x14)).w, *esi_1, esi_1, eflags)
        *(esp_2 + 0x20)
        *(esp_2 + 0x24)
        arg4 = *(esp_2 + 0x28)
        entry_ebx = *(esp_2 + 0x30)
        arg2 = *(esp_2 + 0x34)
        arg3 = *(esp_2 + 0x38)
        arg1 = *(esp_2 + 0x3c)
        esp_2 += 0x40
        
        if (temp7_1 u< 0)
            *(arg3 + 5)
            sub_403010()
            noreturn
        
        arg2[0x75]
        arg2[0x75] &= entry_ebx:1.b
        unimplemented  {and byte [edx+0x75], bh}
        int16_t temp0_3
        temp0_3, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x67), arg4.w)
        *(entry_ebx + 0x67) = temp0_3
        *(entry_ebx - 0x767403b3) -= 1
        *arg2 &= arg3.b
        *arg1 += arg1.b
    entry_ebx = *(*(arg3 + 0x14) + (arg2 << 2))
    bool o_2 = unimplemented  {imul edx, eax, 0x3}
    
    if (o_2)
        sub_403010()
        noreturn
    
    int32_t esi_6 = *(*(*(*(arg4 - 4) + 0xa20) + 0x14) + arg1 * 0xc + 4)
    bool o_3 = unimplemented  {imul eax, eax, 0x3}
    
    if (o_3)
        sub_403010()
        noreturn
    
    *(arg4 - 0xc) = *(*(*(*(arg4 - 4) + 0xa20) + 0x14) + arg1 * 0xc + 8)
    int32_t eax_6 = sub_4318d0(*(arg4 - 4))
    BOOL eax_8 = *(*(arg4 - 4) + 0xa1c)
    
    if (eax_8 s< 0)
        sub_403008()
        noreturn
    
    sub_453088(eax_8)
    int32_t eax_10 = *(*(arg4 - 4) + 0xa20)
    
    if (*(eax_10 + 4) != 0)
        sub_52d8ac(eax_10)
    
    BOOL eax_12 = *(*(arg4 - 4) + 0xa1c)
    
    if (eax_12 s< 0)
        sub_403008()
        noreturn
    
    sub_453088(eax_12)
    sub_42af98(*(arg4 - 4))
    sub_42afb8(*(arg4 - 4))
    sub_42afdc(*(arg4 - 4), entry_ebx)
    sub_42affc(*(arg4 - 4), esi_6)
    sub_42afdc(*(arg4 - 4), entry_ebx)
    sub_42affc(*(arg4 - 4), esi_6)
    sub_42af98(*(arg4 - 4))
    sub_42afb8(*(arg4 - 4))
    *(esp_2 - 4) = 1
    *(esp_2 - 8) = *(arg4 - 0xc)
    *(esp_2 - 0xc) = arg4 - 0x18
    *(*(arg4 - 4) + 0xa20)
    sub_52d9cc(esi_6, entry_ebx)
    sub_52d80c(eax_6, arg4 - 0x18, *(*(arg4 - 4) + 0xa20))
    void* esp_25
    
    if (*(*(*(arg4 - 4) + 0xa20) + 4) == 0)
        *(arg4 - 5) = 1
        *(esp_2 - 4) = arg4 - 0x1c
        *(arg4 - 0x2c) = entry_ebx
        *(arg4 - 0x28) = 0
        *(arg4 - 0x24) = esi_6
        *(arg4 - 0x20) = 0
        sub_409ae0(1, arg4 - 0x2c, &data_473540)
        esp_25 = esp_2
        int32_t edx_15
        edx_15.b = 1
        sub_40b4b0(0x407d24, edx_15, *(arg4 - 0x1c))
    else
        *(*(arg4 - 4) + 0x97d) = 1
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = eax_6
        ShowWindow()
        *(esp_2 - 4) = 3
        *(esp_2 - 8) = eax_6
        ShowWindow()
        *(esp_2 - 4) = eax_6
        SetForegroundWindow()
        esp_25 = esp_2
    
    *(esp_25 - 4) = sub_42b220(*(arg4 - 4))
    *(esp_25 - 8) = sub_42b1dc(*(arg4 - 4))
    HWND eax_37 = sub_4318d0(*(arg4 - 4))
    
    if (eax_37 s< 0)
        sub_403008()
        noreturn
    
    *(esp_25 - 8)
    void* ebp
    int32_t esi_7
    ebp, esi_7 = sub_473938(*(arg4 - 4), eax_37)
    *(esp_25 + 4)
    void* esp_32 = esp_25 + 8
    fsbase->NtTib.ExceptionList = *(esp_25 - 4)
    *(ebp - 5)
    
    if (*(ebp - 6) == 0)
        sub_4807f4(*(ebp - 4), *(*(ebp - 4) + 0xe48), esi_7, eax_6)
        *(esp_32 - 4) = 0xffffffff
        ShowCursor()
    
    if (*(*(ebp - 4) + 0xa2c) != 3)
        *(*(ebp - 4) + 0xa2c) = 2
    
    *(esp_32 + 8)
    fsbase->NtTib.ExceptionList = *esp_32
    *(esp_32 + 8) = sub_47352e
    sub_403df8(ebp - 0x1c)
    return ebp - 0x1c
}
