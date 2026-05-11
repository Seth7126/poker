// ============================================================
// 函数名称: sub_443300
// 虚拟地址: 0x443300
// WARP GUID: 379f595e-34b6-56fb-a1a2-49d3dc3777cb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetWindowDC, SaveDC, SetFocus, RestoreDC
// [内部子函数调用]: sub_4032ac, sub_43b5b8, sub_43ccd8, sub_4318d0, sub_419a60, sub_43e104, sub_443a70, sub_419bc0, sub_42f268, sub_41920c
// [被调用的父级函数]: 无
// ============================================================

LRESULT __convention("regparm")sub_443300(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t eax = *arg2
    
    if (eax s> 0x46)
        int32_t ebx
        
        if (eax == 0xb01a)
            if (arg1[0x24] != 0)
                ebx.w = 0xffb6
                sub_4032ac(arg1)
        else if (eax == 0xb01b && arg1[0x24] != 0)
            ebx.w = 0xffb4
            sub_4032ac(arg1)
    else if (eax == 0x46)
        int32_t* eax_20
        eax_20.w = arg1[8].w
        eax_20.w &= 0x11
        
        if (1 == eax_20.w)
            int32_t* eax_21
            eax_21.b = arg1[0x86].b
            
            if (eax_21.b - 1 u< 2 && *(arg1 + 0x213) != 2)
                void* eax_24 = arg2[2]
                *(eax_24 + 0x18) |= 2
            
            int32_t* eax_25
            eax_25.b = arg1[0x86].b
            char temp5_1 = eax_25.b
            eax_25.b -= 1
            char temp8_1
            
            if (temp5_1 != 1)
                temp8_1 = eax_25.b
                eax_25.b -= 2
            
            if (temp5_1 == 1 || temp8_1 == 2)
                int32_t* eax_26
                eax_26.b = *(arg1 + 0x211)
                char temp7_1 = eax_26.b
                eax_26.b -= 2
                char temp9_1
                
                if (temp7_1 != 2)
                    temp9_1 = eax_26.b
                    eax_26.b -= 3
                
                if (temp7_1 == 2 || temp9_1 == 3)
                    void* eax_27 = arg2[2]
                    *(eax_27 + 0x18) |= 1
    else
        LRESULT result = eax - 9
        
        if (eax - 6 u< 3)
            if (data_52e97c == 0)
                return result
            
            if (*arg2 == 7 && (arg1[8].b & 0x10) == 0)
                HWND hWnd = nullptr
                
                if (*(arg1 + 0x217) != 2)
                    int32_t* eax_14 = arg1[0x82]
                    
                    if (eax_14 != 0 && eax_14 != arg1)
                        hWnd = sub_4318d0(eax_14)
                else if (sub_443a70(arg1) != 0)
                    hWnd = sub_4318d0(sub_443a70(arg1))
                
                if (hWnd != 0)
                    return SetFocus(hWnd)
        else if (result == 0x22)
            int32_t* eax_28 = arg2[2]
            
            if (*eax_28 == 1 && arg1[0x8c] != 0)
                eax_28[2]
                sub_43ccd8(arg1[0x8c])
        else if (result == 0x23)
            int32_t* ebx_1 = arg2[2]
            
            if (*ebx_1 == 1 && arg1[0x8c] != 0)
                ebx_1[2]
                sub_43ccd8(arg1[0x8c])
    
    return sub_42f268(arg1, arg2)
}
