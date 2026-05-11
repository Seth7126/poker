// ============================================================
// 函数名称: sub_42f578
// 虚拟地址: 0x42f578
// WARP GUID: c36e3d2b-db10-5577-a941-ab599cfb940d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: BeginPaint, ExcludeClipRect, SaveDC, RestoreDC, EndPaint
// [内部子函数调用]: sub_42f6d0, sub_410524, sub_4318d0
// [被调用的父级函数]: sub_42f900
// ============================================================

void* __convention("regparm")sub_42f578(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_58 = ebx
    int32_t esi
    int32_t var_5c = esi
    int32_t edi
    int32_t var_60 = edi
    int32_t* var_8 = arg1
    HDC hdc = *(arg2 + 4)
    PAINTSTRUCT paint
    
    if (hdc == 0)
        hdc = BeginPaint(sub_4318d0(var_8), &paint)
    
    int32_t* var_64_2 = &var_4
    int32_t (* var_68_2)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t** esp_1
    
    if (var_8[0x4d] != 0)
        int32_t eax_5 = SaveDC(hdc)
        int32_t** esp_2 = &ExceptionList
        enum GDI_REGION_TYPE var_10_1 = SIMPLEREGION
        int32_t edi_2 = *(var_8[0x4d] + 8) - 1
        
        if (edi_2 s>= 0)
            int32_t i_1 = edi_2 + 1
            int32_t esi_1 = 0
            int32_t i
            
            do
                void* eax_10 = sub_410524(var_8[0x4d], esi_1)
                
                if (*(eax_10 + 0x47) != 0)
                label_42f617:
                    
                    if ((*(eax_10 + 0x40) & 0x40) != 0)
                        esp_2 = &ExceptionList
                        var_10_1 = ExcludeClipRect(hdc, *(eax_10 + 0x30), *(eax_10 + 0x34), 
                            *(eax_10 + 0x30) + *(eax_10 + 0x38), *(eax_10 + 0x34) + *(eax_10 + 0x3c))
                        
                        if (var_10_1 == NULLREGION)
                            break
                else if ((*(eax_10 + 0x20) & 0x10) != 0 && (*(eax_10 + 0x41) & 4) == 0)
                    goto label_42f617
                
                esi_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        if (var_10_1 != NULLREGION)
            (*(*var_8 + 0xa8))()
            esp_2 = &var_8
        
        *(esp_2 - 4) = eax_5
        *(esp_2 - 8) = hdc
        RestoreDC()
        esp_1 = esp_2
    else
        (*(*var_8 + 0xa8))()
        esp_1 = &var_8
    
    sub_42f6d0(var_8, hdc, 0)
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = sub_42f69f
    
    if (*(arg2 + 4) != 0)
        return arg2
    
    esp_1[1] = &paint
    *esp_1 = sub_4318d0(var_8)
    return EndPaint()
}
