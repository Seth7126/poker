// ============================================================
// 函数名称: sub_47d208
// 虚拟地址: 0x47d208
// WARP GUID: 7b6b37ca-4ca3-5ec5-9c97-8eab35e0bfe3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_449890, sub_47a180, sub_46accc, sub_404138, sub_403e4c, sub_4054f4, sub_409388, sub_46fed4, sub_47b650, sub_403e1c, sub_403010, sub_403008, sub_52d540, sub_404078, sub_443970, sub_483950, sub_47d0c0, sub_47d0b8, sub_442414, sub_4033d0, sub_4040c4, sub_46de48, sub_484b3c, sub_408e1c, sub_403fa0, sub_403df8, sub_48341c, sub_409ae0, sub_47b3d8, sub_402e64, sub_47b258, sub_44399c, sub_431afc, sub_47a200, sub_483f98, sub_483d54, sub_483958, sub_4834fc, sub_47a9e0, sub_483128
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_47d208(void* arg1, int32_t arg2, void* arg3, int32_t arg4 @ esi, int32_t arg5 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* i_7 = arg3
    int32_t* esp_1 = &i_7
    void* i_6 = 0x19
    void* i
    
    do
        *(esp_1 - 4) = 0
        *(esp_1 - 8) = 0
        esp_1 -= 8
        i = i_6
        i_6 -= 1
    while (i != 1)
    void* i_13 = i_7
    i_7 = i_6
    int32_t entry_ebx
    *(esp_1 - 4) = entry_ebx
    *(esp_1 - 8) = arg4
    *(esp_1 - 0xc) = arg5
    void* esp_5 = esp_1 - 0xc
    
    if (arg2.b != 0)
        esp_5 -= 0x10
        arg1 = sub_4033d0(i_13, arg2)
    
    void* i_14 = i_13
    char var_9 = arg2.b
    i_7 = arg1
    void* ebx = data_530660
    *(esp_5 - 4) = &var_4
    *(esp_5 - 8) = j_sub_4037f0
    TEB* fsbase
    *(esp_5 - 0xc) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_5 - 0xc
    char* var_2c
    sub_409388(&var_2c)
    sub_403e4c(i_7 + 0xa64, var_2c)
    sub_46accc()
    void* eax_4 = *ebx
    *(eax_4 + 0xbc) = i_7
    *(eax_4 + 0xb8) = sub_47be18
    void* i_8 = i_7
    *(i_8 + 0x1b4) = i_7
    *(i_8 + 0x1b0) = sub_475d3c
    void* eax_5 = *ebx
    *(eax_5 + 0xc4) = i_7
    *(eax_5 + 0xc0) = sub_4769d8
    *(i_7 + 0x9b0) = 0
    *(i_7 + 0x9b1) = 0
    *(i_7 + 0x9b2) = 1
    *(i_7 + 0x1224) = 0
    *(i_7 + 0xab4) = 0
    *(i_7 + 0xab8) = 0
    *(i_7 + 0x2e8) = 0
    *(i_7 + 0x2ec) = 0
    *(i_7 + 0xaac) = 0
    *(i_7 + 0x314) = 1
    *(i_7 + 0x318) = 0
    *(i_7 + 0x8ac) = 0
    *(i_7 + 0x978) = 0
    *(i_7 + 0x9cc) = 0
    *(i_7 + 0x9c0) = 0x2601
    sub_431afc(i_7, 0)
    sub_46accc()
    sub_46accc()
    void* i_9 = i_7
    *(i_9 + 0x948) = 0
    *(i_9 + 0x94c) = 0
    void* i_10 = i_7
    *(i_10 + 0x950) = 0
    *(i_10 + 0x954) = 0
    void* i_11 = i_7
    *(i_11 + 0x958) = 0
    *(i_11 + 0x95c) = 0
    void* i_12 = i_7
    *(i_12 + 0x960) = 0
    *(i_12 + 0x964) = 0
    *(i_7 + 0x1335) = 0
    sub_46accc()
    sub_46accc()
    int32_t ecx_1 = sub_4040c4(i_7 + 0xe48, *(i_7 + 0xa64), "\data\openvc")
    *ebx
    char* var_30
    sub_449890(ecx_1, &var_30)
    int32_t edi = sub_404078(var_30)
    char* var_14
    int32_t ecx_2 = sub_403df8(&var_14)
    int32_t eax_76
    void* esp_22
    void* ebp_3
    int80_t x87_r0
    
    while (true)
        *ebx
        char* var_38
        sub_449890(ecx_2, &var_38)
        char* eax_35 = var_38
        
        if (edi - 1 u>= *(eax_35 - 4))
            sub_403008()
            noreturn
        
        int32_t edx_12
        edx_12.b = eax_35[edi - 1]
        sub_403fa0()
        char* var_34
        int32_t ecx_4 = sub_4040c4(&var_14, var_34, var_14)
        
        if (add_overflow(edi, 0xffffffff))
            sub_403010()
            noreturn
        
        if (edi - 1 s> 1)
            *ebx
            char* var_3c
            ecx_2 = sub_449890(ecx_4, &var_3c)
            char* eax_38 = var_3c
            
            if (edi - 2 u>= *(eax_38 - 4))
                sub_403008()
                noreturn
            
            edi -= 1
            eax_38.b = eax_38[edi - 1]
            char temp3_1 = eax_38.b
            eax_38.b -= 0x2f
            
            if (temp3_1 != 0x2f)
                char temp4_1 = eax_38.b
                eax_38.b -= 0xb
                
                if (temp4_1 != 0xb)
                    char temp5_1 = eax_38.b
                    eax_38.b -= 0x22
                    
                    if (temp5_1 != 0x22)
                        continue
        
        *(esp_5 - 0x10) = 0x258
        *(esp_5 - 0x14) = 0xbe
        *(esp_5 - 0x18) = 1
        int32_t var_40
        sub_4040c4(&var_40, "Fehler in ", var_14)
        *(esp_5 - 0x1c) = var_40
        *(esp_5 - 0x20) = 1
        *(esp_5 - 0x24) = 0
        *(esp_5 - 0x28) = 0
        *(esp_5 - 0x2c) = 0x3f800000
        int32_t eax_42
        void* ebp_1
        int32_t* esi
        eax_42, ebp_1, esi = sub_483128(i_7, 0x64, 0xc8)
        *(*esi + 0x9d0) = eax_42
        sub_483950(*esi, eax_42)
        *(esp_5 - 0x30) = 0x2d
        *(esp_5 - 0x34) = "Unbekannter Fehler"
        *(esp_5 - 0x38) = 0x2f
        *(esp_5 - 0x3c) = 2
        *(esp_5 - 0x40) = 0
        *(esp_5 - 0x44) = 0x3f800000
        int32_t edx_16
        edx_16.b = 1
        *(*esi + 0x9d8) = sub_483f98(*esi, edx_16, 0x14, x87_r0)
        *(esp_5 - 0x30) = 0x8c
        *(esp_5 - 0x34) = &data_47f9c4
        *(esp_5 - 0x38) = 0x78
        *(esp_5 - 0x3c) = 0x20
        *(esp_5 - 0x40) = 0
        *(esp_5 - 0x44) = 0x3f800000
        *(*esi + 0x9d4) = sub_483f98(*esi, 0, 0xf0, x87_r0)
        *(esp_5 - 0x30) = 0x258
        *(esp_5 - 0x34) = 0xbe
        *(esp_5 - 0x38) = 1
        *(esp_5 - 0x3c) = *(ebp_1 - 0x10)
        *(esp_5 - 0x40) = 0
        *(esp_5 - 0x44) = 0xa
        *(esp_5 - 0x48) = 0
        *(esp_22 - 8) = 0x3fc00000
        int32_t eax_51
        void* ebp_2
        int32_t* esi_1
        eax_51, ebp_2, esi_1 = sub_483128(*esi, 0x64, 0xc8)
        *(*esi_1 + 0x9f0) = eax_51
        sub_483950(*esi_1, eax_51)
        *(esp_22 - 0xc) = 0x3c
        *(esp_22 - 0x10) = "Messagetext"
        *(esp_22 - 0x14) = 0x4d
        *(esp_22 - 0x18) = 2
        *(esp_22 - 0x1c) = 0
        *(esp_22 - 0x20) = 0x3f800000
        int32_t edx_21
        edx_21.b = 1
        *(*esi_1 + 0x9f8) = sub_483f98(*esi_1, edx_21, 0x14, x87_r0)
        *esi_1
        sub_46accc()
        *esi_1
        sub_46accc()
        data_5320d8 = 0x2f
        void* eax_58 = *esi_1
        void* edx_25 = *esi_1
        *(eax_58 + 0xa30) = *(edx_25 + 0x2a0)
        *(eax_58 + 0xa34) = *(edx_25 + 0x2a4)
        void* eax_59 = *esi_1
        *(eax_59 + 0x2a4) = *esi_1
        *(eax_59 + 0x2a0) = sub_471144
        void* eax_60 = *esi_1
        void* edx_27 = *esi_1
        *(eax_60 + 0xa38) = *(edx_27 + 0x278)
        *(eax_60 + 0xa3c) = *(edx_27 + 0x27c)
        void* eax_61 = *esi_1
        *(eax_61 + 0x27c) = *esi_1
        *(eax_61 + 0x278) = sub_472824
        void* eax_62 = *esi_1
        void* edx_29 = *esi_1
        *(eax_62 + 0xa40) = *(edx_29 + 0xb8)
        *(eax_62 + 0xa44) = *(edx_29 + 0xbc)
        void* eax_63 = *esi_1
        *(eax_63 + 0xbc) = *esi_1
        *(eax_63 + 0xb8) = sub_470048
        void* eax_64 = *esi_1
        *(eax_64 + 0x1cc) = *esi_1
        *(eax_64 + 0x1c8) = sub_470014
        void* eax_65 = *esi_1
        *(eax_65 + 0xcc) = *esi_1
        *(eax_65 + 0xc8) = 0x4700e4
        void* eax_66 = *esi_1
        void* edx_33 = *esi_1
        *(eax_66 + 0xa50) = *(edx_33 + 0xe0)
        *(eax_66 + 0xa54) = *(edx_33 + 0xe4)
        void* eax_67 = *esi_1
        *(eax_67 + 0xe4) = *esi_1
        *(eax_67 + 0xe0) = sub_47013c
        void* eax_68 = *esi_1
        *(eax_68 + 0x94c) = *esi_1
        *(eax_68 + 0x948) = sub_46ffdc
        void* eax_69 = *esi_1
        *(eax_69 + 0x954) = *esi_1
        *(eax_69 + 0x950) = sub_47000c
        void* eax_70 = *esi_1
        *(eax_70 + 0x95c) = *esi_1
        *(eax_70 + 0x958) = sub_470010
        *esi_1
        sub_46accc()
        *esi_1
        sub_46accc()
        sub_403e4c(*esi_1 + 0xe44, "Arial")
        *esi_1
        ebp_3 = sub_46fed4(ebp_2 - 0x4c, "99999999")
        eax_76 = *esi_1
        *(esp_22 - 0xc) = esi_1
        break
    
    __builtin_memcpy(eax_76 + 0x1048, ebp_3 - 0x4c, 0x10)
    int32_t* esi_3 = *(esp_22 - 0xc)
    *esi_3
    void* ebp_4 = sub_46fed4(ebp_3 - 0x4c, "99999999")
    int32_t eax_78 = *esi_3
    *(esp_22 - 0xc) = esi_3
    __builtin_memcpy(eax_78 + 0x1058, ebp_4 - 0x4c, 0x10)
    int32_t* esi_5 = *(esp_22 - 0xc)
    *esi_5
    void* ebp_5 = sub_46fed4(ebp_4 - 0x4c, "99999999")
    int32_t eax_80 = *esi_5
    *(esp_22 - 0xc) = esi_5
    __builtin_memcpy(eax_80 + 0x1068, ebp_5 - 0x4c, 0x10)
    int32_t* esi_7 = *(esp_22 - 0xc)
    *esi_7
    void* ebp_6 = sub_46fed4(ebp_5 - 0x4c, "00354570")
    int32_t eax_82 = *esi_7
    *(esp_22 - 0xc) = esi_7
    __builtin_memcpy(eax_82 + 0x1078, ebp_6 - 0x4c, 0x10)
    int32_t* esi_9 = *(esp_22 - 0xc)
    *esi_9
    void* ebp_7 = sub_46fed4(ebp_6 - 0x4c, "00003380")
    int32_t eax_84 = *esi_9
    *(esp_22 - 0xc) = esi_9
    __builtin_memcpy(eax_84 + 0x1088, ebp_7 - 0x4c, 0x10)
    int32_t* esi_11 = *(esp_22 - 0xc)
    *esi_11
    sub_46accc()
    *esi_11
    sub_46accc()
    int32_t edx_42
    edx_42.b = 1
    *(*esi_11 + 0xa20) = sub_52d540(0x52c7a4, edx_42)
    *(*esi_11 + 0x97d) = 0
    *(*(*esi_11 + 0xa20) + 4) = 0
    *esi_11
    sub_46accc()
    *esi_11
    sub_46accc()
    int32_t* ebx_3 = *esi_11 + 0xa24
    ebx_3[1] = 7
    
    if (add_overflow(7, 1))
        sub_403010()
        noreturn
    
    *(esp_22 - 0xc) = 8
    *esi_11
    sub_4054f4()
    sub_47d0b8(0x280, 0x1e0, ebp_7 - 0x58)
    bool o_3 = unimplemented  {imul eax, eax, 0x3}
    
    if (o_3)
        sub_403010()
        noreturn
    
    void* edx_47 = *ebx_3
    *(edx_47 + 0xc) = *(ebp_7 - 0x58)
    *(edx_47 + 0x10) = *(ebp_7 - 0x54)
    *(edx_47 + 0x14) = *(ebp_7 - 0x50)
    sub_47d0b8(0x2d0, 0x21c, ebp_7 - 0x58)
    bool o_4 = unimplemented  {imul eax, eax, 0x3}
    
    if (o_4)
        sub_403010()
        noreturn
    
    void* edx_48 = *ebx_3
    *(edx_48 + 0x18) = *(ebp_7 - 0x58)
    *(edx_48 + 0x1c) = *(ebp_7 - 0x54)
    *(edx_48 + 0x20) = *(ebp_7 - 0x50)
    sub_47d0b8(0x320, 0x258, ebp_7 - 0x58)
    bool o_5 = unimplemented  {imul eax, eax, 0x3}
    
    if (o_5)
        sub_403010()
        noreturn
    
    void* edx_49 = *ebx_3
    *(edx_49 + 0x24) = *(ebp_7 - 0x58)
    *(edx_49 + 0x28) = *(ebp_7 - 0x54)
    *(edx_49 + 0x2c) = *(ebp_7 - 0x50)
    sub_47d0b8(0x384, 0x2a3, ebp_7 - 0x58)
    bool o_6 = unimplemented  {imul eax, eax, 0x3}
    
    if (o_6)
        sub_403010()
        noreturn
    
    void* edx_50 = *ebx_3
    *(edx_50 + 0x30) = *(ebp_7 - 0x58)
    *(edx_50 + 0x34) = *(ebp_7 - 0x54)
    *(edx_50 + 0x38) = *(ebp_7 - 0x50)
    sub_47d0b8(0x400, 0x300, ebp_7 - 0x58)
    bool o_7 = unimplemented  {imul eax, eax, 0x3}
    
    if (o_7)
        sub_403010()
        noreturn
    
    void* edx_51 = *ebx_3
    *(edx_51 + 0x3c) = *(ebp_7 - 0x58)
    *(edx_51 + 0x40) = *(ebp_7 - 0x54)
    *(edx_51 + 0x44) = *(ebp_7 - 0x50)
    sub_47d0b8(0x4b0, 0x384, ebp_7 - 0x58)
    bool o_8 = unimplemented  {imul eax, eax, 0x3}
    
    if (o_8)
        sub_403010()
        noreturn
    
    void* edx_52 = *ebx_3
    *(edx_52 + 0x48) = *(ebp_7 - 0x58)
    *(edx_52 + 0x4c) = *(ebp_7 - 0x54)
    *(edx_52 + 0x50) = *(ebp_7 - 0x50)
    sub_47d0b8(0x5a0, 0x438, ebp_7 - 0x58)
    bool o_9 = unimplemented  {imul eax, eax, 0x3}
    
    if (o_9)
        sub_403010()
        noreturn
    
    void* edx_53 = *ebx_3
    *(edx_53 + 0x54) = *(ebp_7 - 0x58)
    *(edx_53 + 0x58) = *(ebp_7 - 0x54)
    *(edx_53 + 0x5c) = *(ebp_7 - 0x50)
    *esi_11
    sub_46accc()
    *esi_11
    sub_46accc()
    void* ebx_4 = *esi_11 + 0xce8
    *(esp_22 - 0xc) = 0
    *(esp_22 - 0x10) = 0
    *(esp_22 - 0x14) = 0
    *(esp_22 - 0x18) = "#firstpanel"
    *(esp_22 - 0x1c) = 0
    *(esp_22 - 0x20) = 0
    *(esp_22 - 0x24) = 0
    void* esp_44
    *(esp_44 - 8) = 0
    int32_t eax_100
    int32_t* esi_12
    eax_100, esi_12 = sub_483128(*esi_11, 0, 0)
    *(ebx_4 + 0x3f8) = eax_100
    *(esp_44 - 0xc) = 0x2a8
    *(esp_44 - 0x10) = 0xa0
    *(esp_44 - 0x14) = 0
    *(esp_44 - 0x18) = 0
    *(esp_44 - 0x1c) = 1
    *(esp_44 - 0x20) = 0
    *(esp_44 - 0x24) = 0
    *(esp_44 - 0x28) = 0x3f800000
    int32_t eax_102
    int32_t* esi_13
    eax_102, esi_13 = sub_483128(*esi_12, 4, 6)
    *(ebx_4 + 0x3f4) = eax_102
    sub_483950(*esi_13, eax_102)
    *(esp_44 - 0x2c) = 2
    *(esp_44 - 0x30) = "Hilfetext"
    *(esp_44 - 0x34) = 0x50
    *(esp_44 - 0x38) = 2
    *(esp_44 - 0x3c) = 0
    *(esp_44 - 0x40) = 0x3f800000
    int32_t edx_58
    edx_58.b = 1
    *(*esi_13 + 0x9e0) = sub_483f98(*esi_13, edx_58, 4, x87_r0)
    *(esp_44 - 0x2c) = 0
    *(esp_44 - 0x30) = 0
    *(esp_44 - 0x34) = 0
    *(esp_44 - 0x38) = 0
    *(esp_44 - 0x3c) = 1
    *(esp_44 - 0x40) = 0
    *(esp_44 - 0x44) = 0
    void* esp_79
    *(esp_79 - 8) = 0x3f800000
    int32_t eax_107
    int32_t* esi_14
    eax_107, esi_14 = sub_483128(*esi_13, 0, 0)
    *(ebx_4 + 0x3f0) = eax_107
    sub_483950(*esi_14, *(ebx_4 + 0x3f0))
    *(esp_79 - 0xc) = 3
    *(esp_79 - 0x10) = 0
    *(esp_79 - 0x14) = 0
    *(esp_79 - 0x18) = 3
    *(esp_79 - 0x1c) = 0
    int32_t edx_61
    edx_61.b = 0xa
    int32_t edx_62
    int32_t* esi_15
    edx_62, esi_15 = sub_483d54(*esi_14, edx_61, 0x352)
    *(esp_79 - 0x20) = 0x25
    *(esp_79 - 0x24) = 0
    *(esp_79 - 0x28) = 0
    *(esp_79 - 0x2c) = 6
    *(esp_79 - 0x30) = 0
    edx_62.b = 0xa
    int32_t edx_63
    int32_t* esi_16
    edx_63, esi_16 = sub_483d54(*esi_15, edx_62, 0x305)
    *(esp_79 - 0x34) = 0x47
    *(esp_79 - 0x38) = 0
    *(esp_79 - 0x3c) = 0
    *(esp_79 - 0x40) = 4
    *(esp_79 - 0x44) = 0
    edx_63.b = 0xa
    int32_t edx_64
    int32_t* esi_17
    edx_64, esi_17 = sub_483d54(*esi_16, edx_63, 0x305)
    *(esp_79 - 0x48) = 0x23a
    *(esp_79 - 0x4c) = 0
    *(esp_79 - 0x50) = 0
    *(esp_79 - 0x54) = 5
    *(esp_79 - 0x58) = 0
    edx_64.b = 0xa
    int32_t* esi_18 = sub_483d54(*esi_17, edx_64, 0x305)
    bool o_10 = unimplemented  {imul eax, eax, 0x1038}
    
    if (o_10)
        sub_403010()
        noreturn
    
    *(*(*esi_18 + 0xab0) + *(ebx_4 + 0x3f0) * 0x81c0 + 0x26) = 0
    *(esp_79 - 0x5c) = 0x1d
    *(esp_79 - 0x60) = "FPS:0"
    int32_t edx_66
    edx_66.b = 1
    int32_t eax_116
    int32_t edx_67
    eax_116, edx_67 = sub_484b3c(*esi_18)
    *(ebx_4 + 0x3fc) = eax_116
    *(esp_79 - 0x5c) = 2
    *(esp_79 - 0x60) = &data_47fadc
    edx_67.b = 1
    *(ebx_4 + 0x400) = sub_484b3c(*esi_18)
    bool o_11 = unimplemented  {imul eax, eax, 0x1038}
    
    if (o_11)
        sub_403010()
        noreturn
    
    int32_t edx_72 = *(*esi_18 + 0x10e8) - 1
    
    if (edx_72 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_12 = unimplemented  {imul edx, edx, 0x23}
    
    if (o_12)
        sub_403010()
        noreturn
    
    *(*(*esi_18 + 0xab0) + *(*esi_18 + 0x10d8) * 0x81c0 + (edx_72 + 1) * 0x118 - 0x74) = 0x3f333333
    void* esp_110
    *(esp_110 + 4) = 0
    sub_47a200(*(*esi_18 + 0x10e4), *(*esi_18 + 0x10d8), *esi_18)
    *(esp_110 + 4) = 0
    sub_47a200(*(*esi_18 + 0x10e8), *(*esi_18 + 0x10d8), *esi_18)
    sub_4834fc(*esi_18, *(ebx_4 + 0x3f0))
    *(esp_110 + 4) = 0x2bc
    *esp_110 = 0x1f4
    *(esp_110 - 4) = 1
    *(esp_110 - 8) = "OpenVisualComponents - Einstellungen"
    *(esp_110 - 0xc) = 1
    *(esp_110 - 0x10) = 0
    *(esp_110 - 0x14) = 0
    *(esp_110 - 0x18) = 0x3f800000
    int32_t eax_131
    void* ebp_8
    int32_t* esi_19
    eax_131, ebp_8, esi_19 = sub_483128(*esi_18, 0x32, 0x32)
    *(ebx_4 + 0x3e8) = eax_131
    sub_483950(*esi_19, *(ebx_4 + 0x3e8))
    *(esp_110 - 0x1c) = 0x50
    *(esp_110 - 0x20) = "Schrift/Border"
    *(esp_110 - 0x24) = 0x122
    *(esp_110 - 0x28) = 0xfa
    *(esp_110 - 0x2c) = 0x435c0000
    *(esp_110 - 0x30) = 0x3f800000
    int32_t edx_79
    edx_79.b = 0x13
    int32_t eax_134
    int32_t edx_80
    eax_134, edx_80 = sub_483f98(*esi_19, edx_79, 0xa, x87_r0)
    *(ebx_4 + 0x4c8) = eax_134
    *(esp_110 - 0x1c) = 0x5a
    *(esp_110 - 0x20) = "Font (Charwidth):"
    edx_80.b = 1
    sub_484b3c(*esi_19)
    *(esp_110 - 0x1c) = 0x78
    *(esp_110 - 0x20) = "Schrift (normal) RGBA:"
    int32_t edx_81
    edx_81.b = 1
    sub_484b3c(*esi_19)
    *(esp_110 - 0x1c) = 0x96
    *(esp_110 - 0x20) = "Schrift (fokus) RGBA:"
    int32_t edx_82
    edx_82.b = 1
    sub_484b3c(*esi_19)
    *(esp_110 - 0x1c) = 0xb4
    *(esp_110 - 0x20) = "Schrift (disabled) RGBA:"
    int32_t edx_83
    edx_83.b = 1
    void* ecx_71 = sub_484b3c(*esi_19)
    *(esp_110 - 0x1c) = ebp_8
    sub_47d0c0(4, 1, ecx_71)
    *(esp_110 - 0x1c) = 0x5a
    *(esp_110 - 0x20) = "Border 1 (oben) RGBA:"
    int32_t edx_84
    edx_84.b = 1
    sub_484b3c(*esi_19)
    *(esp_110 - 0x1c) = 0x78
    *(esp_110 - 0x20) = "Border 2 (def) RGBA:"
    int32_t edx_85
    edx_85.b = 1
    void* ecx_74 = sub_484b3c(*esi_19)
    void* esp_149
    *(esp_149 + 4) = ebp_8
    sub_47d0c0(2, 2, ecx_74)
    *(esp_149 + 4) = 0x154
    *esp_149 = "OpenVC-Ordner:"
    int32_t edx_86
    edx_86.b = 1
    sub_484b3c(*esi_19)
    *(esp_149 + 4) = 0xd2
    *esp_149 = "Schriftabstand %:"
    int32_t edx_87
    edx_87.b = 1
    void* ecx_77 = sub_484b3c(*esi_19)
    *(esp_149 + 4) = ebp_8
    sub_47d0c0(1, 1, ecx_77)
    *(esp_149 + 4) = 0x5f
    *esp_149 = "Arial"
    *(esp_149 - 4) = 0x78
    *(esp_149 - 8) = 0
    *(esp_149 - 0xc) = 0x43000000
    *(esp_149 - 0x10) = 0x3f800000
    int32_t edx_88
    edx_88.b = 0xc
    int32_t eax_144
    int32_t edx_89
    eax_144, edx_89 = sub_483f98(*esi_19, edx_88, 0xa0, x87_r0)
    *(ebx_4 + 0x408) = eax_144
    void* esp_169
    *(esp_169 + 0x14) = 0x7d
    *(esp_169 + 0x10) = "99999999"
    *(esp_169 + 0xc) = 0x59
    *(esp_169 + 8) = 1
    *(esp_169 + 4) = 0x41000000
    *esp_169 = 0x3f800000
    edx_89.b = 0xc
    int32_t eax_146
    int32_t edx_90
    eax_146, edx_90 = sub_483f98(*esi_19, edx_89, 0xc8, x87_r0)
    *(ebx_4 + 0x40c) = eax_146
    *(esp_169 + 0x14) = 0x9b
    *(esp_169 + 0x10) = "99999999"
    *(esp_169 + 0xc) = 0x59
    *(esp_169 + 8) = 1
    *(esp_169 + 4) = 0x41000000
    *esp_169 = 0x3f800000
    edx_90.b = 0xc
    int32_t eax_148
    int32_t edx_91
    eax_148, edx_91 = sub_483f98(*esi_19, edx_90, 0xc8, x87_r0)
    *(ebx_4 + 0x410) = eax_148
    *(esp_169 + 0x14) = 0xb9
    *(esp_169 + 0x10) = "99999999"
    *(esp_169 + 0xc) = 0x59
    *(esp_169 + 8) = 1
    *(esp_169 + 4) = 0x41000000
    *esp_169 = 0x3f800000
    edx_91.b = 0xc
    int32_t eax_150
    void* ecx_82
    eax_150, ecx_82 = sub_483f98(*esi_19, edx_91, 0xc8, x87_r0)
    *(ebx_4 + 0x414) = eax_150
    *(esp_169 + 0x14) = ebp_8
    sub_47d0c0(4, 1, ecx_82)
    *(esp_169 + 0x14) = 0x5f
    *(esp_169 + 0x10) = "00354570"
    *(esp_169 + 0xc) = 0x59
    *(esp_169 + 8) = 1
    *(esp_169 + 4) = 0x41000000
    *esp_169 = 0x3f800000
    int32_t edx_92
    edx_92.b = 0xc
    int32_t eax_152
    int32_t edx_93
    eax_152, edx_93 = sub_483f98(*esi_19, edx_92, 0xc8, x87_r0)
    *(ebx_4 + 0x418) = eax_152
    *(ebx_4 + 0x4b4) = *(ebx_4 + 0x418)
    *(esp_169 + 0x14) = 0x7d
    *(esp_169 + 0x10) = "00003380"
    *(esp_169 + 0xc) = 0x59
    *(esp_169 + 8) = 1
    *(esp_169 + 4) = 0x41000000
    *esp_169 = 0x3f800000
    edx_93.b = 0xc
    int32_t eax_155
    void* ecx_85
    eax_155, ecx_85 = sub_483f98(*esi_19, edx_93, 0xc8, x87_r0)
    *(ebx_4 + 0x41c) = eax_155
    *(ebx_4 + 0x4b8) = *(ebx_4 + 0x41c)
    *(esp_169 + 0x14) = ebp_8
    sub_47d0c0(2, 2, ecx_85)
    *(esp_169 + 0x14) = 0x159
    *(esp_169 + 0x10) = "data\openvc\"
    *(esp_169 + 0xc) = 0x78
    *(esp_169 + 8) = 0
    *(esp_169 + 4) = 0x43000000
    *esp_169 = 0x3f800000
    int32_t edx_94
    edx_94.b = 0xc
    int32_t eax_158
    int32_t edx_95
    eax_158, edx_95 = sub_483f98(*esi_19, edx_94, 0xa0, x87_r0)
    *(ebx_4 + 0x420) = eax_158
    *(esp_169 + 0x14) = 0xd7
    *(esp_169 + 0x10) = &data_47fc10
    *(esp_169 + 0xc) = 0x50
    *(esp_169 + 8) = 1
    *(esp_169 + 4) = 0x40400000
    *esp_169 = 0x3f800000
    edx_95.b = 0xc
    int32_t eax_160
    void* ecx_88
    eax_160, ecx_88 = sub_483f98(*esi_19, edx_95, 0xa0, x87_r0)
    *(ebx_4 + 0x424) = eax_160
    *(esp_169 + 0x14) = ebp_8
    sub_47d0c0(1, 1, ecx_88)
    *(esp_169 + 0x14) = 0x186
    *(esp_169 + 0x10) = "Infos"
    *(esp_169 + 0xc) = 0x104
    *(esp_169 + 8) = 0x6e
    *(esp_169 + 4) = 0
    *esp_169 = 0x3f800000
    int32_t edx_96
    edx_96.b = 0x12
    sub_483f98(*esi_19, edx_96, 0x14, x87_r0)
    *(esp_169 + 0x14) = 0x1a4
    *(esp_169 + 0x10) = "FPS:"
    int32_t edx_97
    edx_97.b = 1
    sub_484b3c(*esi_19)
    *(esp_169 + 0x14) = 0x1a4
    *(esp_169 + 0x10) = 0x47fc24
    int32_t edx_98
    edx_98.b = 1
    sub_484b3c(*esi_19)
    *(esp_169 + 0x14) = 0x1c2
    *(esp_169 + 0x10) = "Position:"
    int32_t edx_99
    edx_99.b = 1
    sub_484b3c(*esi_19)
    *(esp_169 + 0x14) = 0x1a4
    *(esp_169 + 0x10) = &data_47fc3c
    int32_t edx_100
    edx_100.b = 1
    int32_t eax_166
    int32_t edx_101
    eax_166, edx_101 = sub_484b3c(*esi_19)
    *(ebx_4 + 0x43c) = eax_166
    *(esp_169 + 0x14) = 0x1a4
    *(esp_169 + 0x10) = &data_47fc40
    edx_101.b = 1
    int32_t eax_168
    int32_t edx_102
    eax_168, edx_102 = sub_484b3c(*esi_19)
    *(ebx_4 + 0x438) = eax_168
    *(esp_169 + 0x14) = 0x1c2
    *(esp_169 + 0x10) = &data_47fc44
    edx_102.b = 1
    int32_t eax_170
    int32_t edx_103
    eax_170, edx_103 = sub_484b3c(*esi_19)
    *(ebx_4 + 0x440) = eax_170
    *(esp_169 + 0x14) = 0x1c2
    *(esp_169 + 0x10) = &data_47fc44
    edx_103.b = 1
    int32_t eax_172
    int32_t edx_104
    eax_172, edx_104 = sub_484b3c(*esi_19)
    *(ebx_4 + 0x444) = eax_172
    *(esp_169 + 0x14) = 0x1a4
    *(esp_169 + 0x10) = "Version 4.0"
    edx_104.b = 1
    sub_484b3c(*esi_19)
    *(esp_169 + 0x14) = 0x1b8
    *(esp_169 + 0x10) = "(c) 2007 BUFOproject"
    int32_t edx_105
    edx_105.b = 1
    sub_484b3c(*esi_19)
    *(esp_169 + 0x14) = 0x1cc
    *(esp_169 + 0x10) = "all rights reserved."
    int32_t edx_106
    edx_106.b = 1
    sub_484b3c(*esi_19)
    *(esp_169 + 0x14) = 0x1a4
    *(esp_169 + 0x10) = &data_47fc44
    int32_t edx_107
    edx_107.b = 1
    *(*esi_19 + 0x10ec) = sub_484b3c(*esi_19)
    *(esp_169 + 0x14) = 0x32
    *(esp_169 + 0x10) = "OpenGL"
    *(esp_169 + 0xc) = 0xc8
    void* esp_258
    *(esp_258 - 8) = 0x12c
    *(esp_258 - 0xc) = 0
    *(esp_258 - 0x10) = 0x3f800000
    void* edx_108
    edx_108.b = 0x12
    sub_483f98(*esi_19, edx_108, 0x136, x87_r0)
    *(esp_258 + 4) = 0x50
    *esp_258 = "GL_CULL_FACE:"
    int32_t edx_109
    edx_109.b = 1
    sub_484b3c(*esi_19)
    void* esp_274
    *(esp_274 + 4) = 0x8c
    *esp_274 = "GL_DEPTH_TEST:"
    int32_t edx_110
    edx_110.b = 1
    sub_484b3c(*esi_19)
    *(esp_274 + 4) = 0xc8
    *esp_274 = "GL_COL.MATERIAL:"
    int32_t edx_111
    edx_111.b = 1
    sub_484b3c(*esi_19)
    *(esp_274 + 4) = 0x104
    *esp_274 = "GL_BLEND:"
    int32_t edx_112
    edx_112.b = 1
    sub_484b3c(*esi_19)
    *(esp_274 + 4) = 0x140
    *esp_274 = "GL_MATERIAL:"
    int32_t edx_113
    edx_113.b = 1
    sub_484b3c(*esi_19)
    *(esp_274 + 4) = 0x17c
    *esp_274 = "Stenciltest:"
    int32_t edx_114
    edx_114.b = 1
    sub_484b3c(*esi_19)
    *(esp_274 + 4) = 0x1b8
    *esp_274 = "16 Bit Test:"
    int32_t edx_115
    edx_115.b = 1
    sub_484b3c(*esi_19)
    *(esp_274 + 4) = 0x6e
    *esp_274 = "HorList2"
    *(esp_274 - 4) = 0x96
    void* esp_292
    *(esp_292 - 8) = 0x14
    *(esp_292 - 0xc) = 0x3ca3d70a
    *(esp_292 - 0x10) = 0x3f800000
    int32_t edx_116
    edx_116.b = 0x11
    int32_t eax_187 = sub_483f98(*esi_19, edx_116, 0x140, x87_r0)
    *(esp_292 + 4) = 0
    sub_47b650(*esi_19, eax_187, "Enabled")
    *esp_292 = 0
    sub_47b650(*esi_19, eax_187, "Disabled")
    *(ebx_4 + 0x490) = eax_187
    *(esp_292 - 4) = 0xaa
    *(esp_292 - 8) = "HorList2"
    *(esp_292 - 0xc) = 0x96
    *(esp_292 - 0x10) = 0x14
    *(esp_292 - 0x14) = 0x3ca3d70a
    *(esp_292 - 0x18) = 0x3f800000
    void* esp_308 = esp_292 - 0x18
    int32_t edx_119
    edx_119.b = 0x11
    int32_t eax_191 = sub_483f98(*esi_19, edx_119, 0x140, x87_r0)
    *(esp_308 + 0x14) = 0
    sub_47b650(*esi_19, eax_191, "Enabled")
    *(esp_308 + 0x10) = 0
    sub_47b650(*esi_19, eax_191, "Disabled")
    *(ebx_4 + 0x494) = eax_191
    *(esp_308 + 0xc) = 0xe6
    *(esp_308 + 8) = "HorList2"
    *(esp_308 + 4) = 0x96
    *esp_308 = 0x14
    *(esp_308 - 4) = 0x3ca3d70a
    *(esp_308 - 8) = 0x3f800000
    int32_t edx_122
    edx_122.b = 0x11
    int32_t eax_195 = sub_483f98(*esi_19, edx_122, 0x140, x87_r0)
    *(esp_308 + 0xc) = 0
    sub_47b650(*esi_19, eax_195, "Disabled")
    *(esp_308 + 8) = 0
    sub_47b650(*esi_19, eax_195, "GL_EMISSION")
    *(esp_308 + 4) = 0
    sub_47b650(*esi_19, eax_195, "GL_AMBIENT")
    *esp_308 = 0
    sub_47b650(*esi_19, eax_195, "GL_DIFFUSE")
    *(esp_308 - 4) = 0
    sub_47b650(*esi_19, eax_195, "GL_SPECULAR")
    *(esp_308 - 8) = 0
    sub_47b650(*esi_19, eax_195, "GL_AMBIENT&D.")
    *(ebx_4 + 0x498) = eax_195
    *(esp_308 - 0xc) = 0x122
    *(esp_308 - 0x10) = "HorList2"
    *(esp_308 - 0x14) = 0x96
    *(esp_308 - 0x18) = 0x14
    *(esp_308 - 0x1c) = 0x3ca3d70a
    *(esp_308 - 0x20) = 0x3f800000
    int32_t edx_129
    edx_129.b = 0x11
    int32_t eax_203 = sub_483f98(*esi_19, edx_129, 0x140, x87_r0)
    *(esp_308 - 0xc) = 0
    sub_47b650(*esi_19, eax_203, "Enabled")
    *(esp_308 - 0x10) = 0
    sub_47b650(*esi_19, eax_203, "Disabled")
    *(ebx_4 + 0x4a0) = eax_203
    *(esp_308 - 0x14) = 0x15e
    *(esp_308 - 0x18) = "HorList2"
    *(esp_308 - 0x1c) = 0x96
    *(esp_308 - 0x20) = 0x14
    *(esp_308 - 0x24) = 0x3ca3d70a
    void* esp_330
    *(esp_330 - 8) = 0x3f800000
    int32_t edx_132
    edx_132.b = 0x11
    int32_t eax_207 = sub_483f98(*esi_19, edx_132, 0x140, x87_r0)
    *(esp_330 + 0xc) = 0
    sub_47b650(*esi_19, eax_207, "Disabled")
    *(esp_330 + 8) = 0
    sub_47b650(*esi_19, eax_207, "GL_EMISSION")
    *(esp_330 + 4) = 0
    sub_47b650(*esi_19, eax_207, "GL_AMBIENT")
    *esp_330 = 0
    sub_47b650(*esi_19, eax_207, "GL_DIFFUSE")
    *(esp_330 - 4) = 0
    sub_47b650(*esi_19, eax_207, "GL_SPECULAR")
    *(esp_330 - 8) = 0
    sub_47b650(*esi_19, eax_207, "GL_AMBIENT&D.")
    *(esp_330 - 0xc) = 0
    sub_47b650(*esi_19, eax_207, "GL_SHININESS")
    *(esp_330 - 0x10) = 0
    sub_47b650(*esi_19, eax_207, "GL_COLOR_INDEXES")
    *(ebx_4 + 0x49c) = eax_207
    *(esp_330 - 0x14) = 0x19a
    *(esp_330 - 0x18) = "HorList2"
    *(esp_330 - 0x1c) = 0x96
    *(esp_330 - 0x20) = 0x14
    *(esp_330 - 0x24) = 0x3ca3d70a
    *(esp_330 - 0x28) = 0x3f800000
    void* esp_354 = esp_330 - 0x28
    int32_t edx_141
    edx_141.b = 0x11
    int32_t eax_217 = sub_483f98(*esi_19, edx_141, 0x140, x87_r0)
    *(esp_354 + 0x14) = 0
    sub_47b650(*esi_19, eax_217, "Enabled")
    *(esp_354 + 0x10) = 0
    sub_47b650(*esi_19, eax_217, "Disabled")
    *(ebx_4 + 0x4a4) = eax_217
    *(esp_354 + 0xc) = 0x1d6
    *(esp_354 + 8) = "HorList2"
    *(esp_354 + 4) = 0x96
    *esp_354 = 0x14
    *(esp_354 - 4) = 0x3ca3d70a
    *(esp_354 - 8) = 0x3f800000
    int32_t edx_144
    edx_144.b = 0x11
    int32_t eax_221 = sub_483f98(*esi_19, edx_144, 0x140, x87_r0)
    *(esp_354 + 0xc) = 0
    sub_47b650(*esi_19, eax_221, "Enabled")
    *(esp_354 + 8) = 0
    sub_47b650(*esi_19, eax_221, "Disabled")
    *(ebx_4 + 0x4a8) = eax_221
    *(esp_354 + 4) = 0xb4
    *esp_354 = "Einstellungen"
    *(esp_354 - 4) = 0x8c
    *(esp_354 - 8) = 0x12c
    *(esp_354 - 0xc) = 0
    *(esp_354 - 0x10) = 0x3f800000
    int32_t edx_147
    edx_147.b = 0x12
    sub_483f98(*esi_19, edx_147, 0x21c, x87_r0)
    *(esp_354 + 4) = 0xdc
    *esp_354 = "Aktualisieren"
    *(esp_354 - 4) = 0x8c
    *(esp_354 - 8) = 0x24
    *(esp_354 - 0xc) = 0x3ca3d70a
    *(esp_354 - 0x10) = 0x3f800000
    *(ebx_4 + 0x428) = sub_483f98(*esi_19, 0, 0x21c, x87_r0)
    *(esp_354 + 4) = 0x109
    *esp_354 = "Grafikoptionen"
    *(esp_354 - 4) = 0x8c
    *(esp_354 - 8) = 0x24
    *(esp_354 - 0xc) = 0x3ca3d70a
    *(esp_354 - 0x10) = 0x3f800000
    *(ebx_4 + 0x42c) = sub_483f98(*esi_19, 0, 0x21c, x87_r0)
    *(esp_354 + 4) = 0x136
    *esp_354 = "GLInfo"
    *(esp_354 - 4) = 0x8c
    *(esp_354 - 8) = 0x24
    *(esp_354 - 0xc) = 0x3ca3d70a
    *(esp_354 - 0x10) = 0x3f800000
    *(ebx_4 + 0x434) = sub_483f98(*esi_19, 0, 0x21c, x87_r0)
    *(esp_354 + 4) = 0x163
    *esp_354 = &data_47fe00
    *(esp_354 - 4) = 0x8c
    *(esp_354 - 8) = 0x24
    *(esp_354 - 0xc) = 0x3ca3d70a
    *(esp_354 - 0x10) = 0x3f800000
    int32_t eax_232
    int32_t edx_152
    eax_232, edx_152 = sub_483f98(*esi_19, 0, 0x21c, x87_r0)
    *(ebx_4 + 0x430) = eax_232
    *(esp_354 + 4) = 0x32
    *esp_354 = "Sonstige"
    *(esp_354 - 4) = 0x8c
    *(esp_354 - 8) = 0x12c
    *(esp_354 - 0xc) = 0
    *(esp_354 - 0x10) = 0x3f800000
    edx_152.b = 0x12
    sub_483f98(*esi_19, edx_152, 0x21c, x87_r0)
    *(esp_354 + 4) = 0x55
    *esp_354 = "Drehgeschw."
    int32_t edx_153
    edx_153.b = 1
    sub_484b3c(*esi_19)
    *(esp_354 + 4) = 0x78
    *esp_354 = &data_47fe20
    *(esp_354 - 4) = 0x28
    void* esp_410
    *(esp_410 - 8) = 0
    *(esp_410 - 0xc) = 0x40400000
    *(esp_410 - 0x10) = 0x3f800000
    int32_t edx_154
    edx_154.b = 0xc
    int32_t eax_236
    int32_t edx_155
    eax_236, edx_155 = sub_483f98(*esi_19, edx_154, 0x222, x87_r0)
    *(ebx_4 + 0x4d4) = eax_236
    *(esp_410 + 4) = 0x78
    *esp_410 = &data_47fe24
    *(esp_410 - 4) = 0x28
    *(esp_410 - 8) = 0
    *(esp_410 - 0xc) = 0x40400000
    *(esp_410 - 0x10) = 0x3f800000
    edx_155.b = 0xc
    int32_t eax_238
    int32_t edx_156
    eax_238, edx_156 = sub_483f98(*esi_19, edx_155, 0x24c, x87_r0)
    *(ebx_4 + 0x4d8) = eax_238
    *(esp_410 + 4) = 0x78
    *esp_410 = &data_47fe28
    *(esp_410 - 4) = 0x28
    *(esp_410 - 8) = 0
    *(esp_410 - 0xc) = 0x40400000
    *(esp_410 - 0x10) = 0x3f800000
    edx_156.b = 0xc
    int32_t eax_240
    int32_t edx_157
    eax_240, edx_157 = sub_483f98(*esi_19, edx_156, 0x276, x87_r0)
    *(ebx_4 + 0x4dc) = eax_240
    void* esp_431
    *(esp_431 + 0x14) = 0x96
    *(esp_431 + 0x10) = "Border 3 (unten) RGBA:"
    edx_157.b = 1
    sub_484b3c(*esi_19)
    *(esp_431 + 0x14) = 0xb4
    *(esp_431 + 0x10) = "Border 4 (weg) RGBA:"
    int32_t edx_158
    edx_158.b = 1
    sub_484b3c(*esi_19)
    *(esp_431 + 0x14) = 0xd2
    *(esp_431 + 0x10) = "Elem-Backgr. RGBA:"
    int32_t edx_159
    edx_159.b = 1
    sub_484b3c(*esi_19)
    *(esp_431 + 0x14) = 0xf0
    *(esp_431 + 0x10) = "Windowstyle:"
    int32_t edx_160
    edx_160.b = 1
    sub_484b3c(*esi_19)
    *(esp_431 + 0x14) = 0x10e
    *(esp_431 + 0x10) = "Highlight:"
    int32_t edx_161
    edx_161.b = 1
    sub_484b3c(*esi_19)
    *(esp_431 + 0x14) = 0x9b
    *(esp_431 + 0x10) = "00354570"
    *(esp_431 + 0xc) = 0x59
    *(esp_431 + 8) = 1
    *(esp_431 + 4) = 0x41000000
    *esp_431 = 0x3f800000
    int32_t edx_162
    edx_162.b = 0xc
    int32_t eax_247
    int32_t edx_163
    eax_247, edx_163 = sub_483f98(*esi_19, edx_162, 0xc8, x87_r0)
    *(ebx_4 + 0x4bc) = eax_247
    *(esp_431 + 0x14) = 0xb9
    *(esp_431 + 0x10) = "00003380"
    *(esp_431 + 0xc) = 0x59
    *(esp_431 + 8) = 1
    *(esp_431 + 4) = 0x41000000
    *esp_431 = 0x3f800000
    edx_163.b = 0xc
    int32_t eax_249
    int32_t edx_164
    eax_249, edx_164 = sub_483f98(*esi_19, edx_163, 0xc8, x87_r0)
    *(ebx_4 + 0x4c0) = eax_249
    *(esp_431 + 0x14) = 0xd7
    *(esp_431 + 0x10) = "00003380"
    *(esp_431 + 0xc) = 0x59
    *(esp_431 + 8) = 1
    *(esp_431 + 4) = 0x41000000
    *esp_431 = 0x3f800000
    edx_164.b = 0xc
    int32_t eax_251
    int32_t edx_165
    eax_251, edx_165 = sub_483f98(*esi_19, edx_164, 0xc8, x87_r0)
    *(ebx_4 + 0x4c4) = eax_251
    *(esp_431 + 0x14) = 0xf6
    *(esp_431 + 0x10) = "HorList2"
    *(esp_431 + 0xc) = 0x96
    *(esp_431 + 8) = 0x14
    *(esp_431 + 4) = 0x3ca3d70a
    *esp_431 = 0x3f800000
    edx_165.b = 0x11
    *(ebx_4 + 0x4d0) = sub_483f98(*esi_19, edx_165, 0x78, x87_r0)
    *(esp_431 + 0x14) = 0
    sub_47b650(*esi_19, *(ebx_4 + 0x4d0), "Default")
    *(esp_431 + 0x10) = 0
    sub_47b650(*esi_19, *(ebx_4 + 0x4d0), "Rounded")
    *(esp_431 + 0xc) = 0
    sub_47b650(*esi_19, *(ebx_4 + 0x4d0), "Gebogen")
    *(esp_431 + 8) = 0x114
    *(esp_431 + 4) = "HorList2"
    *esp_431 = 0x96
    *(esp_431 - 4) = 0x14
    void* esp_474
    *(esp_474 - 8) = 0x3ca3d70a
    *(esp_474 - 0xc) = 0x3f800000
    int32_t edx_169
    edx_169.b = 0x11
    *(ebx_4 + 0x4cc) = sub_483f98(*esi_19, edx_169, 0x78, x87_r0)
    *(esp_474 + 8) = 0
    sub_47b650(*esi_19, *(ebx_4 + 0x4cc), "Shining")
    *(esp_474 + 4) = 0
    sub_47b650(*esi_19, *(ebx_4 + 0x4cc), "Shining+Turning")
    *esp_474 = 0
    sub_47b650(*esi_19, *(ebx_4 + 0x4cc), "Spiegel")
    *(esp_474 - 4) = 0
    void* ecx_167 = sub_47b650(*esi_19, *(ebx_4 + 0x4cc), "Schatten")
    *(esp_474 - 8) = ebp_8
    void* esp_490 = esp_474 - 8
    sub_47d0c0(0x10, 2, ecx_167)
    *esp_490 = 0x2c
    *(esp_490 - 4) = 0x8c
    *(esp_490 - 8) = 0x28
    *(esp_490 - 0xc) = 8
    *(esp_490 - 0x10) = "Schrift"
    *(esp_490 - 0x14) = 0
    *(esp_490 - 0x18) = 0x2d
    *(esp_490 - 0x1c) = 0x28
    *(esp_490 - 0x20) = 0x14
    *(esp_490 - 0x24) = 5
    *(esp_490 - 0x28) = 0x3fa66666
    int32_t edx_174
    edx_174.b = 0xa
    int32_t eax_264
    int32_t edx_175
    void* ebx_5
    eax_264, edx_175, ebx_5 = sub_483958(*esi_19, edx_174, 0x25, x87_r0)
    *(ebx_5 + 0x4ac) = eax_264
    *esp_490 = 0x2c
    *(esp_490 - 4) = 0x8c
    *(esp_490 - 8) = 0x28
    *(esp_490 - 0xc) = 8
    *(esp_490 - 0x10) = "Border"
    *(esp_490 - 0x14) = 0
    *(esp_490 - 0x18) = 0x2d
    *(esp_490 - 0x1c) = 0x28
    *(esp_490 - 0x20) = 0x14
    *(esp_490 - 0x24) = 5
    *(esp_490 - 0x28) = 0x3fa66666
    edx_175.b = 0xa
    int32_t eax_266
    void* ebx_6
    eax_266, ebx_6 = sub_483958(*esi_19, edx_175, 0x93, x87_r0)
    *(ebx_6 + 0x4b0) = eax_266
    void** eax_268
    void* ebx_7
    int32_t** esi_20
    eax_268, ebx_7, esi_20 = sub_48341c(*esi_19, 1, "Grafik/Sound")
    *(ebx_7 + 0x3ec) = eax_268
    sub_483950(*esi_20, *(ebx_7 + 0x3ec))
    *(esp_490 + 0x198) = 0x1ae
    *(esp_490 + 0x194) = 0x8c
    *(esp_490 + 0x190) = 0x28
    *(esp_490 + 0x18c) = 8
    *(esp_490 + 0x188) = &data_47ff48
    *(esp_490 + 0x184) = 0
    *(esp_490 + 0x180) = 0x2d
    *(esp_490 + 0x17c) = 0x28
    *(esp_490 + 0x178) = 0x14
    *(esp_490 + 0x174) = 5
    *(esp_490 + 0x170) = 0x3fa66666
    int32_t edx_177
    edx_177.b = 0xa
    int32_t edx_178
    void* ebx_8
    edx_178, ebx_8 = sub_483958(*esi_20, edx_177, 0x104, x87_r0)
    *(ebp_8 - 0x1c) = 0x6e
    *(ebp_8 - 0x20) = 0xc
    int32_t eax_271 = *(ebp_8 - 0x20)
    
    if (add_overflow(eax_271, 0x82))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_271 + 0x82, 0xfffffffb))
        sub_403010()
        noreturn
    
    *(esp_490 + 0x198) = eax_271 + 0x7d
    *(esp_490 + 0x194) = "HorList2"
    *(esp_490 + 0x190) = 0xcd
    *(esp_490 + 0x18c) = 0x92
    *(esp_490 + 0x188) = 0
    *(esp_490 + 0x184) = 0x3f800000
    int32_t ecx_171 = *(ebp_8 - 0x1c)
    
    if (add_overflow(ecx_171, 0x88))
        sub_403010()
        noreturn
    
    if (add_overflow(ecx_171 + 0x88, 0x1e))
        sub_403010()
        noreturn
    
    edx_178.b = 0x11
    int32_t eax_275
    int32_t edx_179
    eax_275, edx_179 = sub_483f98(*esi_20, edx_178, ecx_171 + 0xa6, x87_r0)
    void* esp_535 = esp_490 + 0x19c
    *(ebx_8 + 0x448) = eax_275
    int32_t eax_278 = *((*esi_20)[0x288] + 0x18)
    
    if (eax_278 s> 0)
        *(ebp_8 - 0x24) = eax_278
        int32_t edi_18 = 1
        int32_t i_1
        
        do
            *(esp_535 - 4) = 0
            *(esp_535 - 8) = ebp_8 - 0x5c
            bool o_17 = unimplemented  {imul eax, edi, 0x3}
            
            if (o_17)
                sub_403010()
                noreturn
            
            *(ebp_8 - 0x74) = *(*((*esi_20)[0x288] + 0x14) + edi_18 * 0xc)
            *(ebp_8 - 0x70) = 0
            bool o_18 = unimplemented  {imul eax, edi, 0x3}
            
            if (o_18)
                sub_403010()
                noreturn
            
            *(ebp_8 - 0x6c) = *(*((*esi_20)[0x288] + 0x14) + edi_18 * 0xc + 4)
            *(ebp_8 - 0x68) = 0
            bool o_19 = unimplemented  {imul eax, edi, 0x3}
            
            if (o_19)
                sub_403010()
                noreturn
            
            *(ebp_8 - 0x64) = *(*((*esi_20)[0x288] + 0x14) + edi_18 * 0xc + 8)
            *(ebp_8 - 0x60) = 0
            sub_409ae0(2, ebp_8 - 0x74, "%d x %d, %d")
            esp_535 -= 4
            sub_47b650(*esi_20, *(ebx_8 + 0x448), *(ebp_8 - 0x5c))
            edi_18 += 1
            i_1 = *(ebp_8 - 0x24)
            *(ebp_8 - 0x24) -= 1
        while (i_1 != 1)
    
    int32_t eax_288 = *(ebp_8 - 0x20)
    
    if (add_overflow(eax_288, 0x32))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_288 + 0x32, 0xfffffffa))
        sub_403010()
        noreturn
    
    *(esp_535 - 4) = eax_288 + 0x2c
    *(esp_535 - 8) = "Bildschirmmodus"
    *(esp_535 - 0xc) = 0x190
    *(esp_535 - 0x10) = 0x168
    *(esp_535 - 0x14) = 0
    *(esp_535 - 0x18) = 0x3f800000
    int32_t ecx_176 = *(ebp_8 - 0x1c)
    
    if (add_overflow(ecx_176, 0x1e))
        sub_403010()
        noreturn
    
    if (add_overflow(ecx_176 + 0x1e, 0xffffffec))
        sub_403010()
        noreturn
    
    edx_179.b = 0x12
    sub_483f98(*esi_20, edx_179, ecx_176 + 0xa, x87_r0)
    int32_t eax_292 = *(ebp_8 - 0x20)
    
    if (add_overflow(eax_292, 0x5a))
        sub_403010()
        noreturn
    
    *(esp_535 - 4) = eax_292 + 0x5a
    *(esp_535 - 8) = "Fenster"
    
    if (add_overflow(*(ebp_8 - 0x1c), 0x24))
        sub_403010()
        noreturn
    
    int32_t edx_191
    edx_191.b = 4
    int32_t eax_295
    int32_t edx_192
    eax_295, edx_192 = sub_484b3c(*esi_20)
    *(ebx_8 + 0x458) = eax_295
    int32_t eax_296 = *(ebp_8 - 0x20)
    
    if (add_overflow(eax_296, 0x82))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_296 + 0x82, 0xfffffffb))
        sub_403010()
        noreturn
    
    *(esp_535 - 4) = eax_296 + 0x7d
    *(esp_535 - 8) = "Vollbild"
    edx_192.b = 4
    int32_t eax_300
    int32_t edx_193
    eax_300, edx_193 = sub_484b3c(*esi_20)
    *(ebx_8 + 0x44c) = eax_300
    *(esp_535 - 4) = 0
    *(esp_535 - 8) = "Bildschirmmodus"
    edx_193.b = 5
    int32_t eax_302 = sub_484b3c(*esi_20)
    *(ebx_8 + 0x450) = eax_302
    sub_47b3d8(*esi_20, eax_302, *(ebx_8 + 0x458))
    sub_47b3d8(*esi_20, *(ebx_8 + 0x450), *(ebx_8 + 0x44c))
    int32_t eax_305 = *(ebp_8 - 0x20)
    
    if (add_overflow(eax_305, 0x5a))
        sub_403010()
        noreturn
    
    *(esp_535 - 4) = eax_305 + 0x5a
    *(esp_535 - 8) = "HorList2"
    *(esp_535 - 0xc) = 0xcd
    *(esp_535 - 0x10) = 0x62
    *(esp_535 - 0x14) = 0
    *(esp_535 - 0x18) = 0x3f800000
    int32_t ecx_184 = *(ebp_8 - 0x1c)
    
    if (add_overflow(ecx_184, 0x88))
        sub_403010()
        noreturn
    
    if (add_overflow(ecx_184 + 0x88, 0x1e))
        sub_403010()
        noreturn
    
    int32_t edx_196
    edx_196.b = 0x11
    void* esp_560 = esp_535
    *(ebx_8 + 0x45c) = sub_483f98(*esi_20, edx_196, ecx_184 + 0xa6, x87_r0)
    int32_t eax_310 = (*esi_20)[0x28a]
    
    if (eax_310 s> 0)
        *(ebp_8 - 0x24) = eax_310
        int32_t edi_22 = 1
        int32_t i_2
        
        do
            *(esp_560 - 4) = 0
            *(esp_560 - 8) = ebp_8 - 0x78
            bool o_31 = unimplemented  {imul eax, edi, 0x3}
            
            if (o_31)
                sub_403010()
                noreturn
            
            *(ebp_8 - 0x4c) = *((*esi_20)[0x289] + edi_22 * 0xc)
            *(ebp_8 - 0x48) = 0
            bool o_32 = unimplemented  {imul eax, edi, 0x3}
            
            if (o_32)
                sub_403010()
                noreturn
            
            *(ebp_8 - 0x44) = *((*esi_20)[0x289] + edi_22 * 0xc + 4)
            *(ebp_8 - 0x40) = 0
            sub_409ae0(1, ebp_8 - 0x4c, "%d x %d")
            esp_560 -= 4
            sub_47b650(*esi_20, *(ebx_8 + 0x45c), *(ebp_8 - 0x78))
            edi_22 += 1
            i_2 = *(ebp_8 - 0x24)
            *(ebp_8 - 0x24) -= 1
        while (i_2 != 1)
    
    sub_47b3d8(*esi_20, *(ebx_8 + 0x458), *(ebx_8 + 0x45c))
    sub_47b3d8(*esi_20, *(ebx_8 + 0x44c), *(ebx_8 + 0x448))
    *(esp_560 - 4) = 0x172
    *(esp_560 - 8) = 0xe6
    *(esp_560 - 0xc) = 0x28
    *(esp_560 - 0x10) = 8
    *(esp_560 - 0x14) = 0x47ffa0
    *(esp_560 - 0x18) = 0
    *(esp_560 - 0x1c) = 0x2d
    *(esp_560 - 0x20) = 0x28
    *(esp_560 - 0x24) = 0x14
    *(esp_560 - 0x28) = 5
    *(esp_560 - 0x2c) = 0x3fa66666
    int32_t edx_205
    edx_205.b = 0xa
    int32_t eax_321
    void* ebx_9
    eax_321, ebx_9 = sub_483958(*esi_20, edx_205, 0xc8, x87_r0)
    *(ebx_9 + 0x460) = eax_321
    *(ebp_8 - 0x1c) = 0xffffff60
    *(ebp_8 - 0x20) = 0x7d
    *(esp_560 - 4) = 0
    sub_47a180(eax_321, *(ebx_9 + 0x3ec), *esi_20)
    int32_t eax_323 = *(ebp_8 - 0x20)
    
    if (add_overflow(eax_323, 0x32))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_323 + 0x32, 0xf))
        sub_403010()
        noreturn
    
    *(esp_560 - 4) = eax_323 + 0x41
    *(esp_560 - 8) = "Grafikdetail"
    *(esp_560 - 0xc) = 0x190
    *(esp_560 - 0x10) = 0xbe
    *(esp_560 - 0x14) = 0
    *(esp_560 - 0x18) = 0x3f800000
    int32_t ecx_193 = *(ebp_8 - 0x1c)
    
    if (add_overflow(ecx_193, 0x12c))
        sub_403010()
        noreturn
    
    if (add_overflow(ecx_193 + 0x12c, 0xffffffec))
        sub_403010()
        noreturn
    
    int32_t edx_207
    edx_207.b = 0x12
    sub_483f98(*esi_20, edx_207, ecx_193 + 0x118, x87_r0)
    int32_t eax_327 = *(ebp_8 - 0x20)
    
    if (add_overflow(eax_327, 0x7d))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_327 + 0x7d, 8))
        sub_403010()
        noreturn
    
    *(esp_560 - 4) = eax_327 + 0x85
    *(esp_560 - 8) = "Texturgenauigkeit"
    
    if (add_overflow(*(ebp_8 - 0x1c), 0x11e))
        sub_403010()
        noreturn
    
    int32_t edx_208
    edx_208.b = 1
    sub_484b3c(*esi_20)
    int32_t eax_331 = *(ebp_8 - 0x20)
    
    if (add_overflow(eax_331, 0x82))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_331 + 0x82, 8))
        sub_403010()
        noreturn
    
    *(esp_560 - 4) = eax_331 + 0x8a
    *(esp_560 - 8) = "HorList2"
    *(esp_560 - 0xc) = 0xb4
    *(esp_560 - 0x10) = 0x14
    *(esp_560 - 0x14) = 0x3ca3d70a
    *(esp_560 - 0x18) = 0x3f800000
    int32_t ecx_198 = *(ebp_8 - 0x1c)
    
    if (add_overflow(ecx_198, 0x1d6))
        sub_403010()
        noreturn
    
    int32_t edx_209
    edx_209.b = 0x11
    int32_t eax_335 = sub_483f98(*esi_20, edx_209, ecx_198 + 0x1d6, x87_r0)
    *(esp_560 - 4) = 0
    sub_47b650(*esi_20, eax_335, "Niedriges Detail")
    *(esp_560 - 8) = 0
    sub_47b650(*esi_20, eax_335, "Standard")
    *(esp_560 - 0xc) = 0
    sub_47b650(*esi_20, eax_335, "Hohes Detail")
    *(ebx_9 + 0x464) = eax_335
    int32_t eax_339 = *(ebp_8 - 0x20)
    
    if (add_overflow(eax_339, 0x5f))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_339 + 0x5f, 4))
        sub_403010()
        noreturn
    
    *(esp_560 - 0x10) = eax_339 + 0x63
    *(esp_560 - 0x14) = "3D - Detailstufe"
    
    if (add_overflow(*(ebp_8 - 0x1c), 0x11e))
        sub_403010()
        noreturn
    
    int32_t edx_213
    edx_213.b = 1
    sub_484b3c(*esi_20)
    int32_t eax_343 = *(ebp_8 - 0x20)
    
    if (add_overflow(eax_343, 0x64))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_343 + 0x64, 4))
        sub_403010()
        noreturn
    
    *(esp_560 - 0x10) = eax_343 + 0x68
    *(esp_560 - 0x14) = "HorList2"
    *(esp_560 - 0x18) = 0xb4
    void* esp_598
    *(esp_598 - 8) = 0x14
    *(esp_598 - 0xc) = 0x3ca3d70a
    *(esp_598 - 0x10) = 0x3f800000
    int32_t ecx_205 = *(ebp_8 - 0x1c)
    
    if (add_overflow(ecx_205, 0x1d6))
        sub_403010()
        noreturn
    
    int32_t edx_214
    edx_214.b = 0x11
    int32_t eax_347 = sub_483f98(*esi_20, edx_214, ecx_205 + 0x1d6, x87_r0)
    *(esp_598 + 4) = 0
    sub_47b650(*esi_20, eax_347, "Sehr niedrig")
    *esp_598 = 0
    sub_47b650(*esi_20, eax_347, "Niedrig")
    *(esp_598 - 4) = 0
    sub_47b650(*esi_20, eax_347, "Standard")
    *(esp_598 - 8) = 0
    sub_47b650(*esi_20, eax_347, "Hoch")
    *(esp_598 - 0xc) = 0
    sub_47b650(*esi_20, eax_347, "Sehr hoch")
    *(esp_598 - 0x10) = 0
    sub_47b650(*esi_20, eax_347, "Extrem hoch")
    *(ebx_9 + 0x478) = eax_347
    int32_t eax_354 = *(ebp_8 - 0x20)
    
    if (add_overflow(eax_354, 0xa0))
        sub_403010()
        noreturn
    
    *(esp_598 - 0x14) = eax_354 + 0xa0
    *(esp_598 - 0x18) = "Effekte (nur 32 Bit)"
    
    if (add_overflow(*(ebp_8 - 0x1c), 0x11e))
        sub_403010()
        noreturn
    
    int32_t edx_221
    edx_221.b = 1
    sub_484b3c(*esi_20)
    int32_t eax_357 = *(ebp_8 - 0x20)
    
    if (add_overflow(eax_357, 0xa5))
        sub_403010()
        noreturn
    
    *(esp_598 - 0x14) = eax_357 + 0xa5
    *(esp_598 - 0x18) = "HorList2"
    *(esp_598 - 0x1c) = 0xb4
    void* esp_614
    *(esp_614 - 8) = 0x14
    *(esp_614 - 0xc) = 0x3ca3d70a
    *(esp_614 - 0x10) = 0x3f800000
    int32_t ecx_215 = *(ebp_8 - 0x1c)
    
    if (add_overflow(ecx_215, 0x1d6))
        sub_403010()
        noreturn
    
    int32_t edx_222
    edx_222.b = 0x11
    int32_t eax_360 = sub_483f98(*esi_20, edx_222, ecx_215 + 0x1d6, x87_r0)
    *(esp_614 + 4) = 0
    sub_47b650(*esi_20, eax_360, "Keine")
    *esp_614 = 0
    sub_47b650(*esi_20, eax_360, "Reflektion")
    *(esp_614 - 4) = 0
    sub_47b650(*esi_20, eax_360, "Schatten")
    *(esp_614 - 8) = 0
    sub_47b650(*esi_20, eax_360, "Alle")
    *(ebx_9 + 0x468) = eax_360
    int32_t eax_365 = *(ebp_8 - 0x20)
    
    if (add_overflow(eax_365, 0xc3))
        sub_403010()
        noreturn
    
    *(esp_614 - 0xc) = eax_365 + 0xc3
    *(esp_614 - 0x10) = "Effekte Detail"
    
    if (add_overflow(*(ebp_8 - 0x1c), 0x11e))
        sub_403010()
        noreturn
    
    int32_t edx_227
    edx_227.b = 1
    sub_484b3c(*esi_20)
    int32_t eax_368 = *(ebp_8 - 0x20)
    
    if (add_overflow(eax_368, 0xc8))
        sub_403010()
        noreturn
    
    *(esp_614 - 0xc) = eax_368 + 0xc8
    *(esp_614 - 0x10) = "HorList2"
    *(esp_614 - 0x14) = 0xb4
    *(esp_614 - 0x18) = 0x14
    *(esp_614 - 0x1c) = 0x3ca3d70a
    *(esp_614 - 0x20) = 0x3f800000
    int32_t ecx_223 = *(ebp_8 - 0x1c)
    
    if (add_overflow(ecx_223, 0x1d6))
        sub_403010()
        noreturn
    
    int32_t edx_228
    edx_228.b = 0x11
    int32_t eax_371 = sub_483f98(*esi_20, edx_228, ecx_223 + 0x1d6, x87_r0)
    *(esp_614 - 0xc) = 0
    sub_47b650(*esi_20, eax_371, "Niedrig")
    *(esp_614 - 0x10) = 0
    sub_47b650(*esi_20, eax_371, "Standard")
    *(esp_614 - 0x14) = 0
    sub_47b650(*esi_20, eax_371, "Hoch")
    *(ebx_9 + 0x47c) = eax_371
    *(ebp_8 - 0x1c) = 0xffffff56
    *(ebp_8 - 0x20) = 0xffffffba
    int32_t eax_375 = *(ebp_8 - 0x20)
    
    if (add_overflow(eax_375, 0xf0))
        sub_403010()
        noreturn
    
    *(esp_614 - 0x18) = eax_375 + 0xf0
    *(esp_614 - 0x1c) = 0x4800f4
    *(esp_614 - 0x20) = 0x190
    *(esp_614 - 0x24) = 0x96
    void* esp_635
    *(esp_635 - 8) = 0
    *(esp_635 - 0xc) = 0x3f800000
    int32_t ecx_228 = *(ebp_8 - 0x1c)
    
    if (add_overflow(ecx_228, 0x118))
        sub_403010()
        noreturn
    
    int32_t edx_232
    edx_232.b = 0x12
    int32_t eax_378
    int32_t edx_233
    eax_378, edx_233 = sub_483f98(*esi_20, edx_232, ecx_228 + 0x118, x87_r0)
    *(ebp_8 - 0x18) = eax_378
    int32_t eax_379 = *(ebp_8 - 0x20)
    
    if (add_overflow(eax_379, 0x113))
        sub_403010()
        noreturn
    
    *(esp_635 + 8) = eax_379 + 0x113
    *(esp_635 + 4) = "Sprachausgabe"
    
    if (add_overflow(*(ebp_8 - 0x1c), 0x11e))
        sub_403010()
        noreturn
    
    edx_233.b = 1
    sub_484b3c(*esi_20)
    int32_t eax_382 = *(ebp_8 - 0x20)
    
    if (add_overflow(eax_382, 0x118))
        sub_403010()
        noreturn
    
    *(esp_635 + 8) = eax_382 + 0x118
    *(esp_635 + 4) = "HorList2"
    *esp_635 = 0x96
    *(esp_635 - 4) = 0x14
    *(esp_635 - 8) = 0x3ca3d70a
    *(esp_635 - 0xc) = 0x3f800000
    int32_t ecx_232 = *(ebp_8 - 0x1c)
    
    if (add_overflow(ecx_232, 0x1d6))
        sub_403010()
        noreturn
    
    int32_t edx_234
    edx_234.b = 0x11
    int32_t eax_385 = sub_483f98(*esi_20, edx_234, ecx_232 + 0x1d6, x87_r0)
    *(esp_635 + 8) = 0
    sub_47b650(*esi_20, eax_385, "Aus")
    *(esp_635 + 4) = 0
    sub_47b650(*esi_20, eax_385, "Ein (20%)")
    *esp_635 = 0
    sub_47b650(*esi_20, eax_385, "Ein (40%)")
    *(esp_635 - 4) = 0
    sub_47b650(*esi_20, eax_385, "Ein (60%)")
    *(esp_635 - 8) = 0
    sub_47b650(*esi_20, eax_385, "Ein (80%)")
    *(esp_635 - 0xc) = 0
    sub_47b650(*esi_20, eax_385, "Ein (100%)")
    *(ebx_9 + 0x480) = eax_385
    int32_t eax_392 = *(ebp_8 - 0x20)
    
    if (add_overflow(eax_392, 0x136))
        sub_403010()
        noreturn
    
    *(esp_635 - 0x10) = eax_392 + 0x136
    void* esp_655
    *(esp_655 - 8) = "Soundeffekte"
    
    if (add_overflow(*(ebp_8 - 0x1c), 0x11e))
        sub_403010()
        noreturn
    
    int32_t edx_241
    edx_241.b = 1
    sub_484b3c(*esi_20)
    int32_t eax_395 = *(ebp_8 - 0x20)
    
    if (add_overflow(eax_395, 0x13b))
        sub_403010()
        noreturn
    
    *(esp_655 - 4) = eax_395 + 0x13b
    *(esp_655 - 8) = "HorList2"
    *(esp_655 - 0xc) = 0x96
    *(esp_655 - 0x10) = 0x14
    *(esp_655 - 0x14) = 0x3ca3d70a
    *(esp_655 - 0x18) = 0x3f800000
    int32_t ecx_242 = *(ebp_8 - 0x1c)
    
    if (add_overflow(ecx_242, 0x1d6))
        sub_403010()
        noreturn
    
    int32_t edx_242
    edx_242.b = 0x11
    int32_t eax_398 = sub_483f98(*esi_20, edx_242, ecx_242 + 0x1d6, x87_r0)
    *(esp_655 - 4) = 0
    sub_47b650(*esi_20, eax_398, "Aus")
    *(esp_655 - 8) = 0
    sub_47b650(*esi_20, eax_398, "Ein (20%)")
    *(esp_655 - 0xc) = 0
    sub_47b650(*esi_20, eax_398, "Ein (40%)")
    *(esp_655 - 0x10) = 0
    sub_47b650(*esi_20, eax_398, "Ein (60%)")
    *(esp_655 - 0x14) = 0
    sub_47b650(*esi_20, eax_398, "Ein (80%)")
    *(esp_655 - 0x18) = 0
    sub_47b650(*esi_20, eax_398, "Ein (100%)")
    *(ebx_9 + 0x484) = eax_398
    int32_t eax_405 = *(ebp_8 - 0x20)
    
    if (add_overflow(eax_405, 0x159))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_405 + 0x159, 0))
        sub_403010()
        noreturn
    
    *(esp_655 - 0x1c) = eax_405 + 0x159
    void* esp_671
    *(esp_671 - 8) = "Musik"
    
    if (add_overflow(*(ebp_8 - 0x1c), 0x11e))
        sub_403010()
        noreturn
    
    int32_t edx_249
    edx_249.b = 1
    sub_484b3c(*esi_20)
    int32_t eax_409 = *(ebp_8 - 0x20)
    
    if (add_overflow(eax_409, 0x15e))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_409 + 0x15e, 0))
        sub_403010()
        noreturn
    
    *(esp_671 - 4) = eax_409 + 0x15e
    *(esp_671 - 8) = "HorList2"
    *(esp_671 - 0xc) = 0x96
    *(esp_671 - 0x10) = 0x14
    *(esp_671 - 0x14) = 0x3ca3d70a
    *(esp_671 - 0x18) = 0x3f800000
    int32_t ecx_252 = *(ebp_8 - 0x1c)
    
    if (add_overflow(ecx_252, 0x1d6))
        sub_403010()
        noreturn
    
    int32_t edx_250
    edx_250.b = 0x11
    int32_t eax_413 = sub_483f98(*esi_20, edx_250, ecx_252 + 0x1d6, x87_r0)
    *(esp_671 - 4) = 0
    sub_47b650(*esi_20, eax_413, "Aus")
    *(esp_671 - 8) = 0
    sub_47b650(*esi_20, eax_413, "Ein (20%)")
    *(esp_671 - 0xc) = 0
    sub_47b650(*esi_20, eax_413, "Ein (40%)")
    *(esp_671 - 0x10) = 0
    sub_47b650(*esi_20, eax_413, "Ein (60%)")
    *(esp_671 - 0x14) = 0
    sub_47b650(*esi_20, eax_413, "Ein (80%)")
    *(esp_671 - 0x18) = 0
    sub_47b650(*esi_20, eax_413, "Ein (100%)")
    *(ebx_9 + 0x488) = eax_413
    int32_t eax_420 = *(ebp_8 - 0x20)
    
    if (add_overflow(eax_420, 0xffffff1a))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_420 - 0xe6, 0x1e))
        sub_403010()
        noreturn
    
    *(ebp_8 - 0x20) = eax_420 - 0xc8
    int32_t eax_423 = *(ebp_8 - 0x20)
    
    if (add_overflow(eax_423, 0x17c))
        sub_403010()
        noreturn
    
    *(esp_671 - 0x1c) = eax_423 + 0x17c
    void* esp_687
    *(esp_687 - 8) = "Musiktitel"
    
    if (add_overflow(*(ebp_8 - 0x1c), 0x11e))
        sub_403010()
        noreturn
    
    int32_t edx_257
    edx_257.b = 1
    sub_484b3c(*esi_20)
    int32_t eax_426 = *(ebp_8 - 0x20)
    
    if (add_overflow(eax_426, 0x181))
        sub_403010()
        noreturn
    
    *(esp_687 - 4) = eax_426 + 0x181
    *(esp_687 - 8) = "HorList2"
    *(esp_687 - 0xc) = 0xdc
    *(esp_687 - 0x10) = 0x14
    *(esp_687 - 0x14) = 0x3ca3d70a
    *(esp_687 - 0x18) = 0x3f800000
    int32_t ecx_262 = *(ebp_8 - 0x1c)
    
    if (add_overflow(ecx_262, 0x190))
        sub_403010()
        noreturn
    
    int32_t edx_258
    edx_258.b = 0x11
    int32_t eax_429 = sub_483f98(*esi_20, edx_258, ecx_262 + 0x190, x87_r0)
    *(esp_687 - 4) = 0
    sub_47b650(*esi_20, eax_429, "Gemischt")
    *(esp_687 - 8) = 0
    sub_47b650(*esi_20, eax_429, "1 - Voices")
    *(esp_687 - 0xc) = 0
    sub_47b650(*esi_20, eax_429, "2 - Day Dream")
    *(esp_687 - 0x10) = 0
    sub_47b650(*esi_20, eax_429, "3 - Dance Station")
    *(esp_687 - 0x14) = 0
    sub_47b650(*esi_20, eax_429, "4 - Disco Stuff")
    *(esp_687 - 0x18) = 0
    sub_47b650(*esi_20, eax_429, "5 - The 55 BPM Track")
    *(esp_687 - 0x1c) = 0
    sub_47b650(*esi_20, eax_429, "6 - Funky Brass")
    *(ebx_9 + 0x48c) = eax_429
    int32_t eax_437 = *(ebp_8 - 0x20)
    
    if (add_overflow(eax_437, 0x154))
        sub_403010()
        noreturn
    
    void* esp_703
    *(esp_703 - 8) = eax_437 + 0x154
    *(esp_703 - 0xc) = "Musik"
    *(esp_703 - 0x10) = 0x190
    *(esp_703 - 0x14) = 0x96
    *(esp_703 - 0x18) = 0
    *(esp_703 - 0x1c) = 0x3f800000
    int32_t ecx_271 = *(ebp_8 - 0x1c)
    
    if (add_overflow(ecx_271, 0x118))
        sub_403010()
        noreturn
    
    int32_t edx_266
    edx_266.b = 0x12
    sub_483f98(*esi_20, edx_266, ecx_271 + 0x118, x87_r0)
    *(esp_703 - 8) = 0x50
    *(esp_703 - 0xc) = "Grafik/Sound"
    *(esp_703 - 0x10) = 0
    *(esp_703 - 0x14) = 0
    *(esp_703 - 0x18) = 0x435c0000
    *(esp_703 - 0x1c) = 0x3f800000
    int32_t edx_267
    edx_267.b = 0x13
    int32_t eax_441
    int32_t edx_268
    eax_441, edx_268 = sub_483f98(*esi_20, edx_267, 0xa, x87_r0)
    *(ebx_9 + 0x454) = eax_441
    *(esp_703 - 8) = 0x129
    *(esp_703 - 0xc) = "Schatteneffekt"
    edx_268.b = 4
    int32_t eax_443
    int32_t edx_269
    eax_443, edx_269 = sub_484b3c(*esi_20)
    *(ebx_9 + 0x46c) = eax_443
    *(esp_703 - 8) = 0x129
    *(esp_703 - 0xc) = "Spiegelung"
    edx_269.b = 4
    int32_t eax_445
    int32_t ecx_276
    eax_445, ecx_276 = sub_484b3c(*esi_20)
    void* esp_731 = esp_703 - 4
    *(ebx_9 + 0x470) = eax_445
    int32_t eax_446 = *(ebp_8 - 0x18)
    
    if (add_overflow(eax_446, 0xffffffff))
        sub_403010()
        noreturn
    
    if (eax_446 - 1 s>= 2)
        *(ebp_8 - 0x24) = eax_446 - 2
        int32_t edi_32 = 2
        int32_t i_3
        
        do
            int32_t edx_270 = *(ebx_9 + 0x458)
            
            if (edx_270 u> 0xff)
                sub_403008()
                noreturn
            
            ecx_276.b = 0x20
            sub_402e64(ebp_8 - 0x98, edx_270.b, ecx_276.b)
            int32_t eax_451 = *(ebx_9 + 0x44c)
            
            if (eax_451 u> 0xff)
                sub_403008()
                noreturn
            
            *(ebp_8 - 0x98) |= 1 << ((eax_451 & 0xff) u% 0x20)
            int32_t eax_453 = *(ebx_9 + 0x45c)
            
            if (eax_453 u> 0xff)
                sub_403008()
                noreturn
            
            *(ebp_8 - 0x98) |= 1 << ((eax_453 & 0xff) u% 0x20)
            int32_t eax_455 = *(ebx_9 + 0x448)
            
            if (eax_455 u> 0xff)
                sub_403008()
                noreturn
            
            *(ebp_8 - 0x98) |= 1 << ((eax_455 & 0xff) u% 0x20)
            bool c_1 = edi_32 u< 0xff
            
            if (edi_32 == 0xff || c_1)
                c_1 = test_bit(*(ebp_8 - 0x98), edi_32)
            
            if (not(c_1))
                int32_t eax_458 = *(ebx_9 + 0x3ec)
                bool o_82 = unimplemented  {imul edx, eax, 0x1038}
                
                if (o_82)
                    sub_403010()
                    noreturn
                
                *(esp_731 - 4) = (*esi_20)[0x2ac] + eax_458 * 0x81c0
                
                if (edi_32 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_83 = unimplemented  {imul edx, edi, 0x23}
                
                if (o_83)
                    sub_403010()
                    noreturn
                
                int32_t edx_273
                edx_273.b = *(*(esp_731 - 4) + edi_32 * 0x118 - 0xf8)
                char temp91_1 = edx_273.b
                edx_273.b -= 1
                
                if (temp91_1 == 1)
                label_47f3e3:
                    *(esp_731 - 4) = 1
                    sub_47a9e0(edi_32, eax_458, *esi_20)
                    sub_47b3d8(*esi_20, *(ebx_9 + 0x454), edi_32)
                else
                    edx_273.b -= 3
                    char temp92_1 = edx_273.b
                    edx_273.b -= 2
                    
                    if (temp92_1 u< 2)
                        goto label_47f3e3
                    
                    edx_273.b -= 0xb
                    char temp94_1 = edx_273.b
                    edx_273.b -= 2
                    
                    if (temp94_1 u< 2)
                        goto label_47f3e3
            
            edi_32 += 1
            i_3 = *(ebp_8 - 0x24)
            *(ebp_8 - 0x24) -= 1
        while (i_3 != 1)
    
    int32_t edi_34 = *(ebx_9 + 0x46c)
    *(esp_731 - 4) = 1
    sub_47a9e0(edi_34, *(ebx_9 + 0x3ec), *esi_20)
    *(esp_731 - 4) = 0xffffffff
    sub_47b258(edi_34, *(ebx_9 + 0x3ec), *esi_20)
    sub_47b3d8(*esi_20, *(ebx_9 + 0x454), edi_34)
    int32_t edi_35 = *(ebx_9 + 0x470)
    *(esp_731 - 4) = 1
    sub_47a9e0(edi_35, *(ebx_9 + 0x3ec), *esi_20)
    *(esp_731 - 4) = 0xffffffff
    sub_47b258(edi_35, *(ebx_9 + 0x3ec), *esi_20)
    void* esp_741 = esp_731
    sub_47b3d8(*esi_20, *(ebx_9 + 0x454), edi_35)
    int32_t edi_36 = *(ebp_8 - 0x18)
    int32_t eax_467 = *(ebx_9 + 0x454)
    
    if (add_overflow(eax_467, 0xffffffff))
        sub_403010()
        noreturn
    
    if (eax_467 - 1 s>= edi_36)
        *(ebp_8 - 0x24) = eax_467 - 1 - edi_36 + 1
        int32_t i_4
        
        do
            int32_t edx_282 = *(ebx_9 + 0x458)
            
            if (edx_282 u> 0xff)
                sub_403008()
                noreturn
            
            int32_t ecx_287
            ecx_287.b = 0x20
            sub_402e64(ebp_8 - 0x98, edx_282.b, ecx_287.b)
            int32_t eax_472 = *(ebx_9 + 0x44c)
            
            if (eax_472 u> 0xff)
                sub_403008()
                noreturn
            
            *(ebp_8 - 0x98) |= 1 << ((eax_472 & 0xff) u% 0x20)
            int32_t eax_474 = *(ebx_9 + 0x45c)
            
            if (eax_474 u> 0xff)
                sub_403008()
                noreturn
            
            *(ebp_8 - 0x98) |= 1 << ((eax_474 & 0xff) u% 0x20)
            int32_t eax_476 = *(ebx_9 + 0x448)
            
            if (eax_476 u> 0xff)
                sub_403008()
                noreturn
            
            *(ebp_8 - 0x98) |= 1 << ((eax_476 & 0xff) u% 0x20)
            bool c_2 = edi_36 u< 0xff
            
            if (edi_36 == 0xff || c_2)
                c_2 = test_bit(*(ebp_8 - 0x98), edi_36)
            
            if (not(c_2))
                int32_t eax_479 = *(ebx_9 + 0x3ec)
                bool o_85 = unimplemented  {imul edx, eax, 0x1038}
                
                if (o_85)
                    sub_403010()
                    noreturn
                
                *(esp_741 - 4) = (*esi_20)[0x2ac] + eax_479 * 0x81c0
                
                if (edi_36 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_86 = unimplemented  {imul edx, edi, 0x23}
                
                if (o_86)
                    sub_403010()
                    noreturn
                
                int32_t edx_285
                edx_285.b = *(*(esp_741 - 4) + edi_36 * 0x118 - 0xf8)
                char temp93_1 = edx_285.b
                edx_285.b -= 1
                
                if (temp93_1 == 1)
                label_47f574:
                    *(esp_741 - 4) = 2
                    sub_47a9e0(edi_36, eax_479, *esi_20)
                    sub_47b3d8(*esi_20, *(ebx_9 + 0x454), edi_36)
                else
                    edx_285.b -= 3
                    char temp95_1 = edx_285.b
                    edx_285.b -= 2
                    
                    if (temp95_1 u< 2)
                        goto label_47f574
                    
                    edx_285.b -= 0xb
                    char temp96_1 = edx_285.b
                    edx_285.b -= 2
                    
                    if (temp96_1 u< 2)
                        goto label_47f574
            
            edi_36 += 1
            i_4 = *(ebp_8 - 0x24)
            *(ebp_8 - 0x24) -= 1
        while (i_4 != 1)
    
    sub_4834fc(*esi_20, *(ebx_9 + 0x3e8))
    *esi_20
    sub_46accc()
    *esi_20
    sub_46accc()
    *(ebp_8 - 0xc)
    void* ebp_9 = sub_442414(*esi_20, 0)
    *esi_20
    sub_46accc()
    *esi_20
    sub_46accc()
    sub_46de48(*esi_20)
    *esi_20
    sub_46accc()
    *esi_20
    sub_46accc()
    sub_408e1c((*esi_20)[0x435], ebp_9 - 0xa0)
    sub_4040c4(ebp_9 - 0x9c, "INFO: appopt.di_ovcgrafik=", *(ebp_9 - 0xa0))
    *(ebp_9 - 0x9c)
    *esi_20
    sub_46accc()
    sub_408e1c((*esi_20)[0x44c], ebp_9 - 0xa8)
    sub_4040c4(ebp_9 - 0xa4, "INFO: appopt.i_g_lbfull=", *(ebp_9 - 0xa8))
    *(ebp_9 - 0xa4)
    *esi_20
    sub_46accc()
    sub_408e1c(*((*esi_20)[0x288] + 0x18), ebp_9 - 0xb0)
    sub_4040c4(ebp_9 - 0xac, "INFO: fullscr.resolutionscount=", *(ebp_9 - 0xb0))
    *(ebp_9 - 0xac)
    *esi_20
    sub_46accc()
    sub_408e1c((*esi_20)[0x2ad], ebp_9 - 0xb8)
    sub_4040c4(ebp_9 - 0xb4, "INFO: diags.count=", *(ebp_9 - 0xb8))
    *(ebp_9 - 0xb4)
    *esi_20
    sub_46accc()
    *esi_20
    sub_46accc()
    bool o_87 = unimplemented  {imul eax, eax, 0x1038}
    
    if (o_87)
        sub_403010()
        noreturn
    
    int32_t edx_308 = (*esi_20)[0x44c] - 1
    
    if (edx_308 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_88 = unimplemented  {imul edx, edx, 0x23}
    
    if (o_88)
        sub_403010()
        noreturn
    
    *((*esi_20)[0x2ac] + (*esi_20)[0x435] * 0x81c0 + (edx_308 + 1) * 0x118 - 0x14) = 0
    sub_483950(*esi_20, (*esi_20)[0x435])
    *esi_20
    sub_46accc()
    int32_t eax_518 = *((*esi_20)[0x288] + 0x18)
    
    if (eax_518 s> 0)
        *(ebp_9 - 0x24) = eax_518
        int32_t edi_38 = 1
        int32_t i_5
        
        do
            sub_408e1c(edi_38, ebp_9 - 0xc0)
            sub_4040c4(ebp_9 - 0xbc, "res: AddString No.", *(ebp_9 - 0xc0))
            *(ebp_9 - 0xbc)
            *esi_20
            sub_46accc()
            bool o_89 = unimplemented  {imul eax, edi, 0x3}
            
            if (o_89)
                sub_403010()
                noreturn
            
            sub_408e1c(*(*((*esi_20)[0x288] + 0x14) + edi_38 * 0xc), ebp_9 - 0xc4)
            *(esp_741 - 4) = *(ebp_9 - 0xc4)
            *(esp_741 - 8) = &data_4803b4
            bool o_90 = unimplemented  {imul eax, edi, 0x3}
            
            if (o_90)
                sub_403010()
                noreturn
            
            sub_408e1c(*(*((*esi_20)[0x288] + 0x14) + edi_38 * 0xc + 4), ebp_9 - 0xc8)
            *(esp_741 - 0xc) = *(ebp_9 - 0xc8)
            *(esp_741 - 0x10) = &data_4803c0
            bool o_91 = unimplemented  {imul eax, edi, 0x3}
            
            if (o_91)
                sub_403010()
                noreturn
            
            sub_408e1c(*(*((*esi_20)[0x288] + 0x14) + edi_38 * 0xc + 8), ebp_9 - 0xcc)
            *(esp_741 - 0x14) = *(ebp_9 - 0xcc)
            *(esp_741 - 0x18) = " Bit"
            sub_404138(ebp_9 - 0x14, 6)
            *(ebp_9 - 0x14)
            *esi_20
            sub_46accc()
            *(esp_741 - 4) = 0
            esp_741 -= 4
            sub_47b650(*esi_20, (*esi_20)[0x44c], *(ebp_9 - 0x14))
            *esi_20
            sub_46accc()
            edi_38 += 1
            i_5 = *(ebp_9 - 0x24)
            *(ebp_9 - 0x24) -= 1
        while (i_5 != 1)
    
    *esi_20
    sub_46accc()
    
    if ((*esi_20)[0x228] == (*esi_20)[0x434])
        int32_t* edx_331
        edx_331.b = 0
        sub_443970(*esi_20, edx_331.b)
        sub_44399c(*esi_20, 0)
    
    *esi_20
    sub_46accc()
    *(esp_741 + 8)
    fsbase->NtTib.ExceptionList = *esp_741
    *(esp_741 + 8) = sub_47f8f0
    sub_403e1c(ebp_9 - 0xcc, 0xd)
    sub_403df8(ebp_9 - 0x78)
    sub_403df8(ebp_9 - 0x5c)
    sub_403e1c(ebp_9 - 0x3c, 6)
    return sub_403e1c(ebp_9 - 0x14, 2)
}
