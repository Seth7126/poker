// ============================================================
// 函数名称: sub_405780
// 虚拟地址: 0x405780
// WARP GUID: 7cb825ee-3ae7-5c11-9728-de0facb840cd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: RegOpenKeyExA, lstrcpyA, GetThreadLocale, lstrlenA, LoadLibraryExA, GetModuleFileNameA, RegQueryValueExA, RegCloseKey
// [内部子函数调用]: sub_4012f8, sub_4055d8
// [被调用的父级函数]: sub_406c88
// ============================================================

enum WIN32_ERROR __convention("regparm")sub_405780(PSTR arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t ebx
    int32_t var_128 = ebx
    int32_t esi
    int32_t var_12c = esi
    char var_121
    GetModuleFileNameA(nullptr, &var_121, 0x105)
    uint8_t var_16 = 0
    HKEY hKey
    HKEY* phkResult = &hKey
    enum REG_SAM_FLAGS hKey_1 = KEY_ALL_ACCESS
    uint32_t ExceptionList = 0
    void* const var_148 = "Software\Borland\Locales"
    int32_t var_14c = 0x80000001
    
    if (RegOpenKeyExA(0x80000001, "Software\Borland\Locales", ExceptionList, hKey_1, phkResult)
            != NO_ERROR)
        HKEY* phkResult_1 = &hKey
        hKey_1 = KEY_ALL_ACCESS
        ExceptionList = 0
        void* const var_148_1 = "Software\Borland\Delphi\Locales"
        int32_t var_14c_1 = 0x80000001
        
        if (RegOpenKeyExA(0x80000001, "Software\Borland\Delphi\Locales", ExceptionList, hKey_1, 
                phkResult_1) != NO_ERROR)
            hKey_1 = &var_121
            lstrcpyA(hKey_1, arg1)
            ExceptionList = 5
            int32_t var_14c_4 = 3
            char var_11
            sub_4012f8(GetThreadLocale(3, &var_11, ExceptionList))
            int32_t* esp_1 = &var_12c
            int32_t result = 0
            
            if (var_121 != 0 && (var_11 != 0 || var_16 != 0))
                esp_1 = &var_12c
                void* ebx_2 = &(&var_121)[lstrlenA(&var_121)]
                
                while (*ebx_2 != 0x2e)
                    if (ebx_2 == &var_121)
                        break
                    
                    ebx_2 -= 1
                
                if (ebx_2 != &var_121)
                    if (var_16 != 0)
                        lstrcpyA(ebx_2 + 1, &var_16)
                        enum LOAD_LIBRARY_FLAGS dwFlags = LOAD_LIBRARY_AS_DATAFILE
                        HANDLE hFile = nullptr
                        hKey_1 = &var_121
                        esp_1 = &hKey_1
                        result = LoadLibraryExA(hKey_1, hFile, dwFlags)
                    
                    if (result == 0 && var_11 != 0)
                        *(esp_1 - 4) = &var_11
                        *(esp_1 - 8) = ebx_2 + 1
                        lstrcpyA()
                        *(esp_1 - 0xc) = 2
                        *(esp_1 - 0x10) = 0
                        *(esp_1 - 0x14) = &var_121
                        esp_1 -= 0x14
                        result = LoadLibraryExA()
                        
                        if (result == 0)
                            char var_f_1 = 0
                            *(esp_1 - 4) = &var_11
                            *(esp_1 - 8) = ebx_2 + 1
                            lstrcpyA()
                            *(esp_1 - 0xc) = 2
                            *(esp_1 - 0x10) = 0
                            *(esp_1 - 0x14) = &var_121
                            esp_1 -= 0x14
                            result = LoadLibraryExA()
            
            *esp_1
            esp_1[1]
            return result
    
    int32_t __saved_ebp
    int32_t* var_13c = &__saved_ebp
    hKey_1 = j_sub_4037f0
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    uint32_t lpcbData = 5
    int32_t var_150 = 0
    int32_t var_154 = 0
    sub_4055d8(&var_121)
    
    if (RegQueryValueExA(hKey, &var_121, nullptr, nullptr, &var_16, &lpcbData) != NO_ERROR)
        int32_t var_150_1 = 0
        int32_t var_154_1 = 0
        int32_t var_158_1 = 0x405978
        RegQueryValueExA(hKey, 0x405978, nullptr, nullptr, &var_16, &lpcbData)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t var_13c_1 = 0x405853
    hKey_1 = hKey
    return RegCloseKey(hKey_1)
}
