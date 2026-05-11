// ============================================================
// 函数名称: sub_48c0c8
// 虚拟地址: 0x48c0c8
// WARP GUID: 3487cd3c-7f73-5b03-88bc-9b010787e4cc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_40422c, sub_48cfc8, sub_404078, sub_48db58, sub_403df8
// [被调用的父级函数]: sub_4fb834, sub_4fc3f8, sub_484e24, sub_488509, sub_4fc834
// ============================================================

void** __convention("regparm")sub_48c0c8(int32_t arg1, void* arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t edi
    int32_t var_18 = edi
    void* var_c = arg2
    sub_40422c(var_c)
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ebx_1 = 0
    int32_t i_1 = sub_404078(var_c)
    
    if (i_1 s> 0)
        int32_t esi_1 = 1
        int32_t i
        
        do
            *(esp_1 - 4) = 0x3a03126f
            *(esp_1 - 8) = 0
            *(esp_1 - 0xc) = 0
            (*data_5301d4)()
            esp_1 = &esp_1[7]
            void* eax_5 = var_c
            
            if (esi_1 - 1 u>= *(eax_5 - 4))
                sub_403008()
                noreturn
            
            if (*(eax_5 + esi_1 - 1) != 0xe1)
                int32_t edx
                long double x87_r0
                
                if (ebx_1.b == 0)
                    void* eax_8 = var_c
                    
                    if (esi_1 - 1 u>= *(eax_8 - 4))
                        sub_403008()
                        noreturn
                    
                    if (*(eax_8 + esi_1 - 1) != 0x8b || ebx_1.b != 0)
                        *(esp_1 - 4) = arg5
                        *(esp_1 - 8) = 0xbf800000
                        *(esp_1 - 0xc) = 0xbf800000
                        *(esp_1 - 0x10) = 0
                        *(esp_1 - 0x14) = ebx_1
                        void* eax_11 = var_c
                        
                        if (esi_1 - 1 u>= *(eax_11 - 4))
                            sub_403008()
                            noreturn
                        
                        edx.b = *(eax_11 + esi_1 - 1)
                        sub_48db58(arg1, edx, x87_r0)
                    else
                        *(esp_1 - 4) = arg3
                        *(esp_1 - 8) = 0xbf800000
                        *(esp_1 - 0xc) = 0xbf800000
                        *(esp_1 - 0x10) = 0
                        *(esp_1 - 0x14) = ebx_1
                        void* eax_9 = var_c
                        
                        if (esi_1 - 1 u>= *(eax_9 - 4))
                            sub_403008()
                            noreturn
                        
                        edx.b = *(eax_9 + esi_1 - 1)
                        sub_48db58(arg1, edx, x87_r0)
                else
                    *(esp_1 - 4) = arg5
                    *(esp_1 - 8) = 0xbf800000
                    *(esp_1 - 0xc) = 0xbf800000
                    *(esp_1 - 0x10) = 0
                    *(esp_1 - 0x14) = ebx_1
                    *(esp_1 - 0x18) = arg4
                    void* eax_6 = var_c
                    
                    if (esi_1 - 1 u>= *(eax_6 - 4))
                        sub_403008()
                        noreturn
                    
                    edx.b = *(eax_6 + esi_1 - 1)
                    sub_48cfc8(arg1, x87_r0)
                ebx_1 = 0
            else
                ebx_1.b = 1
            
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = sub_48c20b
    void** result = &var_c
    sub_403df8(result)
    return result
}
