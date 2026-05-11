// ============================================================
// 函数名称: sub_4ab7f4
// 虚拟地址: 0x4ab7f4
// WARP GUID: 70e44e96-55e7-53aa-981f-a3d9b4dafbb0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_405ae8, sub_40b4b0, sub_403e1c
// [被调用的父级函数]: sub_4ab4f8
// ============================================================

int32_t __convention("regparm")sub_4ab7f4(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    char* var_c = nullptr
    int32_t ebx
    int32_t var_10 = ebx
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(arg1 + 5) == 0)
        sub_405ae8(data_530138, &var_8)
        int32_t edx_2
        edx_2.b = 1
        sub_40b4b0(sub_4aa278+0xb4, edx_2, var_8)
        sub_403828()
        noreturn
    
    char edx = *(arg1 + 4)
    
    if (edx u< 1)
        arg1.b = *(arg1 + 5)
        char temp1_1 = arg1.b
        arg1.b -= 1
        
        if (temp1_1 == 1)
            (*data_53015c)()
        else
            char temp2_1 = arg1.b
            arg1.b -= 1
            
            if (temp2_1 == 1)
                (*data_530864)()
            else
                char temp5_1 = arg1.b
                arg1.b -= 1
                
                if (temp5_1 == 1)
                    (*data_530048)()
                else
                    (*data_530048)()
    else if (edx == 1)
        arg1.b = *(arg1 + 5)
        char temp3_1 = arg1.b
        arg1.b -= 1
        
        if (temp3_1 == 1)
            (*data_530754)()
        else
            char temp6_1 = arg1.b
            arg1.b -= 1
            
            if (temp6_1 == 1)
                (*data_530228)()
            else
                char temp9_1 = arg1.b
                arg1.b -= 1
                
                if (temp9_1 == 1)
                    (*data_530634)()
                else
                    (*data_530634)()
    else if (edx == 2)
        arg1.b = *(arg1 + 5)
        char temp7_1 = arg1.b
        arg1.b -= 1
        
        if (temp7_1 == 1)
            (*data_53095c)()
        else
            char temp10_1 = arg1.b
            arg1.b -= 1
            
            if (temp10_1 == 1)
                (*data_5304a4)()
            else
                char temp12_1 = arg1.b
                arg1.b -= 1
                
                if (temp12_1 == 1)
                    (*data_530844)()
                else
                    (*data_530844)()
    else
        if (edx != 3)
            sub_405ae8(data_5307a0, &var_c)
            int32_t edx_4
            edx_4.b = 1
            sub_40b4b0(0x4aa38c, edx_4, var_c)
            sub_403828()
            noreturn
        
        arg1.b = *(arg1 + 5)
        char temp11_1 = arg1.b
        arg1.b -= 1
        
        if (temp11_1 == 1)
            (*data_5300bc)()
        else
            char temp13_1 = arg1.b
            arg1.b -= 1
            
            if (temp13_1 == 1)
                (*data_5307c0)()
            else
                char temp14_1 = arg1.b
                arg1.b -= 1
                
                if (temp14_1 == 1)
                    (*data_52ff84)()
                else
                    (*data_52ff84)()
    
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4ab9c5
    return sub_403e1c(&var_c, 2)
}
