// ============================================================
// 函数名称: sub_47b0c8
// 虚拟地址: 0x47b0c8
// WARP GUID: e2af5536-1d33-5d53-a1f9-c8f2d2c760af
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_404054, sub_40422c, sub_404078, sub_4042c0, sub_469f7c, sub_402bdc, sub_403df8, sub_404280, sub_403010
// [被调用的父级函数]: sub_4d8208, sub_5223e8, sub_520efc
// ============================================================

void* __convention("regparm")sub_47b0c8(void* arg1, int32_t arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_210 = ebx
    int32_t esi
    int32_t var_214 = esi
    int32_t edi
    int32_t var_218 = edi
    int32_t var_20c = 0
    sub_40422c(arg4)
    int32_t* var_21c = &var_4
    int32_t (* var_220)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (sub_404078(arg4) s<= 0x19)
        char var_108[0x100]
        sub_404054(&var_108, arg4, 0xff)
        bool o_3 = unimplemented  {imul eax, edi, 0x1038}
        
        if (o_3)
            sub_403010()
            noreturn
        
        if (arg3 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_4 = unimplemented  {imul ecx, ecx, 0x23}
        
        if (o_4)
            sub_403010()
            noreturn
        
        int32_t ecx_6
        ecx_6.b = 0x19
        sub_402bdc(*(arg1 + 0xab0) + arg2 * 0x81c0 + arg3 * 0x118 - 0xbc, &var_108, ecx_6.b)
    else
        bool o = unimplemented  {imul eax, edi, 0x1038}
        
        if (o)
            sub_403010()
            noreturn
        
        if (arg3 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_1 = unimplemented  {imul edx, edx, 0x23}
        
        if (o_1)
            sub_403010()
            noreturn
        
        int32_t* edi_2 = *(arg1 + 0xab0) + arg2 * 0x81c0 + arg3 * 0x118 - 0xbc
        *edi_2 = 0x63734005
        edi_2[1].w = data_47b254.w
        esp_1 = &ExceptionList
        int32_t ebx_1 = 1
        
        while (sub_404078(ebp_1[2]) s> 0)
            *(esp_1 - 4) = ebp_1[-1]
            *(esp_1 - 8) = ebx_1
            *(esp_1 - 0xc) = &ebp_1[-0x41]
            *(esp_1 - 0x10) = &ebp_1[-0x82]
            sub_404280(0xff, 1, ebp_1[2])
            esp_1 -= 0xc
            sub_404054(&ebp_1[-0x81], ebp_1[-0x82], 0xff)
            ebp_1 = sub_469f7c(arg1, &ebp_1[-0x81], arg2)
            int32_t temp2_1 = ebx_1
            ebx_1 += 1
            
            if (add_overflow(temp2_1, 1))
                sub_403010()
                noreturn
            
            sub_4042c0(&ebp_1[2], 1, 0xff)
    
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = sub_47b245
    sub_403df8(&ebp_1[-0x82])
    sub_403df8(&ebp_1[2])
    return &ebp_1[2]
}
