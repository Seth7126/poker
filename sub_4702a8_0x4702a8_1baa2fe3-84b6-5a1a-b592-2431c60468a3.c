// ============================================================
// 函数名称: sub_4702a8
// 虚拟地址: 0x4702a8
// WARP GUID: 1baa2fe3-84b6-5a1a-b592-2431c60468a3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_4748fc, sub_47a1c0, sub_404138, sub_472854, sub_402b4c, sub_403e1c, sub_403010, sub_48bd60, sub_44921c, sub_47c160, sub_48e950, sub_46a1f8, sub_47ab08, sub_484c8c, sub_4359b4, sub_409bbc, sub_48e980, sub_40fa94, sub_449234
// [被调用的父级函数]: sub_4748fc, sub_469bcc, sub_5082d0, sub_471144, sub_469c48, sub_51038c, sub_4c02cc, sub_508998
// ============================================================

int32_t __convention("regparm")sub_4702a8(float arg1 @ eax, char arg2)
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
    char* var_1c = nullptr
    int32_t var_20 = 0
    char* var_18 = nullptr
    float ebx_1 = arg1
    int32_t* var_30 = &var_4
    int32_t (* var_34)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(ebx_1 i+ 0x2fc) += 1
    
    if (add_overflow(*(ebx_1 i+ 0x2fc), 1))
        sub_403010()
        noreturn
    
    int32_t temp3 = *(ebx_1 i+ 0x1230)
    *(ebx_1 i+ 0x1230) += 1
    
    if (add_overflow(temp3, 1))
        sub_403010()
        noreturn
    
    *(ebx_1 i+ 0xa94) = 0
    uint32_t eax = GetTickCount()
    int32_t var_3c = 0
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(*(ebx_1 i+ 0x304))
    int32_t var_3c_1 = sbb.d(0, edx, eax u< eax_2)
    
    if (var_3c_1 != 0)
        if (var_3c_1 s> 0)
        label_47032d:
            
            if (*(ebx_1 i+ 0x1230) s> 0x2710)
                *(ebx_1 i+ 0x1230) = 0
            
            long double x87_r7_5 = data_470dbc * fconvert.t(*(ebx_1 i+ 0x11cc))
                + data_470dc8 * fconvert.t(*(ebx_1 i+ 0x11d4))
                + data_470dd4 * fconvert.t(*(ebx_1 i+ 0x11d8))
                + data_470de0 * fconvert.t(*(ebx_1 i+ 0x11dc))
            *(ebx_1 i+ 0x11d0) = fconvert.s(x87_r7_5)
            *(ebx_1 i+ 0x11dc) = *(ebx_1 i+ 0x11d8)
            *(ebx_1 i+ 0x11d8) = *(ebx_1 i+ 0x11d4)
            *(ebx_1 i+ 0x11d4) = *(ebx_1 i+ 0x11cc)
            *(ebx_1 i+ 0x304) = GetTickCount()
    else if (eax - eax_2 u> 0x3e8)
        goto label_47032d
    
    uint32_t eax_8 = GetTickCount()
    int32_t var_3c_2 = 0
    int32_t eax_10
    int32_t edx_2
    edx_2:eax_10 = sx.q(*(ebx_1 i+ 0x300))
    int32_t var_3c_3 = sbb.d(0, edx_2, eax_8 u< eax_10)
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    int32_t var_14 = eax_8 - eax_10
    int32_t var_10 = var_3c_3
    long double x87_r7_6 = float.t(var_14.q)
    long double temp6 = fconvert.t(200f)
    x87_r7_6 - temp6
    int32_t eax_11
    eax_11.w = (x87_r7_6 < temp6 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_6, temp6) ? 1 : 0) << 0xa
        | (x87_r7_6 == temp6 ? 1 : 0) << 0xe
    long double var_48
    long double x87_r0
    
    if (not(test_bit(eax_11:1.b, 6)) && not(test_bit(eax_11:1.b, 0)))
        *(ebx_1 i+ 0x11e0) = 0xa
        int32_t temp7_1 = *(ebx_1 i+ 0x121c)
        *(ebx_1 i+ 0x121c) += 1
        
        if (add_overflow(temp7_1, 1))
            sub_403010()
            noreturn
        
        int32_t eax_12 = *(ebx_1 i+ 0x121c)
        
        if (eax_12 s> 5 || eax_12 s<= 0)
            *(ebx_1 i+ 0x121c) = 1
        
        uint32_t eax_13 = GetTickCount()
        int32_t var_3c_4 = 0
        int32_t eax_15
        int32_t edx_4
        edx_4:eax_15 = sx.q(*(ebx_1 i+ 0x300))
        int32_t var_3c_5 = sbb.d(0, edx_4, eax_13 u< eax_15)
        var_14 = eax_13 - eax_15
        int32_t var_10_1 = var_3c_5
        long double x87_r6_7 = float.t(*(ebx_1 i+ 0x2fc))
        *(ebx_1 i+ 0x308) = fconvert.s(x87_r6_7 / x87_r6_7)
        *(ebx_1 i+ 0x30c) = fconvert.s(fconvert.t(*(ebx_1 i+ 0x308))
            / fconvert.t(*(ebx_1 i+ (*(ebx_1 i+ 0x121c) << 2) + 0x11e0)))
        long double x87_r7_12 = data_470df0
        long double temp10_1 = fconvert.t(*(ebx_1 i+ 0x30c))
        x87_r7_12 - temp10_1
        int32_t eax_17
        eax_17.w = (x87_r7_12 < temp10_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_12, temp10_1) ? 1 : 0) << 0xa
            | (x87_r7_12 == temp10_1 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax_17:1.b, 6)) && not(test_bit(eax_17:1.b, 0)))
        label_470478:
            
            for (int32_t i = 1; i != 6; i += 1)
                *(ebx_1 i+ (i << 2) + 0x11e0) = *(ebx_1 i+ 0x308)
        else
            long double x87_r7_13 = data_470dfc
            long double temp11_1 = fconvert.t(*(ebx_1 i+ 0x30c))
            x87_r7_13 - temp11_1
            eax_17.w = (x87_r7_13 < temp11_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_13, temp11_1) ? 1 : 0) << 0xa
                | (x87_r7_13 == temp11_1 ? 1 : 0) << 0xe
            
            if (test_bit(eax_17:1.b, 0))
                goto label_470478
        
        *(ebx_1 i+ (*(ebx_1 i+ 0x121c) << 2) + 0x11e0) = *(ebx_1 i+ 0x308)
        float var_c_1 = 0f
        
        for (int32_t i_1 = 1; i_1 != 6; i_1 += 1)
            var_c_1 = fconvert.s(fconvert.t(var_c_1) + fconvert.t(*(ebx_1 i+ (i_1 << 2) + 0x11e0)))
        
        if (*(ebx_1 i+ 0x8b0) != 0)
            uint32_t eax_21 = GetTickCount()
            int32_t var_3c_6 = 0
            int32_t eax_23
            int32_t edx_7
            edx_7:eax_23 = sx.q(*(ebx_1 i+ 0x8b0))
            int32_t var_3c_7 = sbb.d(0, edx_7, eax_21 u< eax_23)
            
            if (var_3c_7 != 0)
                if (var_3c_7 s> 0)
                label_470513:
                    *(ebx_1 i+ 0x11cc) = fconvert.s(fconvert.t(var_c_1) * fconvert.t(0.5f)
                        + fconvert.t(*(ebx_1 i+ 0x11cc)) * fconvert.t(0.5f))
                    uint32_t eax_25 = GetTickCount()
                    int32_t var_3c_8 = 0
                    int32_t eax_27
                    int32_t edx_9
                    edx_9:eax_27 = sx.q(*(ebx_1 i+ 0x8b0))
                    int32_t var_3c_9 = sbb.d(0, edx_9, eax_25 u< eax_27)
                    
                    if (var_3c_9 != 0)
                        if (var_3c_9 s> 0)
                            *(ebx_1 i+ 0x8b0) = 0
                    else if (eax_25 - eax_27 u> 0x1f4)
                        *(ebx_1 i+ 0x8b0) = 0
            else if (eax_21 - eax_23 u> 0x50)
                goto label_470513
        else
            *(ebx_1 i+ 0x11cc) = var_c_1
        
        *(ebx_1 i+ 0x300) = GetTickCount()
        int32_t eax_30
        int32_t edx_11
        eax_30, edx_11 = sub_402b4c(fconvert.t(*(ebx_1 i+ 0x11cc)) * fconvert.t(100f))
        var_14 = eax_30
        int32_t var_10_2 = edx_11
        int32_t var_44 = (float.t(var_14.q) / fconvert.t(100f)).d
        sub_409bbc(&var_18)
        void* ebx_2 = sub_47ab08(ebx_1, *(ebx_1 i+ 0x10d0), *(ebx_1 i+ 0x10ec), x87_r0, var_18)
        void* const var_3c_11 = "FPS "
        int32_t eax_34
        int32_t edx_13
        eax_34, edx_13 = sub_402b4c(fconvert.t(*(ebx_2 + 0x11cc)) * fconvert.t(100f))
        var_14 = eax_34
        var_10 = edx_13
        var_48 = float.t(var_14.q) / fconvert.t(100f)
        sub_409bbc(&var_20)
        int32_t var_40_10 = var_20
        var_44 = *(ebx_2 + 0x122c)
        sub_404138(&var_1c, 3)
        ebx_1 = sub_47ab08(ebx_2, *(ebx_2 + 0x10d8), *(ebx_2 + 0x10e4), x87_r0, var_1c)
        sub_47a1c0(*(ebx_1 i+ 0x10e4), *(ebx_1 i+ 0x10d8), ebx_1, *(ebx_1 i+ 0xce8))
        esp_1 = &ExceptionList
        *(ebx_1 i+ 0x10d8)
        bool o_3 = unimplemented  {imul eax, dword [ebx+0x10d8], 0x1038}
        
        if (o_3)
            sub_403010()
            noreturn
        
        *(ebx_1 i+ 0x10e4)
        bool o_4 = unimplemented  {imul edx, dword [ebx+0x10e4], 0x23}
        
        if (o_4)
            sub_403010()
            noreturn
        
        *(*(ebx_1 i+ 0xab0) + *(ebx_1 i+ 0x10d8) * 0x81c0 + *(ebx_1 i+ 0x10e4) * 0x118 - 0xf6) = 0x1f4
        *(ebx_1 i+ 0x10d8)
        bool o_5 = unimplemented  {imul eax, dword [ebx+0x10d8], 0x1038}
        
        if (o_5)
            sub_403010()
            noreturn
        
        *(ebx_1 i+ 0x10e4)
        bool o_6 = unimplemented  {imul edx, dword [ebx+0x10e4], 0x23}
        
        if (o_6)
            sub_403010()
            noreturn
        
        *(*(ebx_1 i+ 0xab0) + *(ebx_1 i+ 0x10d8) * 0x81c0 + *(ebx_1 i+ 0x10e4) * 0x118 - 0xf4) = 0
        *(ebx_1 i+ 0x2fc) = 0
        *(ebx_1 i+ 0xa94) = 1
    
    char ecx_4 = *(*data_530660 + 0x8d)
    int32_t eax_48
    int32_t edx_20
    
    if (ecx_4 == 0 && *(ebx_1 i+ 0xcf9) == 0 && *(ebx_1 i+ 0xcf8) == 0)
        edx_20:eax_48 = sx.q(*(ebx_1 i+ 0x2fc))
    
    if (ecx_4 != 0 || *(ebx_1 i+ 0xcf9) != 0 || *(ebx_1 i+ 0xcf8) != 0
            || mods.dp.d(edx_20:eax_48, 0x32) == 0 || *(ebx_1 i+ 0xce1) != 0)
        data_530660
        
        if (ecx_4 != 0)
            if (*(ebx_1 i+ 0x2e4) s> 0)
                __builtin_memcpy(ebx_1 i+ 0x11e4, ebx_1 i+ 0x11fc, 0x14)
                uint32_t eax_67 = GetTickCount()
                int32_t var_3c_18 = 0
                int32_t eax_69
                int32_t edx_26
                edx_26:eax_69 = sx.q(*(ebx_1 i+ 0x2f4))
                int32_t var_3c_19 = sbb.d(0, edx_26, eax_67 u< eax_69)
                *(ebx_1 i+ 0x300) = eax_67 - eax_69
                uint32_t eax_71 = GetTickCount()
                int32_t var_3c_20 = 0
                int32_t eax_73
                int32_t edx_28
                edx_28:eax_73 = sx.q(*(ebx_1 i+ 0x2f8))
                int32_t var_3c_21 = sbb.d(0, edx_28, eax_71 u< eax_73)
                *(ebx_1 i+ 0x304) = eax_71 - eax_73
                *(ebx_1 i+ 0x2fc) = *(ebx_1 i+ 0x2f0)
                *(ebx_1 i+ 0x11cc) = *(ebx_1 i+ 0x11f8)
                *(ebx_1 i+ 0x121c) = *(ebx_1 i+ 0x1220)
                *(ebx_1 i+ 0x11d4) = *(ebx_1 i+ 0x1210)
                *(ebx_1 i+ 0x11d8) = *(ebx_1 i+ 0x1214)
                *(ebx_1 i+ 0x11dc) = *(ebx_1 i+ 0x1218)
                *(ebx_1 i+ 0x2e8) = GetTickCount()
            
            uint32_t eax_82 = GetTickCount()
            int32_t var_3c_22 = 0
            int32_t eax_84
            int32_t edx_30
            edx_30:eax_84 = sx.q(*(ebx_1 i+ 0x2e8))
            int32_t var_3c_23 = sbb.d(0, edx_30, eax_82 u< eax_84)
            esp_1 = &ExceptionList
            
            if (var_3c_23 != 0)
                if (var_3c_23 s< 0)
                label_4708b3:
                    *(ebx_1 i+ 0x11cc) = *(ebx_1 i+ 0x11f8)
                    *(ebx_1 i+ 0x11d4) = *(ebx_1 i+ 0x1210)
                    *(ebx_1 i+ 0x11d8) = *(ebx_1 i+ 0x1214)
                    *(ebx_1 i+ 0x11dc) = *(ebx_1 i+ 0x1218)
                    *(ebx_1 i+ 0x121c) = *(ebx_1 i+ 0x1220)
                    __builtin_memcpy(ebx_1 i+ 0x11e4, ebx_1 i+ 0x11fc, 0x14)
            else if (eax_82 - eax_84 u< 0xc8)
                goto label_4708b3
            
            *(ebx_1 i+ 0x2e4) = 0
            
            if (*(ebx_1 i+ 0xce0) == 0)
                uint32_t eax_91 = GetTickCount()
                int32_t var_3c_24 = 0
                int32_t eax_93
                int32_t edx_32
                edx_32:eax_93 = sx.q(*(ebx_1 i+ 0x2e8))
                int32_t var_3c_25 = sbb.d(0, edx_32, eax_91 u< eax_93)
                int32_t eax_95 = *(ebx_1 i+ 0x2ec)
                
                if (add_overflow(eax_95, 0x320))
                    sub_403010()
                    noreturn
                
                int32_t eax_97
                int32_t edx_34
                edx_34:eax_97 = sx.q(eax_95 + 0x320)
                
                if (edx_34 != var_3c_25)
                    esp_1 = &ExceptionList
                    
                    if (edx_34 s< var_3c_25)
                        *(ebx_1 i+ 0x1224) = 0
                    else
                    label_470952:
                        uint32_t eax_100 = GetTickCount()
                        int32_t var_3c_27 = 0
                        int32_t eax_102
                        int32_t edx_37
                        edx_37:eax_102 = sx.q(*(ebx_1 i+ 0x2e8))
                        int32_t var_3c_28 = sbb.d(0, edx_37, eax_100 u< eax_102)
                        int32_t eax_104 = *(ebx_1 i+ 0x2ec)
                        
                        if (add_overflow(eax_104, 0xc8))
                            sub_403010()
                            noreturn
                        
                        int32_t eax_106
                        int32_t edx_39
                        edx_39:eax_106 = sx.q(eax_104 + 0xc8)
                        
                        if (edx_39 != var_3c_28)
                            esp_1 = &ExceptionList
                            
                            if (edx_39 s< var_3c_28)
                            label_470993:
                                
                                if (*(ebx_1 i+ 0x97d) == 0)
                                    *(ebx_1 i+ 0x1224) = 0
                        else
                            esp_1 = &ExceptionList
                            
                            if (eax_106 u< eax_100 - eax_102)
                                goto label_470993
                else
                    esp_1 = &ExceptionList
                    
                    if (eax_97 u>= eax_91 - eax_93)
                        goto label_470952
                    
                    *(ebx_1 i+ 0x1224) = 0
        
        if (*(ebx_1 i+ 0x8a0) != 0)
            bool o_10 = unimplemented  {imul eax, esi, 0x1038}
            
            if (o_10)
                sub_403010()
                noreturn
        
        sub_46a1f8(ebx_1)
        
        for (int32_t i_2 = 1; i_2 != 3; i_2 += 1)
            if (*(ebx_1 i+ 0xcea) == 0 && i_2 == 1)
            label_470a08:
                
                if (*(ebx_1 i+ 0xce9) == 0 || i_2 != 2)
                    int32_t var_3c_35 = 0x1b02
                    int32_t var_40_28 = 0x408
                    (*data_530510)()
                    (*data_53006c)(0xb20)
                    (*data_530034)(0xde1)
                    
                    if (*(ebx_1 i+ 0xcf4) == 0)
                        (*data_530034)(0xb50)
                    
                    (*data_530034)(0xb57)
                else
                    int32_t var_3c_30 = 0x1b01
                    int32_t var_40_27 = 0x408
                    (*data_530510)()
                    (*data_53006c)(0xb20)
                    (*data_53006c)(0xde1)
                    (*data_530034)(0xb50)
                    (*data_530034)(0xb57)
                
                int32_t eax_131
                int32_t edx_42
                
                if (*(ebx_1 i+ 0xcf9) != 0)
                    edx_42:eax_131 = sx.q(*(ebx_1 i+ 0x2fc))
                
                if (*(ebx_1 i+ 0xcf9) == 0 || mods.dp.d(edx_42:eax_131, 0xc8) == 0)
                    if (i_2 == 1 || *(ebx_1 i+ 0xcea) != 0)
                        (*data_530838)(0x100)
                        (*data_530838)(0x4000)
                    
                    sub_484c8c(ebx_1)
                
                *(ebx_1 i+ 0x310) = *(ebx_1 i+ 0xce9)
                
                if (i_2 == 1)
                    *(ebx_1 i+ 0xce9) = 0
                
                sub_48e950(ebx_1, 6)
                int32_t ecx_6
                
                if (arg2 == 0)
                    sub_40fa94(0xfffffffe, 0xfffffffe, &var_14)
                    int32_t* var_3c_43 = &var_14
                    void* var_40_30 = ebx_1 i+ 0xa96
                    int32_t* ecx_7
                    ecx_7.b = 0x38
                    *(ebx_1 i+ 0x1d4)
                    ecx_6 = (*(ebx_1 i+ 0x1d0))()
                    esp_1 = &ExceptionList
                else
                    sub_40fa94(0xfffffffe, 0, &var_14)
                    int32_t* var_3c_42 = &var_14
                    void* var_40_29 = ebx_1 i+ 0xa96
                    int32_t* ecx_5
                    ecx_5.b = 0x38
                    *(ebx_1 i+ 0x1d4)
                    ecx_6 = (*(ebx_1 i+ 0x1d0))()
                    esp_1 = &ExceptionList
                
                sub_48e980(ebx_1, 6, ecx_6)
                int32_t eax_145
                int32_t edx_46
                
                if (*(ebx_1 i+ 0xcf9) != 0)
                    edx_46:eax_145 = sx.q(*(ebx_1 i+ 0x2fc))
                
                if (*(ebx_1 i+ 0xcf9) == 0 || mods.dp.d(edx_46:eax_145, 0xc8) == 0)
                    int32_t ecx_8 = sub_48e950(ebx_1, 7)
                    
                    if (i_2 == 1 && *(ebx_1 i+ 0x1334) == 0)
                        ecx_8 = sub_48bd60()
                    
                    sub_48e980(ebx_1, 7, ecx_8)
                    *(ebx_1 i+ 0xce9) = *(ebx_1 i+ 0x310)
            else if (*(ebx_1 i+ 0xce9) != 0 && i_2 == 2)
                goto label_470a08
        
        if (*(ebx_1 i+ 0x1334) == 0)
            sub_472854(ebx_1)
        
        *(ebx_1 i+ 0x1334) = 0
        sub_44921c(*data_530660)
        int32_t eax_154 = *(ebx_1 i+ 0x1344)
        
        if (eax_154 != 0xffffffff)
            if (eax_154 == 1)
                *(ebx_1 i+ 0x1344) = GetTickCount()
                *(ebx_1 i+ 0x1348) = 0
            else if (*(ebx_1 i+ 0x1344) s<= 0)
            label_470cb1:
                
                if (*(ebx_1 i+ 0x1344) s> 0)
                    int32_t temp34_1 = *(ebx_1 i+ 0x1348)
                    *(ebx_1 i+ 0x1348) += 1
                    
                    if (add_overflow(temp34_1, 1))
                        sub_403010()
                        noreturn
            else
                uint32_t eax_157 = GetTickCount()
                int32_t var_3c_44 = 0
                int32_t eax_159
                int32_t edx_48
                edx_48:eax_159 = sx.q(*(ebx_1 i+ 0x1344))
                int32_t var_3c_45 = sbb.d(0, edx_48, eax_157 u< eax_159)
                esp_1 = &ExceptionList
                
                if (var_3c_45 == 0)
                    if (eax_157 - eax_159 u< 0x7d0)
                        goto label_470cb1
                    
                    goto label_470c6b
                
                if (var_3c_45 s< 0)
                    goto label_470cb1
                
            label_470c6b:
                *(ebx_1 i+ 0x1344) = 0xffffffff
                ebx_1 = sub_47ab08(ebx_1, *(ebx_1 i+ 0x10d0), *(ebx_1 i+ 0x1108), x87_r0, "second")
                esp_1 = &ExceptionList
                
                if (*(ebx_1 i+ 0x1348) s<= 0x14)
                    int32_t var_3c_47 = 0
                    var_48.d = 0
                    esp_1 = &var_48
                    sub_4748fc(ebx_1, sub_470e4b+5, "Achtung!", var_48.d, 0, 0)
        
        int32_t eax_164
        int32_t edx_51
        
        if (*(ebx_1 i+ 0xcf9) != 0)
            edx_51:eax_164 = sx.q(*(ebx_1 i+ 0x2fc))
        
        if (*(ebx_1 i+ 0xcf9) == 0 || mods.dp.d(edx_51:eax_164, 0xc8) == 0)
            int32_t ecx_10 = sub_48e950(ebx_1, 9)
            *data_530968
            int32_t ecx_11 = sub_4359b4(ecx_10, &var_14)
            int32_t eax_169 = var_14
            
            if (add_overflow(eax_169, neg.d(*(ebx_1 i+ 0x30))))
                sub_403010()
                noreturn
            
            *(ebx_1 i+ 0x9a0) = eax_169 - *(ebx_1 i+ 0x30)
            *data_530968
            sub_4359b4(ecx_11, &var_14)
            int32_t esi_6 = var_10 - *(ebx_1 i+ 0x34)
            
            if (add_overflow(var_10, neg.d(*(ebx_1 i+ 0x34))))
                sub_403010()
                noreturn
            
            *(ebx_1 i+ 0x9a4) = esi_6
            *(esp_1 - 4) = 1
            *(esp_1 - 8) = 1
            int32_t eax_174
            
            if (*(ebx_1 i+ 0xa98) != *(ebx_1 i+ 0x9a0) || *(ebx_1 i+ 0xa9c) != *(ebx_1 i+ 0x9a4))
                eax_174 = 0
            else
                eax_174.b = 1
            
            *(esp_1 - 0xc) = eax_174
            *(esp_1 - 0x10) = 0
            esp_1 -= 0x10
            int32_t ecx_13 = sub_47c160(ebx_1, *(ebx_1 i+ 0x9a0), esi_6)
            *(ebx_1 i+ 0xa98) = *(ebx_1 i+ 0x9a0)
            *(ebx_1 i+ 0xa9c) = *(ebx_1 i+ 0x9a4)
            sub_48e980(ebx_1, 9, ecx_13)
    else
        sub_449234(*data_530660)
        
        if (*(ebx_1 i+ 0x2e4) == 0)
            __builtin_memcpy(ebx_1 i+ 0x11fc, ebx_1 i+ 0x11e4, 0x14)
            *(ebx_1 i+ 0x1210) = *(ebx_1 i+ 0x11d4)
            *(ebx_1 i+ 0x1214) = *(ebx_1 i+ 0x11d8)
            *(ebx_1 i+ 0x1218) = *(ebx_1 i+ 0x11dc)
            *(ebx_1 i+ 0x2f0) = *(ebx_1 i+ 0x2fc)
            uint32_t eax_56 = GetTickCount()
            int32_t var_3c_14 = 0
            int32_t eax_58
            int32_t edx_22
            edx_22:eax_58 = sx.q(*(ebx_1 i+ 0x300))
            int32_t var_3c_15 = sbb.d(0, edx_22, eax_56 u< eax_58)
            *(ebx_1 i+ 0x2f4) = eax_56 - eax_58
            uint32_t eax_60 = GetTickCount()
            int32_t var_3c_16 = 0
            int32_t eax_62
            int32_t edx_24
            edx_24:eax_62 = sx.q(*(ebx_1 i+ 0x304))
            int32_t var_3c_17 = sbb.d(0, edx_24, eax_60 u< eax_62)
            esp_1 = &ExceptionList
            *(ebx_1 i+ 0x2f8) = eax_60 - eax_62
            *(ebx_1 i+ 0x11f8) = *(ebx_1 i+ 0x11cc)
            *(ebx_1 i+ 0x1220) = *(ebx_1 i+ 0x121c)
            
            if (*(ebx_1 i+ 0xce0) == 0)
                *(ebx_1 i+ 0x1224) = 1
            
            *(ebx_1 i+ 0x2ec) = 0
        
        if (*(ebx_1 i+ 0x2e4) s< 0x64)
            int32_t temp17_1 = *(ebx_1 i+ 0x2e4)
            *(ebx_1 i+ 0x2e4) += 1
            
            if (add_overflow(temp17_1, 1))
                sub_403010()
                noreturn
    
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = sub_470db5
    return sub_403e1c(&var_20, 3)
}
