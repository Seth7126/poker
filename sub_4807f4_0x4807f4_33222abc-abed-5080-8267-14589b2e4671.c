// ============================================================
// 函数名称: sub_4807f4
// 虚拟地址: 0x4807f4
// WARP GUID: 33222abc-abed-5080-8267-14589b2e4671
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetPixelFormat, DescribePixelFormat
// [内部子函数调用]: sub_409040, sub_4804e4, sub_480534, sub_40401c, sub_42b7a8, sub_418b8c, sub_402b4c, sub_404280, sub_48bd6c, sub_403010, sub_403e1c, sub_403e90, sub_404078, sub_404188, sub_480418, sub_404080, sub_402bc0, sub_40422c, sub_4040c4, sub_48be98, sub_476bc0, sub_418b14, sub_402b90, sub_403df8, sub_47b258, sub_423898, sub_4088f0, sub_47a200, sub_40fa94
// [被调用的父级函数]: sub_472ccc, sub_47326c, sub_478234, sub_473878, sub_4734c4
// ============================================================

void* __convention("regparm")sub_4807f4(void* arg1, void* arg2, int32_t arg3 @ esi, int32_t arg4 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    char* i_3 = 0x12
    char* i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_3
        i_3 -= 1
    while (i != 1)
    int32_t entry_ebx
    *(esp_2 - 4) = entry_ebx
    *(esp_2 - 8) = arg3
    *(esp_2 - 0xc) = arg4
    sub_40422c(arg2)
    *(esp_2 - 0x10) = &var_4
    *(esp_2 - 0x14) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x18) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_2 - 0x18
    int32_t ebx_1
    void* ebp_1
    ebx_1, ebp_1 = sub_4804e4(arg1, "OVC Texturen laden..", i_3)
    sub_480534(ebx_1, 0, 1)
    *(esp_2 - 0x1c) = *(ebx_1 + 0xa18)
    int32_t eax_4 = GetPixelFormat()
    *(esp_2 - 0x1c) = ebp_1 - 0x30
    *(esp_2 - 0x20) = 0x28
    *(esp_2 - 0x24) = eax_4
    *(esp_2 - 0x28) = *(ebx_1 + 0xa18)
    DescribePixelFormat()
    int32_t eax_6
    eax_6.b = *(ebp_1 - 0x27)
    *(ebx_1 + 0xe3c) = eax_6
    int32_t temp1 = *(ebx_1 + 0xe1c)
    
    if (temp1 == 1)
        sub_480418(ebx_1, eax_6)
    
    *(esp_2 - 0x1c) = ebp_1 - 0x34
    sub_404280(1, sub_404078(*(ebp_1 - 4)), *(ebp_1 - 4))
    sub_404188(*(ebp_1 - 0x34), 0x4813d8)
    
    if (temp1 != 1)
        sub_404080(ebp_1 - 4, U"\")
    
    sub_4040c4(ebp_1 - 0x38, *(ebp_1 - 4), "border.bmp")
    
    if (sub_409040(*(ebp_1 - 0x38)) == 0)
        sub_403e90(ebp_1 - 4, sub_4813f3+5)
    
    sub_4040c4(ebp_1 - 0x3c, *(ebp_1 - 4), "border.bmp")
    char eax_20
    int32_t edx_5
    eax_20, edx_5 = sub_409040(*(ebp_1 - 0x3c))
    
    if (eax_20 == 0)
        sub_4040c4(ebp_1 - 4, *(ebx_1 + 0xe48), U"\")
    
    *data_530660
    edx_5.b = 1
    int32_t* eax_22 = sub_423898(sub_42117c+0x48, edx_5)
    sub_418b14(eax_22[0x16], *(ebx_1 + 0xe44))
    sub_418b8c(eax_22[0x16], 0x20)
    void* ebx_2
    int32_t esi
    
    for (int32_t i_1 = 1; i_1 != 0xfb; i_1 = esi + 1)
        if (i_1.b - 0x61 u>= 0x1a)
            *(ebp_1 - 0x47) = i_1.b
            *(ebp_1 - 0x48) = 1
            sub_402bc0(ebp_1 - 0x4c, ebp_1 - 0x48)
            *(ebp_1 - 0x4f) = i_1.b
            *(ebp_1 - 0x50) = 1
            sub_402b90(ebp_1 - 0x4c, ebp_1 - 0x50, 2)
            sub_402bc0(ebp_1 - 0x54, ebp_1 - 0x4c)
            *(ebp_1 - 0x4f) = i_1.b
            *(ebp_1 - 0x50) = 1
            sub_40401c(sub_402b90(ebp_1 - 0x54, ebp_1 - 0x50, 3), ebp_1 - 0x54)
            ebx_2, ebp_1, esi = sub_42b7a8(eax_22, *(ebp_1 - 0x58))
            *(ebx_2 + (esi << 1) + 0xe50) = sub_402b4c(float.t(eax_22[0xe]) * data_48140c)
        else
            *(ebp_1 - 0x47) = i_1.b
            *(ebp_1 - 0x48) = 1
            sub_402bc0(ebp_1 - 0x4c, ebp_1 - 0x48)
            *(ebp_1 - 0x4f) = i_1.b
            *(ebp_1 - 0x50) = 1
            sub_402b90(ebp_1 - 0x4c, ebp_1 - 0x50, 2)
            sub_402bc0(ebp_1 - 0x54, ebp_1 - 0x4c)
            *(ebp_1 - 0x4f) = i_1.b
            *(ebp_1 - 0x50) = 1
            sub_40401c(sub_402b90(ebp_1 - 0x54, ebp_1 - 0x50, 3), ebp_1 - 0x54)
            sub_4088f0(*(ebp_1 - 0x44), ebp_1 - 0x40)
            ebx_2, ebp_1, esi = sub_42b7a8(eax_22, *(ebp_1 - 0x40))
            *(ebx_2 + (esi << 1) + 0xe50) = sub_402b4c(float.t(eax_22[0xe]) * fconvert.t(0.75f))
        
        if (esi.b == 0x2f)
            *(ebx_2 + (esi << 1) + 0xe50) = 0x46
        
        if (esi.b == 0x26)
            *(ebx_2 + (esi << 1) + 0xe50) = 0x64
        
        if (esi.b == 0x80)
            *(ebx_2 + (esi << 1) + 0xe50) = 0x76
        
        if (esi.b == 0x5e)
            *(ebx_2 + (esi << 1) + 0xe50) = 0x50
    
    if (*(ebx_2 + 0xdc4) == 1)
        *(ebx_2 + 0x9c0) = 0x2600
    
    if (*(ebx_2 + 0xdc4) == 2)
        *(ebx_2 + 0x9c0) = 0x2700
    
    if (*(ebx_2 + 0xdc4) == 3)
        *(ebx_2 + 0x9c0) = 0x2601
    
    if (*(ebx_2 + 0xdc4) == 4)
        *(ebx_2 + 0x9c0) = 0x2703
    
    *(ebx_2 + 0x9c4) = *(ebx_2 + 0xdbc)
    *(ebx_2 + 0x9c8) = *(ebx_2 + 0xdc0)
    sub_4040c4(ebp_1 - 0x5c, *(ebp_1 - 4), "load0.jpg")
    int16_t eax_55
    void* ebx_3
    void* ebp_2
    eax_55, ebx_3, ebp_2 = sub_48bd6c(ebx_2, *(ebp_1 - 0x5c), 0xffffffff)
    *(ebx_3 + 0x930) = eax_55
    sub_4040c4(ebp_2 - 0x60, *(ebp_2 - 4), "load1.jpg")
    int16_t eax_58
    void* ebx_4
    void* ebp_3
    eax_58, ebx_4, ebp_3 = sub_48bd6c(ebx_3, *(ebp_2 - 0x60), 0xffffffff)
    *(ebx_4 + 0x92e) = eax_58
    sub_4040c4(ebp_3 - 0x64, *(ebp_3 - 4), "back.bmp")
    int16_t eax_61
    void* ebx_5
    void* ebp_4
    eax_61, ebx_5, ebp_4 = sub_48bd6c(ebx_4, *(ebp_3 - 0x64), 0xffffffff)
    *(ebx_5 + 0x932) = eax_61
    sub_4040c4(ebp_4 - 0x68, *(ebp_4 - 4), "titel.bmp")
    int16_t eax_64
    char* ecx_10
    void* ebx_6
    eax_64, ecx_10, ebx_6 = sub_48bd6c(ebx_5, *(ebp_4 - 0x68), 0xffffffff)
    *(ebx_6 + 0x934) = eax_64
    int32_t ebx_7
    void* ebp_5
    ebx_7, ebp_5 = sub_4804e4(ebx_6, "Fonttexturen laden..", ecx_10)
    sub_480534(ebx_7, 3, 1)
    *(esp_2 - 0x1c) = 0
    void* esp_18 = esp_2 - 0x1c
    sub_4040c4(ebp_5 - 0x6c, *(ebp_5 - 4), "elem.bmp")
    *(ebx_7 + 0x8b4) = sub_48be98(ebx_7, *(ebp_5 - 0x6c), 0)
    sub_4040c4(ebp_5 - 0x70, *(ebp_5 - 4), "logo.bmp")
    
    if (sub_409040(*(ebp_5 - 0x70)) == 0)
        *(ebx_7 + 0x8b8) = 0
    else
        *(esp_18 - 4) = 1
        esp_18 -= 4
        sub_4040c4(ebp_5 - 0x74, *(ebp_5 - 4), "logo.bmp")
        *(ebx_7 + 0x8b8) = sub_48be98(ebx_7, *(ebp_5 - 0x74), 0)
    
    sub_4040c4(ebp_5 - 0x78, *(ebp_5 - 4), "logo2.bmp")
    
    if (sub_409040(*(ebp_5 - 0x78)) == 0)
        *(ebx_7 + 0x8bc) = 0
    else
        *(esp_18 - 4) = 0
        esp_18 -= 4
        sub_4040c4(ebp_5 - 0x7c, *(ebp_5 - 4), "logo2.bmp")
        *(ebx_7 + 0x8bc) = sub_48be98(ebx_7, *(ebp_5 - 0x7c), 0)
    
    *(ebx_7 + 0x8c0) = 1
    *(ebx_7 + 0x8c4) = 0
    *(esp_18 - 4) = 1
    sub_4040c4(ebp_5 - 0x80, *(ebp_5 - 4), "font.bmp")
    *(ebx_7 + 0x8c8) = sub_48be98(ebx_7, *(ebp_5 - 0x80), 0)
    *(esp_18 - 8) = 0
    sub_4040c4(ebp_5 - 0x84, *(ebp_5 - 4), "fonth.bmp")
    int32_t eax_87
    char* ecx_17
    eax_87, ecx_17 = sub_48be98(ebx_7, *(ebp_5 - 0x84), 0)
    *(ebx_7 + 0x8cc) = eax_87
    int32_t ebx_8
    void* ebp_6
    ebx_8, ebp_6 = sub_4804e4(ebx_7, "Komponententexturen laden..", ecx_17)
    sub_480534(ebx_8, 6, 1)
    *(ebx_8 + 0x8d0) = 6
    *(ebx_8 + 0x8d4) = 7
    *(ebx_8 + 0x8e8) = 8
    *(ebx_8 + 0x8ec) = 9
    *(ebx_8 + 0x8d8) = 0x1a
    sub_480534(ebx_8, 9, 1)
    *(ebx_8 + 0x8dc) = 0x1b
    *(ebx_8 + 0x8e0) = 0x18
    *(ebx_8 + 0x8e4) = 0x19
    sub_480534(ebx_8, 0xc, 1)
    *(ebx_8 + 0x11c8) = 5
    *(ebx_8 + 0x8f0) = 5
    *(ebx_8 + 0x928) = 0xc
    *(ebx_8 + 0x92a) = 0xe
    sub_480534(ebx_8, 0xf, 1)
    *(ebx_8 + 0x92c) = 0x1e
    *(ebx_8 + 0x936) = 0x13
    *(ebx_8 + 0x938) = 0x12
    sub_480534(ebx_8, 0x10, 1)
    *(ebx_8 + 0x93a) = 0x11
    *(ebx_8 + 0x93c) = *(ebx_8 + 0x936)
    *(ebx_8 + 0x93e) = 0x10
    __builtin_memcpy(ebx_8 + 0x8f4, 
        "\x0c\x00\x00\x00\x0d\x00\x00\x00\x15\x00\x00\x00\x20\x00\x00\x00\x21\x00\x00\x00\x23\x00\x00\x00\x"
    "24\x00\x00\x00\x22\x00\x00\x00\x0a\x00\x00\x00\x0b\x00\x00\x00", 
        0x28)
    sub_4040c4(ebp_6 - 0x88, *(ebp_6 - 4), "detail.bmp")
    int16_t eax_97
    void* ebx_9
    eax_97, ebx_9 = sub_48bd6c(ebx_8, *(ebp_6 - 0x88), 0xffffffff)
    *(ebx_9 + 0x940) = eax_97
    int32_t eax_98 = sx.d(eax_97)
    
    if (neg.d(eax_98) == 0x80000000)
        sub_403010()
        noreturn
    
    *(esp_18 - 0xc) = neg.d(eax_98)
    sub_47b258(*(ebx_9 + 0x1170), *(ebx_9 + 0x10d4), ebx_9)
    *(ebx_9 + 0x10d4)
    bool o_1 = unimplemented  {imul eax, dword [esi+0x3ec], 0x1038}
    
    if (o_1)
        sub_403010()
        noreturn
    
    *(ebx_9 + 0x1170)
    bool o_2 = unimplemented  {imul edx, dword [esi+0x488], 0x23}
    
    if (o_2)
        sub_403010()
        noreturn
    
    *(*(ebx_9 + 0xab0) + *(ebx_9 + 0x10d4) * 0x81c0 + *(ebx_9 + 0x1170) * 0x118 - 0x94) = 0x10
    *(ebx_9 + 0x10d4)
    bool o_3 = unimplemented  {imul eax, dword [esi+0x3ec], 0x1038}
    
    if (o_3)
        sub_403010()
        noreturn
    
    *(ebx_9 + 0x1170)
    bool o_4 = unimplemented  {imul edx, dword [esi+0x488], 0x23}
    
    if (o_4)
        sub_403010()
        noreturn
    
    *(*(ebx_9 + 0xab0) + *(ebx_9 + 0x10d4) * 0x81c0 + *(ebx_9 + 0x1170) * 0x118 - 0x90) = 0x3f266666
    *(ebx_9 + 0x10d4)
    bool o_5 = unimplemented  {imul eax, dword [esi+0x3ec], 0x1038}
    
    if (o_5)
        sub_403010()
        noreturn
    
    *(ebx_9 + 0x1170)
    bool o_6 = unimplemented  {imul edx, dword [esi+0x488], 0x23}
    
    if (o_6)
        sub_403010()
        noreturn
    
    *(*(ebx_9 + 0xab0) + *(ebx_9 + 0x10d4) * 0x81c0 + *(ebx_9 + 0x1170) * 0x118 - 0x98) = 0x19
    int32_t eax_107 = sx.d(*(ebx_9 + 0x940))
    
    if (neg.d(eax_107) == 0x80000000)
        sub_403010()
        noreturn
    
    *(esp_18 - 0xc) = neg.d(eax_107)
    sub_47b258(*(ebx_9 + 0x1168), *(ebx_9 + 0x10d4), ebx_9)
    *(ebx_9 + 0x10d4)
    bool o_8 = unimplemented  {imul eax, dword [esi+0x3ec], 0x1038}
    
    if (o_8)
        sub_403010()
        noreturn
    
    *(ebx_9 + 0x1168)
    bool o_9 = unimplemented  {imul edx, dword [esi+0x480], 0x23}
    
    if (o_9)
        sub_403010()
        noreturn
    
    *(*(ebx_9 + 0xab0) + *(ebx_9 + 0x10d4) * 0x81c0 + *(ebx_9 + 0x1168) * 0x118 - 0x94) = 0x10
    *(ebx_9 + 0x10d4)
    bool o_10 = unimplemented  {imul eax, dword [esi+0x3ec], 0x1038}
    
    if (o_10)
        sub_403010()
        noreturn
    
    *(ebx_9 + 0x1168)
    bool o_11 = unimplemented  {imul edx, dword [esi+0x480], 0x23}
    
    if (o_11)
        sub_403010()
        noreturn
    
    *(*(ebx_9 + 0xab0) + *(ebx_9 + 0x10d4) * 0x81c0 + *(ebx_9 + 0x1168) * 0x118 - 0x90) = 0x3f266666
    *(ebx_9 + 0x10d4)
    bool o_12 = unimplemented  {imul eax, dword [esi+0x3ec], 0x1038}
    
    if (o_12)
        sub_403010()
        noreturn
    
    *(ebx_9 + 0x1168)
    bool o_13 = unimplemented  {imul edx, dword [esi+0x480], 0x23}
    
    if (o_13)
        sub_403010()
        noreturn
    
    *(*(ebx_9 + 0xab0) + *(ebx_9 + 0x10d4) * 0x81c0 + *(ebx_9 + 0x1168) * 0x118 - 0x98) = 0x19
    int32_t eax_116 = sx.d(*(ebx_9 + 0x940))
    
    if (neg.d(eax_116) == 0x80000000)
        sub_403010()
        noreturn
    
    *(esp_18 - 0xc) = neg.d(eax_116)
    sub_47b258(*(ebx_9 + 0x116c), *(ebx_9 + 0x10d4), ebx_9)
    *(ebx_9 + 0x10d4)
    bool o_15 = unimplemented  {imul eax, dword [esi+0x3ec], 0x1038}
    
    if (o_15)
        sub_403010()
        noreturn
    
    *(ebx_9 + 0x116c)
    bool o_16 = unimplemented  {imul edx, dword [esi+0x484], 0x23}
    
    if (o_16)
        sub_403010()
        noreturn
    
    *(*(ebx_9 + 0xab0) + *(ebx_9 + 0x10d4) * 0x81c0 + *(ebx_9 + 0x116c) * 0x118 - 0x94) = 0x10
    *(ebx_9 + 0x10d4)
    bool o_17 = unimplemented  {imul eax, dword [esi+0x3ec], 0x1038}
    
    if (o_17)
        sub_403010()
        noreturn
    
    *(ebx_9 + 0x116c)
    bool o_18 = unimplemented  {imul edx, dword [esi+0x484], 0x23}
    
    if (o_18)
        sub_403010()
        noreturn
    
    *(*(ebx_9 + 0xab0) + *(ebx_9 + 0x10d4) * 0x81c0 + *(ebx_9 + 0x116c) * 0x118 - 0x90) = 0x3f266666
    *(ebx_9 + 0x10d4)
    bool o_19 = unimplemented  {imul eax, dword [esi+0x3ec], 0x1038}
    
    if (o_19)
        sub_403010()
        noreturn
    
    *(ebx_9 + 0x116c)
    bool o_20 = unimplemented  {imul edx, dword [esi+0x484], 0x23}
    
    if (o_20)
        sub_403010()
        noreturn
    
    *(*(ebx_9 + 0xab0) + *(ebx_9 + 0x10d4) * 0x81c0 + *(ebx_9 + 0x116c) * 0x118 - 0x98) = 0x19
    int32_t eax_125 = sx.d(*(ebx_9 + 0x940))
    
    if (neg.d(eax_125) == 0x80000000)
        sub_403010()
        noreturn
    
    *(esp_18 - 0xc) = neg.d(eax_125)
    sub_47b258(*(ebx_9 + 0x1160), *(ebx_9 + 0x10d4), ebx_9)
    *(ebx_9 + 0x10d4)
    bool o_22 = unimplemented  {imul eax, dword [esi+0x3ec], 0x1038}
    
    if (o_22)
        sub_403010()
        noreturn
    
    *(ebx_9 + 0x1160)
    bool o_23 = unimplemented  {imul edx, dword [esi+0x478], 0x23}
    
    if (o_23)
        sub_403010()
        noreturn
    
    *(*(ebx_9 + 0xab0) + *(ebx_9 + 0x10d4) * 0x81c0 + *(ebx_9 + 0x1160) * 0x118 - 0x94) = 0x10
    *(ebx_9 + 0x10d4)
    bool o_24 = unimplemented  {imul eax, dword [esi+0x3ec], 0x1038}
    
    if (o_24)
        sub_403010()
        noreturn
    
    *(ebx_9 + 0x1160)
    bool o_25 = unimplemented  {imul edx, dword [esi+0x478], 0x23}
    
    if (o_25)
        sub_403010()
        noreturn
    
    *(*(ebx_9 + 0xab0) + *(ebx_9 + 0x10d4) * 0x81c0 + *(ebx_9 + 0x1160) * 0x118 - 0x90) = 0x3f266666
    *(ebx_9 + 0x10d4)
    bool o_26 = unimplemented  {imul eax, dword [esi+0x3ec], 0x1038}
    
    if (o_26)
        sub_403010()
        noreturn
    
    *(ebx_9 + 0x1160)
    bool o_27 = unimplemented  {imul edx, dword [esi+0x478], 0x23}
    
    if (o_27)
        sub_403010()
        noreturn
    
    *(*(ebx_9 + 0xab0) + *(ebx_9 + 0x10d4) * 0x81c0 + *(ebx_9 + 0x1160) * 0x118 - 0x98) = 0x19
    *(esp_18 - 0xc) = 0
    sub_47a200(*(ebx_9 + 0x1164), *(ebx_9 + 0x10d4), ebx_9)
    *(esp_18 - 0xc) = 0
    int32_t ecx_28 = *(ebx_9 + 0x1164)
    
    if (add_overflow(ecx_28, 0xffffffff))
        sub_403010()
        noreturn
    
    sub_47a200(ecx_28 - 1, *(ebx_9 + 0x10d4), ebx_9)
    *(ebx_9 + 0x10d4)
    bool o_29 = unimplemented  {imul eax, dword [esi+0x3ec], 0x1038}
    
    if (o_29)
        sub_403010()
        noreturn
    
    *(ebx_9 + 0x1164)
    bool o_30 = unimplemented  {imul edx, dword [esi+0x47c], 0x23}
    
    if (o_30)
        sub_403010()
        noreturn
    
    *(*(ebx_9 + 0xab0) + *(ebx_9 + 0x10d4) * 0x81c0 + *(ebx_9 + 0x1164) * 0x118 - 0xa0) = 0
    *(ebx_9 + 0x10d4)
    bool o_31 = unimplemented  {imul eax, dword [esi+0x3ec], 0x1038}
    
    if (o_31)
        sub_403010()
        noreturn
    
    *(ebx_9 + 0x1164)
    bool o_32 = unimplemented  {imul edx, dword [esi+0x47c], 0x23}
    
    if (o_32)
        sub_403010()
        noreturn
    
    *(*(ebx_9 + 0xab0) + *(ebx_9 + 0x10d4) * 0x81c0 + *(ebx_9 + 0x1164) * 0x118 - 0x1b8) = 0
    *(esp_18 - 0xc) = 0
    sub_476bc0(*(ebx_9 + 0x1164), *(ebx_9 + 0x10d4), ebx_9)
    *(esp_18 - 0xc) = 0
    sub_47a200(*(ebx_9 + 0x1150), *(ebx_9 + 0x10d4), ebx_9)
    void* esp_35
    *esp_35 = 0
    int32_t ecx_32 = *(ebx_9 + 0x1150)
    
    if (add_overflow(ecx_32, 0xffffffff))
        sub_403010()
        noreturn
    
    sub_47a200(ecx_32 - 1, *(ebx_9 + 0x10d4), ebx_9)
    *(ebx_9 + 0x10d4)
    bool o_34 = unimplemented  {imul eax, dword [esi+0x3ec], 0x1038}
    
    if (o_34)
        sub_403010()
        noreturn
    
    *(ebx_9 + 0x1150)
    bool o_35 = unimplemented  {imul edx, dword [esi+0x468], 0x23}
    
    if (o_35)
        sub_403010()
        noreturn
    
    *(*(ebx_9 + 0xab0) + *(ebx_9 + 0x10d4) * 0x81c0 + *(ebx_9 + 0x1150) * 0x118 - 0xa0) = 0
    *(ebx_9 + 0x10d4)
    bool o_36 = unimplemented  {imul eax, dword [esi+0x3ec], 0x1038}
    
    if (o_36)
        sub_403010()
        noreturn
    
    *(ebx_9 + 0x1150)
    bool o_37 = unimplemented  {imul edx, dword [esi+0x468], 0x23}
    
    if (o_37)
        sub_403010()
        noreturn
    
    *(*(ebx_9 + 0xab0) + *(ebx_9 + 0x10d4) * 0x81c0 + *(ebx_9 + 0x1150) * 0x118 - 0x1b8) = 0
    *esp_35 = 0
    void* esp_40 = esp_35 + 4
    int32_t ebx_10
    void* ebp_7
    ebx_10, ebp_7 = sub_4804e4(ebx_9, "Programmtexturen laden..", 
        sub_476bc0(*(ebx_9 + 0x1150), *(ebx_9 + 0x10d4), ebx_9))
    char* ecx_37 = sub_480534(ebx_10, 0x11, 1)
    *(ebp_7 - 8) = *(ebx_10 + 0x8ac)
    int32_t ebx_11
    void* ebp_8
    ebx_11, ebp_8 = sub_4804e4(ebx_10, "Custom Textures laden..", ecx_37)
    sub_480534(ebx_11, 0x12, 1)
    int32_t i_4 = *(ebx_11 + 0xaac)
    
    if (i_4 s> 0)
        int32_t esi_2 = 1
        int32_t i_2
        
        do
            *(esp_40 - 4) = 0
            esp_40 -= 4
            int32_t esi_3 = sub_48be98(ebx_11, *(*(ebx_11 + 0xaa4) + (esi_2 << 2)), 
                *(*(ebx_11 + 0xaa8) + (esi_2 << 2)))
            sub_480534(ebx_11, 0x13, 1)
            esi_2 = esi_3 + 1
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
    
    sub_480534(ebx_11, 0x14, 1)
    
    if (*(ebx_11 + 0xabc) == 0)
        sub_40fa94(0xfffffffc, 0xfffffffc, ebp_8 - 0x90)
        *(esp_40 - 4) = ebp_8 - 0x90
        *(esp_40 - 8) = ebx_11 + 0xa96
        int32_t* ecx_42
        ecx_42.b = 0x38
        *(ebx_11 + 0x1d4)
        (*(ebx_11 + 0x1d0))()
    
    *(esp_40 + 8)
    fsbase->NtTib.ExceptionList = *esp_40
    *(esp_40 + 8) = sub_4813a3
    sub_403e1c(ebp_8 - 0x88, 0xd)
    sub_403e1c(ebp_8 - 0x44, 5)
    sub_403df8(ebp_8 - 4)
    return ebp_8 - 4
}
