// ============================================================
// 函数名称: sub_517120
// 虚拟地址: 0x517120
// WARP GUID: 57d2c8e4-5aec-5038-b93a-820ec5cf71e7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47ab08, sub_516eec, sub_408e1c, sub_47b304, sub_47a140, sub_403df8
// [被调用的父级函数]: sub_5170a4
// ============================================================

struct _EXCEPTION_REGISTRATION_RECORD**sub_517120()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    void* esi_1 = data_530304
    void* edi_1 = data_5301f0
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* ebx_1 = *data_5301f4 + 0x1d344
    void* eax_1
    eax_1.b = *ebx_1
    sub_47a140(4, *(edi_1 + 4), *esi_1, eax_1.b)
    sub_47a140(5, *(edi_1 + 4), *esi_1, *ebx_1 ^ 1)
    char eax_5
    
    if (*(ebx_1 + 0xc) != 0x12 || ebx_1[8] != 0)
        eax_5 = 0
    else
        eax_5 = 1
    
    sub_47a140(8, *(edi_1 + 4), *esi_1, eax_5)
    char eax_7
    
    if (*(ebx_1 + 0xc) != 0x24 || ebx_1[8] != 0)
        eax_7 = 0
    else
        eax_7 = 1
    
    sub_47a140(9, *(edi_1 + 4), *esi_1, eax_7)
    char eax_9
    
    if (*(ebx_1 + 0xc) != 0x48 || ebx_1[8] != 0)
        eax_9 = 0
    else
        eax_9 = 1
    
    sub_47a140(0xa, *(edi_1 + 4), *esi_1, eax_9)
    sub_47a140(0xb, *(edi_1 + 4), *esi_1, ebx_1[8])
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    void* eax_13
    
    if (ebx_1[8] != 0)
        sub_408e1c(*(ebx_1 + 0xc), &var_8)
        long double x87_r0
        eax_13, ebx_1 = sub_47ab08(*esi_1, *(edi_1 + 4), 0x13, x87_r0, var_8)
        esp_1 = &var_8
    
    eax_13.b = *(ebx_1 + 0x10) == 1
    *(esp_1 - 4) = eax_13
    sub_47a140(0xe, *(edi_1 + 4), *esi_1)
    int32_t eax_18
    eax_18.b = *(ebx_1 + 0x10) == 2
    *(esp_1 - 4) = eax_18
    sub_47a140(0xf, *(edi_1 + 4), *esi_1)
    int32_t eax_20
    eax_20.b = *(ebx_1 + 0x10) == 3
    *(esp_1 - 4) = eax_20
    sub_47a140(0x10, *(edi_1 + 4), *esi_1)
    int32_t eax_22
    eax_22.b = *(ebx_1 + 0x10) == 0
    *(esp_1 - 4) = eax_22
    sub_47a140(0x11, *(edi_1 + 4), *esi_1)
    int32_t eax_24
    eax_24.b = *(ebx_1 + 4) == 1
    *(esp_1 - 4) = eax_24
    sub_47a140(0x1f, *(edi_1 + 4), *esi_1)
    int32_t eax_26
    eax_26.b = *(ebx_1 + 4) == 2
    *(esp_1 - 4) = eax_26
    sub_47a140(0x20, *(edi_1 + 4), *esi_1)
    int32_t eax_28
    eax_28.b = *(ebx_1 + 4) == 3
    *(esp_1 - 4) = eax_28
    sub_47a140(0x21, *(edi_1 + 4), *esi_1)
    int32_t eax_30
    eax_30.b = *(ebx_1 + 4) == 4
    *(esp_1 - 4) = eax_30
    sub_47a140(0x22, *(edi_1 + 4), *esi_1)
    int32_t eax_32
    eax_32.b = ebx_1[0x14]
    *(esp_1 - 4) = eax_32
    sub_47a140(0x15, *(edi_1 + 4), *esi_1)
    int32_t eax_34
    eax_34.b = ebx_1[0x15]
    void* esp_18
    *esp_18 = eax_34
    sub_47a140(0x16, *(edi_1 + 4), *esi_1)
    int32_t eax_36
    eax_36.b = ebx_1[0x16]
    *esp_18 = eax_36
    sub_47a140(0x17, *(edi_1 + 4), *esi_1)
    int32_t eax_38
    eax_38.b = ebx_1[0x1c]
    *esp_18 = eax_38
    sub_47a140(0x18, *(edi_1 + 4), *esi_1)
    int32_t eax_40
    eax_40.b = ebx_1[0x1d]
    *esp_18 = eax_40
    sub_47a140(4, *data_5301e8, *esi_1)
    int32_t eax_42
    eax_42.b = ebx_1[0x1e]
    *esp_18 = eax_42
    sub_47a140(5, *data_5301e8, *esi_1)
    int32_t eax_44
    eax_44.b = ebx_1[0x1f]
    *esp_18 = eax_44
    sub_47a140(6, *data_5301e8, *esi_1)
    int32_t eax_46
    eax_46.b = ebx_1[0x20]
    *esp_18 = eax_46
    sub_47a140(9, *data_5301e8, *esi_1)
    int32_t eax_48
    eax_48.b = ebx_1[0x20]
    eax_48.b ^= 1
    *esp_18 = eax_48
    sub_47a140(0xa, *data_5301e8, *esi_1)
    int32_t eax_50
    eax_50.b = ebx_1[0x21]
    void* esp_34
    *esp_34 = eax_50
    sub_47a140(0x19, *(edi_1 + 4), *esi_1)
    int32_t eax_52
    eax_52.b = ebx_1[0x2c]
    *esp_34 = eax_52
    sub_47a140(4, *data_5309a8, *esi_1)
    int32_t eax_54
    eax_54.b = ebx_1[0x2d]
    *esp_34 = eax_54
    sub_47a140(5, *data_5309a8, *esi_1)
    int32_t eax_56
    eax_56.b = ebx_1[0x2f]
    *esp_34 = eax_56
    sub_47a140(6, *data_5309a8, *esi_1)
    int32_t eax_58
    eax_58.b = ebx_1[0x2e]
    *esp_34 = eax_58
    sub_47a140(7, *data_5309a8, *esi_1)
    int32_t eax_60
    eax_60.b = ebx_1[0x31]
    *esp_34 = eax_60
    sub_47a140(8, *data_5309a8, *esi_1)
    int32_t eax_62
    eax_62.b = ebx_1[0x32]
    *esp_34 = eax_62
    sub_47a140(9, *data_5309a8, *esi_1)
    int32_t eax_64
    eax_64.b = ebx_1[0x33]
    *esp_34 = eax_64
    sub_47a140(0xa, *data_5309a8, *esi_1)
    int32_t eax_66
    eax_66.b = ebx_1[0x34]
    *esp_34 = eax_66
    sub_47a140(0xb, *data_5309a8, *esi_1)
    *esp_34 = *(ebx_1 + 0x24)
    sub_47b304(*data_5306d0, *data_5309a8, *esi_1)
    *esp_34 = *(ebx_1 + 0x28)
    sub_47b304(*data_5305a8, *data_5309a8, *esi_1)
    int32_t eax_72
    eax_72.b = ebx_1[0x35]
    *esp_34 = eax_72
    sub_47a140(*data_52ffc8, *data_5309a8, *esi_1)
    int32_t eax_74
    eax_74.b = ebx_1[0x36]
    *esp_34 = eax_74
    sub_47a140(*data_530068, *data_5309a8, *esi_1)
    int32_t eax_76
    eax_76.b = ebx_1[0x37]
    *esp_34 = eax_76
    sub_47a140(*data_530610, *data_5309a8, *esi_1)
    int32_t eax_78
    eax_78.b = ebx_1[0x38]
    *esp_34 = eax_78
    sub_47a140(*data_530050, *data_5309a8, *esi_1)
    int32_t eax_80
    eax_80.b = ebx_1[0x39]
    *esp_34 = eax_80
    sub_47a140(*data_530904, *data_5309a8, *esi_1)
    int32_t eax_82
    eax_82.b = ebx_1[0x39]
    eax_82.b ^= 1
    void* esp_66
    *esp_66 = eax_82
    sub_47a140(*data_53052c, *data_5309a8, *esi_1)
    int32_t eax_84
    eax_84.b = ebx_1[0x30]
    *esp_66 = eax_84
    sub_47a140(*data_530644, *data_5309a8, *esi_1)
    int32_t eax_86
    eax_86.b = ebx_1[0x3a]
    *esp_66 = eax_86
    sub_47a140(0x1a, *(edi_1 + 4), *esi_1)
    int32_t eax_88
    eax_88.b = *(ebx_1 + 0x3c) == 1
    *esp_66 = eax_88
    sub_47a140(4, *data_530764, *esi_1)
    int32_t eax_90
    eax_90.b = *(ebx_1 + 0x3c) == 2
    *esp_66 = eax_90
    sub_47a140(5, *data_530764, *esi_1)
    int32_t eax_92
    eax_92.b = *(ebx_1 + 0x3c) == 3
    *esp_66 = eax_92
    sub_47a140(6, *data_530764, *esi_1)
    int32_t eax_94
    eax_94.b = *(ebx_1 + 0x3c) == 4
    *esp_66 = eax_94
    sub_47a140(7, *data_530764, *esi_1)
    sub_516eec()
    void* esp_82 = esp_66 + 8
    *(esp_82 + 4)
    fsbase->NtTib.ExceptionList = *(esp_66 + 4)
    *(esp_82 + 4) = sub_5175fd
    struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
    sub_403df8(result)
    return result
}
