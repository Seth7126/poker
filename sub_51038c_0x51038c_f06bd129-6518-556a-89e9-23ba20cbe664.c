// ============================================================
// 函数名称: sub_51038c
// 虚拟地址: 0x51038c
// WARP GUID: f06bd129-6518-556a-89e9-23ba20cbe664
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_4030d0, sub_404138, sub_44cde0, sub_403e4c, sub_404280, sub_403e1c, sub_403010, sub_404078, sub_404188, sub_404080, sub_511bec, sub_47ab08, sub_48380c, sub_40422c, sub_408e1c, sub_510d34, sub_415b58, sub_415c94, sub_403fa0, sub_403df8, sub_4702a8, sub_4836b0, sub_408e80
// [被调用的父级函数]: sub_50f700, sub_50f0e4, sub_50da00, sub_510ba4, sub_50deb4, sub_50dae4, sub_50f7b8, sub_50e368, sub_50e22c, sub_50e8e4
// ============================================================

void** __convention("regparm")sub_51038c(int32_t* arg1, char* arg2, int32_t* arg3, int32_t arg4 @ esi, int32_t arg5 @ edi, int32_t* arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t* i_2 = arg3
    int32_t* esp_1 = &i_2
    int32_t* i_1 = 7
    int32_t* i
    
    do
        *(esp_1 - 4) = 0
        *(esp_1 - 8) = 0
        esp_1 -= 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    int32_t* i_5 = i_2
    i_2 = i_1
    int32_t entry_ebx
    *(esp_1 - 4) = entry_ebx
    *(esp_1 - 8) = arg4
    *(esp_1 - 0xc) = arg5
    int32_t* i_6 = i_5
    char* var_c = arg2
    i_2 = arg1
    sub_40422c(var_c)
    void* arg_c
    sub_40422c(arg_c)
    *(esp_1 - 0x10) = &var_4
    *(esp_1 - 0x14) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0x18) = fsbase->NtTib.ExceptionList
    void* esp_8 = esp_1 - 0x18
    fsbase->NtTib.ExceptionList = esp_8
    
    if (arg7 == 2 && *data_53065c != 0)
        sub_403df8(arg6)
        *(esp_8 + 8)
        fsbase->NtTib.ExceptionList = *esp_8
        *(esp_8 + 8) = 0x510ab9
        void var_40
        sub_403e1c(&var_40, 9)
        void var_18
        sub_403df8(&var_18)
        sub_403df8(&var_c)
        void** eax_140 = &arg_c
        sub_403df8(eax_140)
        return eax_140
    
    if (*data_53065c != 0 && not.d(arg7) == 3)
        *(esp_8 - 4) = "Http-Get"
        int32_t var_24
        sub_408e1c(arg7, &var_24)
        *(esp_8 - 8) = var_24
        *(esp_8 - 0xc) = " async error: possible DEADLOCK detected ("
        *(esp_8 - 0x10) = var_c
        *(esp_8 - 0x14) = &data_510b14
        char* var_20
        sub_404138(&var_20, 5)
        sub_44cde0()
        int32_t edx_1
        edx_1.b = 1
        sub_510d34(i_2, edx_1)
    
    int32_t* i_3 = i_2
    int32_t temp2 = i_3[0x6c82]
    i_3[0x6c82] += 1
    
    if (add_overflow(temp2, 1))
        sub_403010()
        noreturn
    
    int32_t esi
    
    esi = arg7 != 0 ? 0x2742 : 0x2742
    
    if (arg7 == 0)
        arg7 = 1
    
    sub_511bec(*data_530454, U"x")
    
    if (i_2[0x13] != 3)
        int32_t temp3_1 = i_2[0xe]
        
        if (temp3_1 != 0)
            void* var_28
            *(esp_8 - 4) = &var_28
            sub_404280(sub_404078(i_2[0xe]), 1, var_c)
            sub_404188(var_28, i_2[0xe])
        
        if (temp3_1 == 0 || temp3_1 != 0)
            (*(*i_2[arg7] + 0x8c))()
        else
            i_2[0x10]
            (*(*i_2[arg7] + 0x8c))()
    else
        int32_t edx_4 = i_2[0x10]
        
        if (add_overflow(edx_4, 1))
            sub_403010()
            noreturn
        
        *(i_2[arg7 + 6] + 4) = edx_4 + 1
    
    sub_403df8(arg6)
    i_2[0x6c7d].b = 0
    *(i_2 + 0x1b1f5) = 0
    
    if (i_2[0x13] == 3)
        void* eax_31 = i_2[arg7 + 6]
        *(eax_31 + 0x110) = 0
        *(eax_31 + 0x111) = 0
    
    uint32_t eax_32
    int32_t ecx_5
    int32_t edx_16
    eax_32, ecx_5, edx_16 = GetTickCount()
    uint32_t ebx = eax_32
    ecx_5.b = 1
    edx_16.b = 1
    int32_t* eax_33 = sub_415b58(sub_50d118+0x1b4, edx_16, ecx_5)
    *(eax_33 + 0xe) = 1
    sub_403e4c(&eax_33[0xd], var_c)
    
    if (i_2[0x13] != 3)
        esi = 0xea60
        eax_33[0xe] = &i_2[arg7]
        eax_33[0xf] = &i_2[arg7 + 3]
        eax_33[0x11] = arg7
    else
        eax_33[0x10] = &i_2[arg7 + 6]
        eax_33[0x11] = arg7
    
    eax_33[0x12] = &i_2
    int32_t var_14 = 0
    int32_t* i_4 = i_2
    int32_t temp5 = i_4[0x6c80]
    i_4[0x6c80] += 1
    
    if (add_overflow(temp5, 1))
        sub_403010()
        noreturn
    
    char var_19 = 0
    
    while (true)
        if (ebp_1[3] != 3)
            int32_t eax_48 = *(ebp_1[-1] + (ebp_1[3] << 2) + 0x24)
            
            if (add_overflow(eax_48, neg.d(ebp_1[-4])))
                sub_403010()
                noreturn
            
            if (eax_48 - ebp_1[-4] s> 0)
                uint32_t eax_50 = GetTickCount()
                *(esp_8 - 4) = 0
                *(esp_8 - 8) = eax_50
                int32_t eax_52
                int32_t edx_23
                edx_23:eax_52 = sx.q(ebx)
                int32_t temp12_1 = *(esp_8 - 8)
                *(esp_8 - 8) -= eax_52
                *(esp_8 - 4) = sbb.d(*(esp_8 - 4), edx_23, temp12_1 u< eax_52)
                int32_t edx_21 = *(esp_8 - 4)
                
                if (edx_21 != 0)
                    if (edx_21 s< 0)
                    label_5105dc:
                        edx_21.b = 1
                        ebp_1 = sub_4702a8(*data_530304, edx_21.b)
                        
                        if (ebp_1[3] == 3)
                            continue
                        else if (*(ebp_1[-1] + 0x1b1f6) != 1)
                            continue
                        else
                            *(ebp_1 - 0x15) = 1
                            continue
                else if (*(esp_8 - 8) u< 0x7530)
                    goto label_5105dc
        
        int32_t eax_55 = *data_530084
        int32_t edx_24 = ebp_1[3]
        int32_t temp6_1 = *(eax_55 + (edx_24 << 2) + 0x24)
        *(eax_55 + (edx_24 << 2) + 0x24) += 2
        
        if (add_overflow(temp6_1, 2))
            sub_403010()
            noreturn
        
        int32_t temp9_1 = ebp_1[-4]
        ebp_1[-4] += 2
        
        if (add_overflow(temp9_1, 2))
            sub_403010()
            noreturn
        
        eax_33[0xc] = ebp_1[-4]
        int32_t eax_58 = *(ebp_1[-1] + (ebp_1[3] << 2) + 0x24)
        int32_t temp11_1 = ebp_1[-4]
        ebp_1[-4]
        
        if (add_overflow(eax_58, neg.d(temp11_1)))
            sub_403010()
            noreturn
        
        if ((eax_58 == temp11_1 | *(ebp_1 - 0x15)) != 0)
            break
        
        if (ebp_1[3] == 3)
            break
    
    if (*(ebp_1 - 0x15) != 0)
        sub_4030d0(eax_33)
        *(ebp_1[-1] + 0x1b1f5) = 1
    else
        sub_415c94(eax_33)
    
    void* eax_63 = ebp_1[-1]
    int32_t temp13 = *(eax_63 + 0x1b200)
    *(eax_63 + 0x1b200) -= 1
    
    if (add_overflow(temp13, 0xffffffff))
        sub_403010()
        noreturn
    
    void* eax_64 = ebp_1[-1]
    int32_t temp14 = *(eax_64 + 0x1b204)
    *(eax_64 + 0x1b204) += 1
    
    if (add_overflow(temp14, 1))
        sub_403010()
        noreturn
    
    if (ebp_1[4] != 0)
        *(esp_8 - 4) = ebp_1[4]
        int80_t x87_r0
        ebx = sub_47ab08(*data_530304, *data_530230, 2, x87_r0)
        sub_4836b0(*data_530304, *data_530230)
    
    *(esp_8 - 4) = ebp_1
    *(esp_8 - 8) = j_sub_4037f0
    *(esp_8 - 0xc) = fsbase->NtTib.ExceptionList
    void* esp_21 = esp_8 - 0xc
    fsbase->NtTib.ExceptionList = esp_21
    void* eax_71 = *data_530084
    int32_t temp15 = *(eax_71 + 0x1b214)
    *(eax_71 + 0x1b214) += 1
    
    if (add_overflow(temp15, 1))
        sub_403010()
        noreturn
    
    void* ebp_2
    
    while (true)
        int32_t edx_26
        edx_26.b = 1
        ebp_2 = sub_4702a8(*data_530304, edx_26.b)
        
        if (*(ebp_2 + 0xc) != 3 && *(*(ebp_2 - 4) + 0x1b1f6) == 1)
            *(*(ebp_2 - 4) + 0x1b1f5) = 1
        
        if (*(*(ebp_2 - 4) + 0x4c) == 3)
            void* eax_78
            eax_78.b = *(*(*(ebp_2 - 4) + (*(ebp_2 + 0xc) << 2) + 0x18) + 0x110)
            *(*(ebp_2 - 4) + 0x1b1f4) = eax_78.b
            void* eax_80
            eax_80.b = *(*(*(ebp_2 - 4) + (*(ebp_2 + 0xc) << 2) + 0x18) + 0x111)
            *(*(ebp_2 - 4) + 0x1b1f5) = eax_80.b
        
        uint32_t eax_81 = GetTickCount()
        *(esp_21 - 4) = 0
        *(esp_21 - 8) = eax_81
        int32_t eax_83
        int32_t edx_35
        edx_35:eax_83 = sx.q(ebx)
        int32_t temp16_1 = *(esp_21 - 8)
        *(esp_21 - 8) -= eax_83
        *(esp_21 - 4) = sbb.d(*(esp_21 - 4), edx_35, temp16_1 u< eax_83)
        edx_26 = *(esp_21 - 4)
        
        if (edx_26 != 0)
            if (edx_26 s< 0)
                continue
        else if (*(esp_21 - 8) u< 0x32)
            continue
        
        uint32_t eax_85 = GetTickCount()
        *(esp_21 - 4) = 0
        *(esp_21 - 8) = eax_85
        int32_t eax_87
        int32_t edx_36
        edx_36:eax_87 = sx.q(ebx)
        int32_t temp17_1 = *(esp_21 - 8)
        *(esp_21 - 8) -= eax_87
        *(esp_21 - 4) = sbb.d(*(esp_21 - 4), edx_36, temp17_1 u< eax_87)
        int32_t eax_88 = *(esp_21 - 8)
        *(esp_21 - 4) = *(esp_21 - 4)
        *(esp_21 - 8) = eax_88
        int32_t eax_90
        int32_t edx_38
        edx_38:eax_90 = sx.q(esi)
        int32_t temp18_1 = *(esp_21 - 4)
        
        if (edx_38 != temp18_1)
            *(esp_21 - 8)
            *(esp_21 - 4)
            
            if (edx_38 s<= temp18_1)
                break
        else
            *(esp_21 - 8)
            *(esp_21 - 4)
            
            if (eax_90 u<= *(esp_21 - 8))
                break
        
        if (*(*(ebp_2 - 4) + 0x1b1f4) != 0)
            break
        
        if (*(*(ebp_2 - 4) + 0x1b1f5) != 0)
            break
    
    void* eax_96 = *data_530084
    int32_t temp19 = *(eax_96 + 0x1b218)
    *(eax_96 + 0x1b218) += 1
    
    if (add_overflow(temp19, 1))
        sub_403010()
        noreturn
    
    if (*(ebp_2 + 0x10) != 0)
        sub_48380c(*data_530304, *data_530230)
    
    if (*(*(ebp_2 - 4) + 0x4c) != 3)
        sub_403e4c(*(ebp_2 + 8), *(*(ebp_2 - 4) + (*(ebp_2 + 0xc) << 2) + 0xc))
    else
        sub_403e4c(*(ebp_2 + 8), *(*(*(ebp_2 - 4) + (*(ebp_2 + 0xc) << 2) + 0x18) + 0x108))
    
    *(esp_21 + 8)
    fsbase->NtTib.ExceptionList = *esp_21
    *(esp_21 + 8) = sub_510a3e
    
    if (*(*(ebp_2 - 4) + 0x1b1f4) != 0 && *(ebp_2 - 0xc) != 0)
        int32_t esi_1 = 1
        sub_403df8(ebp_2 - 0x14)
        char ebx_1
        
        while (true)
            if (esi_1 s< 0xa && esi_1 s<= sub_404078(**(ebp_2 + 8))
                    && *(**(ebp_2 + 8) + esi_1 - 1) != 0x7c)
                int32_t edx_48
                edx_48.b = *(**(ebp_2 + 8) + esi_1 - 1)
                sub_403fa0()
                sub_404080(ebp_2 - 0x14, *(ebp_2 - 0x28))
                int32_t temp22_1 = esi_1
                esi_1 += 1
                
                if (not(add_overflow(temp22_1, 1)))
                    continue
                
                sub_403010()
                noreturn
            
            ebx_1 = 0
            break
        
        if (esi_1 s>= 0xa)
            ebx_1 = 1
        
        *(esp_21 + 4) = ebp_2
        *esp_21 = j_sub_40353c
        *(esp_21 - 4) = fsbase->NtTib.ExceptionList
        void* esp_39 = esp_21 - 4
        fsbase->NtTib.ExceptionList = esp_39
        
        if (sub_408e80(*(ebp_2 - 0x14)) == *(ebp_2 - 0xc))
            *(esp_39 - 4) = *(ebp_2 + 8)
            int32_t eax_116 = sub_404078(**(ebp_2 + 8))
            int32_t eax_118 = sub_404078(*(ebp_2 - 0x14))
            int32_t esi_3 = eax_116 - eax_118
            
            if (add_overflow(eax_116, neg.d(eax_118)))
                sub_403010()
                noreturn
            
            if (add_overflow(esi_3, 0xffffffff))
                sub_403010()
                noreturn
            
            *(esp_39 - 8) = esi_3 - 1
            int32_t eax_120 = sub_404078(*(ebp_2 - 0x14))
            
            if (add_overflow(eax_120, 2))
                sub_403010()
                noreturn
            
            sub_404280(*(esp_39 - 8), eax_120 + 2, **(ebp_2 + 8))
        else
            ebx_1 = 1
        
        *(esp_39 + 8)
        fsbase->NtTib.ExceptionList = *esp_39
        
        if (ebx_1 != 0)
            void* eax_123
            eax_123.b = *(*(ebp_2 - 4) + 0x1b1f6)
            char temp25_1 = eax_123.b
            eax_123.b -= 2
            char temp26_1
            
            if (temp25_1 u>= 2)
                temp26_1 = eax_123.b
                eax_123.b -= 7
            
            if (temp25_1 u>= 2 && temp26_1 != 7)
                *(esp_39 + 8) = "HttpRequest-CheckID Error: wanted="
                sub_408e1c(*(ebp_2 - 0xc), ebp_2 - 0x30)
                *(esp_39 + 4) = *(ebp_2 - 0x30)
                *esp_39 = ", received="
                *(esp_39 - 4) = *(ebp_2 - 0x14)
                *(esp_39 - 8) = &data_510b6c
                *(esp_39 - 0xc) = "Threads (waiting,running,sum): "
                sub_408e1c(*(*(ebp_2 - 4) + 0x1b200), ebp_2 - 0x34)
                *(esp_39 - 0x10) = *(ebp_2 - 0x34)
                *(esp_39 - 0x14) = &data_510ba0
                sub_408e1c(*(*(ebp_2 - 4) + 0x1b204), ebp_2 - 0x38)
                *(esp_39 - 0x18) = *(ebp_2 - 0x38)
                *(esp_39 - 0x1c) = &data_510ba0
                sub_408e1c(*(*(ebp_2 - 4) + 0x1b208), ebp_2 - 0x3c)
                *(esp_39 - 0x20) = *(ebp_2 - 0x3c)
                sub_404138(ebp_2 - 0x2c, 0xb)
                *(ebp_2 - 0x2c)
                sub_44cde0()
            else
                *(*(ebp_2 - 4) + 0x1b1f4) = 0
    
    if (*(*(ebp_2 - 4) + 0x1b1f4) == 0)
        sub_403df8(*(ebp_2 + 8))
    
    void* eax_136 = *(ebp_2 - 4)
    int32_t temp20 = *(eax_136 + 0x1b208)
    *(eax_136 + 0x1b208) -= 1
    
    if (not(add_overflow(temp20, 0xffffffff)))
        return eax_136
    
    sub_403010()
    noreturn
}
