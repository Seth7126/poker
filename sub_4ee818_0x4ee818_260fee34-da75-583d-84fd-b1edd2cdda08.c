// ============================================================
// 函数名称: sub_4ee818
// 虚拟地址: 0x4ee818
// WARP GUID: 260fee34-da75-583d-84fd-b1edd2cdda08
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4f1e48, sub_404754, sub_404688, sub_40496c, sub_403010
// [被调用的父级函数]: sub_4ed7a0, sub_4dc3b8, sub_4c62e8, sub_51f880
// ============================================================

void* __convention("regparm")sub_4ee818(float arg1 @ eax, int32_t arg2, int32_t arg3, int32_t arg4 @ esi, int32_t arg5 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    float var_8 = arg1
    int32_t* esp_1 = &var_8
    int32_t i_1 = 8
    int32_t i
    
    do
        esp_1[-0x400] = i_1
        esp_1 = &esp_1[-0x400]
        i = i_1
        i_1 -= 1
    while (i != 1)
    float eax = var_8
    int32_t entry_ebx
    esp_1[-0x34b] = entry_ebx
    esp_1[-0x34c] = arg4
    esp_1[-0x34d] = arg5
    esp_1[-0x34e] = arg3
    float var_1c
    __builtin_memcpy(&var_1c, eax, 0x18)
    int32_t ecx = esp_1[-0x34e]
    void var_8d30
    int32_t ecx_1 = sub_404688(&var_8d30, 0x48ec68)
    esp_1[-0x34e] = &var_4
    esp_1[-0x34f] = j_sub_4037f0
    TEB* fsbase
    esp_1[-0x350] = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &esp_1[-0x350]
    esp_1[-0x351] = 0x40000000
    int32_t esi_1 = arg2 * 0x2345
    bool o = unimplemented  {imul esi, ebx, 0x2345}
    
    if (o)
        sub_403010()
        noreturn
    
    sub_4f1e48(ecx_1, 0, data_5301b0 + (esi_1 << 2) - 0x8d14)
    void* eax_4 = data_5301b0
    esp_1[-0x351] = esi_1
    esp_1[-0x352] = ecx
    __builtin_memcpy(&var_1c, eax_4 + (esi_1 << 2) - 0x394, 0x18)
    int32_t edi_1 = esp_1[-0x352]
    esp_1[-0x351] = esp_1[-0x351]
    esp_1[-0x352] = edi_1
    void var_3b0
    __builtin_memcpy(&var_3b0, &var_1c, 0x18)
    int32_t edi_2 = esp_1[-0x352]
    int32_t var_3b4 = arg2
    sub_40496c(&var_8d30, data_5301b0 + (esp_1[-0x351] << 2) - 0x8d14, 0x48ec68)
    esp_1[-0x351] = edi_2
    __builtin_memcpy(&var_1c, &var_3b0, 0x18)
    int32_t edi_3 = esp_1[-0x351]
    float var_39c
    var_8 = fconvert.s(fconvert.t(0.5f) * fconvert.t(var_39c) + fconvert.t(-27.5f))
    var_1c = fconvert.s(fconvert.t(var_1c) - fconvert.t(30f))
    __builtin_memcpy(edi_3, &var_1c, 0x18)
    esp_1[-0x34e]
    fsbase->NtTib.ExceptionList = esp_1[-0x350]
    esp_1[-0x34e] = sub_4ee944
    void* result = &var_8d30
    sub_404754(result, 0x48ec68)
    return result
}
