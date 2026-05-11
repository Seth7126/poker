// ============================================================
// 函数名称: sub_4055d8
// 虚拟地址: 0x4055d8
// WARP GUID: 27dc56f0-1bce-5c5a-ad38-73aa264afc3f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: lstrcpyA, GetModuleHandleA, lstrlenA, lstrcpynA, GetProcAddress
// [内部子函数调用]: sub_4012c8, sub_4055c4, sub_4012d0
// [被调用的父级函数]: sub_405780
// ============================================================

char (* __convention("regparm")sub_4055d8(char (* arg1)[0x105]))[0x105]
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t ebx
    int32_t var_258 = ebx
    int32_t esi
    int32_t var_25c = esi
    int32_t edi
    int32_t var_260 = edi
    void* const lpModuleName = "kernel32.dll"
    void* const* esp_1 = &lpModuleName
    HMODULE hModule_1 = GetModuleHandleA(lpModuleName)
    char var_253[0x105]
    
    if (hModule_1 == 0)
    label_405640:
        char* ebx_3
        
        if (*arg1 != 0x5c)
            ebx_3 = &(*arg1)[2]
        label_405685:
            void* esi_2 = ebx_3 - arg1
            *(esp_1 - 4) = esi_2 + 1
            *(esp_1 - 8) = arg1
            *(esp_1 - 0xc) = &var_253
            lstrcpynA()
            
            while (true)
                if (*ebx_3 == 0)
                    *(esp_1 - 4) = &var_253
                    *(esp_1 - 8) = arg1
                    esp_1 -= 8
                    lstrcpyA()
                    break
                
                char* eax_15 = sub_4055c4(&ebx_3[1])
                void* eax_17 = eax_15 - ebx_3
                
                if (eax_17 + esi_2 + 1 s> 0x105)
                    break
                
                *(esp_1 - 4) = eax_17 + 1
                *(esp_1 - 8) = ebx_3
                *(esp_1 - 0xc) = &var_253 + esi_2
                lstrcpynA()
                void var_14e
                *(esp_1 - 4) = &var_14e
                *(esp_1 - 8) = &var_253
                int32_t eax_20 = sub_4012d0()
                
                if (eax_20 == 0xffffffff)
                    break
                
                *(esp_1 - 4) = eax_20
                sub_4012c8()
                void var_122
                *(esp_1 - 4) = &var_122
                
                if (lstrlenA() + esi_2 + 1 + 1 s> 0x105)
                    break
                
                *(&var_253 + esi_2) = 0x5c
                *(esp_1 - 4) = &var_122
                *(esp_1 - 8) = &var_253 + esi_2 + 1
                lstrcpyA()
                *(esp_1 - 0xc) = &var_122
                esp_1 -= 8
                esi_2 += lstrlenA() + 1
                ebx_3 = eax_15
        else if ((*arg1)[1] == 0x5c)
            char* eax_9 = sub_4055c4(&(*arg1)[2])
            
            if (*eax_9 != 0)
                ebx_3 = sub_4055c4(&eax_9[1])
                
                if (*ebx_3 != 0)
                    goto label_405685
    else
        void* const lpProcName = "GetLongPathNameA"
        HMODULE hModule = hModule_1
        esp_1 = &hModule
        int32_t eax_1 = GetProcAddress(hModule, lpProcName)
        
        if (eax_1 == 0)
            goto label_405640
        
        int32_t var_270_1 = 0x105
        char (* lpString1)[0x105] = &var_253
        esp_1 = &hModule
        
        if (eax_1(arg1, lpString1, var_270_1) == 0)
            goto label_405640
        
        PSTR lpString2 = &var_253
        lpString1 = arg1
        esp_1 = &lpString1
        lstrcpyA(lpString1, lpString2)
    *esp_1
    esp_1[1]
    esp_1[2]
    return arg1
}
