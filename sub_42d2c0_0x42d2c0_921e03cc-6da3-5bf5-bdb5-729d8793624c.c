// ============================================================
// 函数名称: sub_42d2c0
// 虚拟地址: 0x42d2c0
// WARP GUID: 921e03cc-6da3-5bf5-bdb5-729d8793624c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403248, sub_42b690, sub_42b778, sub_404188, sub_403e4c, sub_42b7a8, sub_403e1c
// [被调用的父级函数]: sub_432348
// ============================================================

int32_t __convention("regparm")sub_42d2c0(int32_t* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
    void* var_c = nullptr
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t edi
    int32_t var_18 = edi
    char ebx_1 = arg3.b
    int32_t* esi_1 = arg1
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (sub_403248(arg2, &data_436278) != 0)
        if (ebx_1 == 0)
            ebx_1, ebp_1, esi_1 = sub_42b7a8(esi_1, arg2[0x15])
        else
            int32_t ecx = sub_42b778(arg3, &var_8)
            struct _EXCEPTION_REGISTRATION_RECORD* temp0_1 = var_8
            
            if (temp0_1 == 0)
                ebx_1, ebp_1, esi_1 = sub_42b7a8(esi_1, arg2[0x15])
            else
                sub_42b778(ecx, &var_c)
                sub_404188(var_c, esi_1[2])
                
                if (temp0_1 == 0)
                    ebx_1, ebp_1, esi_1 = sub_42b7a8(esi_1, arg2[0x15])
        
        char eax_7
        
        if (ebx_1 != 0)
            eax_7 = (*(*esi_1 + 0x4c))()
            esp_1 = &var_8
        
        if (ebx_1 == 0 || eax_7 == 1)
            *(arg2 + 0x59)
            (*(*esi_1 + 0x5c))()
            esp_1 = &esp_1[7]
        
        if (ebx_1 == 0 || esi_1[0x1c] == 0)
            sub_403e4c(&esi_1[0x1c], arg2[0x18])
        
        if (ebx_1 == 0 || *(esi_1 + 0x47) == 1)
            sub_42b690(esi_1, *(arg2 + 0x6a))
        
        if (ebx_1 == 0 || *(esi_1 + 0x10a) == 0)
            esi_1[0x42] = arg2[0xc]
            esi_1[0x43] = arg2[0xd]
    
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = sub_42d3ac
    return sub_403e1c(&ebp_1[-2], 2)
}
