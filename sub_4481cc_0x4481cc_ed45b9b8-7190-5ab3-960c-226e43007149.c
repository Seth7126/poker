// ============================================================
// 函数名称: sub_4481cc
// 虚拟地址: 0x4481cc
// WARP GUID: ed45b9b8-7190-5ab3-960c-226e43007149
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetWindowLongA, RegisterClassA, SendMessageA, DeleteMenu, GetSystemMenu, GetClassInfoA, SetClassLongA
// [内部子函数调用]: sub_403828, sub_440bfc, sub_40782c, sub_40423c, sub_405ae8, sub_403df8, sub_40b4b0, sub_448d04
// [被调用的父级函数]: sub_447f44, sub_447f54
// ============================================================

char** __convention("regparm")sub_4481cc(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_34 = ebx
    char* var_30 = nullptr
    int32_t* var_38 = &var_4
    int32_t (* var_3c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(arg1 + 0x94) == 0 && *data_530784 == 0)
        *(arg1 + 0x34) = sub_440bfc(sub_448668, arg1)
        WNDCLASSA wndClass
        
        if (GetClassInfoA(data_5314dc, data_52eaa8, &wndClass) == 0)
            data_52ea94 = data_5314dc
            
            if (RegisterClassA(0x52ea84) == 0)
                sub_405ae8(data_530090, &var_30)
                int32_t edx_2
                edx_2.b = 1
                sub_40b4b0(sub_40eacb+0x21, edx_2, var_30)
                sub_403828()
                noreturn
        
        int32_t eax_10 = (*data_5302cc)(0)
        int32_t eax_11 = eax_10 s>> 1
        bool c_1 = unimplemented  {sar eax, 0x1}
        
        if (eax_10 s>> 1 s< 0)
            eax_11 = adc.d(eax_11, 0, c_1)
        
        wndClass.hbrBackground = eax_11
        wndClass.hCursor = 1
        int32_t eax_14 = (*data_5302cc)(wndClass.hCursor, wndClass.hbrBackground)
        int32_t eax_15 = eax_14 s>> 1
        bool c_2 = unimplemented  {sar eax, 0x1}
        
        if (eax_14 s>> 1 s< 0)
            eax_15 = adc.d(eax_15, 0, c_2)
        
        wndClass.hbrBackground = eax_15
        wndClass.hCursor = 0
        wndClass.hIcon = 0
        wndClass.hInstance = 0
        wndClass.cbWndExtra = 0
        wndClass.cbClsExtra = data_5314dc
        wndClass.lpfnWndProc = 0
        *(arg1 + 0x24) = sub_40782c(0x84ca0000, sub_40423c(*(arg1 + 0x7c)), data_52eaa8, 
            wndClass.lpfnWndProc, wndClass.cbClsExtra, wndClass.cbWndExtra, wndClass.hInstance, 
            wndClass.hIcon, wndClass.hCursor, wndClass.hbrBackground, wndClass.lpszMenuName)
        sub_403df8(arg1 + 0x7c)
        *(arg1 + 0x94) = 1
        wndClass.lpszMenuName = *(arg1 + 0x34)
        wndClass.hbrBackground = 0xfffffffc
        wndClass.hCursor = *(arg1 + 0x24)
        SetWindowLongA(wndClass.hCursor, wndClass.hbrBackground, wndClass.lpszMenuName)
        
        if (*data_53040c != 0)
            wndClass.lpszMenuName = sub_448d04(arg1)
            wndClass.hbrBackground = 1
            wndClass.hCursor = 0x80
            wndClass.hIcon = *(arg1 + 0x24)
            SendMessageA(wndClass.hIcon, wndClass.hCursor, wndClass.hbrBackground, 
                wndClass.lpszMenuName)
            wndClass.lpszMenuName = sub_448d04(arg1)
            wndClass.hbrBackground = 0xfffffff2
            wndClass.hCursor = *(arg1 + 0x24)
            SetClassLongA(wndClass.hCursor, wndClass.hbrBackground, wndClass.lpszMenuName)
        
        wndClass.lpszMenuName = 0
        wndClass.hbrBackground = *(arg1 + 0x24)
        HMENU eax_32 = GetSystemMenu(wndClass.hbrBackground, wndClass.lpszMenuName)
        wndClass.lpszMenuName = 0
        wndClass.hbrBackground = 0xf030
        wndClass.hCursor = eax_32
        DeleteMenu(wndClass.hCursor, wndClass.hbrBackground, wndClass.lpszMenuName)
        wndClass.lpszMenuName = 0
        wndClass.hbrBackground = 0xf000
        wndClass.hCursor = eax_32
        DeleteMenu(wndClass.hCursor, wndClass.hbrBackground, wndClass.lpszMenuName)
        var_8
        esp = &var_8
        
        if (*data_53040c != 0)
            wndClass.lpszMenuName = 0
            wndClass.hbrBackground = 0xf010
            wndClass.hCursor = eax_32
            DeleteMenu(wndClass.hCursor, wndClass.hbrBackground, wndClass.lpszMenuName)
            esp = &var_8
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_448364
    char** result = &var_30
    sub_403df8(result)
    return result
}
