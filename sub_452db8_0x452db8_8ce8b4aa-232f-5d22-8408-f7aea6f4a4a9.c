// ============================================================
// 函数名称: sub_452db8
// 虚拟地址: 0x452db8
// WARP GUID: 8ce8b4aa-232f-5d22-8408-f7aea6f4a4a9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CreatePalette, SelectPalette, RealizePalette
// [内部子函数调用]: sub_40c7bc, sub_403010
// [被调用的父级函数]: sub_452f08
// ============================================================

uint32_t __convention("regparm")sub_452db8(HDC arg1, int32_t arg2)
{
    // 第一条实际指令: void var_33
    void var_33
    __builtin_memcpy(&var_33, arg2, 0x28)
    char var_2a
    int32_t ecx
    ecx.b = var_2a
    int32_t i_2 = 1 << ecx.b
    LOGPALETTE plpal
    plpal.palVersion = 0x300
    plpal.palNumEntries = i_2.w
    char var_29
    ecx.b = var_29
    int32_t edx = 1 << ecx.b
    
    if (add_overflow(edx, 0xffffffff))
        sub_403010()
        noreturn
    
    char var_27
    ecx.b = var_27
    int32_t edx_2 = 1 << ecx.b
    
    if (add_overflow(edx_2, 0xffffffff))
        sub_403010()
        noreturn
    
    char var_25
    ecx.b = var_25
    int32_t edx_4 = 1 << ecx.b
    
    if (add_overflow(edx_4, 0xffffffff))
        sub_403010()
        noreturn
    
    if (add_overflow(i_2, 0xffffffff))
        sub_403010()
        noreturn
    
    if (i_2 - 1 s>= 0)
        int32_t i_1 = i_2
        int32_t esi_1 = 0
        var_433
        void* ebx_1 = &var_433
        int32_t i
        
        do
            char var_28
            ecx.b = var_28
            int32_t edx_6
            edx_6.b = edx.b - 1
            bool o_4 = unimplemented  {imul eax, eax, 0xff}
            
            if (o_4)
                sub_403010()
                noreturn
            
            int32_t edx_7
            edx_7.b = edx.b - 1
            *ebx_1 = (divs.dp.d(sx.q((esi_1 u>> ecx.b & edx_6) * 0xff), edx_7)).b
            char var_26
            int32_t ecx_1
            ecx_1.b = var_26
            int32_t edx_9
            edx_9.b = edx_2.b - 1
            bool o_5 = unimplemented  {imul eax, eax, 0xff}
            
            if (o_5)
                sub_403010()
                noreturn
            
            int32_t edx_10
            edx_10.b = edx_2.b - 1
            *(ebx_1 + 1) = (divs.dp.d(sx.q((esi_1 u>> ecx_1.b & edx_9) * 0xff), edx_10)).b
            char var_24
            int32_t ecx_2
            ecx_2.b = var_24
            int32_t edx_12
            edx_12.b = edx_4.b - 1
            bool o_6 = unimplemented  {imul eax, eax, 0xff}
            
            if (o_6)
                sub_403010()
                noreturn
            
            int32_t edx_13
            edx_13.b = edx_4.b - 1
            *(ebx_1 + 2) = (divs.dp.d(sx.q((esi_1 u>> ecx_2.b & edx_12) * 0xff), edx_13)).b
            *(ebx_1 + 3) = 0
            esi_1 += 1
            ebx_1 += 4
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    HPALETTE hPal = CreatePalette(&plpal)
    
    if (hPal == 0)
        sub_40c7bc()
        noreturn
    
    SelectPalette(arg1, hPal, 0)
    return RealizePalette(arg1)
}
