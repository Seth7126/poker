// ============================================================
// 函数名称: sub_48e9e4
// 虚拟地址: 0x48e9e4
// WARP GUID: ee5da8ef-e623-53b8-b041-26d5ccee76e9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_403008, sub_4748fc, sub_408e4c, sub_404138, sub_408e1c, sub_404080, sub_402b4c, sub_403e1c
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_48e9e4(void* arg1, int32_t arg2 @ esi, int32_t arg3 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t i_2 = 4
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_2
        i_2 -= 1
    while (i != 1)
    *(esp_2 - 4) = i_2
    int32_t entry_ebx
    *(esp_2 - 8) = entry_ebx
    *(esp_2 - 0xc) = arg2
    *(esp_2 - 0x10) = arg3
    *(esp_2 - 0x14) = &var_4
    *(esp_2 - 0x18) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x1c) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_2 - 0x1c
    uint32_t eax_1 = GetTickCount()
    *(esp_2 - 0x20) = 0
    *(esp_2 - 0x24) = eax_1
    int32_t eax_3
    int32_t edx
    edx:eax_3 = sx.q(*(arg1 + 0x1234))
    int32_t temp1 = *(esp_2 - 0x24)
    *(esp_2 - 0x24) -= eax_3
    *(esp_2 - 0x20) = sbb.d(*(esp_2 - 0x20), edx, temp1 u< eax_3)
    int32_t eax_4 = *(esp_2 - 0x24)
    int32_t edx_1 = *(esp_2 - 0x20)
    *(esp_2 - 0x20) = eax_4
    int32_t eax_6 = *(esp_2 - 0x20)
    
    if (eax_4 s>> 0x1f != edx_1)
        sub_403008()
        noreturn
    
    *(esp_2 - 0x20) = "Zeit gesamt: "
    int32_t var_20
    sub_408e1c(eax_6, &var_20)
    *(esp_2 - 0x24) = var_20
    *(esp_2 - 0x28) = &data_48eb7c
    char* var_14
    sub_404138(&var_14, 3)
    void* esp_19 = esp_2 - 0x10
    int32_t i_3 = *(arg1 + 0x12dc)
    int32_t var_28
    int32_t var_18
    
    if (i_3 s> 0)
        int32_t ebx = 1
        int32_t i_1
        
        do
            if (ebx u> 0x14)
                sub_403008()
                noreturn
            
            float var_1c_1 = fconvert.s(float.t((arg1 + 0x1234)[ebx + 0x15]) / float.t(eax_6))
            *(esp_19 - 4) = "Nr. "
            int32_t var_24
            sub_408e1c(ebx, &var_24)
            *(esp_19 - 8) = var_24
            *(esp_19 - 0xc) = &data_48eb98
            sub_404138(&var_18, 3)
            
            if (ebx u> 0x14)
                sub_403008()
                noreturn
            
            sub_404080(&var_18, (arg1 + 0x1234)[ebx + 0x2b])
            *(esp_19 + 8) = var_14
            *(esp_19 + 4) = &data_48eba4
            *esp_19 = var_18
            *(esp_19 - 4) = &data_48ebb0
            int32_t eax_12
            int32_t edx_5
            eax_12, edx_5 = sub_402b4c(fconvert.t(var_1c_1) * fconvert.t(100f))
            *(esp_19 - 8) = edx_5
            *(esp_19 - 0xc) = eax_12
            sub_408e4c()
            *(esp_19 - 8) = var_28
            *(esp_19 - 0xc) = &data_48ebc0
            sub_404138(&var_14, 6)
            esp_19 += 0xc
            ebx += 1
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    *(esp_19 - 4) = 0
    *(esp_19 - 8) = "!Weiter"
    *(esp_19 - 0xc) = 0
    *(esp_19 - 0x10) = 0
    sub_4748fc(arg1, var_14, "Spielergebnis")
    *(esp_19 - 8)
    fsbase->NtTib.ExceptionList = *(esp_19 - 0x10)
    *(esp_19 - 8) = sub_48eb52
    sub_403e1c(&var_28, 3)
    return sub_403e1c(&var_18, 2)
}
