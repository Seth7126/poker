// ============================================================
// 函数名称: sub_52b40c
// 虚拟地址: 0x52b40c
// WARP GUID: 4acc9852-009b-5dc8-bdbb-a5c6dce63a9f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_404078, sub_404080, sub_403fa0, sub_403df8
// [被调用的父级函数]: sub_52b7f8, sub_5197fb, sub_52ba68, sub_519804, sub_52b8e8
// ============================================================

void** __convention("regparm")sub_52b40c(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    char* var_10 = nullptr
    void* var_8 = arg1
    sub_40422c(var_8)
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_403df8(arg2)
    int32_t i_1 = sub_404078(var_8)
    
    if (i_1 s> 0)
        int32_t var_c_1 = 1
        int32_t i
        
        do
            ebx.b = *(var_8 + var_c_1 - 1)
            
            if (ebx.b != 0xe9)
                char eax_7 = ebx.b
                char temp2_1
                
                if (eax_7 != 0xc4)
                    temp2_1 = eax_7 + 0x3c
                
                if (eax_7 != 0xc4 && temp2_1 != 0x20)
                    char eax_9 = ebx.b
                    char temp5_1
                    
                    if (eax_9 != 0xd6)
                        temp5_1 = eax_9 + 0x2a
                    
                    if (eax_9 != 0xd6 && temp5_1 != 0x20)
                        char eax_11 = ebx.b
                        char temp7_1
                        
                        if (eax_11 != 0xdc)
                            temp7_1 = eax_11 + 0x24
                        
                        if (eax_11 != 0xdc && temp7_1 != 0x20)
                            char eax_13 = ebx.b
                            
                            if (eax_13 == 0x20)
                                sub_404080(arg2, U"_")
                            else if (eax_13 == 0x27)
                                sub_404080(arg2, U"_")
                            else if (eax_13 - 0x2d u< 2)
                                sub_404080(arg2, U"_")
                            else if (eax_13 != 0x3f)
                                char eax_15 = ebx.b
                                
                                if (eax_15 != 0x25 && eax_15 != 0x2c)
                                    sub_403fa0()
                                    sub_404080(arg2, var_10)
                            else
                                sub_404080(arg2, U"_")
                        else
                            sub_404080(arg2, "ue")
                    else
                        sub_404080(arg2, "oe")
                else
                    sub_404080(arg2, "ae")
            else
                sub_404080(arg2, U"e")
            
            var_c_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_20_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_52b52d
    sub_403df8(&var_10)
    void** result = &var_8
    sub_403df8(result)
    return result
}
