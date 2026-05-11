// ============================================================
// 函数名称: sub_4b6154
// 虚拟地址: 0x4b6154
// WARP GUID: 6a87d9d3-242d-5701-9a9b-fe850d6723e5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetThreadLocale, MultiByteToWideChar
// [内部子函数调用]: sub_4b6120, sub_4b5c08, sub_4093b0
// [被调用的父级函数]: sub_4b624c
// ============================================================

int32_t __fastcallsub_4b6154(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t ebx
    int32_t var_24 = ebx
    int32_t esi
    int32_t var_28 = esi
    int32_t edi
    int32_t var_2c = edi
    int32_t ebx_1 = arg2
    int32_t edi_1 = 0
    int32_t* var_c = &var_2c
    void* esp_1 = &var_2c - ((arg1 + 1) << 2)
    void* var_14 = esp_1
    
    do
        int32_t eax_4 = sub_4093b0(ebx_1)
        *(esp_1 - 4) = 0
        *(esp_1 - 8) = 0
        *(esp_1 - 0xc) = eax_4
        *(esp_1 - 0x10) = ebx_1
        *(esp_1 - 0x14) = 0
        *(esp_1 - 0x18) = 0
        int32_t eax_6 = MultiByteToWideChar() + 1
        void* esp_9 = esp_1 - ((eax_6 * 2 + 3) & 0xfffffffc)
        
        if (edi_1 != 0)
            *(var_14 + ((arg1 - edi_1) << 2)) = esp_9
        else
            *var_14 = esp_9
        
        *(esp_9 - 4) = eax_6
        *(esp_9 - 8) = esp_9
        *(esp_9 - 0xc) = eax_4
        *(esp_9 - 0x10) = ebx_1
        *(esp_9 - 0x14) = 0
        *(esp_9 - 0x18) = 0
        MultiByteToWideChar()
        esp_1 = esp_9
        *(esp_9 + (eax_6 << 1) - 2) = 0
        ebx_1 += eax_4 + 1
        edi_1 += 1
    while (edi_1 != arg1)
    
    *(esp_1 - 4) = arg4
    *(esp_1 - 8) = GetThreadLocale()
    *(esp_1 - 0xc) = arg1
    *(esp_1 - 0x10) = var_14
    *(esp_1 - 0x14) = data_52ffb0
    *(esp_1 - 0x18) = arg3
    uint32_t eax_24 = (*(*arg3 + 0x14))()
    
    if (eax_24 == 0x80020006)
        int32_t __saved_ebp
        *(esp_1 - 0x1c) = &__saved_ebp
        sub_4b6120()
        noreturn
    
    int32_t result = sub_4b5c08(eax_24)
    *var_c
    var_c[1]
    var_c[2]
    return result
}
