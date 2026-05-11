// ============================================================
// 函数名称: sub_4377d0
// 虚拟地址: 0x4377d0
// WARP GUID: 15cc6485-e8fb-5e93-85ff-1d9c03001055
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ImageList_Draw, ImageList_GetImageCount
// [内部子函数调用]: sub_41e04c, sub_4030d0, sub_41ee98, sub_41dae0, sub_40faac, sub_4373c4, sub_419720, sub_419b40, sub_438240
// [被调用的父级函数]: sub_437968
// ============================================================

int32_t __convention("regparm")sub_4377d0(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_28 = ebx
    int32_t esi
    int32_t var_2c = esi
    int32_t edi
    int32_t var_30 = edi
    int32_t edx
    int32_t var_c = edx
    void var_24
    sub_40faac(*(arg1 + 0x28), 0, 0, &var_24, *(arg1 + 0x24))
    sub_438240(arg1)
    int32_t* var_34_1 = &var_4
    int32_t (* var_38_1)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t* eax_4 = sub_41dae0(sub_41799a+0xe2, 1)
    int32_t* var_40 = &var_4
    int32_t (* var_44)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(arg1 + 0x24)
    (*(*eax_4 + 0x34))(ExceptionList, var_44, var_40, ExceptionList_1, var_38_1, var_34_1)
    *(arg1 + 0x28)
    (*(*eax_4 + 0x40))(arg1)
    int32_t edx_3
    edx_3.b = 1
    int32_t* ExceptionList_2 = sub_41dae0(sub_41799a+0xe2, edx_3)
    int32_t* himl = &var_4
    int32_t (* var_10_1)(void* arg1, void* arg2) = j_sub_4037f0
    ExceptionList_2 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_2
    sub_41ee98(ExceptionList_2, 1)
    *(arg1 + 0x24)
    (*(*ExceptionList_2 + 0x34))(ExceptionList_2, var_10_1, himl)
    *(arg1 + 0x28)
    (*(*ExceptionList_2 + 0x40))()
    
    if (ImageList_GetImageCount(himl) - 1 s>= 0)
        int32_t i = 0
        int32_t i_1
        
        do
            int32_t* eax_18 = sub_41e04c(ebp_1[-3])
            sub_419720(eax_18, &ebp_1[-8])
            enum IMAGE_LIST_DRAW_STYLE fStyle = ILD_NORMAL
            int32_t y = 0
            ExceptionList_2 = nullptr
            HDC hdcDst = sub_419b40(eax_18)
            ImageList_Draw(ebp_1[-2], i, hdcDst, ExceptionList_2, y, fStyle)
            int32_t* eax_23 = sub_41e04c(ebp_1[-4])
            sub_419720(eax_23, &ebp_1[-8])
            enum IMAGE_LIST_DRAW_STYLE fStyle_1 = ILD_MASK
            int32_t y_1 = 0
            ExceptionList_2 = nullptr
            HDC hdcDst_1 = sub_419b40(eax_23)
            ImageList_Draw(ebp_1[-2], i, hdcDst_1, ExceptionList_2, y_1, fStyle_1)
            int32_t ebx_1
            ebx_1, ebp_1, i_1 = sub_4373c4(ebp_1[-1], ebp_1[-3], ebp_1[-4])
            i = ebx_1 + 1
        while (i_1 != 1)
    
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_437925
    return sub_4030d0(ebp_1[-4])
}
