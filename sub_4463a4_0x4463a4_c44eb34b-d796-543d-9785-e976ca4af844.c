// ============================================================
// 函数名称: sub_4463a4
// 虚拟地址: 0x4463a4
// WARP GUID: c44eb34b-d796-543d-9785-e976ca4af844
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetActiveWindow, ReleaseCapture, SendMessageA, GetCapture
// [内部子函数调用]: sub_403828, sub_4105a0, sub_4462f4, sub_447664, sub_449234, sub_4318d0, sub_446244, sub_42a190, sub_405ae8, sub_4462ec, sub_440958, sub_40b4b0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4463a4(int32_t* arg1)
{
    // 第一条实际指令: int32_t (* ebp)(void* arg1, void* arg2)
    int32_t (* ebp)(void* arg1, void* arg2)
    int32_t (* var_4)(void* arg1, void* arg2) = ebp
    int32_t ebx
    int32_t var_28 = ebx
    int32_t esi
    int32_t var_2c = esi
    char* var_24 = nullptr
    int32_t* ExceptionList_1 = arg1
    int32_t* var_30 = &var_4
    int32_t (* var_34)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_42a190()
    
    if (*(ExceptionList_1 + 0x47) == 0 && (*(*ExceptionList_1 + 0x4c))() != 0
            && (ExceptionList_1[0xb3].b & 8) == 0 && *(ExceptionList_1 + 0x217) != 1)
        uint32_t ExceptionList_2
        WPARAM wParam
        LPARAM lParam
        
        if (GetCapture() != 0)
            lParam = 0
            wParam = 0
            ExceptionList_2 = 0x1f
            SendMessageA(GetCapture(), ExceptionList_2, wParam, lParam)
        
        ReleaseCapture()
        int32_t* ExceptionList_3 = ExceptionList_1
        ExceptionList_3[0xb3].b |= 8
        HWND var_20 = GetActiveWindow()
        int32_t var_14 = data_52e980
        sub_4105a0(*(data_5317dc + 0x70), 0, *(data_5317dc + 0x6c))
        *(data_5317dc + 0x6c) = ExceptionList_1
        void* eax_14
        eax_14.w = *(data_5317dc + 0x38)
        int16_t var_16 = eax_14.w
        sub_447664(data_5317dc, 0)
        int32_t var_1c = *(data_5317dc + 0x3c)
        int32_t eax_18
        LPARAM ebp_1
        eax_18, ebp_1 = sub_440958(0)
        *(ebp_1 - 0xc) = eax_18
        lParam = ebp_1
        wParam = j_sub_4037f0
        ExceptionList_2 = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList_2
        sub_4462f4(*(ebp_1 - 4))
        __return_addr = ebp_1
        var_4 = j_sub_4037f0
        ExceptionList_1 = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList_1
        SendMessageA(sub_4318d0(*(ebp_1 - 4)), 0xb000, 0, 0)
        *(*(ebp_1 - 4) + 0x234) = 0
        int32_t i
        
        do
            sub_449234(data_5317d8)
            
            if (*(data_5317d8 + 0x8c) != 0)
                *(*(ebp_1 - 4) + 0x234) = 2
            else if (*(*(ebp_1 - 4) + 0x234) != 0)
                sub_446244(*(ebp_1 - 4))
            
            i = *(*(ebp_1 - 4) + 0x234)
        while (i == 0)
        
        *(ebp_1 - 8) = i
        SendMessageA(sub_4318d0(*(ebp_1 - 4)), 0xb001, 0, 0)
        
        if (sub_4318d0(*(ebp_1 - 4)) != GetActiveWindow())
            *(ebp_1 - 0x1c) = 0
        
        fsbase->NtTib.ExceptionList = ExceptionList_1
        __return_addr = sub_44657a
        *(ebp_1 - 4)
        return sub_4462ec()
    
    sub_405ae8(data_53046c, &var_24)
    int32_t edx_3
    edx_3.b = 1
    sub_40b4b0(sub_40eacb+0x7d, edx_3, var_24)
    sub_403828()
    noreturn
}
