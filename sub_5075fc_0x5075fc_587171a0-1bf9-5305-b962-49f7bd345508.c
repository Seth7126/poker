// ============================================================
// 函数名称: sub_5075fc
// 虚拟地址: 0x5075fc
// WARP GUID: 587171a0-1bf9-5305-b962-49f7bd345508
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404138, sub_469acc, sub_404188, sub_4746a0, sub_514290, sub_408e1c, sub_40401c, sub_403010, sub_514cc4, sub_403e1c, sub_4c0924
// [被调用的父级函数]: sub_4c96bc
// ============================================================

int32_tsub_5075fc()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_20
    __builtin_memset(&var_20, 0, 0x1c)
    int32_t ebx
    int32_t var_24 = ebx
    int32_t esi
    int32_t var_28 = esi
    int32_t edi
    int32_t var_2c = edi
    int32_t* var_30 = &var_4
    int32_t (* var_34)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edi_1 = 0
    char* var_c
    
    if (*(*data_5301f4 + 0x4584) s> 0)
        void* eax_3 = *data_530454
        *(eax_3 + 0x350)
        int32_t ebx_1 = *(eax_3 + 0x350) * 0xe9
        bool o_1 = unimplemented  {imul ebx, dword [eax+0x350], 0xe9}
        
        if (o_1)
            sub_403010()
            noreturn
        
        if (*(*data_530454 + (ebx_1 << 2) - 0x50) == 2)
            sub_40401c(0, *data_530454 + (ebx_1 << 2) + 0x198)
            void* const var_3c_1 = "Eigene: "
            void* var_10
            void* var_40_1 = var_10
            void* const var_44_1 = &data_507830
            sub_404138(&var_c, 3)
            esp_1 = &var_30
            int32_t i_1 = *data_5300d0
            
            if (i_1 s> 0)
                int32_t ebx_2 = 1
                int32_t i
                
                do
                    if (ebx_2 != *(*data_530454 + 0x350))
                        bool o_2 = unimplemented  {imul eax, ebx, 0xe9}
                        
                        if (o_2)
                            sub_403010()
                            noreturn
                        
                        char temp2_1 = *(*data_530454 + ebx_2 * 0x3a4 - 0x50)
                        
                        if (temp2_1 == 1)
                            char* var_34_1 = var_c
                            bool o_3 = unimplemented  {imul edx, ebx, 0xe9}
                            
                            if (o_3)
                                sub_403010()
                                noreturn
                            
                            int32_t ecx_2 = *data_530454
                            sub_40401c(ecx_2, ecx_2 + ebx_2 * 0x3a4 - 0x4f)
                            struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1
                            ExceptionList = ExceptionList_1
                            void* const var_3c_2 = &data_50783c
                            bool o_4 = unimplemented  {imul edx, ebx, 0xe9}
                            
                            if (o_4)
                                sub_403010()
                                noreturn
                            
                            int32_t ecx_4 = *data_530454
                            sub_40401c(ecx_4, ecx_4 + ebx_2 * 0x3a4 + 0x198)
                            int32_t var_18
                            int32_t var_40_2 = var_18
                            void* const var_44_2 = &data_507830
                            sub_404138(&var_c, 5)
                            esp_1 = &var_30
                            bool o_5 = unimplemented  {imul edx, ebx, 0xe9}
                            
                            if (o_5)
                                sub_403010()
                                noreturn
                            
                            int32_t ecx_6 = *data_530454
                            sub_40401c(ecx_6, ecx_6 + ebx_2 * 0x3a4 + 0x198)
                            void* var_1c
                            sub_404188(var_1c, var_10)
                            
                            if (temp2_1 != 1)
                                int32_t temp3_1 = edi_1
                                edi_1 += 1
                                
                                if (add_overflow(temp3_1, 1))
                                    sub_403010()
                                    noreturn
                    
                    ebx_2 += 1
                    i = i_1
                    i_1 -= 1
                while (i != 1)
    
    if (sub_4c0924() != 0 && sub_469acc(*data_530304) == 0 && edi_1 s> 0)
        sub_514cc4(*data_530454, "CHECKSUM-ERROR!!!")
        sub_514290(*data_530454)
        *(esp_1 - 4) = var_c
        *(esp_1 - 8) = 0x50785c
        *(esp_1 - 0xc) = 0x50785c
        sub_408e1c(edi_1, &var_20)
        sub_4746a0(var_20, 0x1e, *data_530304)
    
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = sub_507808
    return sub_403e1c(&var_20, 6)
}
