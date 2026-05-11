// ============================================================
// 函数名称: sub_429540
// 虚拟地址: 0x429540
// WARP GUID: 44352df8-fb5b-57d9-bd96-debb6ea5a57b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetKeyState, PtInRect, IsWindowVisible
// [内部子函数调用]: sub_4032ac, sub_428dd8, sub_428d48, sub_429364, sub_4318d0, sub_4294fc, sub_410524, sub_43025c
// [被调用的父级函数]: sub_429794
// ============================================================

int32_t* __convention("regparm")sub_429540(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_30 = ebx
    int32_t pt = *arg1
    int32_t var_c = arg1[1]
    void* var_14 = arg2
    int32_t* result = nullptr
    int16_t eax
    eax.b = (GetKeyState(0x11) & 0x8000) != 0
    eax.b |= data_531788 == 0
    
    if (eax.b == 0)
        int32_t* ecx_1
        void* edx_2
        edx_2, ecx_1 = (*(*data_53178c + 8))()
        int32_t esi_4 = *(data_531788 + 8) - 1
        int32_t __saved_ebp
        
        if (esi_4 s>= 0)
            int32_t i_1 = esi_4 + 1
            void* edi_2 = nullptr
            int32_t i
            
            do
                edx_2 = edi_2
                int32_t* eax_4 = sub_410524(data_531788, edx_2)
                
                if (eax_4 != var_14 && eax_4[0x5a].b != 0)
                    char eax_8
                    eax_8, edx_2, ecx_1 = (*(*eax_4 + 0x4c))()
                    
                    if (eax_8 != 0)
                        BOOL eax_11
                        eax_11, ecx_1, edx_2 = IsWindowVisible(sub_4318d0(eax_4))
                        
                        if (eax_11 != 0)
                            int32_t* var_3c_2 = &__saved_ebp
                            char eax_12
                            eax_12, edx_2 = sub_4294fc(var_3c_2)
                            ecx_1 = var_3c_2
                            
                            if (eax_12 == 0)
                                if (*(var_14 + 0x90) != eax_4)
                                label_429603:
                                    char var_5 = 1
                                    ebx.w = 0xffc1
                                    RECT lprc
                                    ecx_1, edx_2 = sub_4032ac(eax_4, var_14, &lprc, &var_5, &pt)
                                    
                                    if (var_5 != 0)
                                        int32_t var_3c_4 = var_c
                                        BOOL eax_19
                                        eax_19, ecx_1, edx_2 = PtInRect(&lprc, pt)
                                        
                                        if (eax_19 != 0)
                                            ecx_1, edx_2 = sub_428d48(data_53178c, eax_4)
                                else
                                    int32_t eax_16
                                    eax_16, edx_2 = sub_43025c(eax_4)
                                    
                                    if (eax_16 s> 1)
                                        goto label_429603
                
                edi_2 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        if (*(data_53178c + 8) s> 0)
            int32_t* result_1
            result_1, edx_2 = sub_428dd8(data_53178c, edx_2, ecx_1)
            result = result_1
        
        if (result != 0)
            int32_t* var_3c_5 = &__saved_ebp
            
            if (sub_429364(result, edx_2) == 0)
                return nullptr
    
    return result
}
