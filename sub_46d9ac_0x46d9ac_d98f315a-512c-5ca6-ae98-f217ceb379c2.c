// ============================================================
// 函数名称: sub_46d9ac
// 虚拟地址: 0x46d9ac
// WARP GUID: d98f315a-512c-5ca6-ae98-f217ceb379c2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404138, sub_46accc, sub_402c90, sub_46f698, sub_408e1c, sub_40287c, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_46d9ac(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_84 = ebx
    int32_t esi
    int32_t var_88 = esi
    int32_t edi
    int32_t var_8c = edi
    int32_t var_18
    __builtin_memset(&var_18, 0, 0x14)
    int32_t* var_90 = &var_4
    int32_t (* var_94)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t esi_1 = *(arg1 + 0x10d4)
    int32_t esi_2 = esi_1 + 1
    
    if (add_overflow(esi_1, 1))
        sub_403010()
        noreturn
    
    int32_t edi_1 = *(arg1 + 0xab4)
    
    if (edi_1 s>= esi_2)
        int32_t i_1 = edi_1 - esi_2 + 1
        int32_t i
        
        do
            char* var_8
            
            if (esi_2 != 0x2c)
                *(esp_1 - 4) = *(arg1 + 0xa64)
                *(esp_1 - 8) = "\data\settings\di_"
                int32_t var_c
                sub_408e1c(esi_2, &var_c)
                *(esp_1 - 0xc) = var_c
                *(esp_1 - 0x10) = ".dco"
                sub_404138(&var_8, 4)
            
            *(esp_1 - 4) = "Load dialog elements from "
            *(esp_1 - 8) = var_8
            *(esp_1 - 0xc) = &data_46db54
            int32_t var_14
            sub_408e1c(esi_2, &var_14)
            *(esp_1 - 0x10) = var_14
            *(esp_1 - 0x14) = &data_46db60
            sub_408e1c(*(arg1 + 0xab4), &var_18)
            *(esp_1 - 0x18) = var_18
            *(esp_1 - 0x1c) = &data_46db6c
            char* var_10
            sub_404138(&var_10, 7)
            sub_46accc()
            char var_80
            *(esp_1 - 0x10) = &var_80
            bool o_1 = unimplemented  {imul eax, esi, 0x1038}
            
            if (o_1)
                sub_403010()
                noreturn
            
            sub_40287c(1, 1, *(arg1 + 0xab0) + esi_2 * 0x81c0 + 0x813c)
            esp_1 -= 0xc
            int32_t ecx_2
            ecx_2.b = var_80
            sub_402c90(&var_80, 0x46db70, ecx_2 + 1)
            
            if (ecx_2 != 0xffffffff)
                *(esp_1 - 4) = 0
                sub_46f698(var_8, esi_2, i_1)
            
            sub_46accc()
            esi_2 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = sub_46daf5
    return sub_403e1c(&var_18, 5)
}
