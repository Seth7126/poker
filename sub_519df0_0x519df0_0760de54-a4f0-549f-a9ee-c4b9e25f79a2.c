// ============================================================
// 函数名称: sub_519df0
// 虚拟地址: 0x519df0
// WARP GUID: 0760de54-a4f0-549f-a9ee-c4b9e25f79a2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_409040, sub_4030d0, sub_404138, sub_4042c0, sub_490ef8, sub_404280, sub_403e1c, sub_403010, sub_403e90, sub_404078, sub_402d20, sub_404188, sub_490ce8, sub_490eb4, sub_420b80, sub_40422c, sub_469acc, sub_408e1c, sub_403df8, sub_490ca0, sub_490c64
// [被调用的父级函数]: sub_519ce0, sub_51ad40
// ============================================================

void** __convention("regparm")sub_519df0(void* arg1, void* arg2, void* arg3, int32_t arg4 @ esi, int32_t arg5 @ edi, int32_t arg6, char arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* i_2 = arg3
    int32_t* esp_1 = &i_2
    void* i_1 = 4
    void* i
    
    do
        *(esp_1 - 4) = 0
        *(esp_1 - 8) = 0
        esp_1 -= 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    void* i_3 = i_2
    i_2 = i_1
    int32_t entry_ebx
    *(esp_1 - 4) = entry_ebx
    *(esp_1 - 8) = arg4
    *(esp_1 - 0xc) = arg5
    i_2 = arg2
    sub_40422c(i_2)
    void* arg_14
    sub_40422c(arg_14)
    *(esp_1 - 0x10) = &var_4
    *(esp_1 - 0x14) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0x18) = fsbase->NtTib.ExceptionList
    void* esp_8 = esp_1 - 0x18
    fsbase->NtTib.ExceptionList = esp_8
    void* var_10
    sub_403e90(&var_10, i_2)
    char ebx = sub_409040(i_2)
    
    if (ebx == 0 && sub_404078(var_10) s>= 4)
        void* var_20
        *(esp_8 - 4) = &var_20
        int32_t eax_8 = sub_404078(var_10)
        
        if (add_overflow(eax_8, 0xfffffffc))
            sub_403010()
            noreturn
        
        sub_404280(1, eax_8 - 4, var_10)
        sub_404188(var_20, 0x51a35c)
        
        if (eax_8 == 4)
            int32_t eax_12 = sub_404078(var_10)
            
            if (add_overflow(eax_12, 0xfffffffc))
                sub_403010()
                noreturn
            
            sub_4042c0(&var_10, eax_12 - 4, 1)
            ebx = sub_409040(var_10)
    
    if (ebx == 0)
        *(esp_8 - 4) = *(*data_530304 + 0xa64)
        *(esp_8 - 8) = "\data\sound\"
        *(esp_8 - 0xc) = i_2
        *(esp_8 - 0x10) = ".wav"
        sub_404138(&var_10, 4)
        ebx = sub_409040(var_10)
    
    if (ebx == 0)
        *(esp_8 - 4) = *(*data_530304 + 0xa64)
        *(esp_8 - 8) = "\data\sound\"
        *(esp_8 - 0xc) = i_2
        *(esp_8 - 0x10) = ".mp3"
        sub_404138(&var_10, 4)
        ebx = sub_409040(var_10)
    
    int32_t var_18
    *(esp_8 - 4) = &var_18
    int32_t eax_27 = sub_404078(var_10)
    
    if (add_overflow(eax_27, 0xfffffffc))
        sub_403010()
        noreturn
    
    sub_404280(eax_27 - 4, 1, var_10)
    int32_t var_1c
    *(esp_8 - 4) = &var_1c
    int32_t eax_30 = sub_404078(var_10)
    
    if (add_overflow(eax_30, 0xfffffffd))
        sub_403010()
        noreturn
    
    sub_404280(4, eax_30 - 3, var_10)
    *(esp_8 - 4) = var_18
    *(esp_8 - 8) = &data_51a3a0
    *(esp_8 - 0xc) = var_1c
    char* var_14
    sub_404138(&var_14, 3)
    void* esp_25 = esp_8 + 4
    int32_t var_28
    
    if (sub_409040(var_14) != 0)
        int32_t edi = 1
        
        while (sub_409040(var_14) != 0)
            int32_t temp6_1 = edi
            edi += 1
            
            if (add_overflow(temp6_1, 1))
                sub_403010()
                noreturn
            
            *(esp_25 - 4) = var_18
            
            if (add_overflow(edi, 1))
                sub_403010()
                noreturn
            
            int32_t var_24
            sub_408e1c(edi + 1, &var_24)
            *(esp_25 - 8) = var_24
            *(esp_25 - 0xc) = var_1c
            sub_404138(&var_14, 3)
            esp_25 += 4
        
        int32_t eax_41 = sub_402d20(edi)
        
        if (add_overflow(eax_41, 1))
            sub_403010()
            noreturn
        
        if (eax_41 + 1 s> 1)
            *(esp_25 - 4) = var_18
            sub_408e1c(eax_41 + 1, &var_28)
            *(esp_25 - 8) = var_28
            *(esp_25 - 0xc) = var_1c
            sub_404138(&var_10, 3)
            esp_25 += 4
    
    if (ebx != 0 && *(arg1 + 0x979) == 0 && sub_469acc(*data_530304) == 0)
        int32_t temp8_1 = *(arg1 + 0x97c)
        *(arg1 + 0x97c) += 1
        
        if (add_overflow(temp8_1, 1))
            sub_403010()
            noreturn
        
        if (*(arg1 + 0x97c) s>= 0xf)
            *(arg1 + 0x97c) = 1
        
        sub_4030d0(*(arg1 + (*(arg1 + 0x97c) << 2) + 0x97c))
        *(esp_25 - 4) = var_10
        *(esp_25 - 8) = 1
        void* eax_50
        eax_50.b = 0xc
        *(esp_25 - 0xc) = eax_50
        *(arg1 + 8)
        int32_t edx_10
        edx_10.b = 1
        int32_t eax_52
        void* esi_1
        eax_52, esi_1 = sub_490ef8(0x48ffe4, edx_10)
        *(esi_1 + (*(esi_1 + 0x97c) << 2) + 0x97c) = eax_52
        *(esi_1 + (*(esi_1 + 0x97c) << 2) + 0x9b8) = arg6
        *(esi_1 + (*(esi_1 + 0x97c) << 2) + 0x9f4) = 0
        sub_490ca0(*(esi_1 + (*(esi_1 + 0x97c) << 2) + 0x97c), 0)
        
        if (arg9 s>= 0x5a)
            sub_490ca0(*(esi_1 + (*(esi_1 + 0x97c) << 2) + 0x97c), 0)
        else if (arg9 s>= 0x50)
            sub_490ca0(*(esi_1 + (*(esi_1 + 0x97c) << 2) + 0x97c), 0xffffff6a)
        else if (arg9 s>= 0x46)
            sub_490ca0(*(esi_1 + (*(esi_1 + 0x97c) << 2) + 0x97c), 0xfffffed4)
        else if (arg9 s>= 0x3c)
            sub_490ca0(*(esi_1 + (*(esi_1 + 0x97c) << 2) + 0x97c), 0xfffffe3e)
        else if (arg9 s>= 0x32)
            sub_490ca0(*(esi_1 + (*(esi_1 + 0x97c) << 2) + 0x97c), 0xfffffda8)
        else if (arg9 s>= 0x28)
            sub_490ca0(*(esi_1 + (*(esi_1 + 0x97c) << 2) + 0x97c), 0xfffffd12)
        else if (arg9 s>= 0x1e)
            sub_490ca0(*(esi_1 + (*(esi_1 + 0x97c) << 2) + 0x97c), 0xfffffc7c)
        else if (arg9 s>= 0x14)
            sub_490ca0(*(esi_1 + (*(esi_1 + 0x97c) << 2) + 0x97c), 0xfffffbe6)
        else if (arg9 s>= 0xa)
            sub_490ca0(*(esi_1 + (*(esi_1 + 0x97c) << 2) + 0x97c), 0xfffffb50)
        else if (arg9 s> 0)
            sub_490ca0(*(esi_1 + (*(esi_1 + 0x97c) << 2) + 0x97c), 0xfffffaec)
        
        if (arg6 - 0xd u< 2 || arg6 - 0x13 u< 2)
            void** edi_2 = *(esi_1 + (*(esi_1 + 0x97c) << 2) + 0x97c)
            int32_t eax_84 = sub_490c64(edi_2)
            
            if (add_overflow(eax_84, 0xfffffea2))
                sub_403010()
                noreturn
            
            sub_490ca0(edi_2, sub_420b80(eax_84 - 0x15e, 0xfffffaec))
        
        if (arg6 == 0xc || arg6 == 0x12)
            void** edi_3 = *(esi_1 + (*(esi_1 + 0x97c) << 2) + 0x97c)
            int32_t eax_93 = sub_490c64(edi_3)
            
            if (add_overflow(eax_93, 0xffffff38))
                sub_403010()
                noreturn
            
            sub_490ca0(edi_3, sub_420b80(eax_93 - 0xc8, 0xfffffaec))
        
        bool o_11 = unimplemented  {imul edx, dword [ebp+0x10], 0xc}
        
        if (o_11)
            sub_403010()
            noreturn
        
        sub_490ce8(*(esi_1 + (*(esi_1 + 0x97c) << 2) + 0x97c), arg8 * 0xc)
        
        if (arg9 s> 0)
            sub_490eb4(*(esi_1 + (*(esi_1 + 0x97c) << 2) + 0x97c), 0)
            *(esi_1 + (*(esi_1 + 0x97c) << 2) + 0xa30) = 0
            
            if (i_3 s> 0)
                *(esi_1 + (*(esi_1 + 0x97c) << 2) + 0xa30) = i_3
            
            if (arg7 == 0)
                *(esi_1 + (*(esi_1 + 0x97c) << 2) + 0x9f4) = 0
            else
                *(esi_1 + (*(esi_1 + 0x97c) << 2) + 0x9f4) = 1
    
    *(esp_25 + 8)
    fsbase->NtTib.ExceptionList = *esp_25
    *(esp_25 + 8) = sub_51a347
    sub_403e1c(&var_28, 7)
    sub_403df8(&i_2)
    void** result = &arg_14
    sub_403df8(result)
    return result
}
