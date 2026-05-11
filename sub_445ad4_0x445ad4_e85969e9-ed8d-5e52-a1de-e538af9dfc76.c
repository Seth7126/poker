// ============================================================
// 函数名称: sub_445ad4
// 虚拟地址: 0x445ad4
// WARP GUID: e85969e9-ed8d-5e52-a1de-e538af9dfc76
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetActiveWindow, IsIconic, SetWindowPos, SetActiveWindow, SendMessageA, ShowWindow, CallWindowProcA
// [内部子函数调用]: sub_403828, sub_4032ac, sub_449c64, sub_4471a4, sub_42ee38, sub_403248, sub_444090, sub_42b9bc, sub_440aa8, sub_4471d4, sub_447198, sub_4318d0, sub_42b220, sub_405ae8, sub_42b1dc, sub_444d94, sub_4471c8, sub_40b4b0
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_445ad4(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t edi
    int32_t var_18 = edi
    char* var_c = nullptr
    int32_t* result_1 = arg1
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_2
    
    if ((result_1[8].b & 0x10) == 0 && (result_1[0xb3].b & 4) != 0)
        sub_405ae8(data_530a50, &var_c)
        int32_t edx_2
        edx_2.b = 1
        sub_40b4b0(sub_40eacb+0x7d, edx_2, var_c)
        sub_403828()
        noreturn
    
    sub_449c64(data_5317d8)
    int32_t* result_2 = result_1
    result_2[0xb3].b |= 4
    int32_t* var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList_1
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    
    if ((result_1[8].b & 0x10) == 0)
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList
        
        if (result_1[0x5a].b == 0)
            int32_t* var_34_5 = &var_4
            int32_t (* var_38_5)() = j_sub_40353c
            ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            ebx.w = 0xffb2
            sub_4032ac(result_1, 0)
            esp_1 = &ExceptionList_1
            fsbase->NtTib.ExceptionList = ExceptionList
            
            if (*(data_5317dc + 0x60) == result_1)
                sub_444d94(result_1, 0)
            
            if (*(result_1 + 0x217) == 1)
                sub_42ee38(result_1)
            else if ((result_1[0xb3].b & 8) == 0)
                HWND hWnd = nullptr
                
                if (sub_4318d0(result_1) == GetActiveWindow() && IsIconic(sub_4318d0(result_1)) == 0)
                    hWnd = sub_440aa8(sub_4318d0(result_1))
                
                if (hWnd == 0)
                    ShowWindow(sub_4318d0(result_1), SW_HIDE)
                    esp_1 = &ExceptionList_1
                else
                    enum SET_WINDOW_POS_FLAGS uFlags_1 = 0x97
                    int32_t var_48_1
                    __builtin_memset(&var_48_1, 0, 0x14)
                    int32_t cy_1
                    SetWindowPos(sub_4318d0(result_1), nullptr, 0, 0, ExceptionList, cy_1, uFlags_1)
                    SetActiveWindow(hWnd)
                    esp_1 = &ExceptionList_1
            else
                enum SET_WINDOW_POS_FLAGS uFlags = 0x97
                int32_t var_48
                __builtin_memset(&var_48, 0, 0x14)
                int32_t cy
                SetWindowPos(sub_4318d0(result_1), nullptr, 0, 0, ExceptionList, cy, uFlags)
                esp_1 = &ExceptionList_1
        else
            int32_t* var_34_1 = &var_4
            int32_t (* var_38_1)() = j_sub_40353c
            ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            ebx.w = 0xffb1
            sub_4032ac(result_1, 0)
            struct _EXCEPTION_REGISTRATION_RECORD** esp_2 = &ExceptionList_1
            fsbase->NtTib.ExceptionList = ExceptionList
            
            if (result_1[0x86].b == 4 || (result_1[0x86].b == 6 && *(result_1 + 0x217) == 1))
                if (*(result_1 + 0x217) != 1)
                    data_5317dc
                    sub_4471a4() - result_1[0xe]
                    unimplemented  {sar ebx, 0x1}
                    data_5317dc
                    sub_447198() - result_1[0xf]
                    unimplemented  {sar esi, 0x1}
                else
                    sub_42b1dc(*(data_5317d8 + 0x38)) - result_1[0xe]
                    unimplemented  {sar ebx, 0x1}
                    sub_42b220(*(data_5317d8 + 0x38)) - result_1[0xf]
                    unimplemented  {sar esi, 0x1}
                
                (*(*result_1 + 0x7c))(result_1[0xf], result_1[0xe])
                esp_2 = &result_1
                
                if (*(result_1 + 0x47) != 0)
                    sub_444090(result_1)
            else
                int32_t* eax_32
                eax_32.b = result_1[0x86].b
                
                if (eax_32.b - 6 u< 2)
                    void* esi_6 = *(data_5317d8 + 0x38)
                    
                    if (result_1[0x86].b == 7 && sub_403248(result_1[1], &data_43f580) != 0)
                        esi_6 = result_1[1]
                    
                    if (esi_6 == 0)
                        data_5317dc
                        sub_4471a4() - result_1[0xe]
                        unimplemented  {sar ebx, 0x1}
                        data_5317dc
                        sub_447198() - result_1[0xf]
                        unimplemented  {sar esi, 0x1}
                    else
                        unimplemented  {sar ebx, 0x1}
                        *(esi_6 + 0x38) - result_1[0xe]
                        *(esi_6 + 0x30)
                        unimplemented  {sar eax, 0x1}
                        *(esi_6 + 0x3c) - result_1[0xf]
                        *(esi_6 + 0x34)
                    
                    (*(*result_1 + 0x7c))(result_1[0xf], result_1[0xe])
                    esp_2 = &result_1
                    
                    if (*(result_1 + 0x47) != 0)
                        sub_444090(result_1)
                else if (eax_32.b == 5)
                    if (*(result_1 + 0x217) != 1)
                        data_5317dc
                        sub_4471d4() - result_1[0xe]
                        unimplemented  {sar ebx, 0x1}
                        data_5317dc
                        sub_4471c8() - result_1[0xf]
                        unimplemented  {sar esi, 0x1}
                    else
                        sub_42b1dc(*(data_5317d8 + 0x38)) - result_1[0xe]
                        unimplemented  {sar ebx, 0x1}
                        sub_42b220(*(data_5317d8 + 0x38)) - result_1[0xf]
                        unimplemented  {sar esi, 0x1}
                    
                    (*(*result_1 + 0x7c))(result_1[0xf], result_1[0xe])
                    esp_2 = &result_1
            
            result_1[0x86].b = 0
            
            if (*(result_1 + 0x217) != 1)
                *(esp_2 - 4) = *((zx.d(*(result_1 + 0x213)) << 2) + &data_52ea24)
                *(esp_2 - 8) = sub_4318d0(result_1)
                ShowWindow()
                esp_1 = esp_2
            else
                void* esp_10
                
                if (*(result_1 + 0x213) != 2)
                    *(esp_2 - 4) = *((zx.d(*(result_1 + 0x213)) << 2) + &data_52ea24)
                    *(esp_2 - 8) = sub_4318d0(result_1)
                    ShowWindow()
                    *(esp_2 - 4) = result_1[0xe] | result_1[0xf] << 0x10
                    *(esp_2 - 8) = 0
                    *(esp_2 - 0xc) = 5
                    *(esp_2 - 0x10) = sub_4318d0(result_1)
                    *(esp_2 - 0x14) = DefMDIChildProcA
                    CallWindowProcA()
                    esp_10 = esp_2
                    sub_42b9bc()
                else
                    *(esp_2 - 4) = 0
                    *(esp_2 - 8) = sub_4318d0(result_1)
                    *(esp_2 - 0xc) = 0x223
                    *(esp_2 - 0x10) = *(*(data_5317d8 + 0x38) + 0x23c)
                    SendMessageA()
                    *(esp_2 - 4) = 3
                    *(esp_2 - 8) = sub_4318d0(result_1)
                    ShowWindow()
                    esp_10 = esp_2
                
                *(esp_10 - 4) = 0
                *(esp_10 - 8) = 0
                *(esp_10 - 0xc) = 0x234
                *(esp_10 - 0x10) = *(*(data_5317d8 + 0x38) + 0x23c)
                SendMessageA()
                esp_1 = esp_10
    
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = 0x44602b
    int32_t* result = result_1
    result[0xb3].b &= 0xfb
    return result
}
