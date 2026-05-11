// ============================================================
// 函数名称: sub_49f714
// 虚拟地址: 0x49f714
// WARP GUID: 04277aaf-962f-5351-b293-38384f6cd7b1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49f684, sub_49f10c, sub_404138, sub_403e1c, sub_49f268
// [被调用的父级函数]: sub_4b0b67, sub_4b0914, sub_4af710, sub_4a1dbb, sub_4a21b4, sub_4a0cf7
// ============================================================

int32_t __convention("regparm")sub_49f714(int32_t* arg1, int32_t arg2, struct _EXCEPTION_REGISTRATION_RECORD* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
    int32_t var_c = 0
    char* var_10 = nullptr
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    var_8 = arg3
    int32_t* ebx_1 = arg1
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_1
    int32_t edi_2
    eax_1, edi_2 = sub_49f684(ebx_1, arg2)
    void* esi_1 = eax_1
    
    if (var_8 != 0)
        if (esi_1 s< 0)
            esi_1 = (*(*ebx_1 + 0x34))()
        
        if (*(ebx_1 + 0x36) == 0)
            int32_t var_2c_2 = edi_2
            int32_t var_30_2 = ebx_1[0xc]
            struct _EXCEPTION_REGISTRATION_RECORD* var_34_2 = var_8
            sub_404138(&var_10, 3)
            esp = &var_8
            (*(*ebx_1 + 0x20))()
        else
            int32_t* ebx_2
            void* ebp_2
            ebx_2, ebp_2 = sub_49f10c(ebx_1, esi_1)
            int32_t var_2c_1 = edi_2
            int32_t var_30_1 = ebx_2[0xc]
            int32_t var_34_1 = *(ebp_2 - 4)
            sub_404138(ebp_2 - 8, 3)
            esp = &var_8
            ebp_1 = sub_49f268(ebx_2, *(ebp_2 - 8))
    else if (esi_1 s>= 0)
        if (*(ebx_1 + 0x36) != 0)
            ebx_1, ebp_1 = sub_49f10c(ebx_1, esi_1)
        
        (*(*ebx_1 + 0x44))()
        esp = &var_8
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_49f7e6
    return sub_403e1c(&ebp_1[-3], 2)
}
