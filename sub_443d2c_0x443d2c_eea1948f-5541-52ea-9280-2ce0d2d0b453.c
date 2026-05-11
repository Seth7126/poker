// ============================================================
// 函数名称: sub_443d2c
// 虚拟地址: 0x443d2c
// WARP GUID: eea1948f-5541-52ea-9280-2ce0d2d0b453
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetMenu, SetMenu
// [内部子函数调用]: sub_403828, sub_431bcc, sub_40b4ec, sub_447224, sub_4318d0, sub_43d2b0, sub_443c64, sub_405ae8, sub_403df8, sub_444d94, sub_447210, sub_415df8
// [被调用的父级函数]: sub_442994, sub_4452b0, sub_444034
// ============================================================

int32_t* __convention("regparm")sub_443d2c(int32_t* arg1, HANDLE arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t edi
    int32_t var_20 = edi
    int32_t var_14 = 0
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    HWND hWnd
    struct _EXCEPTION_REGISTRATION_RECORD* i_1
    
    if (arg2 != 0)
        void* eax_2 = sub_447224(data_5317dc) - 1
        
        if (eax_2 s>= 0)
            i_1 = eax_2 + 1
            HANDLE edi_1 = nullptr
            struct _EXCEPTION_REGISTRATION_RECORD* i
            
            do
                if (arg2 == *(sub_447210(data_5317dc, edi_1) + 0x230)
                        && arg1 != sub_447210(data_5317dc, edi_1))
                    hWnd = *(arg2 + 8)
                    char var_c_1 = 0xb
                    int32_t* var_30 = &hWnd
                    sub_405ae8(data_5301a4, &var_14)
                    int32_t edx_1
                    edx_1.b = 1
                    sub_40b4ec(sub_40eacb+0x7d, edx_1, var_14, 0)
                    sub_403828()
                    noreturn
                
                edi_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    HANDLE eax_10 = arg1[0x8c]
    
    if (eax_10 != 0)
        sub_43d2b0(eax_10, 0)
    
    arg1[0x8c] = arg2
    
    if (arg2 != 0)
        sub_415df8(arg2, arg1)
    
    if (arg2 == 0 || ((arg1[8].b & 0x10) == 0 && *(arg1 + 0x211) == 3))
        if (sub_431bcc(arg1) != 0)
            SetMenu(sub_4318d0(arg1), nullptr)
            esp = &ExceptionList
    else if ((*(arg1[0x8c] + 0x4c) == 0 && *(arg1 + 0x217) != 1) || (arg1[8].b & 0x10) != 0)
        if (sub_431bcc(arg1) != 0)
            int32_t eax_16 = (*(*arg1[0x8c] + 0x34))()
            char var_c
            var_c.d = sub_4318d0(arg1)
            esp = &i_1
            
            if (eax_16 != GetMenu(var_c))
                var_c.d = (*(*arg1[0x8c] + 0x34))()
                hWnd = sub_4318d0(arg1)
                SetMenu(hWnd, var_c)
                esp = &i_1
            
            sub_43d2b0(arg2, sub_4318d0(arg1))
    else if (*(arg1 + 0x217) != 1 && sub_431bcc(arg1) != 0)
        SetMenu(sub_4318d0(arg1), nullptr)
        esp = &ExceptionList
    
    if (*(arg1 + 0x216) != 0)
        arg2.b = 1
        sub_444d94(arg1, arg2.b)
    
    sub_443c64(arg1)
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_443ee7
    int32_t* result = &var_14
    sub_403df8(result)
    return result
}
