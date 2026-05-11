// ============================================================
// 函数名称: sub_43b5b8
// 虚拟地址: 0x43b5b8
// WARP GUID: f8bc4b61-6adb-5da5-8d20-c9173cb76c73
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_43bed0, sub_402d00, sub_403e90, sub_403248, sub_4040c4, sub_404188, sub_439258, sub_43b53c, sub_43a0a4, sub_43b56c, sub_403df8
// [被调用的父级函数]: sub_443300, sub_43d934
// ============================================================

void* __convention("regparm")sub_43b5b8(int32_t* arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_2c = ebx
    int32_t esi
    int32_t var_30 = esi
    int32_t edi
    int32_t var_34 = edi
    int32_t var_28 = 0
    int32_t var_14 = 0
    int32_t var_c = arg2
    int32_t* esi_1 = arg1
    int32_t* var_38 = &var_4
    int32_t (* var_3c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char eax_2 = sub_403248(sub_4032ac(esi_1), 0x438b44)
    bool cond:0 = eax_2 != 0
    char ebx_1
    
    if (eax_2 == 0)
        ebx_1 = 0
        cond:0 = false
    else
        ebx_1 = 1
        sub_43b56c(&var_4)
    
    int32_t* eax_4 = sub_43bed0(esi_1)
    void* eax_6 = sub_43b53c(esi_1)
    sub_404188(esi_1[9], sub_43b7af+5)
    int32_t* eax_10
    
    if (not(cond:0))
        *arg4 = 5
        *arg3 = 0xfffffffe
        eax_10 = nullptr
    else if (eax_6 == 0 || (esi_1[0xd] s<= 0xffffffff && ebx_1 != 0))
        char eax_14
        
        if (esi_1[0x10] != 0)
            eax_14 = (*(*esi_1[0x10] + 0x1c))()
        
        if (esi_1[0x10] == 0 || eax_14 != 0)
            *arg3 = 0xfffffff9
            eax_10 = nullptr
        else
            *arg3 = 0x10
            
            if (ebx_1 == 0)
                *arg4 = 0x10
            
            eax_10.b = 1
    else
        *arg3 = *(eax_6 + 0x28)
        
        if (ebx_1 == 0)
            *arg4 = *(eax_6 + 0x24)
        
        eax_10.b = 1
    
    if (eax_10.b != 0 && ebx_1 == 0)
        *arg3 += 0xf
    
    if (ebx_1 == 0)
        *arg4 += 3
    
    void var_24
    sub_402d00(&var_24, 0x10, 0)
    
    if (eax_4 == 0)
        if (sub_403248(eax_4, 0x438e1c) == 0)
            ebx_1 = 0
        else
            ebx_1 = eax_4[0x14].b
    else
        ebx_1 = 0
    
    int32_t* edi_1
    edi_1.w = esi_1[0x15].w
    
    if (edi_1.w == 0)
        sub_403e90(&var_14, esi_1[9])
    else
        ebp_1, esi_1 = sub_439258(edi_1.w, &var_28)
        sub_4040c4(&ebp_1[-4], esi_1[9], ebp_1[-9])
    
    int32_t eax_24
    eax_24.b = ebx_1
    eax_24.w = *((eax_24 << 1) + &data_52e960)
    eax_24.w |= 0x40
    eax_24.w |= 0x20
    eax_24.w |= 0x100
    eax_24.w |= 0x400
    var_4 = 0
    enum DRAW_TEXT_FORMAT var_8_1 = zx.d(eax_24.w)
    void* ebp_2 = sub_43a0a4(esi_1, ebp_1[-2], ebp_1[-4], var_8_1, var_4.b, &ebp_1[-8])
    int32_t* edx_8 = *(ebp_2 - 4)
    *edx_8 += *(ebp_2 - 0x18) - *(ebp_2 - 0x20) + 7
    
    if (*(esi_1 + 0x9a) != 0)
        *(ebp_2 - 8)
        esi_1[0x27]
        esi_1[0x26](*(ebp_2 + 8), *(ebp_2 - 4))
    
    fsbase->NtTib.ExceptionList = var_8_1
    __return_addr = sub_43b7a1
    sub_403df8(ebp_2 - 0x24)
    sub_403df8(ebp_2 - 0x10)
    return ebp_2 - 0x10
}
