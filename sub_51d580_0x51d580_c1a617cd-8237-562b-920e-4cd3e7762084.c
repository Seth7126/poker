// ============================================================
// 函数名称: sub_51d580
// 虚拟地址: 0x51d580
// WARP GUID: c1a617cd-8237-562b-920e-4cd3e7762084
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4d8208, sub_47b488, sub_4040c4, sub_483950, sub_47b650, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_4d885c
// ============================================================

int32_t __convention("regparm")sub_51d580(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    int32_t var_c = 0
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t edi
    int32_t var_18 = edi
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_28 = 1
    sub_47b488(*data_5301ec, *data_530434, *data_530304, 1)
    int32_t var_28_1 = 1
    sub_47b488(*data_53062c, *data_530434, *data_530304, 1)
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    sub_483950(*data_530304, *data_530434)
    int32_t i_1 = *(arg1 + 0x7f0)
    
    if (i_1 s> 0)
        int32_t ebx_1 = 1
        int32_t i
        
        do
            bool o_1 = unimplemented  {imul eax, ebx, 0x5}
            
            if (o_1)
                sub_403010()
                noreturn
            
            if (*(arg1 + ebx_1 * 0x14 + 0x18) != 2)
                bool o_3 = unimplemented  {imul eax, ebx, 0x5}
                
                if (o_3)
                    sub_403010()
                    noreturn
                
                if (*(arg1 + ebx_1 * 0x14 + 0x18) != 1)
                    bool o_5 = unimplemented  {imul eax, ebx, 0x5}
                    
                    if (o_5)
                        sub_403010()
                        noreturn
                    
                    if (*(arg1 + ebx_1 * 0x14 + 0x18) == 0)
                        *(esp_1 - 4) = 0
                        esp_1 -= 4
                        bool o_6 = unimplemented  {imul eax, ebx, 0x5}
                        
                        if (o_6)
                            sub_403010()
                            noreturn
                        
                        sub_4040c4(&var_c, "      ", *(arg1 + ebx_1 * 0x14 + 0x10))
                        sub_47b650(*data_530304, *data_5301ec, var_c)
                else
                    *(esp_1 - 4) = 0
                    esp_1 -= 4
                    bool o_4 = unimplemented  {imul eax, ebx, 0x5}
                    
                    if (o_4)
                        sub_403010()
                        noreturn
                    
                    sub_4040c4(&var_8, "   ", *(arg1 + ebx_1 * 0x14 + 0x10))
                    sub_47b650(*data_530304, *data_5301ec, var_8)
            else
                *(esp_1 - 4) = 0
                esp_1 -= 4
                bool o_2 = unimplemented  {imul eax, ebx, 0x5}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                sub_47b650(*data_530304, *data_5301ec, *(arg1 + ebx_1 * 0x14 + 0x10))
            
            ebx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t ebx_2 = 0
    int32_t eax_20
    
    do
        int32_t temp0_1 = ebx_2
        ebx_2 += 1
        
        if (add_overflow(temp0_1, 1))
            sub_403010()
            noreturn
        
        eax_20 = ebx_2 * 5
        bool o_8 = unimplemented  {imul eax, ebx, 0x5}
        
        if (o_8)
            sub_403010()
            noreturn
    while (*(arg1 + (eax_20 << 2) + 0x18) != 0)
    
    *(esp_1 - 4) = *(arg1 + (eax_20 << 2) + 0x14)
    *(esp_1 - 8) = 0
    sub_4d8208(*data_530304, *(arg1 + (eax_20 << 2) + 0x1c), *(arg1 + (eax_20 << 2) + 0x10), arg1, i_1)
    esp_1[9]
    fsbase->NtTib.ExceptionList = esp_1[7]
    esp_1[9] = sub_51d725
    return sub_403e1c(&var_c, 2)
}
