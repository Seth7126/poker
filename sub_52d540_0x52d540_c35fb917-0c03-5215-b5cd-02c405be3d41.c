// ============================================================
// 函数名称: sub_52d540
// 虚拟地址: 0x52d540
// WARP GUID: c35fb917-0c03-5215-b5cd-02c405be3d41
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: EnumDisplaySettingsA
// [内部子函数调用]: sub_403428, sub_4033d0, sub_4054f4, sub_403010
// [被调用的父级函数]: sub_47d208
// ============================================================

int32_t* __convention("regparm")sub_52d540(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t edi
    int32_t var_18 = edi
    int32_t* esp_1 = &var_18
    
    if (arg2.b != 0)
        void var_28
        esp_1 = &var_28
        int32_t ecx
        arg1 = sub_4033d0(ecx, arg2)
    
    char var_5 = arg2.b
    arg1[1].b = 0
    arg1[6] = 0
    
    while (true)
        *(esp_1 - 4) = &arg1[7]
        *(esp_1 - 8) = arg1[6]
        *(esp_1 - 0xc) = 0
        
        if (EnumDisplaySettingsA() == 0)
            break
        
        int32_t temp0_1 = arg1[6]
        arg1[6] += 1
        
        if (add_overflow(temp0_1, 1))
            sub_403010()
            noreturn
    
    *(esp_1 - 4) = arg1[6]
    sub_4054f4()
    void* esp_6 = esp_1
    int32_t i_6 = arg1[6]
    
    if (add_overflow(i_6, 0xffffffff))
        sub_403010()
        noreturn
    
    if (i_6 - 1 u>= 0)
        int32_t i_3 = i_6
        int32_t esi_1 = 0
        int32_t i
        
        do
            *(esp_6 - 4) = &arg1[7]
            *(esp_6 - 8) = esi_1
            *(esp_6 - 0xc) = 0
            EnumDisplaySettingsA()
            int32_t eax_6 = esi_1 * 3
            bool c_1 = unimplemented  {imul eax, esi, 0x3}
            
            if (c_1)
                sub_403010()
                noreturn
            
            *(arg1[5] + (eax_6 << 2)) = arg1[0x22]
            *(arg1[5] + (eax_6 << 2) + 4) = arg1[0x23]
            *(arg1[5] + (eax_6 << 2) + 8) = arg1[0x21]
            esi_1 += 1
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t esi_2 = 0
    int32_t edi_9
    
    while (true)
        int32_t edi_2 = esi_2 * 3
        bool c_2 = unimplemented  {imul edi, esi, 0x3}
        
        if (c_2)
            sub_403010()
            noreturn
        
        int32_t eax_8 = *(arg1[5] + (edi_2 << 2))
        
        if (eax_8 == 0)
        label_52d640:
            int32_t edi_3 = arg1[6]
            
            if (add_overflow(edi_3, 0xffffffff))
                sub_403010()
                noreturn
            
            if (edi_3 - 1 u>= esi_2)
                int32_t i_4 = edi_3 - 1 - esi_2 + 1
                int32_t var_c_1 = esi_2
                int32_t i_1
                
                do
                    bool c_5 = unimplemented  {imul eax, dword [ebp-0x8], 0x3}
                    
                    if (c_5)
                        sub_403010()
                        noreturn
                    
                    int32_t* eax_14 = arg1[5] + var_c_1 * 0xc
                    bool c_6 = unimplemented  {imul edx, dword [ebp-0x8], 0x3}
                    
                    if (c_6)
                        sub_403010()
                        noreturn
                    
                    int32_t* ecx_8 = arg1[5] + var_c_1 * 0xc + 0xc
                    *eax_14 = *ecx_8
                    eax_14[1] = ecx_8[1]
                    eax_14[2] = ecx_8[2]
                    var_c_1 += 1
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
            
            int32_t temp5_1 = arg1[6]
            arg1[6] -= 1
            
            if (add_overflow(temp5_1, 0xffffffff))
                sub_403010()
                noreturn
            
            if (esi_2 != 0)
                int32_t temp7_1 = esi_2
                esi_2 -= 1
                
                if (temp7_1 u< 1)
                    sub_403010()
                    noreturn
        else
            bool c_3 = unimplemented  {imul edx, esi, 0x3}
            
            if (c_3)
                sub_403010()
                noreturn
            
            arg1[5]
            
            if (eax_8 s> 0xbb8)
                goto label_52d640
            
            bool c_4 = unimplemented  {imul edx, esi, 0x3}
            
            if (c_4)
                sub_403010()
                noreturn
            
            arg1[5]
            
            if (eax_8 s< 0x200)
                goto label_52d640
            
            int32_t eax_10 = *(arg1[5] + (edi_2 << 2) + 8)
            
            if (eax_10 != 0x10 && eax_10 != 0x20)
                goto label_52d640
        
        if (esi_2 u>= 1)
            int32_t eax_15 = esi_2 * 3
            bool c_7 = unimplemented  {imul eax, esi, 0x3}
            
            if (c_7)
                sub_403010()
                noreturn
            
            if (*(arg1[5] + (eax_15 << 2)) == *(arg1[5] + (eax_15 << 2) - 0xc)
                    && *(arg1[5] + (eax_15 << 2) + 4) == *(arg1[5] + (eax_15 << 2) - 8)
                    && *(arg1[5] + (eax_15 << 2) + 8) == *(arg1[5] + (eax_15 << 2) - 4))
                int32_t edi_6 = arg1[6]
                
                if (add_overflow(edi_6, 0xffffffff))
                    sub_403010()
                    noreturn
                
                if (edi_6 - 1 u>= esi_2)
                    int32_t i_5 = edi_6 - 1 - esi_2 + 1
                    int32_t var_c_2 = esi_2
                    int32_t i_2
                    
                    do
                        bool c_8 = unimplemented  {imul eax, dword [ebp-0x8], 0x3}
                        
                        if (c_8)
                            sub_403010()
                            noreturn
                        
                        int32_t* eax_17 = arg1[5] + var_c_2 * 0xc
                        bool c_9 = unimplemented  {imul edx, dword [ebp-0x8], 0x3}
                        
                        if (c_9)
                            sub_403010()
                            noreturn
                        
                        int32_t* ecx_13 = arg1[5] + var_c_2 * 0xc + 0xc
                        *eax_17 = *ecx_13
                        eax_17[1] = ecx_13[1]
                        eax_17[2] = ecx_13[2]
                        var_c_2 += 1
                        i_2 = i_5
                        i_5 -= 1
                    while (i_2 != 1)
                
                int32_t temp17_1 = arg1[6]
                arg1[6] -= 1
                
                if (add_overflow(temp17_1, 0xffffffff))
                    sub_403010()
                    noreturn
                
                if (esi_2 != 0)
                    int32_t temp19_1 = esi_2
                    esi_2 -= 1
                    
                    if (temp19_1 u< 1)
                        sub_403010()
                        noreturn
        
        int32_t temp10_1 = esi_2
        esi_2 += 1
        
        if (temp10_1 u>= 0xffffffff)
            sub_403010()
            noreturn
        
        *(esp_6 - 4) = 0
        *(esp_6 - 8) = esi_2
        edi_9 = arg1[6]
        int32_t eax_20
        int32_t edx_22
        edx_22:eax_20 = sx.q(edi_9)
        int32_t temp13_1 = *(esp_6 - 4)
        
        if (edx_22 != temp13_1)
            *(esp_6 - 8)
            *(esp_6 - 4)
            
            if (edx_22 s< temp13_1)
                break
        else
            *(esp_6 - 8)
            *(esp_6 - 4)
            
            if (eax_20 u< *(esp_6 - 8))
                break
    
    if (add_overflow(edi_9, 1))
        sub_403010()
        noreturn
    
    *(esp_6 - 4) = edi_9 + 1
    sub_4054f4()
    void* esp_15 = esp_6
    
    if (var_5 != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_15
        esp_15 += 0x10
    
    *esp_15
    *(esp_15 + 4)
    *(esp_15 + 8)
    *(esp_15 + 0x10)
    *(esp_15 + 0x14)
    return arg1
}
