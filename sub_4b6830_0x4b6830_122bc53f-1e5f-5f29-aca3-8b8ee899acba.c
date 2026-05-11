// ============================================================
// 函数名称: sub_4b6830
// 虚拟地址: 0x4b6830
// WARP GUID: 122bc53f-1e5f-5f29-aca3-8b8ee899acba
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: PlayEnhMetaFile, SelectPalette, RealizePalette
// [内部子函数调用]: sub_4b5c08, sub_419794, sub_419a38, sub_4b6a00, sub_4b69e4, sub_419b40
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4b6830(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_c = ecx
    
    if (arg1[8] == 0)
        return 
    
    sub_419794(arg2)
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    HDC hdc_1 = sub_419b40(arg2)
    HPALETTE hdc_6 = (*(*arg1 + 0x24))(ExceptionList, var_28, var_24)
    char var_d = 0
    HDC hdc
    HPALETTE hdc_2
    
    if (hdc_6 != 0)
        BOOL bForceBkgd = 0xffffffff
        hdc_2 = hdc_6
        hdc = hdc_1
        hdc_6 = SelectPalette(hdc, hdc_2, bForceBkgd)
        RealizePalette(hdc_1)
        var_d = 1
    
    HPALETTE* var_c_2 = &hdc_2
    HPALETTE hdc_4 = arg1[8]
    hdc_2 = hdc_4
    int32_t ecx_1
    int32_t edx_1
    edx_1, ecx_1 = (*(hdc_4->unused + 0x14))(hdc_2, var_c_2)
    
    if (hdc_2.w != 4)
        int32_t eax_11
        int32_t ecx_2
        int32_t edx_2
        eax_11, ecx_2, edx_2 = sub_4b69e4(arg1, edx_1, ecx_1)
        hdc_2 = neg.d(eax_11)
        HDC hdc_3
        int32_t ecx_3
        int32_t edx_3
        hdc_3, ecx_3, edx_3 = sub_4b6a00(arg1, edx_2, ecx_2)
        hdc = hdc_3
        int32_t eax_15 = sub_4b69e4(arg1, edx_3, ecx_3)
        int32_t __saved_esi_1 = 0
        struct HPALETTE__* eax_17 = var_c_2[3]
        struct HPALETTE__* eax_19 = var_c_2[2]
        struct HPALETTE__* eax_21 = var_c_2[1]
        ExceptionList = *var_c_2
        int32_t* eax_24 = arg1[8]
        sub_4b5c08((*(*eax_24 + 0x20))(eax_24, hdc_1, ExceptionList, eax_21, eax_19, eax_17, 
            __saved_esi_1, eax_15, hdc, hdc_2, var_c_2))
    else
        HDC* lprect = &hdc
        HPALETTE hdc_5 = arg1[8]
        hdc_2 = hdc_5
        (*(hdc_5->unused + 0xc))(hdc_2, lprect)
        hdc_2 = hdc
        hdc = hdc_1
        PlayEnhMetaFile(hdc, hdc_2, lprect)
    
    if (var_d != 0)
        BOOL bForceBkgd_1 = 0xffffffff
        hdc_2 = hdc_6
        hdc = hdc_1
        SelectPalette(hdc, hdc_2, bForceBkgd_1)
    
    fsbase->NtTib.ExceptionList = arg2
    __return_addr = &data_4b6938
    sub_419a38(arg2)
}
