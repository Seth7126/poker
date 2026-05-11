// ============================================================
// 函数名称: sub_525ab8
// 虚拟地址: 0x525ab8
// WARP GUID: 9bd29377-e9ad-5091-bbe0-b372fb217e25
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_5255e8, sub_4040c4, sub_4d81c8, sub_404138, sub_4837ec, sub_4d6660, sub_408e1c, sub_402bdc, sub_403e1c, sub_4c39c8, sub_4cda5c, sub_403df8, sub_525860, sub_403010
// [被调用的父级函数]: sub_4c1fb8, sub_5255c0
// ============================================================

int32_t __convention("regparm")sub_525ab8(void* arg1, int32_t arg2, int32_t arg3 @ esi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t* ebp_1 = &var_4
    int32_t i_1 = 0x8c
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    int32_t entry_ebx
    *(esp_2 - 4) = entry_ebx
    *(esp_2 - 8) = arg3
    *(esp_2 - 0xc) = &var_4
    *(esp_2 - 0x10) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x14) = fsbase->NtTib.ExceptionList
    void* esp_7 = esp_2 - 0x14
    fsbase->NtTib.ExceptionList = esp_7
    *(arg1 + 0x1026c) = 1
    *(arg1 + 0x1026d) = 1
    *(arg1 + 0x1026e) = 0
    *(arg1 + 0x1026f) = 0
    *(arg1 + 0x10270) = 0xb
    *(arg1 + 0x10274) = 0
    *(arg1 + 0x10278) = 0
    char var_430[0x100]
    char var_32c[0x100]
    char var_21c[0x100]
    char var_108[0x100]
    
    switch (arg2)
        case 0x21
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x1026d) = 0
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 2
            void* eax_238 = data_530598
            *eax_238
            int32_t esi_3 = *eax_238 * 0x1f
            bool o_5 = unimplemented  {imul esi, dword [eax], 0x1f}
            
            if (o_5)
                sub_403010()
                noreturn
            
            int32_t var_458
            sub_4040c4(&var_458, "! ", *(data_53034c + (esi_3 << 2) - 0x70))
            sub_404054(&var_108, var_458, 0xff)
            *(esp_7 - 0xc) = &var_108
            *(esp_7 - 0x10) = 3
            int32_t var_45c
            sub_4040c4(&var_45c, "! ", *(data_53034c + (esi_3 << 2) - 0x6c))
            sub_404054(&var_21c, var_45c, 0xff)
            *(esp_7 - 0x14) = &var_21c
            *(esp_7 - 0x18) = 4
            *(esp_7 - 0x1c) = 0x526fd0
            *(esp_7 - 0x20) = 0
            *(esp_7 - 0x24) = 0x526fd0
            *(esp_7 - 0x28) = 0
            *(esp_7 - 0x2c) = 0x526fd0
            *(esp_7 - 0x30) = 0
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            int32_t var_460
            sub_4040c4(&var_460, "! ", *(data_53034c + (esi_3 << 2) - 0x74))
            sub_404054(&var_32c, var_460, 0xff)
            *(esp_7 - 0x3c) = &var_32c
            int32_t var_464
            sub_4040c4(&var_464, "! ", *(data_53034c + (esi_3 << 2) - 0x78))
            sub_404054(&var_430, var_464, 0xff)
            sub_525860(*(esp_7 - 0x3c), 1, &var_430)
            *(esp_7 - 4)
            *(arg1 + 0x10884) = 0x21
        case 0x23
            void* eax_256
            eax_256.b = *(arg1 + 0x10888)
            *(arg1 + 0x1026c) = eax_256.b
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 0
            *(esp_7 - 0xc) = 0x526fd0
            *(esp_7 - 0x10) = 0
            *(esp_7 - 0x14) = 0x526fd0
            *(esp_7 - 0x18) = 0
            *(esp_7 - 0x1c) = 0x526fd0
            *(esp_7 - 0x20) = 0
            *(esp_7 - 0x24) = 0x526fd0
            *(esp_7 - 0x28) = 0
            *(esp_7 - 0x2c) = 0x526fd0
            *(esp_7 - 0x30) = 0
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            sub_525860(0x526fd0, 0x25, 0x526fe4)
            *(esp_7 - 4)
            *(arg1 + 0x10884) = 0x25
        case 0x24
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x10884) = 0x24
        case 0x25
            *(arg1 + 0x1026c) = 0
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 0
            *(esp_7 - 0xc) = 0x526fd0
            *(esp_7 - 0x10) = 0
            *(esp_7 - 0x14) = 0x526fd0
            *(esp_7 - 0x18) = 0
            *(esp_7 - 0x1c) = 0x526fd0
            *(esp_7 - 0x20) = 0
            *(esp_7 - 0x24) = 0x526fd0
            *(esp_7 - 0x28) = 0
            *(esp_7 - 0x2c) = 0x526fd0
            *(esp_7 - 0x30) = 0
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            sub_525860(0x526fd0, 0x25, 0x526fe4)
            *(esp_7 - 4)
            *(arg1 + 0x10884) = 0x25
        case 0x2c
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x1026d) = 0
            *(arg1 + 0x1026f) = 1
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 0xffffffff
            *(esp_7 - 0xc) = 0x526fd0
            *(esp_7 - 0x10) = 0
            *(esp_7 - 0x14) = 0x526fd0
            *(esp_7 - 0x18) = 0
            *(esp_7 - 0x1c) = 0x526fd0
            *(esp_7 - 0x20) = 0
            *(esp_7 - 0x24) = 0x526fd0
            *(esp_7 - 0x28) = 0
            *(esp_7 - 0x2c) = 0x526fd0
            *(esp_7 - 0x30) = 0
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            sub_525860("\r! Kein Kontra", 1, 0x5270d0)
            *(esp_7 - 4)
            *(arg1 + 0x10884) = 0x2c
        case 0x30
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x1026d) = 0
            *(arg1 + 0x1026f) = 1
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 0x2b
            *(esp_7 - 0xc) = 0x526fd0
            *(esp_7 - 0x10) = 0
            *(esp_7 - 0x14) = 0x526fd0
            *(esp_7 - 0x18) = 0
            *(esp_7 - 0x1c) = 0x526fd0
            *(esp_7 - 0x20) = 0
            *(esp_7 - 0x24) = 0x526fd0
            *(esp_7 - 0x28) = 0
            *(esp_7 - 0x2c) = 0x526fd0
            *(esp_7 - 0x30) = 0
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            *(esp_7 - 0x3c) = &data_52718c
            int32_t var_44c
            sub_408e1c(*(*data_5301f4 + (*(*data_5301f4 + 0x1d328) << 2) + 0x1d190), &var_44c)
            *(esp_7 - 0x40) = var_44c
            *(esp_7 - 0x44) = " reizen"
            char* var_448
            sub_404138(&var_448, 3)
            sub_404054(&var_108, var_448, 0xff)
            sub_525860(0x527214, 0x29, &var_108)
            *(esp_7 + 0x14)
            esp_7 += 0x18
            *(arg1 + 0x10884) = 0x30
        case 0x31
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x1026d) = 0
            *(arg1 + 0x1026f) = 1
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 0x2b
            *(esp_7 - 0xc) = 0x526fd0
            *(esp_7 - 0x10) = 0
            *(esp_7 - 0x14) = 0x526fd0
            *(esp_7 - 0x18) = 0
            *(esp_7 - 0x1c) = 0x526fd0
            *(esp_7 - 0x20) = 0
            *(esp_7 - 0x24) = 0x526fd0
            *(esp_7 - 0x28) = 0
            *(esp_7 - 0x2c) = 0x526fd0
            *(esp_7 - 0x30) = 0
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            *(esp_7 - 0x3c) = &data_52718c
            int32_t var_454
            sub_408e1c(*(*data_5301f4 + 0x1d188), &var_454)
            *(esp_7 - 0x40) = var_454
            *(esp_7 - 0x44) = " halten"
            char* var_450
            sub_404138(&var_450, 3)
            sub_404054(&var_108, var_450, 0xff)
            sub_525860(0x527214, 0x2a, &var_108)
            *(esp_7 + 0x14)
            esp_7 += 0x18
            *(arg1 + 0x10884) = 0x31
        case 0x32
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x1026d) = 0
            *(arg1 + 0x1026f) = 1
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 0x2d
            *(esp_7 - 0xc) = 0x526fd0
            *(esp_7 - 0x10) = 0
            *(esp_7 - 0x14) = 0x526fd0
            *(esp_7 - 0x18) = 0
            *(esp_7 - 0x1c) = 0x526fd0
            *(esp_7 - 0x20) = 0
            *(esp_7 - 0x24) = 0x526fd0
            *(esp_7 - 0x28) = 0
            *(esp_7 - 0x2c) = 0x526fd0
            *(esp_7 - 0x30) = 0
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            sub_525860(0x5271bc, 0x33, "\r! Skat nehmen")
            *(esp_7 - 4)
            *(arg1 + 0x10884) = 0x32
        case 0x34
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x1026d) = 0
            *(arg1 + 0x1026f) = 1
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 0
            *(esp_7 - 0xc) = 0x526fd0
            *(esp_7 - 0x10) = 0
            *(esp_7 - 0x14) = 0x526fd0
            *(esp_7 - 0x18) = 0
            *(esp_7 - 0x1c) = 0x526fd0
            *(esp_7 - 0x20) = 0
            *(esp_7 - 0x24) = 0x526fd0
            *(esp_7 - 0x28) = 0
            *(esp_7 - 0x2c) = 0x526fd0
            *(esp_7 - 0x30) = 0
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            sub_525860(0x526fd0, 0x34, 0x5271b0)
            *(esp_7 - 4)
            *(arg1 + 0x10884) = 0x34
        case 0x35
            *(arg1 + 0x1026c) = 1
            *(arg1 + 0x1026d) = 0
            *(arg1 + 0x1026f) = 1
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 0
            *(esp_7 - 0xc) = 0x526fd0
            *(esp_7 - 0x10) = 0
            *(esp_7 - 0x14) = 0x526fd0
            *(esp_7 - 0x18) = 0
            *(esp_7 - 0x1c) = 0x526fd0
            *(esp_7 - 0x20) = 0
            *(esp_7 - 0x24) = 0x526fd0
            *(esp_7 - 0x28) = 0
            *(esp_7 - 0x2c) = 0x526fd0
            *(esp_7 - 0x30) = 0
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            sub_525860(0x526fd0, 0x35, 0x5271a4)
            *(esp_7 - 4)
            *(arg1 + 0x10884) = 0x35
        case 0x36
            *(arg1 + 0x1026c) = 1
            *(arg1 + 0x1026d) = 1
            *(arg1 + 0x1026f) = 0
            *(arg1 + 0x10884) = 0x36
        case 0x37
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x1026d) = 0
            *(arg1 + 0x1026f) = 1
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 1
            void* eax_169 = data_530598
            *eax_169
            int32_t esi_2 = *eax_169 * 0x1f
            bool o_4 = unimplemented  {imul esi, dword [eax], 0x1f}
            
            if (o_4)
                sub_403010()
                noreturn
            
            int32_t var_438
            sub_4040c4(&var_438, "! ", *(data_53034c + (esi_2 << 2) - 0x74))
            sub_404054(&var_108, var_438, 0xff)
            *(esp_7 - 0xc) = &var_108
            *(esp_7 - 0x10) = 2
            int32_t var_43c
            sub_4040c4(&var_43c, "! ", *(data_53034c + (esi_2 << 2) - 0x70))
            sub_404054(&var_21c, var_43c, 0xff)
            *(esp_7 - 0x14) = &var_21c
            *(esp_7 - 0x18) = 3
            int32_t var_440
            sub_4040c4(&var_440, "! ", *(data_53034c + (esi_2 << 2) - 0x6c))
            sub_404054(&var_32c, var_440, 0xff)
            *(esp_7 - 0x1c) = &var_32c
            *(esp_7 - 0x20) = 4
            *(esp_7 - 0x24) = 0x527190
            *(esp_7 - 0x28) = 0xb
            *(esp_7 - 0x2c) = 0x527150
            *(esp_7 - 0x30) = 0xa
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            int32_t var_444
            sub_4040c4(&var_444, "! ", *(data_53034c + (esi_2 << 2) - 0x78))
            sub_404054(&var_430, var_444, 0xff)
            sub_525860(&var_430, 0xe, 0x527198)
            *(esp_7 - 4)
            *(arg1 + 0x10884) = 0x37
        case 0x38
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x1026d) = 0
            *(arg1 + 0x1026f) = 1
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 2
            *(esp_7 - 0xc) = "\t! Schwarz"
            *(esp_7 - 0x10) = 3
            *(esp_7 - 0x14) = 0x527164
            *(esp_7 - 0x18) = 4
            *(esp_7 - 0x1c) = 0x526fd0
            *(esp_7 - 0x20) = 0
            *(esp_7 - 0x24) = 0x526fd0
            *(esp_7 - 0x28) = 0
            *(esp_7 - 0x2c) = 0x526fd0
            *(esp_7 - 0x30) = 0
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            sub_525860(0x527170, 1, 0x52717c)
            *(esp_7 - 4)
            *(arg1 + 0x10884) = 0x38
        case 0x39
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x1026d) = 0
            *(arg1 + 0x1026f) = 1
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 4
            *(esp_7 - 0xc) = 0x526fd0
            *(esp_7 - 0x10) = 0
            *(esp_7 - 0x14) = 0x526fd0
            *(esp_7 - 0x18) = 0
            *(esp_7 - 0x1c) = 0x526fd0
            *(esp_7 - 0x20) = 0
            *(esp_7 - 0x24) = 0x526fd0
            *(esp_7 - 0x28) = 0
            *(esp_7 - 0x2c) = 0x526fd0
            *(esp_7 - 0x30) = 0
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            sub_525860("\r! Null Ouvert", 1, 0x527150)
            *(esp_7 - 4)
            *(arg1 + 0x10884) = 0x39
        case 0x3a
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x1026d) = 1
            *(arg1 + 0x1026f) = 0
            *(arg1 + 0x10884) = 0x3a
        case 0x3b
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x1026d) = 0
            *(arg1 + 0x1026f) = 1
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 0x3e
            *(esp_7 - 0xc) = 0x526fd0
            *(esp_7 - 0x10) = 0
            *(esp_7 - 0x14) = 0x526fd0
            *(esp_7 - 0x18) = 0
            *(esp_7 - 0x1c) = 0x526fd0
            *(esp_7 - 0x20) = 0
            *(esp_7 - 0x24) = 0x526fd0
            *(esp_7 - 0x28) = 0
            *(esp_7 - 0x2c) = 0x526fd0
            *(esp_7 - 0x30) = 0
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            sub_525860(0x527120, 0x3d, 0x527130)
            *(esp_7 - 4)
            *(arg1 + 0x10884) = 0x3b
        case 0x3c
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x1026d) = 0
            *(arg1 + 0x1026f) = 1
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 0x2e
            *(esp_7 - 0xc) = 0x5271bc
            *(esp_7 - 0x10) = 0x2d
            *(esp_7 - 0x14) = 0x526fd0
            *(esp_7 - 0x18) = 0
            *(esp_7 - 0x1c) = 0x526fd0
            *(esp_7 - 0x20) = 0
            *(esp_7 - 0x24) = 0x526fd0
            *(esp_7 - 0x28) = 0
            *(esp_7 - 0x2c) = 0x526fd0
            *(esp_7 - 0x30) = 0
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            sub_525860(0x5271c8, 0x33, 0x5271d8)
            *(esp_7 - 4)
            *(arg1 + 0x10884) = 0x3c
        case 0x3f
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x1026d) = 0
            *(arg1 + 0x1026f) = 1
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 0xffffffff
            *(esp_7 - 0xc) = 0x526fd0
            *(esp_7 - 0x10) = 0
            *(esp_7 - 0x14) = 0x526fd0
            *(esp_7 - 0x18) = 0
            *(esp_7 - 0x1c) = 0x526fd0
            *(esp_7 - 0x20) = 0
            *(esp_7 - 0x24) = 0x526fd0
            *(esp_7 - 0x28) = 0
            *(esp_7 - 0x2c) = 0x526fd0
            *(esp_7 - 0x30) = 0
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            sub_525860("\t! Kein Re", 2, 0x5270e8)
            *(esp_7 - 4)
            *(arg1 + 0x10884) = 0x3f
        case 0x40
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x1026d) = 0
            *(arg1 + 0x1026f) = 1
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 0xffffffff
            *(esp_7 - 0xc) = 0x526fd0
            *(esp_7 - 0x10) = 0
            *(esp_7 - 0x14) = 0x526fd0
            *(esp_7 - 0x18) = 0
            *(esp_7 - 0x1c) = 0x526fd0
            *(esp_7 - 0x20) = 0
            *(esp_7 - 0x24) = 0x526fd0
            *(esp_7 - 0x28) = 0
            *(esp_7 - 0x2c) = 0x526fd0
            *(esp_7 - 0x30) = 0
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            sub_525860("\n! Kein Sup", 3, 0x5270fc)
            *(esp_7 - 4)
            *(arg1 + 0x10884) = 0x40
        case 0x41
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x1026d) = 0
            *(arg1 + 0x1026f) = 1
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 0xffffffff
            *(esp_7 - 0xc) = 0x526fd0
            *(esp_7 - 0x10) = 0
            *(esp_7 - 0x14) = 0x526fd0
            *(esp_7 - 0x18) = 0
            *(esp_7 - 0x1c) = 0x526fd0
            *(esp_7 - 0x20) = 0
            *(esp_7 - 0x24) = 0x526fd0
            *(esp_7 - 0x28) = 0
            *(esp_7 - 0x2c) = 0x526fd0
            *(esp_7 - 0x30) = 0
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            sub_525860("\r! Kein Hirsch", 4, 0x527114)
            *(esp_7 - 4)
            *(arg1 + 0x10884) = 0x41
        case 0x42
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x1026d) = 0
            *(arg1 + 0x1026f) = 1
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 0
            *(esp_7 - 0xc) = 0x526fd0
            *(esp_7 - 0x10) = 0
            *(esp_7 - 0x14) = 0x526fd0
            *(esp_7 - 0x18) = 0
            *(esp_7 - 0x1c) = 0x526fd0
            *(esp_7 - 0x20) = 0
            *(esp_7 - 0x24) = 0x526fd0
            *(esp_7 - 0x28) = 0
            *(esp_7 - 0x2c) = 0x526fd0
            *(esp_7 - 0x30) = 0
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            sub_525860(0x5270a8, 0x42, 0x5270b4)
            *(esp_7 - 4)
            *(arg1 + 0x10884) = 0x42
        case 0x43
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x1026d) = 0
            *(arg1 + 0x1026f) = 1
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 0x2d
            *(esp_7 - 0xc) = 0x526fd0
            *(esp_7 - 0x10) = 0
            *(esp_7 - 0x14) = 0x526fd0
            *(esp_7 - 0x18) = 0
            *(esp_7 - 0x1c) = 0x526fd0
            *(esp_7 - 0x20) = 0
            *(esp_7 - 0x24) = 0x526fd0
            *(esp_7 - 0x28) = 0
            *(esp_7 - 0x2c) = 0x526fd0
            *(esp_7 - 0x30) = 0
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            sub_525860("\n! Schieben", 0x33, "\r! Skat nehmen")
            *(esp_7 - 4)
            *(arg1 + 0x10884) = 0x43
        case 0x44
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x1026d) = 0
            *(arg1 + 0x1026f) = 1
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 0
            *(esp_7 - 0xc) = 0x526fd0
            *(esp_7 - 0x10) = 0
            *(esp_7 - 0x14) = 0x526fd0
            *(esp_7 - 0x18) = 0
            *(esp_7 - 0x1c) = 0x526fd0
            *(esp_7 - 0x20) = 0
            *(esp_7 - 0x24) = 0x526fd0
            *(esp_7 - 0x28) = 0
            *(esp_7 - 0x2c) = 0x526fd0
            *(esp_7 - 0x30) = 0
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            sub_525860("\r!Nichts sagen", 0x44, 0x527098)
            *(esp_7 - 4)
            *(arg1 + 0x10884) = 0x44
        case 0x45
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x1026d) = 0
            *(arg1 + 0x1026f) = 1
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 0
            *(esp_7 - 0xc) = 0x526fd0
            *(esp_7 - 0x10) = 0
            *(esp_7 - 0x14) = 0x526fd0
            *(esp_7 - 0x18) = 0
            *(esp_7 - 0x1c) = 0x526fd0
            *(esp_7 - 0x20) = 0
            *(esp_7 - 0x24) = 0x526fd0
            *(esp_7 - 0x28) = 0
            *(esp_7 - 0x2c) = 0x526fd0
            *(esp_7 - 0x30) = 0
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            sub_525860("\t!Behalten", 0x45, 0x527078)
            *(esp_7 - 4)
            *(arg1 + 0x10884) = 0x45
        case 0x46
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x1026d) = 1
            *(arg1 + 0x1026f) = 1
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 0x47
            *(esp_7 - 0xc) = 0x526fd0
            *(esp_7 - 0x10) = 0
            *(esp_7 - 0x14) = 0x526fd0
            *(esp_7 - 0x18) = 0
            *(esp_7 - 0x1c) = 0x526fd0
            *(esp_7 - 0x20) = 0
            *(esp_7 - 0x24) = 0x526fd0
            *(esp_7 - 0x28) = 0
            *(esp_7 - 0x2c) = 0x526fd0
            *(esp_7 - 0x30) = 0
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            sub_525860(0x527044, 0x48, "\t!Schieben")
            *(esp_7 - 4)
            *(arg1 + 0x10884) = 0x46
        case 0x4b
            *(arg1 + 0x1026c) = 1
            *(arg1 + 0x1026d) = 0
            *(arg1 + 0x1026f) = 0
            *(arg1 + 0x10270) = 0xc
            *(arg1 + 0x10884) = 0x4b
        case 0x4c
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x1026d) = 1
            *(arg1 + 0x1026f) = 1
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 0x47
            *(esp_7 - 0xc) = 0x52705c
            *(esp_7 - 0x10) = 0x4d
            *(esp_7 - 0x14) = 0x526fd0
            *(esp_7 - 0x18) = 0
            *(esp_7 - 0x1c) = 0x526fd0
            *(esp_7 - 0x20) = 0
            *(esp_7 - 0x24) = 0x526fd0
            *(esp_7 - 0x28) = 0
            *(esp_7 - 0x2c) = 0x526fd0
            *(esp_7 - 0x30) = 0
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            sub_525860(0x527044, 0x48, "\t!Schieben")
            *(esp_7 - 4)
            *(arg1 + 0x10884) = 0x46
        case 0x4e
            *(arg1 + 0x1026c) = 1
            *(arg1 + 0x1026d) = 0
            *(arg1 + 0x1026f) = 0
            *(arg1 + 0x10270) = 0xb
            *(arg1 + 0x10274) = 0xd
            *(arg1 + 0x10884) = 0x4e
        case 0x4f
            *(arg1 + 0x1026c) = 1
            *(arg1 + 0x1026d) = 1
            *(arg1 + 0x1026f) = 1
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 0
            *(esp_7 - 0xc) = 0x526fd0
            *(esp_7 - 0x10) = 0
            *(esp_7 - 0x14) = 0x526fd0
            *(esp_7 - 0x18) = 0
            *(esp_7 - 0x1c) = 0x526fd0
            *(esp_7 - 0x20) = 0
            *(esp_7 - 0x24) = 0x526fd0
            *(esp_7 - 0x28) = 0
            *(esp_7 - 0x2c) = 0x526fd0
            *(esp_7 - 0x30) = 0
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            sub_525860(0x526fdc, 0x4f, "\t!Auslegen")
            *(esp_7 - 4)
            *(arg1 + 0x10270) = 0xc
            *(arg1 + 0x10278) = 1
            *(arg1 + 0x10884) = 0x4f
        case 0x50
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x1026d) = 1
            *(arg1 + 0x1026f) = 0
            *(arg1 + 0x10884) = 0x50
        case 0x5a
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x1026d) = 0
            *(arg1 + 0x1026f) = 1
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 0x58
            *(esp_7 - 0xc) = 0x526ffc
            *(esp_7 - 0x10) = 0x2b
            *(esp_7 - 0x14) = 0x526fd0
            *(esp_7 - 0x18) = 0
            *(esp_7 - 0x1c) = 0x526fd0
            *(esp_7 - 0x20) = 0
            *(esp_7 - 0x24) = 0x526fd0
            *(esp_7 - 0x28) = 0
            *(esp_7 - 0x2c) = 0x526fd0
            *(esp_7 - 0x30) = 0
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            sub_525860(0x527024, 0x5a, "\t!Rufspiel")
            *(esp_7 - 4)
            *(arg1 + 0x10884) = 0x5a
        case 0x5b
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x1026d) = 0
            *(arg1 + 0x1026f) = 1
            *(arg1 + 0x10884) = 0x5b
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 2
            void* eax_61 = data_530598
            *eax_61
            int32_t ebx = *eax_61 * 0x1f
            bool o_3 = unimplemented  {imul ebx, dword [eax], 0x1f}
            
            if (o_3)
                sub_403010()
                noreturn
            
            int32_t var_228
            sub_4040c4(&var_228, U"!", *(data_53034c + (ebx << 2) - 0x70))
            sub_404054(&var_108, var_228, 0xff)
            *(esp_7 - 0xc) = &var_108
            *(esp_7 - 0x10) = 3
            int32_t var_22c
            sub_4040c4(&var_22c, U"!", *(data_53034c + (ebx << 2) - 0x6c))
            sub_404054(&var_21c, var_22c, 0xff)
            *(esp_7 - 0x14) = &var_21c
            *(esp_7 - 0x18) = 4
            *(esp_7 - 0x1c) = 0x526fd0
            *(esp_7 - 0x20) = 0
            *(esp_7 - 0x24) = 0x526fd0
            *(esp_7 - 0x28) = 0
            *(esp_7 - 0x2c) = 0x526fd0
            *(esp_7 - 0x30) = 0
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            int32_t var_330
            sub_4040c4(&var_330, U"!", *(data_53034c + (ebx << 2) - 0x74))
            sub_404054(&var_32c, var_330, 0xff)
            *(esp_7 - 0x3c) = &var_32c
            int32_t var_434
            sub_4040c4(&var_434, U"!", *(data_53034c + (ebx << 2) - 0x78))
            sub_404054(&var_430, var_434, 0xff)
            sub_5255e8(*(esp_7 - 0x3c), 1, &var_430)
            *(esp_7 - 4)
        case 0x5e
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x1026d) = 0
            *(arg1 + 0x1026f) = 1
            *(arg1 + 0x10884) = 0x5e
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 0x5f
            *(esp_7 - 0xc) = 0x526fd0
            *(esp_7 - 0x10) = 0
            *(esp_7 - 0x14) = 0x526fd0
            *(esp_7 - 0x18) = 0
            *(esp_7 - 0x1c) = 0x526fd0
            *(esp_7 - 0x20) = 0
            *(esp_7 - 0x24) = 0x526fd0
            *(esp_7 - 0x28) = 0
            *(esp_7 - 0x2c) = 0x526fd0
            *(esp_7 - 0x30) = 0
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            sub_5255e8(0x527014, 0x5e, 0x52701c)
            *(esp_7 - 4)
        case 0x61
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x1026d) = 0
            *(arg1 + 0x1026f) = 1
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 0x2b
            *(esp_7 - 0xc) = 0x526fd0
            *(esp_7 - 0x10) = 0
            *(esp_7 - 0x14) = 0x526fd0
            *(esp_7 - 0x18) = 0
            *(esp_7 - 0x1c) = 0x526fd0
            *(esp_7 - 0x20) = 0
            *(esp_7 - 0x24) = 0x526fd0
            *(esp_7 - 0x28) = 0
            *(esp_7 - 0x2c) = 0x526fd0
            *(esp_7 - 0x30) = 0
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            sub_525860(0x526ffc, 0x60, 0x527004)
            *(esp_7 - 4)
            *(arg1 + 0x10884) = 0x61
        case 0x62
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x1026d) = 0
            *(arg1 + 0x1026e) = 0
            *(arg1 + 0x1026f) = 1
            void* eax_27 = *data_5301f4
            *(eax_27 + 0x10020)
            int32_t eax_28 = *(eax_27 + 0x10020) * 0x41
            bool o_1 = unimplemented  {imul eax, dword [eax+0x10020], 0x41}
            
            if (o_1)
                sub_403010()
                noreturn
            
            int32_t edx_6 = *data_5301f4
            int32_t esi = *(*data_5301f4 + 0x21104)
            int32_t esi_1 = esi - *(edx_6 + (eax_28 << 3) + 0x1fea4)
            
            if (add_overflow(esi, neg.d(*(edx_6 + (eax_28 << 3) + 0x1fea4))))
                sub_403010()
                noreturn
            
            if (esi_1 != 0)
                *(esp_7 - 4) = &var_4
                *(esp_7 - 8) = 0x63
                int32_t var_11c
                void* ebp_2 = sub_4cda5c(*(*data_5301f4 + 0x210fc), 0, &var_11c)
                sub_4040c4(ebp_2 - 0x114, U"!", *(ebp_2 - 0x118))
                sub_404054(ebp_2 - 0x104, *(ebp_2 - 0x114), 0xff)
                *(esp_7 - 0xc) = ebp_2 - 0x104
                *(esp_7 - 0x10) = 0x64
                *(esp_7 - 0x14) = 0x526ff8
                *(esp_7 - 0x18) = 0x65
                *(esp_7 - 0x1c) = 0x526fd0
                *(esp_7 - 0x20) = 0
                *(esp_7 - 0x24) = 0x526fd0
                *(esp_7 - 0x28) = 0
                *(esp_7 - 0x2c) = 0x526fd0
                *(esp_7 - 0x30) = 0
                *(esp_7 - 0x34) = 0x526fd0
                *(esp_7 - 0x38) = 0
                ebp_1 = sub_4cda5c(esi_1, 0, ebp_2 - 0x220)
                sub_4040c4(&ebp_1[-0x87], U"!", ebp_1[-0x88])
                sub_404054(&ebp_1[-0x86], ebp_1[-0x87], 0xff)
                sub_525860(&ebp_1[-0x86], 0x2b, 0x526ff8)
                *(esp_7 - 4)
            else
                *(esp_7 - 4) = &var_4
                *(esp_7 - 8) = 0x2a
                int32_t var_114
                ebp_1 = sub_4cda5c(*(*data_5301f4 + 0x210fc), 0, &var_114)
                sub_4040c4(&ebp_1[-0x43], U"!", ebp_1[-0x44])
                sub_404054(&ebp_1[-0x41], ebp_1[-0x43], 0xff)
                *(esp_7 - 0xc) = &ebp_1[-0x41]
                *(esp_7 - 0x10) = 0x64
                *(esp_7 - 0x14) = 0x526ff8
                *(esp_7 - 0x18) = 0x65
                *(esp_7 - 0x1c) = 0x526fd0
                *(esp_7 - 0x20) = 0
                *(esp_7 - 0x24) = 0x526fd0
                *(esp_7 - 0x28) = 0
                *(esp_7 - 0x2c) = 0x526fd0
                *(esp_7 - 0x30) = 0
                *(esp_7 - 0x34) = 0x526fd0
                *(esp_7 - 0x38) = 0
                sub_525860(0x526ff8, 0x2b, 0x526ff8)
                *(esp_7 - 4)
            
            *(arg1 + 0x10884) = 0x62
        case 0x64
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x1026d) = 0
            *(arg1 + 0x1026e) = 0
            *(arg1 + 0x1026f) = 1
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 0x4d
            *(esp_7 - 0xc) = 0x526fd0
            *(esp_7 - 0x10) = 0
            *(esp_7 - 0x14) = 0x526fd0
            *(esp_7 - 0x18) = 0
            *(esp_7 - 0x1c) = 0x526fd0
            *(esp_7 - 0x20) = 0
            *(esp_7 - 0x24) = 0x526fd0
            *(esp_7 - 0x28) = 0
            *(esp_7 - 0x2c) = 0x526fd0
            *(esp_7 - 0x30) = 0
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            sub_525860(0x526fd4, 0x25, 0x526fdc)
            *(esp_7 - 4)
            *(arg1 + 0x10884) = 0x64
        case 0x66
            *(arg1 + 0x1026c) = 0
            *(arg1 + 0x1026d) = 0
            *(arg1 + 0x1026f) = 1
            *(esp_7 - 4) = &var_4
            *(esp_7 - 8) = 0
            *(esp_7 - 0xc) = 0x526fd0
            *(esp_7 - 0x10) = 0
            *(esp_7 - 0x14) = 0x526fd0
            *(esp_7 - 0x18) = 0
            *(esp_7 - 0x1c) = 0x526fd0
            *(esp_7 - 0x20) = 0
            *(esp_7 - 0x24) = 0x526fd0
            *(esp_7 - 0x28) = 0
            *(esp_7 - 0x2c) = 0x526fd0
            *(esp_7 - 0x30) = 0
            *(esp_7 - 0x34) = 0x526fd0
            *(esp_7 - 0x38) = 0
            sub_525860(0x526fd0, 0x25, 0x526fe4)
            int32_t eax_17
            eax_17.b = 1
            void* var_10c
            int32_t edi
            sub_4c39c8(*(esp_7 - 4), &var_10c, arg3, edi)
            esp_7 += 0x18
            sub_404054(&var_108, var_10c, 0xff)
            sub_402bdc(arg1 + 0x1059a, &var_108, 0x50)
            *(arg1 + 0x10884) = 0x66
    
    if (*(data_530598 + 0x3c8) == 0)
        sub_4837ec(*data_530304, *data_5305b4, false)
        *data_530304
    else
        sub_4d81c8(*data_530304)
    
    *(esp_7 + 8)
    fsbase->NtTib.ExceptionList = *esp_7
    *(esp_7 + 8) = sub_526fc9
    sub_403e1c(&ebp_1[-0x118], 0xd)
    sub_403df8(&ebp_1[-0xcb])
    sub_403e1c(&ebp_1[-0x8a], 4)
    return sub_403e1c(&ebp_1[-0x46], 5)
}
