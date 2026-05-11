// ============================================================
// 函数名称: sub_472ccc
// 虚拟地址: 0x472ccc
// WARP GUID: fede937d-366b-5dba-b91d-380b064209fb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ShowWindow, SetForegroundWindow, ShowCursor
// [内部子函数调用]: sub_4807f4, sub_47a180, sub_404138, sub_44cde0, sub_46db80, sub_42b1dc, sub_42af98, sub_403e1c, sub_403010, sub_403008, sub_42affc, sub_4318d0, sub_47a140, sub_47ab08, sub_473938, sub_44613c, sub_52d9cc, sub_42afb8, sub_408e1c, sub_42b220, sub_52d80c, sub_453088, sub_472c3c, sub_40b4b0, sub_409ae0, sub_403df8, sub_42afdc, sub_44399c, sub_47b304, sub_52d8ac, sub_46e24c
// [被调用的父级函数]: sub_471144, sub_473878, sub_478234
// ============================================================

void* __convention("regparm")sub_472ccc(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_50 = ebx
    int32_t esi
    int32_t var_54 = esi
    int32_t edi
    int32_t var_58 = edi
    int32_t var_48 = 0
    int32_t var_4c = 0
    int32_t var_44 = 0
    int32_t var_40 = 0
    int32_t var_2c = 0
    char ecx
    char var_9 = ecx
    int32_t esi_1 = arg2
    int32_t* var_5c = &var_4
    int32_t (* var_60)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (esi_1 == 0xffffffff)
        esi_1 = arg1[0x36e]
    
    arg2.b = 1
    sub_46e24c(arg1, esi_1, edi)
    arg1[0x37c] = arg1[0x37d]
    
    if (arg1[0x28b].b != 3)
        arg1[0x28b].b = 1
    
    char ebx_1 = 0
    char var_11 = 0
    int32_t* var_18 = &var_4
    int32_t (* var_1c)() = j_sub_403668
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    BOOL eax_7 = arg1[0x287]
    
    if (eax_7 s< 0)
        sub_403008()
        noreturn
    
    sub_453088(eax_7)
    bool o = unimplemented  {imul eax, esi, 0x3}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t edi_1 = *(*(arg1[0x288] + 0x14) + esi_1 * 0xc)
    bool o_1 = unimplemented  {imul eax, esi, 0x3}
    
    if (o_1)
        sub_403010()
        noreturn
    
    int32_t esi_2 = *(*(arg1[0x288] + 0x14) + esi_1 * 0xc + 4)
    bool o_2 = unimplemented  {imul eax, eax, 0x3}
    
    if (o_2)
        sub_403010()
        noreturn
    
    int32_t var_18_1 = *(*(arg1[0x288] + 0x14) + arg1[0x36e] * 0xc + 8)
    int32_t var_1c_1 = sub_4318d0(arg1)
    int32_t eax_17 = arg1[0x288]
    
    if (*(eax_17 + 4) != 0)
        sub_52d8ac(eax_17)
    
    sub_42af98(arg1)
    sub_42afb8(arg1)
    sub_42afdc(arg1, edi_1)
    sub_42affc(arg1, esi_2)
    sub_44399c(arg1, 1)
    int32_t var_24 = sub_42b220(arg1)
    enum SHOW_WINDOW_CMD var_28 = sub_42b1dc(arg1)
    HWND eax_28 = sub_4318d0(arg1)
    
    if (eax_28 s< 0)
        sub_403008()
        noreturn
    
    int32_t* esp_1 = &var_24
    void* ebp_1
    int32_t esi_3
    ebp_1, esi_3 = sub_473938(arg1, eax_28)
    BOOL eax_31 = *(*(ebp_1 - 4) + 0xa1c)
    
    if (eax_31 s< 0)
        sub_403008()
        noreturn
    
    sub_453088(eax_31)
    sub_44399c(*(ebp_1 - 4), 0)
    sub_42afdc(*(ebp_1 - 4), edi_1)
    sub_42affc(*(ebp_1 - 4), esi_3)
    sub_42af98(*(ebp_1 - 4))
    sub_42afb8(*(ebp_1 - 4))
    
    if (*(*(ebp_1 - 4) + 0xce2) == 0)
        var_28 = SW_SHOWNORMAL
        *(*(ebp_1 - 4) + 0xa20)
        sub_52d9cc(esi_3, edi_1, ebp_1 - 0x24, *(ebp_1 - 0x14))
        sub_52d80c(*(ebp_1 - 0x18), ebp_1 - 0x24, *(*(ebp_1 - 4) + 0xa20), var_28.b)
        esp_1 = &var_24
    
    if (*(*(ebp_1 - 4) + 0xce2) == 0)
        if (*(*(*(ebp_1 - 4) + 0xa20) + 4) == 0)
            ebx_1 = 1
            var_28 = ebp_1 - 0x28
            *(ebp_1 - 0x38) = edi_1
            *(ebp_1 - 0x34) = 0
            *(ebp_1 - 0x30) = esi_3
            *(ebp_1 - 0x2c) = 0
            sub_409ae0(1, ebp_1 - 0x38, sub_4731b7+5, var_28)
            int32_t edx_23
            edx_23.b = 1
            *(ebp_1 - 0xc) = sub_40b4b0(0x407d24, edx_23, *(ebp_1 - 0x28))
        else
            *(*(ebp_1 - 4) + 0x97d) = 1
            var_28 = SW_HIDE
            ShowWindow(*(ebp_1 - 0x18), var_28)
            var_28 = SW_SHOWMAXIMIZED
            ShowWindow(*(ebp_1 - 0x18), var_28)
            var_28 = *(ebp_1 - 0x18)
            SetForegroundWindow(var_28)
        
        var_28 = sub_42b220(*(ebp_1 - 4))
        int32_t var_2c_4 = sub_42b1dc(*(ebp_1 - 4))
        HWND eax_59 = sub_4318d0(*(ebp_1 - 4))
        
        if (eax_59 s< 0)
            sub_403008()
            noreturn
        
        esp_1 = &var_28
        ebp_1, esi_3 = sub_473938(*(ebp_1 - 4), eax_59)
    else
        *(*(ebp_1 - 4) + 0x97d) = 0
    
    esp_1[2]
    void* esp_4 = &esp_1[3]
    fsbase->NtTib.ExceptionList = *esp_1
    
    if ((*(ebp_1 - 5) & ebx_1) != 0)
        void* ebx_2 = *(ebp_1 - 4) + 0xce8
        *(ebx_2 + 0xc8) = 0
        *(ebx_2 + 0xcc) = 4
        void* eax_61
        eax_61.b = *(ebx_2 + 0xc8)
        *(esp_4 - 4) = eax_61
        sub_47a140(*(ebx_2 + 0x44c), *(ebx_2 + 0x3ec), *(ebp_1 - 4))
        int32_t eax_63
        eax_63.b = *(ebx_2 + 0xc8)
        eax_63.b ^= 1
        *(esp_4 - 4) = eax_63
        sub_47a140(*(ebx_2 + 0x458), *(ebx_2 + 0x3ec), *(ebp_1 - 4))
        int32_t eax_65
        eax_65.b = *(ebx_2 + 0xc8)
        *(esp_4 - 4) = eax_65
        sub_47a180(*(ebx_2 + 0x448), *(ebx_2 + 0x3ec), *(ebp_1 - 4))
        int32_t eax_67
        eax_67.b = *(ebx_2 + 0xc8)
        eax_67.b ^= 1
        *(esp_4 - 4) = eax_67
        sub_47a180(*(ebx_2 + 0x45c), *(ebx_2 + 0x3ec), *(ebp_1 - 4))
        *(esp_4 - 4) = *(ebx_2 + 0xcc)
        sub_47b304(*(ebx_2 + 0x45c), *(ebx_2 + 0x3ec), *(ebp_1 - 4))
        sub_42afdc(*(ebp_1 - 4), 0x280)
        sub_42affc(*(ebp_1 - 4), 0x1e0)
        sub_408e1c(*(*(ebp_1 - 4) + 0x38), ebp_1 - 0x3c)
        *(esp_4 - 4) = *(ebp_1 - 0x3c)
        int80_t x87_r0
        sub_47ab08(*(ebp_1 - 4), *(*(ebp_1 - 4) + 0x10d0), *(*(ebp_1 - 4) + 0x1124), x87_r0)
        sub_408e1c(*(*(ebp_1 - 4) + 0x3c), ebp_1 - 0x40)
        *(esp_4 - 4) = *(ebp_1 - 0x40)
        sub_47ab08(*(ebp_1 - 4), *(*(ebp_1 - 4) + 0x10d0), *(*(ebp_1 - 4) + 0x1120), x87_r0)
        ebp_1 = sub_46db80(*(ebp_1 - 4))
        *(esp_4 - 4) = 0x4731f4
        *(esp_4 - 8) = *(*(ebp_1 - 0xc) + 4)
        *(esp_4 - 0xc) = " Fehlernr.:"
        sub_408e1c(*(*(ebp_1 - 0xc) + 8), ebp_1 - 0x48)
        *(esp_4 - 0x10) = *(ebp_1 - 0x48)
        *(esp_4 - 0x14) = &data_473264
        *(esp_4 - 0x18) = 0x473270
        sub_404138(ebp_1 - 0x44, 6)
        *(ebp_1 - 0x44)
        int32_t ecx_14
        int32_t edx_36
        ecx_14, edx_36 = sub_44cde0()
        *(ebp_1 - 0xd) = 1
        *(*(ebp_1 - 4) + 0xa2c) = 3
        sub_44613c(*(ebp_1 - 4), edx_36, ecx_14)
    
    if (*(*(ebp_1 - 4) + 0xce2) == 0 && *(ebp_1 - 0xd) == 0 && *(ebp_1 - 5) != 0)
        sub_4807f4(*(ebp_1 - 4), *(*(ebp_1 - 4) + 0xe48), esi_3, edi_1)
        *(esp_4 - 4) = 0xffffffff
        ShowCursor()
    
    void* eax_96
    eax_96.b = *(*(ebp_1 - 4) + 0xce2)
    eax_96.b ^= 1
    eax_96.b &= *(ebp_1 - 5)
    
    if (eax_96.b != 0)
        if (*(*(ebp_1 - 4) + 0xa2c) != 3)
            *(*(ebp_1 - 4) + 0xa2c) = 2
        
        sub_472c3c(*(ebp_1 - 4))
    
    *(esp_4 + 8)
    fsbase->NtTib.ExceptionList = *esp_4
    *(esp_4 + 8) = sub_4731aa
    sub_403e1c(ebp_1 - 0x48, 4)
    sub_403df8(ebp_1 - 0x28)
    return ebp_1 - 0x28
}
