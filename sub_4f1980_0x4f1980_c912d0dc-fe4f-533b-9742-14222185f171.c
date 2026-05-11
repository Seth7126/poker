// ============================================================
// 函数名称: sub_4f1980
// 虚拟地址: 0x4f1980
// WARP GUID: c912d0dc-fe4f-533b-9742-14222185f171
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4ce534, sub_4f9424, sub_4f0cf0, sub_402b4c, sub_403010
// [被调用的父级函数]: sub_4dad04
// ============================================================

int32_t __convention("regparm")sub_4f1980(int32_t arg1, int32_t arg2, void* arg3 @ esi)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    void* var_1b0 = arg3
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    data_52fe98 = 1
    void* eax_1 = *data_5301f4
    *(eax_1 + 0x10020)
    bool o = unimplemented  {imul eax, dword [eax+0x10020], 0xa9}
    
    if (o)
        sub_403010()
        noreturn
    
    if (*(*data_5301f4 + *(eax_1 + 0x10020) * 0x2a4 + 0x2a8) == 0 && *data_53041c == 1 && (
            *(*data_5301f4 + 0x1026c) != 0 || *(*data_5301f4 + 0x1026d) != 0
            || *(*data_5301f4 + 0x1026e) != 0))
        int32_t var_1bc_1 = 0xba2
        (*data_530374)(0xba2, data_530758)
        int32_t i_1 = 0x64
        void var_19c
        void* eax_13 = &var_19c
        int32_t i
        
        do
            *eax_13 = 0
            eax_13 += 4
            i = i_1
            i_1 -= 1
        while (i != 1)
        int32_t var_1bc_2 = 0x64
        (*data_53086c)(0x64, &var_19c)
        int32_t var_1b8_3 = 0x1c02
        (*data_53010c)(0x1c02)
        sub_4f0cf0(0)
        int32_t var_1b8_4 = 0x4100
        (*data_530838)(0x4100)
        int32_t var_1b8_5 = 0x1701
        (*data_530994)(0x1701)
        (*data_530810)()
        int32_t eax_26 = *(*data_530304 + 0x898)
        
        if (add_overflow(eax_26, neg.d(arg2)))
            sub_403010()
            noreturn
        
        int32_t eax_28 = sub_402b4c(float.t(eax_26 - arg2))
        *(data_530758 + 4) = 0
        void* var_1b8_6 = data_530758
        int32_t var_1bc_3 = 0x3ff00000
        int32_t var_1c0_1 = 0
        int32_t var_1c4_1 = 0x3ff00000
        int32_t var_1c8_1 = 0
        int64_t var_1d4 = fconvert.d(float.t(eax_28))
        int32_t eax_31
        int32_t edx_2
        eax_31, edx_2 = sub_402b4c(float.t(arg1))
        int32_t var_1a4_1 = edx_2
        (*data_530160)(fconvert.d(float.t(eax_31.q)))
        int32_t var_1b8_7 = 0x40490000
        int32_t var_1bc_4 = 0
        int32_t var_1c0_2 = 0x3ff00000
        int32_t var_1c4_2 = 0
        void* eax_34 = data_5305b0
        int32_t var_1c8_2 = *(eax_34 + 4)
        int32_t var_1cc_1 = *eax_34
        double var_1d4_1 = fconvert.d(float.t(*data_5300c0) / fconvert.t(4f) * fconvert.t(3f))
        (*data_530694)()
        int32_t var_1b8_8 = 0x1700
        (*data_530994)(0x1700)
        (*data_530810)()
        (*data_53073c)()
        int32_t var_1b8_9 = 0
        (*data_5307f0)(0)
        sub_4f9424(1)
        int32_t var_1b8_10 = 0
        (*data_5307b0)(0)
        int32_t var_1b8_11 = 0x1c00
        int32_t var_c_1 = (*data_53010c)(0x1c00)
        data_7a7d60 = data_7a7d5c
        data_7a7d5c = 0
        data_7a7d68 = data_7a7d64
        data_7a7d64 = 0
        
        if (var_c_1 == 0)
            sub_4ce534(*data_53067c, nullptr, 0)
        
        if (var_c_1 s< 0)
            var_c_1 = 1
        
        if (var_c_1 s<= 0)
            data_7a7d50 = 0
            
            if (*(*data_530304 + 0x9b0) == 0 || *(*data_530304 + 0x9b8) != *data_530a74)
                data_7a7d4c = 0
        else
            int32_t edx_4 = 0
            int32_t edi = 0xffffffff
            
            if (0 s< var_c_1)
                do
                    int32_t temp3_1 = edx_4
                    edx_4 += 1
                    
                    if (add_overflow(temp3_1, 1))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(edx_4, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    int32_t eax_58 = (edx_4 - 1) * 4
                    bool o_4 = unimplemented  {imul eax, eax, 0x4}
                    
                    if (o_4)
                        sub_403010()
                        noreturn
                    
                    int32_t var_198[0x63]
                    int32_t ecx_1 = var_198[eax_58]
                    
                    if (edi u> ecx_1)
                        edi = ecx_1
                        var_190
                        arg3 = *(&var_190 + (eax_58 << 2))
                while (edx_4 s< var_c_1)
            
            sub_4ce534(*data_53067c, arg3, 0)
            
            if (arg3 s< 0x64)
                arg3 = nullptr
            
            if (arg3 s> 0x64 && arg3 s< 0x7d0)
                void* temp6_1 = arg3
                arg3 -= 0x64
                
                if (add_overflow(temp6_1, 0xffffff9c))
                    sub_403010()
                    noreturn
            else if (arg3 s> 0x898)
                data_7a7d5c = arg3
                
                if (arg3 s>= 0xa28)
                    if (add_overflow(arg3, 0xfffff5d8))
                        sub_403010()
                        noreturn
                    
                    data_7a7d5c = arg3 - 0xa28
                    data_7a7d64 = 0xd
                else if (arg3 s< 0x960)
                    if (add_overflow(arg3, 0xfffff768))
                        sub_403010()
                        noreturn
                    
                    data_7a7d5c = arg3 - 0x898
                    data_7a7d64 = 0xb
                else
                    if (add_overflow(arg3, 0xfffff6a0))
                        sub_403010()
                        noreturn
                    
                    data_7a7d5c = arg3 - 0x960
                    data_7a7d64 = 0xc
                
                arg3 = nullptr
            
            if (arg3 != data_7a7d4c && arg3 != data_7a7d50 && data_7a7d54 == 0)
                *(*data_530304 + 0x9b0) = 0
            
            *(*data_530304 + 0x9b0) = 0
            *(*data_530304 + 0x9b8) = 0
            
            if ((data_7a7d4c == 0 || *(*data_530304 + 0x9b0) == 0) && arg3 != data_7a7d50
                    && data_7a7d54 == 0)
                data_7a7d4c = arg3
                data_7a7d50 = arg3
            
            if (*(*data_530304 + 0x9b0) == 0)
                data_7a7d4c = arg3
            
            if (data_7a7d54 != 0)
                data_7a7d4c = data_7a7d54
                data_7a7d54 = 0
            
            data_7a7d50 = arg3
        
        if (data_7a7d54 != 0)
            data_7a7d4c = data_7a7d54
            data_7a7d54 = 0
    
    int32_t var_1b8_12 = 0x1701
    (*data_530994)(0x1701)
    (*data_530810)()
    int32_t var_1b8_13 = 0x40490000
    int32_t var_1bc_5 = 0
    int32_t var_1c0_3 = 0x3ff00000
    int32_t var_1c4_3 = 0
    void* eax_83 = data_5305b0
    int32_t var_1c8_3 = *(eax_83 + 4)
    int32_t var_1cc_2 = *eax_83
    double var_1d4_2 = fconvert.d(float.t(*data_5300c0) / fconvert.t(4f) * fconvert.t(3f))
    (*data_530694)()
    int32_t var_1b8_14 = 0x1700
    (*data_530994)(0x1700)
    data_52fe98 = 0
    return data_7a7d4c
}
