// ============================================================
// 函数名称: sub_4473f4
// 虚拟地址: 0x4473f4
// WARP GUID: cac75c62-44b0-54e4-8f25-025a9b6a3fec
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: RegOpenKeyExA, GetKeyboardLayoutList, RegQueryValueExA, RegCloseKey
// [内部子函数调用]: sub_409a78, sub_41281c, sub_404028, sub_4030a0, sub_435e24, sub_403df8
// [被调用的父级函数]: sub_42feb8, sub_4475f4
// ============================================================

int32_t* __convention("regparm")sub_4473f4(struct _EXCEPTION_REGISTRATION_RECORD* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_268 = ebx
    int32_t var_264 = 0
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg1
    int32_t* var_26c = &var_4
    int32_t (* var_270)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (var_8->__offset(0x28).d == 0)
        int32_t ecx
        var_8->__offset(0x28).d = sub_4030a0(ecx, 1)
        sub_403df8(var_8 + 0x2c)
        void var_118
        uint32_t var_c = &var_118
        int32_t var_10 = 0x40
        esp = &var_8
        int32_t eax_6 = GetKeyboardLayoutList(var_10, var_c) - 1
        
        if (eax_6 s>= 0)
            uint32_t ExceptionList_1 = eax_6 + 1
            void* lpSubKey = &var_118
            uint32_t i
            
            do
                if (sub_435e24(*lpSubKey) != 0)
                    var_c = &var_10
                    var_10 = 0x20019
                    ExceptionList_1 = 0
                    int32_t var_18_1 = 0
                    int32_t var_260 = *nullptr
                    char var_25c_1 = 0
                    void var_258
                    sub_409a78(&var_260, "System\CurrentControlSet\Control\Keyboard Layouts\%.8x", 
                        &var_258, var_18_1)
                    lpSubKey = &var_258
                    esp = &var_8
                    
                    if (RegOpenKeyExA(0x80000002, lpSubKey, ExceptionList_1, var_10, var_c) == NO_ERROR)
                        var_c = &var_4
                        var_10 = j_sub_4037f0
                        ExceptionList_1 = fsbase->NtTib.ExceptionList
                        fsbase->NtTib.ExceptionList = &ExceptionList_1
                        var_c = 0x100
                        uint32_t* lpcbData = &var_c
                        void data
                        
                        if (RegQueryValueExA(var_10, "layout text", nullptr, nullptr, &data, lpcbData)
                                == NO_ERROR)
                            sub_404028(&var_264, &data, 0x100)
                            *lpcbData
                            (*(*var_8->__offset(0x28).d + 0x38))()
                            
                            if (*lpcbData == var_8->__offset(0x30).d)
                                sub_404028(var_8 + 0x2c, &data, 0x100)
                        
                        fsbase->NtTib.ExceptionList = ExceptionList_1
                        var_c = 0x447562
                        var_10 = var_10
                        return RegCloseKey(var_10)
                
                lpSubKey += 4
                i = ExceptionList_1
                ExceptionList_1 -= 1
            while (i != 1)
        
        int32_t* eax_27 = var_8->__offset(0x28).d
        *(eax_27 + 0x19) = 0
        sub_41281c(eax_27, 1)
    
    var_8->__offset(0x28).d
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4475a6
    int32_t* result = &var_264
    sub_403df8(result)
    return result
}
