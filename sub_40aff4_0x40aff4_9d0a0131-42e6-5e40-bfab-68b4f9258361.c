// ============================================================
// 函数名称: sub_40aff4
// 虚拟地址: 0x40aff4
// WARP GUID: 9d0a0131-42e6-5e40-bfab-68b4f9258361
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetThreadLocale
// [内部子函数调用]: sub_408ebc, sub_404078, sub_4094dc, sub_403e4c, sub_404080, sub_403df8, sub_403e1c, sub_403fa0, sub_40acbc, sub_404280
// [被调用的父级函数]: sub_40c310
// ============================================================

int32_t __convention("regparm")sub_40aff4(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    char* var_c = nullptr
    char* var_10 = nullptr
    char* var_14 = nullptr
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t edi
    int32_t var_20 = edi
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t i = 1
    sub_403df8(arg2)
    int32_t eax_3
    int32_t edx
    eax_3, edx = sub_408ebc(sub_40acbc(U"1", 0x1009, GetThreadLocale(), &var_8), 1)
    
    if (eax_3 - 3 u< 3)
        while (i s<= sub_404078(arg1))
            int32_t eax_10
            eax_10.b = arg1[i - 1]
            
            if (not(test_bit(data_52e118, eax_10 & 0xff)))
                if (sub_4094dc(&arg1[i - 1], 0x40b1d0, 2) != 0)
                    if (sub_4094dc(&arg1[i - 1], "yyyy", 4) != 0)
                        int32_t eax_21
                        int32_t edx_5
                        eax_21, edx_5 = sub_4094dc(&arg1[i - 1], 0x40b1f8, 2)
                        
                        if (eax_21 != 0)
                            eax_21.b = arg1[i - 1]
                            char temp3_1 = eax_21.b
                            eax_21.b -= 0x59
                            char temp5_1
                            
                            if (temp3_1 != 0x59)
                                temp5_1 = eax_21.b
                                eax_21.b -= 0x20
                            
                            if (temp3_1 != 0x59 && temp5_1 != 0x20)
                                edx_5.b = arg1[i - 1]
                                sub_403fa0()
                                sub_404080(arg2, var_14)
                            else
                                sub_404080(arg2, U"e")
                        else
                            sub_404080(arg2, "ee")
                            i += 1
                    else
                        sub_404080(arg2, "eeee")
                        i += 3
                else
                    sub_404080(arg2, "ggg")
                    i += 1
                
                i += 1
            else
                sub_404280(2, i, arg1, &var_10)
                sub_404080(arg2, var_10)
                i += 2
    else
        int32_t eax_5
        eax_5.w = data_5315b8
        int16_t temp1_1 = eax_5.w
        eax_5.w -= 4
        int16_t temp2_1
        
        if (temp1_1 != 4)
            temp2_1 = (eax_5 - 0xd).w
            eax_5.w = (eax_5 - 0xd).w - 2
        
        if (temp1_1 == 4 || temp2_1 u< 2)
            eax_5.b = 1
        else
            eax_5 = 0
        
        if (eax_5.b == 0)
            sub_403e4c(arg2, arg1)
        else
            for (; i s<= sub_404078(arg1); i += 1)
                int32_t eax_6
                eax_6.b = arg1[i - 1]
                char temp4_1 = eax_6.b
                eax_6.b -= 0x47
                
                if (temp4_1 != 0x47)
                    char temp6_1 = eax_6.b
                    eax_6.b -= 0x20
                    
                    if (temp6_1 != 0x20)
                        edx.b = arg1[i - 1]
                        sub_403fa0()
                        sub_404080(arg2, var_c)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_24_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_40b1bd
    return sub_403e1c(&var_14, 4)
}
