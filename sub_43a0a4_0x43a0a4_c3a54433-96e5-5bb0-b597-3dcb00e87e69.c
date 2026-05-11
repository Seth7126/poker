// ============================================================
// 函数名称: sub_43a0a4
// 虚拟地址: 0x43a0a4
// WARP GUID: c3a54433-96e5-5bb0-b597-3dcb00e87e69
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DrawEdge, OffsetRect, DrawTextA
// [内部子函数调用]: sub_43bed0, sub_403e90, sub_404078, sub_404188, sub_43d3c8, sub_4191d8, sub_418bac, sub_404080, sub_418bb8, sub_4188ec, sub_40423c, sub_41842c, sub_419b40, sub_403df8
// [被调用的父级函数]: sub_43ab7c, sub_43b5b8, sub_43a2fc
// ============================================================

char** __convention("regparm")sub_43a0a4(void* arg1, int32_t* arg2, void* arg3, enum DRAW_TEXT_FORMAT arg4, char arg5, RECT* arg6)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_24 = ebx
    int32_t esi
    int32_t var_28 = esi
    int32_t edi
    int32_t var_2c = edi
    char* var_10 = nullptr
    enum DRAW_TEXT_FORMAT format = arg4
    int32_t* var_30 = &var_4
    int32_t (* var_34)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_1 = sub_43bed0(arg1)
    
    if (eax_1 != 0 && sub_43d3c8(eax_1) != 0)
        format = (format & ~DT_LEFT) | 2 | DT_RTLREADING
    
    sub_403e90(&var_10, arg3)
    char temp0 = format:1.b & 4
    bool cond:0 = temp0 != 0
    
    if (temp0 != 0)
        char* temp1_1 = var_10
        cond:0 = temp1_1 != 0
        
        if (temp1_1 == 0)
            sub_404080(&var_10, U" ")
        else
            char temp2_1 = *var_10
            cond:0 = temp2_1 != 0x26
            
            if (temp2_1 == 0x26)
                char temp3_1 = var_10[1]
                cond:0 = temp3_1 != 0
                
                if (temp3_1 == 0)
                    sub_404080(&var_10, U" ")
    
    sub_404188(var_10, 0x43a2b0)
    
    if (cond:0)
        sub_4191d8(arg2[5], 1)
        
        if (*(arg1 + 0x2e) != 0)
            void* edi_2 = arg2[3]
            sub_418bac(edi_2)
            sub_418bb8(edi_2)
        
        if (*(arg1 + 0x2d) == 0)
            if (arg5 == 0)
                OffsetRect(arg6, 1, 1)
                sub_4188ec(arg2[3], 0x80000014)
                int32_t cchText = sub_404078(var_10)
                uint8_t* lpchText = sub_40423c(var_10)
                DrawTextA(sub_419b40(arg2), lpchText, cchText, arg6, format)
                OffsetRect(arg6, 0xffffffff, 0xffffffff)
            
            if (arg5 == 0)
                sub_4188ec(arg2[3], 0x80000010)
            else if (sub_41842c(0x8000000d) != sub_41842c(0x80000010))
                sub_4188ec(arg2[3], 0x80000010)
            else
                sub_4188ec(arg2[3], 0x80000014)
        
        int32_t cchText_1 = sub_404078(var_10)
        uint8_t* lpchText_1 = sub_40423c(var_10)
        DrawTextA(sub_419b40(arg2), lpchText_1, cchText_1, arg6, format)
    else if ((format:1.b & 4) == 0)
        RECT qrc
        __builtin_memcpy(&qrc, arg6, 0x10)
        qrc.top += 4
        DrawEdge(sub_419b40(arg2), &qrc, EDGE_ETCHED, BF_TOP)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    var_30 = sub_43a292
    char** result = &var_10
    sub_403df8(result)
    return result
}
