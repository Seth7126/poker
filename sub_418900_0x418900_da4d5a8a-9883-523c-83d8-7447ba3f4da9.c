// ============================================================
// 函数名称: sub_418900
// 虚拟地址: 0x418900
// WARP GUID: da4d5a8a-9883-523c-83d8-7447ba3f4da9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CreateFontIndirectA
// [内部子函数调用]: sub_417d2c, sub_409474, sub_408aa0, sub_40401c, sub_417d38, sub_418be4, sub_403e1c
// [被调用的父级函数]: sub_4b4788, sub_424560, sub_419cb0, sub_430ed0, sub_42eac0
// ============================================================

int32_t __convention("regparm")sub_418900(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_54 = ebx
    void* var_50 = nullptr
    void* var_4c = nullptr
    void* var_48 = nullptr
    int32_t* var_58 = &var_4
    int32_t (* var_5c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    void* eax = *(arg1 + 0x10)
    
    if (*(eax + 8) != 0)
        *(eax + 8)
        fsbase->NtTib.ExceptionList = ExceptionList_1
        int32_t (* var_58_1)(int32_t* arg1 @ ebp) = sub_418a90
        return sub_403e1c(&var_50, 3)
    
    int32_t ecx = sub_417d2c(data_5316a0)
    int32_t* var_64 = &var_4
    int32_t (* var_68)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(eax + 8) == 0)
        LOGFONTA lplf
        lplf.lfHeight = *(eax + 0x14)
        lplf.lfWidth = 0
        lplf.lfEscapement = 0
        lplf.lfOrientation = 0
        
        if ((*(eax + 0x19) & 1) == 0)
            lplf.lfWeight = 0x190
        else
            lplf.lfWeight = 0x2bc
        
        void* eax_7
        eax_7.b = (*(eax + 0x19) & 2) != 0
        lplf.lfItalic = eax_7.b
        void* eax_8
        eax_8.b = (*(eax + 0x19) & 4) != 0
        lplf.lfUnderline = eax_8.b
        void* eax_9
        eax_9.b = (*(eax + 0x19) & 8) != 0
        lplf.lfStrikeOut = eax_9.b
        void* eax_10
        eax_10.b = *(eax + 0x1a)
        lplf.lfCharSet = eax_10.b
        sub_40401c(ecx, eax + 0x1b)
        int32_t eax_12
        int32_t ecx_1
        eax_12, ecx_1 = sub_408aa0(var_48, "Default")
        var_28
        
        if (eax_12 != 0)
            sub_40401c(ecx_1, eax + 0x1b)
            sub_409474(&var_28, var_50)
        else
            sub_40401c(ecx_1, "\rMS Sans Serif")
            sub_409474(&var_28, var_4c)
        lplf.lfQuality = 0
        lplf.lfOutPrecision = 0
        lplf.lfClipPrecision = 0
        char eax_16 = sub_418be4(arg1)
        
        if (eax_16 == 1)
            lplf.lfPitchAndFamily = 2
        else if (eax_16 == 2)
            lplf.lfPitchAndFamily = 1
        else
            lplf.lfPitchAndFamily = 0
        
        *(eax + 8) = CreateFontIndirectA(&lplf)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t var_64_1 = 0x418a68
    return sub_417d38(data_5316a0)
}
