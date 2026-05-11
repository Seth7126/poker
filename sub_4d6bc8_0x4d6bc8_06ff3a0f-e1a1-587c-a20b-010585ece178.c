// ============================================================
// 函数名称: sub_4d6bc8
// 虚拟地址: 0x4d6bc8
// WARP GUID: 06ff3a0f-e1a1-587c-a20b-010585ece178
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47ab08, sub_403e90, sub_47a2ac, sub_404754, sub_51d748, sub_51db70, sub_403df8, sub_4d727c, sub_403010
// [被调用的父级函数]: sub_4dc3b8
// ============================================================

void** __convention("regparm")sub_4d6bc8(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_20
    __builtin_memset(&var_20, 0, 0x1c)
    int32_t ebx
    int32_t var_24 = ebx
    int32_t esi
    int32_t var_28 = esi
    int32_t edi
    int32_t var_2c = edi
    void* esi_1 = arg1
    int32_t* var_30 = &var_4
    int32_t (* var_34)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_51d748(data_780c64)
    data_61cda4
    bool o = unimplemented  {imul eax, dword [0x61cda4], 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t var_1c
    void* var_8
    long double x87_r0
    
    if (*(*(esi_1 + 0xab0) + data_61cda4 * 0x81c0 + 1) != 0)
        sub_51db70(data_780c64, *(data_780c58 + 0x10884), &var_1c)
        void* var_14
        sub_403e90(&var_8, var_14)
        sub_47ab08(data_61c8c8, data_61cda4, data_61cd8c, x87_r0, var_8)
        esp_1 = &ExceptionList
    
    if (data_77e234 s> 0)
        void* ebx_1 = &data_61ce9c
        int32_t i
        
        do
            *(esp_1 - 4) = &var_8
            esi_1, i = sub_47a2ac(esi_1, data_61cda0, *ebx_1)
            int32_t* ebx_2 = sub_4d727c(&var_20, var_8)
            sub_403e90(&var_8, var_20)
            esp_1[0xb] = var_8
            esp_1 = &esp_1[0xc]
            ebx_1 = sub_47ab08(esi_1, data_61cda0, *ebx_2, x87_r0) + 4
        while (i != 1)
    
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = sub_4d6cd2
    sub_403df8(&var_20)
    sub_404754(&var_1c, sub_48ec28+0x88)
    void** result = &var_8
    sub_403df8(result)
    return result
}
