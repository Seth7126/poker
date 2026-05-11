// ============================================================
// 函数名称: sub_429364
// 虚拟地址: 0x429364
// WARP GUID: ea7df68b-da8c-5074-a056-8531c558f66a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetWindowRect, EnumThreadWindows, IntersectRect, GetWindow, GetCurrentThreadId
// [内部子函数调用]: sub_4032ac, sub_428990, sub_403248, sub_4318d0, sub_429768
// [被调用的父级函数]: sub_429540
// ============================================================

HWND __convention("regparm")sub_429364(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: char var_5 = 1
    char var_5 = 1
    HWND hWnd_1 = sub_429768(arg2 - 0xc)
    HWND hWnd = hWnd_1
    HWND result
    
    if (GetWindow(hWnd_1, GW_OWNER) == *(*data_530660 + 0x24))
    label_4293bf:
        
        if (hWnd != 0)
            int32_t* ebx_1 = arg1
            
            while (true)
                int32_t* eax_5 = ebx_1[9]
                
                if (eax_5 == 0)
                    break
                
                ebx_1 = eax_5
            
            result = sub_4318d0(ebx_1)
            HWND result_1 = result
            
            if (result != hWnd)
                int32_t* eax_9 = *(*(arg2 - 0x10) + 0x24)
                int32_t lParam
                
                if (eax_9 == 0)
                    if (sub_403248(*(arg2 - 0x10), 0x427f2c) == 0)
                        lParam = 0
                    else
                        lParam = sub_4318d0(*(arg2 - 0x10))
                else
                    ebx_1 = eax_9
                    
                    while (true)
                        int32_t* eax_10 = ebx_1[9]
                        
                        if (eax_10 == 0)
                            break
                        
                        ebx_1 = eax_10
                    
                    lParam = sub_4318d0(ebx_1)
                
                char var_c_1 = 0
                int32_t var_14_1 = *(arg2 - 0xc)
                int32_t var_10_1 = *(arg2 - 8)
                EnumThreadWindows(GetCurrentThreadId(), sub_4292f8, &lParam)
                
                if (var_c_1 != 0)
                    RECT var_30
                    GetWindowRect(hWnd, &var_30)
                    ebx_1.w = 0xffc1
                    RECT lprcSrc2
                    sub_4032ac(arg1, *(arg2 - 0x10), &lprcSrc2, arg2 - 1, arg2 - 0xc)
                    char eax_29 = sub_403248(data_531764, 0x426f44)
                    
                    if (eax_29 != 0 && *(*(data_531764 + 0x38) + 0x90) != 0)
                        result = sub_4318d0(*(*(data_531764 + 0x38) + 0x90))
                    
                    if ((eax_29 == 0 || *(*(data_531764 + 0x38) + 0x90) == 0 || result != hWnd)
                            && IntersectRect(&var_30, &var_30, &lprcSrc2) != 0)
                        var_5 = 0
    else
        HWND i = sub_428990(hWnd)
        
        if (i != 0)
            while (i != 0)
                nop
            
            hWnd = sub_4318d0(i)
            goto label_4293bf
    
    result.b = var_5
    return result
}
