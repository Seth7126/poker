// ============================================================
// 函数名称: sub_49e7fc
// 虚拟地址: 0x49e7fc
// WARP GUID: e5940aa3-d603-521a-a26d-adcd55461656
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e90, sub_404078, sub_4042c0, sub_404188, sub_403e4c, sub_404080, sub_403e1c, sub_403fa0, sub_403df8, sub_404280, sub_403010
// [被调用的父级函数]: sub_4afc9c, sub_4afc93
// ============================================================

int32_t __convention("regparm")sub_49e7fc(void* arg1, char* arg2, void* arg3, int32_t arg4 @ esi, int32_t arg5 @ edi, char** arg6)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* i_2 = arg3
    int32_t* esp_1 = &i_2
    void* i_1 = 6
    void* i
    
    do
        *(esp_1 - 4) = 0
        *(esp_1 - 8) = 0
        esp_1 -= 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    *(esp_1 - 4) = i_1
    void* i_3 = i_2
    i_2 = i_1
    int32_t entry_ebx
    *(esp_1 - 8) = entry_ebx
    *(esp_1 - 0xc) = arg4
    *(esp_1 - 0x10) = arg5
    i_2 = arg1
    *(esp_1 - 0x14) = &var_4
    *(esp_1 - 0x18) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0x1c) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_1 - 0x1c
    int32_t eax_1 = data_52fba0()
    void* esp_10 = &esp_1[2]
    void* var_3c
    
    if (eax_1 != 1)
        sub_403df8(arg6)
        void* var_14
        *(esp_10 - 4) = &var_14
        sub_404280(1, sub_404078(arg2), arg2)
        sub_404188(var_14, i_3)
        int32_t eax_9
        
        if (eax_1 != 1)
            eax_9 = sub_404078(arg2)
        
        if (eax_1 == 1 || eax_9 == 0)
            eax_9.b = 1
        else
            eax_9 = 0
        
        char var_9_1 = eax_9.b
        void* var_10
        sub_403e90(&var_10, i_2)
        int32_t eax_13 = sub_404078(var_10)
        
        if (eax_13 s> 0)
            void* var_18
            *(esp_10 - 4) = &var_18
            sub_404280(1, sub_404078(var_10), var_10)
            sub_404188(var_18, i_3)
            
            if (eax_13 != 0)
                sub_404080(&var_10, i_3)
        
        sub_404080(&var_10, arg2)
        int32_t eax_21 = sub_404078(var_10)
        bool cond:2_1 = eax_21 == 0
        bool cond:3_1 = eax_21 != 0
        
        if (eax_21 s> 0)
            int32_t edi_1 = 1
            
            while (true)
                int32_t eax_51 = sub_404078(var_10)
                cond:2_1 = edi_1 == eax_51
                cond:3_1 = edi_1 != eax_51
                
                if (edi_1 s> eax_51)
                    break
                
                void* edx_9
                edx_9.b = *(var_10 + edi_1 - 1)
                sub_403fa0()
                void* var_1c
                sub_404188(var_1c, i_3)
                
                if (edi_1 != eax_51)
                    char temp5_1 = *(var_10 + edi_1 - 1)
                    
                    if (temp5_1 != 0x2e)
                        void* edx_25
                        edx_25.b = *(var_10 + edi_1 - 1)
                        sub_403fa0()
                        char* var_38
                        sub_404080(arg6, var_38)
                    else
                        void* var_28
                        *(esp_10 - 4) = &var_28
                        sub_404280(1, sub_404078(*arg6), *arg6)
                        sub_404188(var_28, i_3)
                        
                        if (temp5_1 == 0x2e)
                            void* var_2c
                            *(esp_10 - 4) = &var_2c
                            sub_404280(2, edi_1, var_10)
                            sub_404188(var_2c, sub_49eaef+5)
                        
                        if (temp5_1 != 0x2e || temp5_1 != 0x2e)
                            void* edx_23
                            edx_23.b = *(var_10 + edi_1 - 1)
                            sub_403fa0()
                            char* var_34
                            sub_404080(arg6, var_34)
                        else
                            sub_4042c0(arg6, sub_404078(*arg6), 1)
                            
                            while (true)
                                int32_t eax_43 = sub_404078(*arg6)
                                
                                if (eax_43 s<= 0)
                                    break
                                
                                void* var_30
                                *(esp_10 - 4) = &var_30
                                sub_404280(1, sub_404078(*arg6), *arg6)
                                sub_404188(var_30, i_3)
                                
                                if (eax_43 == 0)
                                    break
                                
                                sub_4042c0(arg6, sub_404078(*arg6), 1)
                            
                            int32_t temp8_1 = edi_1
                            edi_1 += 1
                            
                            if (add_overflow(temp8_1, 1))
                                sub_403010()
                                noreturn
                else if (edi_1 != 1)
                    void* var_20
                    *(esp_10 - 4) = &var_20
                    sub_404280(1, sub_404078(*arg6), *arg6)
                    sub_404188(var_20, i_3)
                    
                    if (edi_1 != 1)
                        void* edx_14
                        edx_14.b = *(var_10 + edi_1 - 1)
                        sub_403fa0()
                        char* var_24
                        sub_404080(arg6, var_24)
                else
                    sub_403e4c(arg6, i_3)
                
                int32_t temp6_1 = edi_1
                edi_1 += 1
                
                if (add_overflow(temp6_1, 1))
                    sub_403010()
                    noreturn
        
        sub_404188(*arg6, i_3)
        
        if (not(cond:2_1))
            *(esp_10 - 4) = &var_3c
            sub_404280(1, sub_404078(*arg6), *arg6)
            sub_404188(var_3c, i_3)
            
            if (not(cond:3_1) && var_9_1 == 0)
                sub_4042c0(arg6, sub_404078(*arg6), 1)
    else
        sub_403e4c(arg6, arg2)
    
    *(esp_10 + 8)
    fsbase->NtTib.ExceptionList = *esp_10
    *(esp_10 + 8) = sub_49eae3
    return sub_403e1c(&var_3c, 0xc)
}
