// ============================================================
// 函数名称: sub_4298b4
// 虚拟地址: 0x4298b4
// WARP GUID: 56630778-78b3-566f-95df-94ad52c8df5d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetCursor, GetDesktopWindow
// [内部子函数调用]: sub_4032ac, sub_42b31c, sub_44763c, sub_429794, sub_433034, sub_433134, sub_429820, sub_4331a8, sub_43304c, sub_408968, sub_4297e4
// [被调用的父级函数]: sub_428ed8, sub_429b88
// ============================================================

int32_t __convention("regparm")sub_4298b4(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    int32_t edi
    int32_t var_c = edi
    struct HWND__* var_1c
    struct HWND__** esp_1 = &var_1c
    int32_t result
    
    if (data_531780 != 0)
    label_429909:
        LRESULT eax_12 = sub_429794(*(data_531760 + 0x8b), &var_1c, arg1, data_531760)
        esp_1 = &var_1c
        
        if (data_531780 == 0 && data_531784 != 0)
            int32_t var_20_2 = data_531774
            HWND eax_14 = GetDesktopWindow()
            data_531770
            sub_43304c(data_531784, eax_14)
            esp_1 = &var_1c
        
        bool var_18
        
        if (*(data_531760 + 0x8b) != 0)
            var_18 = data_531780 != 0
            data_531780 = 2
        else
            data_531780 = 1
            var_18 = false
        
        if (eax_12 == *(data_531764 + 4))
        label_4299c3:
            void* eax_21 = data_531764
            *(eax_21 + 0xc) = *arg1
            *(eax_21 + 0x10) = arg1[1]
            int32_t var_14
            
            if (*(data_531764 + 4) != 0)
                sub_42b31c(*(data_531764 + 4), arg1, &var_14)
                void* eax_25 = data_531764
                *(eax_25 + 0x14) = var_14
                int32_t var_10
                *(eax_25 + 0x18) = var_10
            
            int32_t var_20_3 = arg1[1]
            int32_t eax_26
            eax_26.b = 2
            sub_4297e4(eax_26)
            *arg1
            int16_t eax_29 = (*(*data_531764 + 4))(var_20_3)
            
            if (data_531784 != 0)
                if (eax_12 == 0 || (*(eax_12 + 0x41) & 0x20) != 0)
                    sub_433034(data_531784, eax_29)
                    
                    if (*(data_531784 + 0x62) != 0)
                        sub_433134(data_531784, *arg1, arg1[1])
                    else
                        int32_t var_20_4 = arg1[1]
                        HWND eax_33 = GetDesktopWindow()
                        *arg1
                        sub_43304c(data_531784, eax_33)
                else
                    sub_4331a8(data_531784)
                    SetCursor(sub_44763c(*data_530a18, sx.d(eax_29)))
            
            result = SetCursor(sub_44763c(*data_530a18, sx.d(eax_29)))
            esp_1 = &var_1c
            
            if (data_531780 == 2)
                LRESULT ebx_1
                
                if (eax_12 != 0)
                    int32_t* eax_45 = sub_429820()
                    *(data_531764 + 0x58) = eax_45
                    
                    if (eax_45 != 0)
                        sub_42b31c(eax_45, arg1, &var_14)
                        ebx_1.w = 0xffdd
                        result = sub_4032ac(eax_45, &var_14)
                        esp_1 = &var_18
                        *(data_531764 + 0x54) = result.b
                    else
                        ebx_1.w = 0xffdd
                        result = sub_4032ac(*(data_531764 + 4), data_531764 + 0x14)
                        esp_1 = &var_18
                        *(data_531764 + 0x54) = result.b
                else
                    void* eax_43 = data_531764
                    ebx_1.w = 0xffe9
                    result = sub_4032ac(*(eax_43 + 0x38), eax_43, *arg1, arg1[1])
                    esp_1 = &var_1c
                
                if (data_531764 != 0)
                    void* ebx_2 = data_531764
                    result = sub_408968(ebx_2 + 0x44, ebx_2 + 0x5c, 0x10)
                    
                    if (result.b == 0)
                        if (esp_1[1].b != 0)
                            (*(*data_531764 + 0x30))()
                        
                        (*(*data_531764 + 0x2c))()
                        result = data_531764
                        __builtin_memcpy(result + 0x5c, result + 0x44, 0x10)
        else
            void* eax_17
            eax_17.b = 1
            result = sub_4297e4(eax_17)
            
            if (data_531764 != 0)
                *(data_531764 + 4) = eax_12
                *(data_531764 + 8) = var_1c
                void* eax_20 = data_531764
                *(eax_20 + 0xc) = *arg1
                *(eax_20 + 0x10) = arg1[1]
                result = sub_4297e4(0)
                
                if (data_531764 != 0)
                    goto label_4299c3
    else
        int32_t eax_2
        int32_t edx_1
        edx_1:eax_2 = sx.q(data_531770 - *arg1)
        
        if ((eax_2 ^ edx_1) - edx_1 s>= data_53177c)
            goto label_429909
        
        int32_t eax_7
        int32_t edx_2
        edx_2:eax_7 = sx.q(data_531774 - arg1[1])
        result = (eax_7 ^ edx_2) - edx_2
        
        if (result s>= data_53177c)
            goto label_429909
    
    esp_1[4]
    esp_1[5]
    esp_1[6]
    return result
}
