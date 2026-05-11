// ============================================================
// 函数名称: sub_4d7b54
// 虚拟地址: 0x4d7b54
// WARP GUID: b1b32c90-1568-510f-872d-09fe201383af
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4748fc, sub_4040c4, sub_404138, sub_52452c, sub_408e1c, sub_409144, sub_40401c, sub_40915c, sub_40287c, sub_403df8, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

int32_t* __fastcallsub_4d7b54(int32_t arg1, char arg2, int32_t arg3 @ esi, int32_t arg4 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t i_1 = 0xd
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    *(esp_2 - 4) = i_1
    int32_t entry_ebx
    *(esp_2 - 8) = entry_ebx
    *(esp_2 - 0xc) = arg3
    *(esp_2 - 0x10) = arg4
    *(esp_2 - 0x14) = &var_4
    *(esp_2 - 0x18) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x1c) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_2 - 0x1c
    int32_t edi = *(data_780c58 + 0x10020)
    int32_t edi_1 = edi - 2
    
    if (add_overflow(edi, 0xfffffffe))
        sub_403010()
        noreturn
    
    if (edi_1 s> data_77e234)
        edi_1 = 2
    
    if (edi_1 s< 1)
        edi_1 = data_77e234
    
    char var_3c[0x34]
    *(esp_2 - 0x20) = &var_3c
    bool o_1 = unimplemented  {imul eax, eax, 0x33}
    
    if (o_1)
        sub_403010()
        noreturn
    
    sub_40401c(sub_40287c(3, 1, zx.d(*(data_780c58 + 4)) * 0x33 + &data_780a88), &var_3c)
    *(esp_2 - 0x20) = *(data_61c8c8 + 0xa64)
    *(esp_2 - 0x24) = "\save\"
    *(esp_2 - 0x28) = "test._"
    int32_t var_8
    *(esp_2 - 0x2c) = var_8
    char* var_40
    sub_404138(&var_40, 4)
    sub_409144(var_40)
    *(esp_2 - 0xc) = *(data_61c8c8 + 0xa64)
    *(esp_2 - 0x10) = "\save\"
    *(esp_2 - 0x14) = "test."
    *(esp_2 - 0x18) = var_8
    char* var_44
    sub_404138(&var_44, 4)
    sub_409144(var_44)
    esp_2[2] = *(data_61c8c8 + 0xa64)
    esp_2[1] = "\save\autosave"
    int32_t var_4c
    sub_408e1c(edi_1, &var_4c)
    *esp_2 = var_4c
    *(esp_2 - 4) = &data_4d7e18
    *(esp_2 - 8) = var_8
    char* var_48
    sub_404138(&var_48, 5)
    esp_2[6] = var_48
    esp_2[5] = *(data_61c8c8 + 0xa64)
    esp_2[4] = "\save\"
    esp_2[3] = "test._"
    esp_2[2] = var_8
    char* var_50
    sub_404138(&var_50, 4)
    sub_40915c(esp_2[0xb], var_50)
    esp_2[0xb] = *(data_61c8c8 + 0xa64)
    esp_2[0xa] = "\save\autosave"
    int32_t var_58
    sub_408e1c(edi_1, &var_58)
    esp_2[9] = var_58
    esp_2[8] = &data_4d7e24
    esp_2[7] = var_8
    char* var_54
    sub_404138(&var_54, 5)
    esp_2[0xf] = var_54
    esp_2[0xe] = *(data_61c8c8 + 0xa64)
    esp_2[0xd] = "\save\"
    esp_2[0xc] = "test."
    esp_2[0xb] = var_8
    char* var_5c
    sub_404138(&var_5c, 4)
    sub_40915c(esp_2[0x14], var_5c)
    esp_2[0x14] = 1
    char* var_64
    sub_408e1c(*(data_780c58 + 0x10020), &var_64)
    int32_t var_60
    sub_4040c4(&var_60, "autosave", var_64)
    esp_2[0x13] = var_60
    esp_2[0x12] = *(data_61c8c8 + 0xa64)
    esp_2[0x11] = "\save\autosave"
    int32_t var_6c
    sub_408e1c(*(data_780c58 + 0x10020), &var_6c)
    esp_2[0x10] = var_6c
    char* var_68
    sub_404138(&var_68, 3)
    void* esp_54 = &esp_2[0x1a]
    sub_52452c(data_780c58, var_68, esp_2[0x19], &data_61c8c8, edi_1)
    int32_t var_70
    
    if (arg2 != 0)
        *(esp_54 - 4) = 0
        *(esp_54 - 8) = 0
        *(esp_54 - 0xc) = 0
        *(esp_54 - 0x10) = 0
        *(esp_54 - 0x14) = "Spiel gespeichert in "
        *(esp_54 - 0x18) = *(data_61c8c8 + 0xa64)
        *(esp_54 - 0x1c) = "\save\"
        *(esp_54 - 0x20) = "_test."
        *(esp_54 - 0x24) = var_8
        sub_404138(&var_70, 5)
        sub_4748fc(data_61c8c8, var_70, 0)
    
    *(esp_54 + 8)
    fsbase->NtTib.ExceptionList = *esp_54
    *(esp_54 + 8) = sub_4d7dbf
    sub_403e1c(&var_70, 0xd)
    int32_t* result = &var_8
    sub_403df8(result)
    return result
}
