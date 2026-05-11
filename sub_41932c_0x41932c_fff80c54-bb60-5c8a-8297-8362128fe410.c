// ============================================================
// 函数名称: sub_41932c
// 虚拟地址: 0x41932c
// WARP GUID: fff80c54-bb60-5c8a-8297-8362128fe410
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: StretchBlt, SelectObject, SetTextColor, DeleteDC, CreateCompatibleDC, SetBkColor
// [内部子函数调用]: sub_41e04c, sub_4030d0, sub_419794, sub_41a0dc, sub_419c14, sub_41dae0, sub_4191d0, sub_41e300, sub_41e21c
// [被调用的父级函数]: sub_4b4f8c, sub_491e20
// ============================================================

void __fastcallsub_41932c(int32_t* arg1, int32_t* arg2, int32_t* arg3 @ eax, uint32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t __saved_ebp
    int32_t* ebp = &__saved_ebp
    int32_t __saved_ebx_4
    int32_t __saved_ebx = __saved_ebx_4
    int32_t __saved_esi_4
    int32_t __saved_esi = __saved_esi_4
    int32_t __saved_edi_4
    int32_t __saved_edi = __saved_edi_4
    
    if (arg1 == 0)
        return 
    
    sub_419794(arg3)
    int32_t* var_3c = &__saved_ebp
    int32_t (* var_40)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    int32_t ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*arg3 + 0x10))(ExceptionList, var_40, var_3c)
    sub_419c14(arg3, 9)
    sub_419794(sub_41e04c(arg1))
    int32_t* var_c_1 = &__saved_ebp
    int32_t (* var_10)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_2
    ExceptionList_2 = arg2[2] - *arg2
    int32_t var_18 = arg2[3] - arg2[1]
    int32_t wSrc = arg5[2] - *arg5
    int32_t hSrc = arg5[3] - arg5[1]
    int32_t eax_11
    int32_t edx_2
    eax_11, edx_2 = sub_41e21c(var_c_1)
    
    if (eax_11 != arg4)
        edx_2.b = 1
        int32_t* eax_17 = sub_41dae0(sub_41799a+0xe2, edx_2)
        (*(*eax_17 + 8))()
        sub_41e300(eax_17, arg4)
        sub_419c14(sub_41e04c(eax_17), 1)
        int32_t var_24_1 = *(sub_41e04c(eax_17) + 4)
        int32_t var_2c_2 = 0
    else
        int32_t var_28 = 0
        HGDIOBJ h = (*(*var_c_1 + 0x64))()
        HGDIOBJ var_2c_1 = SelectObject(CreateCompatibleDC(nullptr), h)
    
    int32_t* hDest_1 = &__saved_ebp
    int32_t (* var_1c_2)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    sub_419c14(sub_41e04c(var_c_1), 1)
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1
    int32_t xDest
    
    if (sub_4191d0(arg3[5]) != 1)
        enum ROP_CODE rop = SRCCOPY
        int32_t ySrc = arg5[1]
        int32_t xSrc = *arg5
        HDC hdcSrc = *(sub_41e04c(var_c_1) + 4)
        int32_t hDest = hDest_1
        int32_t wDest = ExceptionList_2
        ExceptionList = arg2[1]
        xDest = *arg2
        StretchBlt(arg3[1], xDest, ExceptionList, wDest, hDest, hdcSrc, xSrc, ySrc, wSrc, hSrc, rop)
        ExceptionList_1 = SetTextColor(arg3[1], 0)
        COLORREF color = SetBkColor(arg3[1], 0xffffff)
        enum ROP_CODE rop_1 = 0xe20746
        int32_t ySrc_1 = arg5[1]
        int32_t xSrc_1 = *arg5
        HDC __saved_edi_3 = 0xe20746
        int32_t wDest_1 = ExceptionList_2
        ExceptionList = arg2[1]
        xDest = *arg2
        StretchBlt(arg3[1], xDest, ExceptionList, wDest_1, hDest_1, __saved_edi_3, xSrc_1, ySrc_1, 
            wSrc, hSrc, rop_1)
        SetTextColor(arg3[1], ExceptionList_1)
        SetBkColor(arg3[1], color)
        esp_1 = &ExceptionList_1
    else
        int32_t ExceptionList_3 = ExceptionList_2
        int32_t hDest_2 = hDest_1
        HDC eax_34 = *(sub_41e04c(var_c_1) + 4)
        int32_t eax_35 = *arg5
        int32_t eax_36 = arg5[1]
        HDC ExceptionList_4 = ExceptionList_3
        ExceptionList = *arg5
        xDest = arg5[1]
        esp_1 = &xDest
        ebp = sub_41a0dc(arg3[1], *arg2, arg2[1], xDest, ExceptionList, ExceptionList_4, hSrc, wSrc, 
            eax_36, eax_35, eax_34, hDest_2, ExceptionList_3)
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = sub_419592
    void* esp_5 = &esp_1[2]
    
    if (ebp[-9] != 0)
        sub_4030d0(ebp[-9])
        return 
    
    if (ebp[-0xa] != 0)
        *(esp_5 - 4) = ebp[-0xa]
        *(esp_5 - 8) = ebp[-8]
        SelectObject()
    
    *(esp_5 - 4) = ebp[-8]
    DeleteDC()
}
