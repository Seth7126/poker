// ============================================================
// 函数名称: sub_46e24c
// 虚拟地址: 0x46e24c
// WARP GUID: 8d40a311-8baa-500f-9e07-9012dc390590
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47a010, sub_47a180, sub_404078, sub_47a2ac, sub_480418, sub_47a100, sub_47a7ec, sub_47a9a0, sub_40401c, sub_408e80, sub_46fed4, sub_403df8, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_472ccc, sub_4e6659, sub_47c160, sub_471144, sub_46de48, sub_473684, sub_478234, sub_4e649b
// ============================================================

void* __convention("regparm")sub_46e24c(void* arg1, int32_t arg2 @ esi, int32_t arg3 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t i_1 = 0xa
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    *(esp_2 - 4) = i_1
    int32_t entry_ebx
    *(esp_2 - 8) = entry_ebx
    *(esp_2 - 0xc) = arg2
    *(esp_2 - 0x10) = arg3
    char edx
    char var_9 = edx
    *(esp_2 - 0x14) = &var_4
    *(esp_2 - 0x18) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x1c) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_2 - 0x1c
    *(esp_2 - 0x20) = &var_4
    *(esp_2 - 0x24) = j_sub_40353c
    *(esp_2 - 0x28) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_2 - 0x28
    *(esp_2 - 0x2c) = 1
    void var_1c
    *(esp_2 - 0x30) = &var_1c
    *(arg1 + 0x10d0)
    void* ebp_1 = sub_47a7ec(*(arg1 + 0x11bc))
    *(*(ebp_1 - 4) + 0xe20) = sub_408e80(*(ebp_1 - 0x18))
    *(esp_2 - 0x2c) = 1
    *(esp_2 - 0x30) = ebp_1 - 0x1c
    *(arg1 + 0x10d0)
    *(ebp_1 - 4)
    void* ebp_2 = sub_47a7ec(*(arg1 + 0x11c0))
    *(*(ebp_2 - 4) + 0xe24) = sub_408e80(*(ebp_2 - 0x1c))
    *(esp_2 - 0x2c) = 1
    *(esp_2 - 0x30) = ebp_2 - 0x20
    *(arg1 + 0x10d0)
    *(ebp_2 - 4)
    void* ebp_3 = sub_47a7ec(*(arg1 + 0x11c4))
    *(*(ebp_3 - 4) + 0xe28) = sub_408e80(*(ebp_3 - 0x20))
    *(esp_2 - 0x2c) = arg1 + 0xe44
    void* esi_1 = sub_47a2ac(*(ebp_3 - 4), *(arg1 + 0x10d0), *(arg1 + 0x10f0))
    *(esi_1 + 0x3e8)
    bool o = unimplemented  {imul edx, dword [esi+0x3e8], 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    *(esi_1 + 0x40c)
    int32_t ecx_6 = *(esi_1 + 0x40c) * 0x23
    bool o_1 = unimplemented  {imul ecx, dword [esi+0x40c], 0x23}
    
    if (o_1)
        sub_403010()
        noreturn
    
    sub_40401c(ecx_6, *(*(ebp_3 - 4) + 0xab0) + *(esi_1 + 0x3e8) * 0x81c0 + (ecx_6 << 3) - 0xf0)
    *(ebp_3 - 4)
    void* ebp_4 = sub_46fed4(ebp_3 - 0x30, *(ebp_3 - 0x34))
    *(esp_2 - 0x30) = esi_1
    __builtin_memcpy(esi_1 + 0x360, ebp_4 - 0x30, 0x10)
    void* esi_3 = *(esp_2 - 0x30)
    *(esi_3 + 0x3e8)
    bool o_2 = unimplemented  {imul edx, dword [esi+0x3e8], 0x1038}
    
    if (o_2)
        sub_403010()
        noreturn
    
    *(esi_3 + 0x410)
    int32_t ecx_10 = *(esi_3 + 0x410) * 0x23
    bool o_3 = unimplemented  {imul ecx, dword [esi+0x410], 0x23}
    
    if (o_3)
        sub_403010()
        noreturn
    
    sub_40401c(ecx_10, *(*(ebp_4 - 4) + 0xab0) + *(esi_3 + 0x3e8) * 0x81c0 + (ecx_10 << 3) - 0xf0)
    *(ebp_4 - 4)
    void* ebp_5 = sub_46fed4(ebp_4 - 0x30, *(ebp_4 - 0x38))
    *(esp_2 - 0x30) = esi_3
    __builtin_memcpy(esi_3 + 0x370, ebp_5 - 0x30, 0x10)
    void* esp_20
    void* esi_5 = *esp_20
    *(esi_5 + 0x3e8)
    bool o_4 = unimplemented  {imul edx, dword [esi+0x3e8], 0x1038}
    
    if (o_4)
        sub_403010()
        noreturn
    
    *(esi_5 + 0x414)
    int32_t ecx_14 = *(esi_5 + 0x414) * 0x23
    bool o_5 = unimplemented  {imul ecx, dword [esi+0x414], 0x23}
    
    if (o_5)
        sub_403010()
        noreturn
    
    sub_40401c(ecx_14, *(*(ebp_5 - 4) + 0xab0) + *(esi_5 + 0x3e8) * 0x81c0 + (ecx_14 << 3) - 0xf0)
    *(ebp_5 - 4)
    void* ebp_6 = sub_46fed4(ebp_5 - 0x30, *(ebp_5 - 0x3c))
    *esp_20 = esi_5
    __builtin_memcpy(esi_5 + 0x380, ebp_6 - 0x30, 0x10)
    void* esi_7 = *esp_20
    *(esi_7 + 0x3e8)
    bool o_6 = unimplemented  {imul edx, dword [esi+0x3e8], 0x1038}
    
    if (o_6)
        sub_403010()
        noreturn
    
    *(esi_7 + 0x418)
    int32_t ecx_18 = *(esi_7 + 0x418) * 0x23
    bool o_7 = unimplemented  {imul ecx, dword [esi+0x418], 0x23}
    
    if (o_7)
        sub_403010()
        noreturn
    
    sub_40401c(ecx_18, *(*(ebp_6 - 4) + 0xab0) + *(esi_7 + 0x3e8) * 0x81c0 + (ecx_18 << 3) - 0xf0)
    *(ebp_6 - 4)
    void* ebp_7 = sub_46fed4(ebp_6 - 0x30, *(ebp_6 - 0x40))
    *esp_20 = esi_7
    __builtin_memcpy(esi_7 + 0x390, ebp_7 - 0x30, 0x10)
    void* esi_9 = *esp_20
    *(esi_9 + 0x3e8)
    bool o_8 = unimplemented  {imul edx, dword [esi+0x3e8], 0x1038}
    
    if (o_8)
        sub_403010()
        noreturn
    
    *(esi_9 + 0x41c)
    int32_t ecx_22 = *(esi_9 + 0x41c) * 0x23
    bool o_9 = unimplemented  {imul ecx, dword [esi+0x41c], 0x23}
    
    if (o_9)
        sub_403010()
        noreturn
    
    sub_40401c(ecx_22, *(*(ebp_7 - 4) + 0xab0) + *(esi_9 + 0x3e8) * 0x81c0 + (ecx_22 << 3) - 0xf0)
    *(ebp_7 - 4)
    void* ebp_8 = sub_46fed4(ebp_7 - 0x30, *(ebp_7 - 0x44))
    *esp_20 = esi_9
    __builtin_memcpy(esi_9 + 0x3a0, ebp_8 - 0x30, 0x10)
    void* esi_11 = *esp_20
    *(esi_11 + 0x3e8)
    bool o_10 = unimplemented  {imul edx, dword [esi+0x3e8], 0x1038}
    
    if (o_10)
        sub_403010()
        noreturn
    
    *(esi_11 + 0x4bc)
    int32_t ecx_26 = *(esi_11 + 0x4bc) * 0x23
    bool o_11 = unimplemented  {imul ecx, dword [esi+0x4bc], 0x23}
    
    if (o_11)
        sub_403010()
        noreturn
    
    sub_40401c(ecx_26, *(*(ebp_8 - 4) + 0xab0) + *(esi_11 + 0x3e8) * 0x81c0 + (ecx_26 << 3) - 0xf0)
    *(ebp_8 - 4)
    void* ebp_9 = sub_46fed4(ebp_8 - 0x30, *(ebp_8 - 0x48))
    *esp_20 = esi_11
    __builtin_memcpy(esi_11 + 0x3b0, ebp_9 - 0x30, 0x10)
    void* esi_13 = *esp_20
    *(esi_13 + 0x3e8)
    bool o_12 = unimplemented  {imul edx, dword [esi+0x3e8], 0x1038}
    
    if (o_12)
        sub_403010()
        noreturn
    
    *(esi_13 + 0x4c0)
    int32_t ecx_30 = *(esi_13 + 0x4c0) * 0x23
    bool o_13 = unimplemented  {imul ecx, dword [esi+0x4c0], 0x23}
    
    if (o_13)
        sub_403010()
        noreturn
    
    sub_40401c(ecx_30, *(*(ebp_9 - 4) + 0xab0) + *(esi_13 + 0x3e8) * 0x81c0 + (ecx_30 << 3) - 0xf0)
    *(ebp_9 - 4)
    void* ebp_10 = sub_46fed4(ebp_9 - 0x30, *(ebp_9 - 0x4c))
    *esp_20 = esi_13
    __builtin_memcpy(esi_13 + 0x3c0, ebp_10 - 0x30, 0x10)
    void* esi_15 = *esp_20
    *(esi_15 + 0x3e8)
    bool o_14 = unimplemented  {imul edx, dword [esi+0x3e8], 0x1038}
    
    if (o_14)
        sub_403010()
        noreturn
    
    *(esi_15 + 0x4c4)
    int32_t ecx_34 = *(esi_15 + 0x4c4) * 0x23
    bool o_15 = unimplemented  {imul ecx, dword [esi+0x4c4], 0x23}
    
    if (o_15)
        sub_403010()
        noreturn
    
    sub_40401c(ecx_34, *(*(ebp_10 - 4) + 0xab0) + *(esi_15 + 0x3e8) * 0x81c0 + (ecx_34 << 3) - 0xf0)
    *(ebp_10 - 4)
    void* ebp_11 = sub_46fed4(ebp_10 - 0x30, *(ebp_10 - 0x50))
    *esp_20 = esi_15
    __builtin_memcpy(esi_15 + 0x3d0, ebp_11 - 0x30, 0x10)
    void* esi_17 = *esp_20
    *esp_20 = esi_17 + 0x3e0
    sub_47a9a0(*(esi_17 + 0x4d0), *(esi_17 + 0x3e8), *(ebp_11 - 4))
    void* esp_39
    *esp_39 = esi_17 + 0x3e4
    sub_47a9a0(*(esi_17 + 0x4cc), *(esi_17 + 0x3e8), *(ebp_11 - 4))
    *(esi_17 + 0x3e8)
    bool o_16 = unimplemented  {imul edx, dword [esi+0x3e8], 0x1038}
    
    if (o_16)
        sub_403010()
        noreturn
    
    *(esi_17 + 0x424)
    int32_t ecx_40 = *(esi_17 + 0x424) * 0x23
    bool o_17 = unimplemented  {imul ecx, dword [esi+0x424], 0x23}
    
    if (o_17)
        sub_403010()
        noreturn
    
    sub_40401c(ecx_40, *(*(ebp_11 - 4) + 0xab0) + *(esi_17 + 0x3e8) * 0x81c0 + (ecx_40 << 3) - 0xf0)
    
    if (sub_404078(*(ebp_11 - 0xc)) s>= 3)
        *(ebp_11 - 0x54) = sub_408e80(*(ebp_11 - 0xc))
        *(esi_17 + 0x164) = fconvert.s(float.t(*(ebp_11 - 0x54)) / fconvert.t(100f))
    else
        *(esi_17 + 0x164) = 0x3f800000
    
    *esp_39 = ebp_11 - 0x10
    sub_47a9a0(*(esi_17 + 0x468), *(esi_17 + 0x3ec), *(ebp_11 - 4))
    *(*(ebp_11 - 4) + 0xdf8) = sub_47a010(*(ebp_11 - 4), *(esi_17 + 0x3ec), *(esi_17 + 0x46c))
    *(*(ebp_11 - 4) + 0xdf9) = sub_47a010(*(ebp_11 - 4), *(esi_17 + 0x3ec), *(esi_17 + 0x470))
    
    if (*(*(ebp_11 - 4) + 0xe1c) == 1)
        sub_480418(*(ebp_11 - 4), *(*(ebp_11 - 4) + 0xe3c))
    
    *esp_39 = esi_17 + 0xc8
    sub_47a100(*(esi_17 + 0x44c), *(esi_17 + 0x3ec), *(ebp_11 - 4))
    *esp_39 = esi_17 + 0xcc
    sub_47a9a0(*(esi_17 + 0x45c), *(esi_17 + 0x3ec), *(ebp_11 - 4))
    *esp_39 = esi_17 + 0xd0
    sub_47a9a0(*(esi_17 + 0x448), *(esi_17 + 0x3ec), *(ebp_11 - 4))
    *esp_39 = esi_17 + 0xd4
    sub_47a9a0(*(esi_17 + 0x464), *(esi_17 + 0x3ec), *(ebp_11 - 4))
    
    if (*(esi_17 + 0xd4) == 0)
        *(esi_17 + 0xd4) = 1
    
    *esp_39 = esi_17 + 0xd8
    sub_47a9a0(*(esi_17 + 0x478), *(esi_17 + 0x3ec), *(ebp_11 - 4))
    
    if (*(esi_17 + 0xd8) s<= 5)
        entry_ebx = 0
    else
        *(esi_17 + 0xd8) = 5
        entry_ebx.b = 1
    
    *(esi_17 + 0xdc) = 3
    *esp_39 = esi_17 + 0xe0
    sub_47a9a0(*(esi_17 + 0x480), *(esi_17 + 0x3ec), *(ebp_11 - 4))
    void* esp_55
    *esp_55 = esi_17 + 0xe8
    sub_47a9a0(*(esi_17 + 0x484), *(esi_17 + 0x3ec), *(ebp_11 - 4))
    *esp_55 = esi_17 + 0xf0
    sub_47a9a0(*(esi_17 + 0x488), *(esi_17 + 0x3ec), *(ebp_11 - 4))
    *esp_55 = esi_17 + 0xf8
    sub_47a9a0(*(esi_17 + 0x48c), *(esi_17 + 0x3ec), *(ebp_11 - 4))
    
    if (add_overflow(7, neg.d(*(esi_17 + 0xe0))))
        sub_403010()
        noreturn
    
    *(esi_17 + 0xe0) = 7 - *(esi_17 + 0xe0)
    
    if (add_overflow(7, neg.d(*(esi_17 + 0xe8))))
        sub_403010()
        noreturn
    
    *(esi_17 + 0xe8) = 7 - *(esi_17 + 0xe8)
    
    if (add_overflow(7, neg.d(*(esi_17 + 0xf0))))
        sub_403010()
        noreturn
    
    *(esi_17 + 0xf0) = 7 - *(esi_17 + 0xf0)
    int32_t eax_69 = *(esi_17 + 0xd4)
    *(esi_17 + 0xcc)
    int32_t edx_60 = *(esi_17 + 0xcc) * 2
    bool o_21 = unimplemented  {imul edx, dword [esi+0xcc], 0x2}
    
    if (o_21)
        sub_403010()
        noreturn
    
    int32_t eax_70 = eax_69 + edx_60
    
    if (add_overflow(eax_69, edx_60))
        sub_403010()
        noreturn
    
    *(esi_17 + 0xd0)
    int32_t edx_61 = *(esi_17 + 0xd0) * 0xa
    bool o_23 = unimplemented  {imul edx, dword [esi+0xd0], 0xa}
    
    if (o_23)
        sub_403010()
        noreturn
    
    if (add_overflow(eax_70, edx_61))
        sub_403010()
        noreturn
    
    *(esi_17 + 0x104) = eax_70 + edx_61
    *(esi_17 + 0x10c) = *(esi_17 + 0xd4)
    
    if (*(esi_17 + 0xc8) != 0)
        int32_t temp29_1 = *(esi_17 + 0x10c)
        *(esi_17 + 0x10c) += 0x64
        
        if (add_overflow(temp29_1, 0x64))
            sub_403010()
            noreturn
    
    if (*(esi_17 + 0xc8) != 0)
        *(esi_17 + 0x104)
        bool o_26 = unimplemented  {imul eax, dword [esi+0x104], 0x2}
        
        if (o_26)
            sub_403010()
            noreturn
        
        *(esi_17 + 0x104) *= 2
    
    int32_t eax_74
    
    if (*(esi_17 + 0x100) != *(esi_17 + 0x104) || *(esi_17 + 0xfc) != *(esi_17 + 0xf8))
        eax_74.b = 1
    else
        int32_t eax_75 = *(esi_17 + 0xf4)
        *(esi_17 + 0xe4)
        int32_t edx_62 = *(esi_17 + 0xe4) * 0xa
        bool o_27 = unimplemented  {imul edx, dword [esi+0xe4], 0xa}
        
        if (o_27)
            sub_403010()
            noreturn
        
        int32_t eax_76 = eax_75 + edx_62
        
        if (add_overflow(eax_75, edx_62))
            sub_403010()
            noreturn
        
        *(esi_17 + 0xec)
        int32_t edx_63 = *(esi_17 + 0xec) * 0x64
        bool o_29 = unimplemented  {imul edx, dword [esi+0xec], 0x64}
        
        if (o_29)
            sub_403010()
            noreturn
        
        if (add_overflow(eax_76, edx_63))
            sub_403010()
            noreturn
        
        int32_t edx_64 = *(esi_17 + 0xf0)
        *(esi_17 + 0xe0)
        int32_t ecx_53 = *(esi_17 + 0xe0) * 0xa
        bool o_31 = unimplemented  {imul ecx, dword [esi+0xe0], 0xa}
        
        if (o_31)
            sub_403010()
            noreturn
        
        int32_t edx_65 = edx_64 + ecx_53
        
        if (add_overflow(edx_64, ecx_53))
            sub_403010()
            noreturn
        
        *(esi_17 + 0xe8)
        int32_t ecx_54 = *(esi_17 + 0xe8) * 0x64
        bool o_33 = unimplemented  {imul ecx, dword [esi+0xe8], 0x64}
        
        if (o_33)
            sub_403010()
            noreturn
        
        if (add_overflow(edx_65, ecx_54))
            sub_403010()
            noreturn
        
        if (eax_76 + edx_63 != edx_65 + ecx_54)
            eax_74.b = 1
        else
            eax_74 = 0
    
    *esp_55 = eax_74
    sub_47a180(*(esi_17 + 0x460), *(esi_17 + 0x3ec), *(ebp_11 - 4))
    void* esp_64 = esp_55 + 4
    
    if (*(ebp_11 - 5) != 0)
        *(esi_17 + 0x100) = *(esi_17 + 0x104)
        *(esi_17 + 0xfc) = *(esi_17 + 0xf8)
        *(esi_17 + 0xe4) = *(esi_17 + 0xe0)
        *(esi_17 + 0xec) = *(esi_17 + 0xe8)
        *(esi_17 + 0xf4) = *(esi_17 + 0xf0)
    
    if (*(esi_17 + 0xc8) == 0)
        *(esi_17 + 0xcc)
        bool o_35 = unimplemented  {imul eax, dword [esi+0xcc], 0x3}
        
        if (o_35)
            sub_403010()
            noreturn
        
        if (*(*(*(ebp_11 - 4) + 0xa24) + *(esi_17 + 0xcc) * 0xc) != *(*(ebp_11 - 4) + 0xe2c))
            *(esp_64 - 4) = 1
            sub_47a180(*(esi_17 + 0x460), *(esi_17 + 0x3ec), *(ebp_11 - 4))
    
    *(esp_64 - 4) = ebp_11 - 0x14
    sub_47a9a0(*(esi_17 + 0x47c), *(esi_17 + 0x3ec), *(ebp_11 - 4))
    *(ebp_11 - 0x14) = 2
    
    if (entry_ebx.b != 0)
        *(ebp_11 - 0x14) = 3
    else if (*(esi_17 + 0x464) s<= 2)
        *(ebp_11 - 0x14) = 1
    
    *(*(ebp_11 - 4) + 0xdfb) = *(ebp_11 - 0x14) s<= 1
    *(*(ebp_11 - 4) + 0xdfa) = *(ebp_11 - 0x14) s<= 2
    *(esp_64 + 8)
    fsbase->NtTib.ExceptionList = *esp_64
    *(esp_64 + 0x14)
    fsbase->NtTib.ExceptionList = *(esp_64 + 0xc)
    *(esp_64 + 0x14) = 0x46ef57
    sub_403e1c(ebp_11 - 0x50, 8)
    sub_403e1c(ebp_11 - 0x20, 3)
    sub_403df8(ebp_11 - 0xc)
    return ebp_11 - 0xc
}
