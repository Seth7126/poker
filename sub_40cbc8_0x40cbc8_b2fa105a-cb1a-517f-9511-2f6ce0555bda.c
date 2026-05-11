// ============================================================
// 函数名称: sub_40cbc8
// 虚拟地址: 0x40cbc8
// WARP GUID: b2fa105a-cb1a-517f-9511-2f6ce0555bda
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetCurrentThreadId, InterlockedExchange, Sleep
// [内部子函数调用]: sub_405340
// [被调用的父级函数]: sub_4ade74
// ============================================================

void* __convention("regparm")sub_40cbc8(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t ecx
    int32_t var_8 = ecx
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t __saved_esi_2
    int32_t __saved_esi_1 = __saved_esi_2
    int32_t __saved_esi
    int32_t* esp_1 = &__saved_esi
    
    if (*(arg1 + 0x34) != 0)
        return arg1
    
    int32_t i = 0
    uint32_t eax_1 = GetCurrentThreadId()
    
    while (true)
        *(esp_1 - 4) = eax_1
        *(esp_1 - 8) = arg1 + 0x30
        
        if (InterlockedExchange() == 0)
            break
        
        esp_1[4] = 0
        Sleep()
        esp_1 = &esp_1[5]
    
    int32_t __saved_ebp
    esp_1[4] = &__saved_ebp
    esp_1[3] = j_sub_4037f0
    TEB* fsbase
    esp_1[2] = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &esp_1[2]
    *(arg1 + 0x28)
    
    for (int32_t eax_7 = sub_405340(); eax_7 s> i; i += 1)
        if (eax_1 == *(*(arg1 + 0x28) + (i << 3)))
            break
    
    int32_t eax_9 = *(arg1 + 0x28)
    *(eax_9 + (i << 3) + 4) -= 1
    
    if (*(*(arg1 + 0x28) + (i << 3) + 4) == 0)
        *(*(arg1 + 0x28) + (i << 3)) = 0
    
    esp_1[4]
    fsbase->NtTib.ExceptionList = esp_1[2]
    esp_1[4] = sub_40cc6b
    *(arg1 + 0x30) = 0
    return arg1
}
