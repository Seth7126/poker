// ============================================================
// 函数名称: sub_51d270
// 虚拟地址: 0x51d270
// WARP GUID: 7ad92d12-b8d1-574b-bcdb-313cc4ae032f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_51d170, sub_4d8208, sub_40422c, sub_47b488, sub_404138, sub_483950, sub_403e4c, sub_408e1c, sub_404754, sub_404688, sub_40496c, sub_478234, sub_46910c, sub_47b650, sub_403df8, sub_403e1c, sub_47b2ac, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

void* __convention("regparm")sub_51d270(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_38 = ebx
    int32_t esi
    int32_t var_3c = esi
    char** edi
    char** var_40 = edi
    int32_t var_34 = 0
    int32_t var_30 = 0
    sub_40422c(arg2)
    void var_2c
    sub_404688(&var_2c, sub_48ec28+0x60)
    int32_t* var_44 = &var_4
    int32_t (* var_48)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(arg1 + 0x17c0) = 0
    int32_t eax_4 = *(arg1 + 0x7f0)
    
    if (eax_4 s> 0)
        int32_t var_14_1 = eax_4
        int32_t ebx_1 = 1
        int32_t i
        
        do
            bool o_1 = unimplemented  {imul eax, ebx, 0x5}
            
            if (o_1)
                sub_403010()
                noreturn
            
            if (*(ebp_1[-1] + ebx_1 * 0x14 + 0x18) == 0)
                bool o_2 = unimplemented  {imul eax, ebx, 0x5}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                edi = ebp_1[-1] + ebx_1 * 0x14 + 0xc
                int32_t eax_8
                void* ebp_2
                eax_8, ebp_2 = sub_51d170(ebp_1[-2], edi[1])
                int32_t eax_10
                eax_10, ebp_1 = sub_51d170(*(ebp_2 - 8), edi[2])
                int32_t esi_2 = eax_8 + eax_10
                
                if (add_overflow(eax_8, eax_10))
                    sub_403010()
                    noreturn
                
                if (esi_2 s> 0)
                    void* eax_11 = ebp_1[-1]
                    int32_t temp6_1 = *(eax_11 + 0x17c0)
                    *(eax_11 + 0x17c0) += 1
                    
                    if (add_overflow(temp6_1, 1))
                        sub_403010()
                        noreturn
                    
                    void* eax_12 = ebp_1[-1]
                    *(eax_12 + 0x17c0)
                    bool o_5 = unimplemented  {imul eax, dword [eax+0x17c0], 0x5}
                    
                    if (o_5)
                        sub_403010()
                        noreturn
                    
                    edi = ebp_1[-1] + *(eax_12 + 0x17c0) * 0x14 + 0xfdc
                    sub_403e4c(&edi[1], ebp_1[-2])
                    edi[4] = esi_2
                    bool o_6 = unimplemented  {imul eax, ebx, 0x5}
                    
                    if (o_6)
                        sub_403010()
                        noreturn
                    
                    int32_t var_50_1 = *(ebp_1[-1] + ebx_1 * 0x14 + 0x10)
                    void* const var_54_1 = &data_51d558
                    sub_408e1c(esi_2, &ebp_1[-0xb])
                    int32_t var_58_1 = ebp_1[-0xb]
                    void* const var_5c_1 = &data_51d564
                    sub_404138(edi, 4)
                    edi[3] = ebx_1
            
            ebx_1 += 1
            i = ebp_1[-4]
            ebp_1[-4] -= 1
        while (i != 1)
    
    void* esi_3 = ebp_1[-1] + 0xfdc
    int32_t eax_19 = *(esi_3 + 0x7e4)
    
    if (add_overflow(eax_19, 0xffffffff))
        sub_403010()
        noreturn
    
    if (eax_19 - 1 s> 0)
        ebp_1[-4] = eax_19 - 1
        int32_t i_1
        
        do
            int32_t eax_21 = *(esi_3 + 0x7e4)
            
            if (add_overflow(eax_21, 0xffffffff))
                sub_403010()
                noreturn
            
            if (eax_21 - 1 s> 0)
                ebp_1[-5] = eax_21 - 1
                int32_t ebx_2 = 1
                int32_t j
                
                do
                    edi = ebx_2 * 5
                    bool o_9 = unimplemented  {imul edi, ebx, 0x5}
                    
                    if (o_9)
                        sub_403010()
                        noreturn
                    
                    if (*(esi_3 + (edi << 2) + 0x10) s< *(esi_3 + (edi << 2) + 0x24))
                        sub_40496c(&ebp_1[-0xa], esi_3 + (edi << 2), sub_48ec28+0x60)
                        sub_40496c(esi_3 + (edi << 2), esi_3 + (edi << 2) + 0x14, sub_48ec28+0x60)
                        sub_40496c(esi_3 + (edi << 2) + 0x14, &ebp_1[-0xa], sub_48ec28+0x60)
                    
                    ebx_2 += 1
                    j = ebp_1[-5]
                    ebp_1[-5] -= 1
                while (j != 1)
            
            i_1 = ebp_1[-4]
            ebp_1[-4] -= 1
        while (i_1 != 1)
    
    int32_t var_50_2 = 1
    sub_47b488(*data_5305ac, *data_530434, *data_530304, 1)
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    sub_483950(*data_530304, *data_530434)
    int32_t eax_32 = *(ebp_1[-1] + 0x17c0)
    
    if (eax_32 s> 0)
        ebp_1[-4] = eax_32
        int32_t ebx_3 = 1
        int32_t i_2
        
        do
            *(esp_1 - 4) = 0
            esp_1 -= 4
            bool o_10 = unimplemented  {imul eax, ebx, 0x5}
            
            if (o_10)
                sub_403010()
                noreturn
            
            sub_47b650(*data_530304, *data_5305ac, *(ebp_1[-1] + ebx_3 * 0x14 + 0xfdc))
            ebx_3 += 1
            i_2 = ebp_1[-4]
            ebp_1[-4] -= 1
        while (i_2 != 1)
    
    *(esp_1 - 4) = 1
    sub_47b2ac(*data_5305ac, *data_530434, *data_530304)
    void* esp_3 = esp_1
    sub_478234(*data_530304, *data_530434, *data_5305ac)
    
    if (*(ebp_1[-1] + 0x17c0) == 0)
        *(esp_3 - 4) = 0
        *(esp_3 - 8) = 0
        int32_t esi_4
        ebp_1, esi_4 = sub_46910c(*data_530304, "f_keinethemen", &ebp_1[-0xc])
        sub_4d8208(*data_530304, ebp_1[-0xc], 0, esi_4, edi)
    
    *(esp_3 + 8)
    fsbase->NtTib.ExceptionList = *esp_3
    *(esp_3 + 8) = sub_51d546
    sub_403e1c(&ebp_1[-0xc], 2)
    sub_404754(&ebp_1[-0xa], sub_48ec28+0x60)
    sub_403df8(&ebp_1[-2])
    return &ebp_1[-2]
}
