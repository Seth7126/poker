// ============================================================
// 函数名称: sub_50003c
// 虚拟地址: 0x50003c
// WARP GUID: b24a7e81-ada2-53ef-88af-17ef32a24614
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_4fc3f8, sub_47a078, sub_4ffdd0, sub_51c744, sub_403010, sub_4ca100, sub_402b3c, sub_51bf84, sub_4ffb38, sub_4ff360, sub_4ee44c, sub_4f0c7c, sub_5044a0, sub_408e1c, sub_4ff39c, sub_5042ec, sub_4ee6ac, sub_403df8, sub_4ca104, sub_4ff3d8, sub_4ee6dc, sub_500030
// [被调用的父级函数]: sub_4f9658
// ============================================================

int32_t* __convention("regparm")sub_50003c(int32_t arg1, char arg2, char arg3, char arg4, int32_t arg5, float arg6, float arg7, float arg8, float arg9, float arg10, float arg11, float arg12, float arg13, float arg14, float arg15, float arg16)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_3fc = ebx
    int32_t esi
    int32_t var_400 = esi
    int32_t edi
    int32_t var_404 = edi
    void* var_3f8 = nullptr
    int32_t var_54 = 0
    char var_1d = arg3
    char var_2d = arg2
    int32_t var_50 = arg1
    int32_t arg_c
    int32_t* ebx_1 = &arg_c
    void var_23c
    void* edi_1 = &var_23c
    int32_t* var_408 = &var_4
    int32_t (* var_40c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    float var_2c = 0f
    
    if (arg4 != 0 && *data_5300d0 s>= arg_c)
        int32_t eax_4 = sub_4ee6dc(arg_c) * 0x23
        bool o_1 = unimplemented  {imul eax, eax, 0x23}
        
        if (o_1)
            sub_403010()
            noreturn
        
        void* edx = data_530a74
        *edx
        bool o_2 = unimplemented  {imul edx, dword [edx], 0x1038}
        
        if (o_2)
            sub_403010()
            noreturn
        
        var_2c = fconvert.s(fconvert.t(1f)
            - fconvert.t(*(*(*data_530304 + 0xab0) + *edx * 0x81c0 + (eax_4 << 3) + 0x18)))
        
        if (arg_c != 1)
            arg15 = fconvert.s(fconvert.t(var_2c) * fconvert.t(450f) + fconvert.t(arg15))
        else
            arg15 = fconvert.s(fconvert.t(arg15) - fconvert.t(var_2c) * fconvert.t(450f))
            arg16 = fconvert.s((fconvert.t(1f) - fconvert.t(var_2c)) * fconvert.t(arg16)
                + fconvert.t(var_2c) * fconvert.t(150f))
            arg14 = fconvert.s((fconvert.t(1f) - data_5026f4 * fconvert.t(var_2c)) * fconvert.t(arg14)
                - fconvert.t(var_2c) * fconvert.t(56f))
    
    if (arg_c s> 1 && *data_5300d0 s>= arg_c)
        void* eax_7 = data_530678
        int32_t edx_3 = arg_c
        *(eax_7 + (edx_3 << 2))
        bool o_3 = unimplemented  {imul eax, dword [eax+edx*4], 0x23}
        
        if (o_3)
            sub_403010()
            noreturn
        
        void* edx_4 = data_530a74
        *edx_4
        bool o_4 = unimplemented  {imul edx, dword [edx], 0x1038}
        
        if (o_4)
            sub_403010()
            noreturn
        
        float var_14c_1 = fconvert.s((fconvert.t(1f) - fconvert.t(var_2c)) * fconvert.t(
            *(*(*data_530304 + 0xab0) + *edx_4 * 0x81c0 + *(eax_7 + (edx_3 << 2)) * 0x118 + 0x18)))
        arg10 = fconvert.s(fconvert.t(arg10) - fconvert.t(6f) * fconvert.t(var_14c_1))
        arg8 = fconvert.s(fconvert.t(20f) * fconvert.t(var_14c_1) + fconvert.t(arg8))
        arg9 = fconvert.s((fconvert.t(1f) - fconvert.t(var_14c_1)) * fconvert.t(arg9)
            + data_50270c * fconvert.t(var_14c_1))
        
        if (arg5 != 2)
            arg14 = fconvert.s(fconvert.t(84f) * fconvert.t(var_14c_1) + fconvert.t(arg14))
        else
            arg14 = fconvert.s(fconvert.t(88f) * fconvert.t(var_14c_1) + fconvert.t(arg14))
    
    arg13 = fconvert.s(fconvert.t(arg13) * fconvert.t(*(*data_5301f4 + 0x457c)) * data_502720)
    arg12 = fconvert.s(fconvert.t(arg12) * fconvert.t(*(*data_5301f4 + 0x457c)) * data_50272c)
    
    if (arg_c != 0xb)
    label_50030b:
        
        if (arg_c == 0xc)
            arg13 = fconvert.s(data_502750 * fconvert.t(arg13))
            arg12 = fconvert.s(data_50275c * fconvert.t(arg12))
    else
        bool o_5 = unimplemented  {imul eax, dword [ebx], 0x2345}
        
        if (o_5)
            sub_403010()
            noreturn
        
        bool o_6 = unimplemented  {imul edx, dword [ebp+0xc], 0x35}
        
        if (o_6)
            sub_403010()
            noreturn
        
        if (*(data_5301b0 + arg_c * 0x8d14 + arg5 * 0xd4 - 0x8d8c) == 0)
            goto label_50030b
        
        bool o_7 = unimplemented  {imul eax, dword [ebx], 0x2345}
        
        if (o_7)
            sub_403010()
            noreturn
        
        bool o_8 = unimplemented  {imul edx, dword [ebp+0xc], 0x35}
        
        if (o_8)
            sub_403010()
            noreturn
        
        if (*(data_5301b0 + arg_c * 0x8d14 + arg5 * 0xd4 - 0x8d44) != 0xc)
            goto label_50030b
        
        bool o_9 = unimplemented  {imul eax, dword [ebx], 0x2345}
        
        if (o_9)
            sub_403010()
            noreturn
        
        bool o_10 = unimplemented  {imul edx, dword [ebp+0xc], 0x35}
        
        if (o_10)
            sub_403010()
            noreturn
        
        float eax_19 = *(data_5301b0 + arg_c * 0x8d14 + arg5 * 0xd4 - 0x8d88)
        arg13 = fconvert.s((data_502738 * fconvert.t(eax_19) + fconvert.t(1f)) * fconvert.t(arg13))
        arg12 = fconvert.s((data_502744 * fconvert.t(eax_19) + fconvert.t(1f)) * fconvert.t(arg12))
    
    uint32_t var_d0 = GetTickCount()
    char var_c3 = 1
    char var_c4 = 1
    char var_c5 = 1
    char var_c6 = 1
    char var_c7 = 1
    char var_c8 = 1
    char var_c9 = 1
    char var_25 = 1
    char var_ed = 0
    char var_ee = 0
    
    if (arg5 s< 0)
        *data_530364 = 0
    
    if (var_c3 != 0)
        if (*(*data_530304 + 0xdc0) == 1)
            arg11 = fconvert.s(fconvert.t(arg11) / fconvert.t(2f))
        
        *data_53014c = 0
        *data_52ff2c = 0
        void* eax_25
        eax_25.b = var_1d
        char var_26_1 = eax_25.b
    
    float var_8
    
    if (data_52fe98 == 0)
        if (var_50 != 0 && var_c4 != 0)
            char var_15_1 = 0
            (*data_5307b0)(data_7a7d48)
            sub_4f0c7c(0xde1)
            
            if (*data_530364 == 3 && *data_5308d4 == var_50 && arg_c s>= 2 && *data_5300d0 s>= arg_c)
                char eax_40
                
                if (*(data_530598 + 0x394) s> 0x37)
                    eax_40 = sub_4ca100()
                
                if ((*(data_530598 + 0x394) s<= 0x37 || eax_40 != 0)
                        && *(data_530858 + (*(data_530598 + 8) << 1)) != 0)
                    var_50 = sx.d(*(data_530858 + (*(data_530598 + 8) << 1)))
            
            (*data_53036c)(0xde1, var_50)
            void* var_414_5 = &var_23c
            void var_168
            __builtin_memcpy(&var_168, *data_530304 + 0x1098, 0x10)
            edi_1 = var_414_5
            int32_t var_15c
            (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, var_15c)
            (*data_53006c)(0xbe2)
            int32_t var_24_1 = 0x3f800000
            
            if (arg4 != 0)
                sub_4f0c7c(0xbe2)
                int32_t var_c0_2 = 0x3f000000
                
                if (*(*data_5301f4 + 4) == 7)
                    int32_t eax_77 = sub_4ee6dc(arg_c)
                    
                    if (sub_47a078(*data_530304, *data_530a74, eax_77) != 0)
                        int32_t eax_83 = sub_4ee6dc(arg_c) * 0x23
                        bool o_13 = unimplemented  {imul eax, eax, 0x23}
                        
                        if (o_13)
                            sub_403010()
                            noreturn
                        
                        void* edx_21 = data_530a74
                        *edx_21
                        bool o_14 = unimplemented  {imul edx, dword [edx], 0x1038}
                        
                        if (o_14)
                            sub_403010()
                            noreturn
                        
                        var_8 = *(*(*data_530304 + 0xab0) + *edx_21 * 0x81c0 + (eax_83 << 3) + 0x18)
                    else
                        var_8 = 0f
                else if (arg_c == 0xb)
                    if (sub_47a078(*data_530304, *data_530a74, *data_530a54) != 0)
                        void* eax_88 = data_530a74
                        *eax_88
                        bool o_15 = unimplemented  {imul eax, dword [eax], 0x1038}
                        
                        if (o_15)
                            sub_403010()
                            noreturn
                        
                        void* edx_29 = data_530a54
                        *edx_29
                        bool o_16 = unimplemented  {imul edx, dword [edx], 0x23}
                        
                        if (o_16)
                            sub_403010()
                            noreturn
                        
                        var_8 = fconvert.s(fconvert.t(0.400000006f) * fconvert.t(
                            *(*(*data_530304 + 0xab0) + *eax_88 * 0x81c0 + *edx_29 * 0x118 + 0x18))
                            + data_502784)
                    else
                        var_8 = 0.600000024f
                else if (arg5 s> 0)
                    int32_t eax_92 = sub_4ee6dc(arg5)
                    
                    if (sub_47a078(*data_530304, *data_530a74, eax_92) != 0)
                        int32_t eax_98 = sub_4ee6dc(arg5) * 0x23
                        bool o_17 = unimplemented  {imul eax, eax, 0x23}
                        
                        if (o_17)
                            sub_403010()
                            noreturn
                        
                        void* edx_33 = data_530a74
                        *edx_33
                        bool o_18 = unimplemented  {imul edx, dword [edx], 0x1038}
                        
                        if (o_18)
                            sub_403010()
                            noreturn
                        
                        var_8 = *(*(*data_530304 + 0xab0) + *edx_33 * 0x81c0 + (eax_98 << 3) + 0x18)
                    else
                        var_8 = 0f
                
                (*data_530334)(0x302, 0x303)
                float var_24_3 = var_8
    else if (var_c3 != 0)
        (*data_53006c)(0xde1)
        var_50 = 0
        (*data_5307b0)(data_7a7d48)
    
    void* eax_103
    eax_103.b = *data_530364
    
    if (eax_103.b == 0)
        int32_t var_1c_1 = 0
        
        if (*data_5300d0 s>= arg_c)
            int32_t var_1c_2 = 0x3f800000
        
        if (arg_c s> 0 && arg5 s> 0)
            bool o_19 = unimplemented  {imul eax, dword [ebx], 0x2345}
            
            if (o_19)
                sub_403010()
                noreturn
            
            bool o_20 = unimplemented  {imul edx, dword [ebp+0xc], 0x35}
            
            if (o_20)
                sub_403010()
                noreturn
            
            if (*(data_5301b0 + arg_c * 0x8d14 + arg5 * 0xd4 - 0x8d8c) != 0)
                bool o_21 = unimplemented  {imul eax, dword [ebx], 0x2345}
                
                if (o_21)
                    sub_403010()
                    noreturn
                
                bool o_22 = unimplemented  {imul edx, dword [ebp+0xc], 0x35}
                
                if (o_22)
                    sub_403010()
                    noreturn
                
                int32_t edx_40 = arg_c
                
                if (neg.d(edx_40) == 0x80000000)
                    sub_403010()
                    noreturn
                
                if (*(data_5301b0 + arg_c * 0x8d14 + arg5 * 0xd4 - 0x8d44) != neg.d(edx_40))
                    bool o_24 = unimplemented  {imul eax, dword [ebx], 0x2345}
                    
                    if (o_24)
                        sub_403010()
                        noreturn
                    
                    bool o_25 = unimplemented  {imul edx, dword [ebp+0xc], 0x35}
                    
                    if (o_25)
                        sub_403010()
                        noreturn
                    
                    if (*(data_5301b0 + arg_c * 0x8d14 + arg5 * 0xd4 - 0x8d44) != arg_c)
                        bool o_26 = unimplemented  {imul eax, dword [ebx], 0x2345}
                        
                        if (o_26)
                            sub_403010()
                            noreturn
                        
                        bool o_27 = unimplemented  {imul edx, dword [ebp+0xc], 0x35}
                        
                        if (o_27)
                            sub_403010()
                            noreturn
                        
                        int32_t edx_47 = *data_5300d0
                        
                        if (neg.d(edx_47) == 0x80000000)
                            sub_403010()
                            noreturn
                        
                        if (*(data_5301b0 + arg_c * 0x8d14 + arg5 * 0xd4 - 0x8d44) s< neg.d(edx_47))
                        label_50092f:
                            int32_t eax_124 = *data_5300d0
                            
                            if (neg.d(eax_124) == 0x80000000)
                                sub_403010()
                                noreturn
                            
                            if (neg.d(eax_124) s<= arg_c && *data_5300d0 s>= arg_c)
                                bool o_34 = unimplemented  {imul eax, dword [ebx], 0x2345}
                                
                                if (o_34)
                                    sub_403010()
                                    noreturn
                                
                                bool o_35 = unimplemented  {imul edx, dword [ebp+0xc], 0x35}
                                
                                if (o_35)
                                    sub_403010()
                                    noreturn
                                
                                float var_1c_4 = fconvert.s(fconvert.t(1f) -
                                    fconvert.t(*(data_5301b0 + arg_c * 0x8d14 + arg5 * 0xd4 - 0x8d88)))
                        else
                            bool o_29 = unimplemented  {imul eax, dword [ebx], 0x2345}
                            
                            if (o_29)
                                sub_403010()
                                noreturn
                            
                            bool o_30 = unimplemented  {imul edx, dword [ebp+0xc], 0x35}
                            
                            if (o_30)
                                sub_403010()
                                noreturn
                            
                            if (*(data_5301b0 + arg_c * 0x8d14 + arg5 * 0xd4 - 0x8d44) s> *data_5300d0)
                                goto label_50092f
                            
                            bool o_31 = unimplemented  {imul eax, dword [ebx], 0x2345}
                            
                            if (o_31)
                                sub_403010()
                                noreturn
                            
                            bool o_32 = unimplemented  {imul edx, dword [ebp+0xc], 0x35}
                            
                            if (o_32)
                                sub_403010()
                                noreturn
                            
                            int32_t var_1c_3 = *(data_5301b0 + arg_c * 0x8d14 + arg5 * 0xd4 - 0x8d88)
    
    if (*data_530364 == 3)
        sub_4f0c7c(0xbe2)
        (*data_530334)(0x302, 0x303)
        float var_8_1 = fconvert.s(float.t(*(data_530598 + 0x390)) / fconvert.t(99f))
        var_8 = 0.5f
        (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 0x3f000000)
    
    if (var_50 == 0)
        sub_4f0c7c(0xbe2)
        (*data_53006c)(0xde1)
        (*data_530334)(0, 1)
    
    int32_t i_1 = 2
    int32_t var_5c_1 = 1
    int32_t i
    
    do
        char var_65_1 = 0
        char var_66_1 = 0
        float var_284
        float var_280
        float var_27c
        float var_278
        float var_274
        float var_270
        float var_26c
        float var_268
        float var_264
        float var_260
        float var_25c
        float var_258
        float var_254
        float var_250
        float var_24c
        float var_248
        float var_244
        float var_240
        
        if (*ebx_1 s> 0 && arg5 s> 0)
            if (*(*data_5301f4 + 0x4580) != 0 && *(*data_52ffd0 + 0x3d00) == 0 && *ebx_1 == 0xc
                    && *ebx_1 == 0xc)
                bool o_36 = unimplemented  {imul eax, dword [ebp+0xc], 0x35}
                
                if (o_36)
                    sub_403010()
                    noreturn
                
                bool o_37 = unimplemented  {imul eax, dword [ebp+0xc], 0x35}
                
                if (o_37)
                    sub_403010()
                    noreturn
                
                float var_3e4[0x2c]
                sub_51c744(*(data_5301b0 + arg5 * 0xd4 + 0x60f5c), 
                    *(data_5301b0 + arg5 * 0xd4 + 0x60f58), *data_52ffd0, &var_3e4, 0, arg5.w)
                bool o_38 = unimplemented  {imul eax, dword [ebp+0xc], 0x35}
                
                if (o_38)
                    sub_403010()
                    noreturn
                
                __builtin_memcpy(data_5301b0 + arg5 * 0xd4 + 0x60f0c, &var_3e4, 0x58)
            
            if (*(*data_5301f4 + 0x4580) == 0 || *ebx_1 != 0xc || *(*data_52ffd0 + 0x3d00) == 0
                    || (*(*data_52ffd0 + 0x3d01) != 0 && *(*data_52ffd0 + 0x3d08) == arg5))
                *ebx_1
                bool o_51 = unimplemented  {imul eax, dword [ebx], 0x2345}
                
                if (o_51)
                    sub_403010()
                    noreturn
                
                bool o_52 = unimplemented  {imul edx, dword [ebp+0xc], 0x35}
                
                if (o_52)
                    sub_403010()
                    noreturn
                
                if (*(data_5301b0 + *ebx_1 * 0x8d14 + arg5 * 0xd4 - 0x8d8c) != 0)
                    *ebx_1
                    bool o_53 = unimplemented  {imul eax, dword [ebx], 0x2345}
                    
                    if (o_53)
                        sub_403010()
                        noreturn
                    
                    bool o_54 = unimplemented  {imul edx, dword [ebp+0xc], 0x35}
                    
                    if (o_54)
                        sub_403010()
                        noreturn
                    
                    void* eax_214 = data_5301b0 + *ebx_1 * 0x8d14 + arg5 * 0xd4 - 0x8d8c
                    var_65_1 = 1
                    
                    if (var_5c_1 == 2)
                        arg16 = fconvert.s(fconvert.t(arg16) + fconvert.t(*(eax_214 + 0x18)))
                        arg15 = fconvert.s(fconvert.t(arg15) + fconvert.t(*(eax_214 + 0x1c)))
                        arg14 = fconvert.s(fconvert.t(arg14) + fconvert.t(*(eax_214 + 0x20)))
                        arg10 = fconvert.s(fconvert.t(arg10) + fconvert.t(*(eax_214 + 0x3c)))
                        arg9 = fconvert.s(fconvert.t(arg9) + fconvert.t(*(eax_214 + 0x44)))
                        arg8 = fconvert.s(fconvert.t(arg8) + fconvert.t(*(eax_214 + 0x2c)))
                        arg7 = fconvert.s(fconvert.t(arg7) + fconvert.t(*(eax_214 + 0x30)))
                        arg6 = fconvert.s(fconvert.t(arg6) + fconvert.t(*(eax_214 + 0x34)))
            else
                float eax_161 = *(*data_52ffd0 + 0x3d0c)
                float var_70_1 = fconvert.s(fconvert.t(1f) - fconvert.t(*(*data_52ffd0 + 0x3d0c)))
                float eax_166 = *(*data_52ffd0 + 0x3d0c)
                float var_84_1 = fconvert.s(fconvert.t(1f) - fconvert.t(*(*data_52ffd0 + 0x3d0c)))
                float var_124_1 = fconvert.s(sub_402b3c(data_502794 * fconvert.t(eax_161)))
                float var_120_1 = fconvert.s(fneg(fconvert.t(eax_161) * fconvert.t(2f) - fconvert.t(1f))
                    * (fconvert.t(eax_161) * fconvert.t(2f) - fconvert.t(1f)) + fconvert.t(1f))
                bool o_39 = unimplemented  {imul eax, dword [ebp+0xc], 0x35}
                
                if (o_39)
                    sub_403010()
                    noreturn
                
                sub_51bf84(0, *(data_5301b0 + arg5 * 0xd4 + 0x60f58), *data_52ffd0, &var_254, 1)
                bool o_40 = unimplemented  {imul eax, dword [ebp+0xc], 0x35}
                
                if (o_40)
                    sub_403010()
                    noreturn
                
                sub_51bf84(1, *(data_5301b0 + arg5 * 0xd4 + 0x60f58), *data_52ffd0, &var_26c, 2)
                var_284 = fconvert.s(fconvert.t(var_26c) * fconvert.t(eax_161)
                    + fconvert.t(var_254) * fconvert.t(var_70_1))
                var_280 = fconvert.s(fconvert.t(var_268) * fconvert.t(eax_161)
                    + fconvert.t(var_250) * fconvert.t(var_70_1))
                var_27c = fconvert.s(fconvert.t(var_264) * fconvert.t(eax_161)
                    + fconvert.t(var_24c) * fconvert.t(var_70_1))
                var_278 = fconvert.s(fconvert.t(var_260) * fconvert.t(eax_166)
                    + fconvert.t(var_248) * fconvert.t(var_84_1))
                var_274 = fconvert.s(fconvert.t(var_25c) * fconvert.t(eax_166)
                    + fconvert.t(var_244) * fconvert.t(var_84_1))
                var_270 = fconvert.s(fconvert.t(var_258) * fconvert.t(eax_166)
                    + fconvert.t(var_240) * fconvert.t(var_84_1))
                var_66_1 = 1
                long double x87_r7_99 = fconvert.t(var_24c)
                long double temp45_1 = fconvert.t(var_264)
                x87_r7_99 - temp45_1
                
                if (not(test_bit(
                        ((x87_r7_99 < temp45_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_99, temp45_1) ? 1 : 0) << 0xa
                            | (x87_r7_99 == temp45_1 ? 1 : 0) << 0xe):1.b, 
                        6)))
                    var_280 = fconvert.s(fconvert.t(var_280) - fconvert.t(var_120_1) * fconvert.t(200f))
                
                bool o_41 = unimplemented  {imul eax, dword [ebp+0xc], 0x35}
                
                if (o_41)
                    sub_403010()
                    noreturn
                
                if (*(data_5301b0 + arg5 * 0xd4 + 0x60f58) == *(*data_52ffd0 + 0x3d14))
                    bool o_42 = unimplemented  {imul eax, dword [ebp+0xc], 0x35}
                    
                    if (o_42)
                        sub_403010()
                        noreturn
                    
                    *(data_5301b0 + arg5 * 0xd4 + 0x60f64) = 0
                    bool o_43 = unimplemented  {imul eax, dword [ebp+0xc], 0x35}
                    
                    if (o_43)
                        sub_403010()
                        noreturn
                    
                    bool o_44 = unimplemented  {imul eax, dword [ebp+0xc], 0x35}
                    
                    if (o_44)
                        sub_403010()
                        noreturn
                    
                    float var_2dc
                    sub_51c744(*(data_5301b0 + arg5 * 0xd4 + 0x60f5c), 
                        *(data_5301b0 + arg5 * 0xd4 + 0x60f58), *data_52ffd0, &var_2dc, 0, arg5.w)
                    bool o_45 = unimplemented  {imul eax, dword [ebp+0xc], 0x35}
                    
                    if (o_45)
                        sub_403010()
                        noreturn
                    
                    bool o_46 = unimplemented  {imul eax, dword [ebp+0xc], 0x35}
                    
                    if (o_46)
                        sub_403010()
                        noreturn
                    
                    float var_334
                    sub_51c744(
                        sx.d(*(*data_52ffd0 + (*(data_5301b0 + arg5 * 0xd4 + 0x60f5c) << 2) + 0x3d22)), 
                        *(data_5301b0 + arg5 * 0xd4 + 0x60f58), *data_52ffd0, &var_334, 1, arg5.w)
                    arg16 = fconvert.s(fconvert.t(var_334) * fconvert.t(eax_161)
                        + fconvert.t(var_2dc) * fconvert.t(var_70_1))
                    float var_330
                    float var_2d8
                    arg15 = fconvert.s(fconvert.t(var_330) * fconvert.t(eax_161)
                        + fconvert.t(var_2d8) * fconvert.t(var_70_1))
                    bool o_47 = unimplemented  {imul eax, dword [ebp+0xc], 0x35}
                    
                    if (o_47)
                        sub_403010()
                        noreturn
                    
                    float var_32c
                    float var_2d4
                    arg14 = fconvert.s(fconvert.t(var_32c) * fconvert.t(eax_161)
                        + fconvert.t(var_2d4) * fconvert.t(var_70_1)
                        + fconvert.t(*(data_5301b0 + arg5 * 0xd4 + 0x60f84)) * fconvert.t(var_70_1))
                    bool o_48 = unimplemented  {imul eax, dword [ebp+0xc], 0x35}
                    
                    if (o_48)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_193 =
                        sx.d(*(*data_52ffd0 + (*(data_5301b0 + arg5 * 0xd4 + 0x60f5c) << 2) + 0x3d22))
                    bool o_49 = unimplemented  {imul eax, dword [ebp+0xc], 0x35}
                    
                    if (o_49)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_195 = *(data_5301b0 + arg5 * 0xd4 + 0x60f5c)
                    int32_t eax_197 = eax_193 - eax_195
                    
                    if (add_overflow(eax_193, neg.d(eax_195)))
                        sub_403010()
                        noreturn
                    
                    void* eax_199
                    eax_199.b = *(*data_5301f4 + 4)
                    eax_199.b -= 3
                    char temp88_1 = eax_199.b
                    eax_199.b -= 2
                    
                    if (temp88_1 u< 2)
                        float var_11c_1 = 0f
                        
                        if (*ebx_1 == 0xc && *(*data_52ffd0 + 0x3d00) != 0)
                            if (sx.d(*(*data_52ffd0 + (eax_195 << 2) + 0x4356)) s> eax_195)
                                var_11c_1 = fconvert.s(data_5027a4 + fconvert.t(0f))
                            
                            if (*(*data_52ffd0 + 0x3d01) != 0
                                    && sx.d(*(*data_52ffd0 + (eax_195 << 2) + 0x4356))
                                    s> *(*data_52ffd0 + 0x3d04))
                                var_11c_1 = fconvert.s(fconvert.t(var_11c_1) + fconvert.t(1f))
                        
                        if (eax_197 s>= 0)
                            arg14 = fconvert.s((fconvert.t(160f) * fconvert.t(var_124_1)
                                + fconvert.t(260f) * fconvert.t(var_120_1)) * fconvert.t(var_11c_1)
                                + fconvert.t(arg14))
                    else if (eax_197 s>= 0)
                        arg14 = fconvert.s(fconvert.t(100f) * fconvert.t(var_124_1) + fconvert.t(arg14)
                            + fconvert.t(320f) * fconvert.t(var_120_1))
        
        if ((var_65_1 != 0 && data_52fe98 != 0) || var_5c_1 == 2)
            sub_4ee44c()
            (*data_5301d4)(0xbf991687, 0xbe91eb85, 0xc0266666)
            
            if (*data_530364 == 3)
                (*data_5306b4)(fconvert.s(fconvert.t(0f) * fconvert.t(*data_5308ec) + data_5027c4), 
                    0x3f800000, 0, 0)
                (*data_5306b4)(
                    fconvert.s(fconvert.t(0f) * fconvert.t(*(data_5308ec + 4)) + data_5027d0), 0, 
                    0x3f800000, 0)
                (*data_5306b4)(
                    fconvert.s(fconvert.t(0f) * fconvert.t(*(data_5308ec + 8)) + data_5027dc), 0, 0, 
                    0x3f800000)
                sub_4ff360()
                *(data_53044c + 8) = fconvert.d(fneg(fconvert.t(*(data_53044c + 8))))
                *(data_53044c + 0x28) = fconvert.d(fneg(fconvert.t(*(data_53044c + 0x28))))
                *(data_53044c + 0x48) = fconvert.d(fneg(fconvert.t(*(data_53044c + 0x48))))
                (*data_5306a0)(data_53044c)
                var_1d ^= 1
            
            sub_5044a0(0, arg5, *ebx_1, edi_1)
            
            if (*(edi_1 + 0xc8) == 1)
                long double x87_r7_157 = fconvert.t(*(edi_1 + 0x60))
                long double temp23_1 = fconvert.t(1f)
                x87_r7_157 - temp23_1
                int16_t eax_238 = (x87_r7_157 < temp23_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_157, temp23_1) ? 1 : 0) << 0xa
                    | (x87_r7_157 == temp23_1 ? 1 : 0) << 0xe
                
                if (test_bit(eax_238:1.b, 6) || test_bit(eax_238:1.b, 0))
                    long double x87_r7_158 = data_5027e8
                    long double temp27_1 = fconvert.t(*(edi_1 + 0x60))
                    x87_r7_158 - temp27_1
                    
                    if (test_bit(
                            ((x87_r7_158 < temp27_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_158, temp27_1) ? 1 : 0) << 0xa
                                | (x87_r7_158 == temp27_1 ? 1 : 0) << 0xe):1.b, 
                            0))
                        long double st0_2 = sub_402b3c((fconvert.t(*(edi_1 + 0x60)) - data_5027e8)
                            / fconvert.t(4f) * fconvert.t(5f) * data_5027fc)
                        *(edi_1 + 0xac)
                        bool o_55 = unimplemented  {imul eax, dword [edi+0xac], 0x2345}
                        
                        if (o_55)
                            sub_403010()
                            noreturn
                        
                        (*data_5301d4)(
                            fconvert.s(fconvert.t(fconvert.s(st0_2 * (fconvert.t(620f)
                                - fconvert.t(*(data_5301b0 + *(edi_1 + 0xac) * 0x8d14 - 0x394)))
                                / fconvert.t(3f) * (fconvert.t(1.5f) - fconvert.t(*(edi_1 + 0x60)))))
                                / fconvert.t(502f)), 
                            0, 0)
                        long double st0_3 = sub_402b3c((fconvert.t(*(edi_1 + 0x60)) - data_5027e8)
                            / fconvert.t(4f) * fconvert.t(5f) * data_5027fc)
                        *(edi_1 + 0xac)
                        bool o_56 = unimplemented  {imul eax, dword [edi+0xac], 0x2345}
                        
                        if (o_56)
                            sub_403010()
                            noreturn
                        
                        float var_b4_2 = fconvert.s(st0_3 * fneg(fconvert.t(600f)
                            + fconvert.t(*(data_5301b0 + *(edi_1 + 0xac) * 0x8d14 - 0x38c)))
                            / fconvert.t(1.5f) * (fconvert.t(1.5f) - fconvert.t(*(edi_1 + 0x60))))
                        (*data_5301d4)(0, 
                            fconvert.s(fneg(fconvert.t(var_b4_2)) / fconvert.t(502f) / fconvert.t(4f)), 
                            fconvert.s(fconvert.t(var_b4_2) / fconvert.t(502f)))
            
            (*data_5306b4)(0x420c0000, 0x3f800000, 0, 0)
            
            if (*data_530364 == 3)
                (*data_5301d4)(*data_5308ec, fconvert.s(data_50281c + fconvert.t(*(data_5308ec + 4))), 
                    *(data_5308ec + 8))
            
            float var_88_1 = 0f
            int16_t eax_253
            char temp33_1
            
            if (*(edi_1 + 0x5c) != 0)
                eax_253.b = *(edi_1 + 0x5d)
                eax_253.b -= 2
                temp33_1 = eax_253.b
                eax_253.b -= 2
            
            if (*(edi_1 + 0x5c) != 0 && temp33_1 u< 2)
                long double x87_r7_187 = fconvert.t(*(edi_1 + 0x60))
                long double temp39_1 = fconvert.t(1f)
                x87_r7_187 - temp39_1
                eax_253 = (x87_r7_187 < temp39_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_187, temp39_1) ? 1 : 0) << 0xa
                    | (x87_r7_187 == temp39_1 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_253:1.b, 6)) && not(test_bit(eax_253:1.b, 0)))
                    *(edi_1 + 0x60) = 0x3f800000
                
                float var_74_2 = fconvert.s((fconvert.t(*(edi_1 + 0x60)) - fconvert.t(0.200000003f))
                    / (fconvert.t(1f) - fconvert.t(0.200000003f) * fconvert.t(2f) / fconvert.t(2f)))
                long double x87_r7_191 = fconvert.t(*(edi_1 + 0x60))
                long double temp44_1 = fconvert.t(0.200000003f)
                x87_r7_191 - temp44_1
                eax_253.b = test_bit(
                    ((x87_r7_191 < temp44_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_191, temp44_1) ? 1 : 0) << 0xa
                        | (x87_r7_191 == temp44_1 ? 1 : 0) << 0xe):1.b, 
                    0)
                
                if (eax_253.b != 0)
                    var_74_2 = 0f
                
                if (*(edi_1 + 0xb4) s>= 0x808)
                    var_74_2 = fconvert.s((fconvert.t(*(edi_1 + 0x60)) - fconvert.t(0.200000003f))
                        / (fconvert.t(1f) - fconvert.t(0.200000003f) * fconvert.t(2f) / fconvert.t(2f))
                        * fconvert.t(1.5f))
                    long double x87_r7_196 = fconvert.t(var_74_2)
                    long double temp52_1 = fconvert.t(1f)
                    x87_r7_196 - temp52_1
                    eax_253 = (x87_r7_196 < temp52_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_196, temp52_1) ? 1 : 0) << 0xa
                        | (x87_r7_196 == temp52_1 ? 1 : 0) << 0xe
                    
                    if (not(test_bit(eax_253:1.b, 6)) && not(test_bit(eax_253:1.b, 0)))
                        var_74_2 = 1f
                    
                    long double x87_r7_197 = fconvert.t(var_74_2)
                    long double temp56_1 = fconvert.t(0f)
                    x87_r7_197 - temp56_1
                    
                    if (test_bit(
                            ((x87_r7_197 < temp56_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_197, temp56_1) ? 1 : 0) << 0xa
                                | (x87_r7_197 == temp56_1 ? 1 : 0) << 0xe):1.b, 
                            0))
                        var_74_2 = 0f
                
                float var_80_2 = var_74_2
                float var_84_2 = fconvert.s(fconvert.t(1f) - fconvert.t(var_80_2))
                float var_70_2 = fconvert.s(fconvert.t(1f) - fconvert.t(var_74_2))
                
                if (*(edi_1 + 0xb4) s>= 0x1010)
                    var_74_2 = fconvert.s((fconvert.t(*(edi_1 + 0x60)) - fconvert.t(0.200000003f)) /
                        (fconvert.t(1f) - fconvert.t(0.200000003f) * fconvert.t(2f) / fconvert.t(2f)))
                    long double x87_r7_205 = fconvert.t(*(edi_1 + 0x60))
                    long double temp55_1 = fconvert.t(0.200000003f)
                    x87_r7_205 - temp55_1
                    float eax_254
                    eax_254.w = (x87_r7_205 < temp55_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_205, temp55_1) ? 1 : 0) << 0xa
                        | (x87_r7_205 == temp55_1 ? 1 : 0) << 0xe
                    eax_254.b = test_bit(eax_254:1.b, 0)
                    
                    if (eax_254.b != 0)
                        var_74_2 = 0f
                    
                    var_70_2 = fconvert.s(fconvert.t(1f) - fconvert.t(var_74_2))
                
                arg16 = *(edi_1 + 0x74)
                arg15 = *(edi_1 + 0x78)
                var_88_1 = *(edi_1 + 0x80)
                arg14 = *(edi_1 + 0x7c)
                arg8 = *(edi_1 + 0x88)
                arg7 = *(edi_1 + 0x8c)
                arg6 = *(edi_1 + 0x90)
                float eax_261
                eax_261.b = *(edi_1 + 0x94)
                char var_2d_1 = eax_261.b
                arg9 = *(edi_1 + 0xa0)
                arg10 = *(edi_1 + 0x98)
                sub_5042ec(*(edi_1 + 0xa4), *(edi_1 + 0xa8), &var_26c)
                
                if (*(*data_5301f4 + 0x4580) != 0 && *(*data_52ffd0 + 0x3d18) == *ebx_1
                        && *(*data_52ffd0 + 0x3d00) != 0)
                    float var_124_2 = fconvert.s(sub_402b3c(data_502794 * fconvert.t(var_74_2)))
                    float var_120_2 = fconvert.s(
                        fneg(fconvert.t(var_74_2) * fconvert.t(2f) - fconvert.t(1f))
                        * (fconvert.t(var_74_2) * fconvert.t(2f) - fconvert.t(1f)) + fconvert.t(1f))
                    int32_t var_10c_1 = 0
                    void* eax_273
                    eax_273.b = *(*data_5301f4 + 4)
                    eax_273.b -= 3
                    char temp65_1 = eax_273.b
                    eax_273.b -= 2
                    
                    if (temp65_1 u>= 2)
                        *ebx_1
                        bool o_64 = unimplemented  {imul eax, dword [ebx], 0x2345}
                        
                        if (o_64)
                            sub_403010()
                            noreturn
                        
                        bool o_65 = unimplemented  {imul edx, dword [ebp+0xc], 0x35}
                        
                        if (o_65)
                            sub_403010()
                            noreturn
                        
                        if (*(data_5301b0 + *ebx_1 * 0x8d14 + arg5 * 0xd4 - 0x8d8c) != 0)
                            *ebx_1
                            bool o_66 = unimplemented  {imul eax, dword [ebx], 0x2345}
                            
                            if (o_66)
                                sub_403010()
                                noreturn
                            
                            bool o_67 = unimplemented  {imul edx, dword [ebp+0xc], 0x35}
                            
                            if (o_67)
                                sub_403010()
                                noreturn
                            
                            if (*(data_5301b0 + *ebx_1 * 0x8d14 + arg5 * 0xd4 - 0x8d44) == 0xc)
                                arg14 = fconvert.s(fconvert.t(60f) * fconvert.t(var_124_2)
                                    + fconvert.t(arg14) + fconvert.t(10f) * fconvert.t(var_120_2))
                    else
                        *ebx_1
                        bool o_57 = unimplemented  {imul eax, dword [ebx], 0x2345}
                        
                        if (o_57)
                            sub_403010()
                            noreturn
                        
                        bool o_58 = unimplemented  {imul edx, dword [ebp+0xc], 0x35}
                        
                        if (o_58)
                            sub_403010()
                            noreturn
                        
                        if (*(data_5301b0 + *ebx_1 * 0x8d14 + arg5 * 0xd4 - 0x8d8c) != 0)
                            *ebx_1
                            bool o_59 = unimplemented  {imul eax, dword [ebx], 0x2345}
                            
                            if (o_59)
                                sub_403010()
                                noreturn
                            
                            bool o_60 = unimplemented  {imul edx, dword [ebp+0xc], 0x35}
                            
                            if (o_60)
                                sub_403010()
                                noreturn
                            
                            if (*(data_5301b0 + *ebx_1 * 0x8d14 + arg5 * 0xd4 - 0x8d44) == 0xc)
                                float var_11c_2 = 0f
                                int32_t var_10c_2 = 0
                                int32_t j_4 = sx.d(*(*data_52ffd0 + 0x42d6))
                                
                                if (j_4 s> 0)
                                    int32_t j_2 = j_4
                                    int32_t var_108_1 = 1
                                    int32_t j
                                    
                                    do
                                        if (sx.d(*(*data_52ffd0 + (var_108_1 << 2) + 0x403c)) == arg5)
                                            var_10c_2 =
                                                sx.d(*(*data_52ffd0 + (var_108_1 << 2) + 0x4670))
                                        
                                        var_108_1 += 1
                                        j = j_2
                                        j_2 -= 1
                                    while (j != 1)
                                
                                if (var_10c_2 s> sx.d(*(*data_52ffd0 + 0x435a)))
                                    var_11c_2 = fconvert.s(fconvert.t(0f) + fconvert.t(0.5f))
                                
                                if (*(*data_52ffd0 + 0x3d01) != 0
                                        && *(*data_52ffd0 + 0x3d04) s< var_10c_2)
                                    var_11c_2 = fconvert.s(fconvert.t(var_11c_2) + fconvert.t(0.5f))
                                
                                long double x87_r7_221 = fconvert.t(var_11c_2)
                                long double temp100_1 = fconvert.t(0f)
                                x87_r7_221 - temp100_1
                                void* eax_295
                                eax_295.w = (x87_r7_221 < temp100_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_221, temp100_1) ? 1 : 0) << 0xa
                                    | (x87_r7_221 == temp100_1 ? 1 : 0) << 0xe
                                
                                if (not(test_bit(eax_295:1.b, 6)) && not(test_bit(eax_295:1.b, 0))
                                        && var_10c_2 s> sx.d(*(*data_52ffd0
                                        + (sx.d(*(*data_52ffd0 + 0x45f0)) << 2) + 0x4356)))
                                    var_11c_2 = fconvert.s(fconvert.t(var_11c_2) + fconvert.t(0.5f))
                                
                                int32_t var_110_1 = var_10c_2
                                int32_t j_5 = sx.d(*(*data_52ffd0 + 0x45f0))
                                
                                if (j_5 s> 0)
                                    int32_t j_3 = j_5
                                    int32_t var_108_2 = 1
                                    int32_t j_1
                                    
                                    do
                                        if (sx.d(*(*data_52ffd0 + (var_108_2 << 2) + 0x4356))
                                                s< var_10c_2)
                                            int32_t temp120_1 = var_110_1
                                            var_110_1 -= 1
                                            
                                            if (add_overflow(temp120_1, 0xffffffff))
                                                sub_403010()
                                                noreturn
                                        
                                        var_108_2 += 1
                                        j_1 = j_3
                                        j_3 -= 1
                                    while (j_1 != 1)
                                
                                if (*(*data_5301f4 + 4) != 4)
                                    if (add_overflow(var_110_1, 0xffffffff))
                                        sub_403010()
                                        noreturn
                                    
                                    float var_154_3 = fconvert.s(fconvert.t(var_74_2) - data_502738)
                                    long double x87_r7_243 = fconvert.t(var_154_3)
                                    long double temp117_1 = fconvert.t(0f)
                                    x87_r7_243 - temp117_1
                                    int32_t eax_310
                                    eax_310.w = (x87_r7_243 < temp117_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_243, temp117_1) ? 1 : 0) << 0xa
                                        | (x87_r7_243 == temp117_1 ? 1 : 0) << 0xe
                                    
                                    if (test_bit(eax_310:1.b, 0))
                                        var_154_3 = 0f
                                    
                                    long double x87_r7_251 = (fconvert.t(130f) * fconvert.t(var_124_2)
                                        + fconvert.t(240f) * fconvert.t(var_120_2)) * fconvert.t(fconvert
                                        .s(fconvert.t(fconvert.s(float.t(var_110_1 - 1) * data_50282c
                                        + fconvert.t(var_11c_2))) * fconvert.t(var_154_3)
                                        * fconvert.t(var_74_2))) + fconvert.t(arg14)
                                    arg14 = fconvert.s(x87_r7_251)
                                else
                                    if (add_overflow(var_110_1, 0xffffffff))
                                        sub_403010()
                                        noreturn
                                    
                                    float var_154_2 = fconvert.s(fconvert.t(var_74_2) - data_50282c)
                                    long double x87_r7_229 = fconvert.t(var_154_2)
                                    long double temp118_1 = fconvert.t(0f)
                                    x87_r7_229 - temp118_1
                                    int32_t eax_308
                                    eax_308.w = (x87_r7_229 < temp118_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_229, temp118_1) ? 1 : 0) << 0xa
                                        | (x87_r7_229 == temp118_1 ? 1 : 0) << 0xe
                                    
                                    if (test_bit(eax_308:1.b, 0))
                                        var_154_2 = 0f
                                    
                                    long double x87_r7_237 = (fconvert.t(130f) * fconvert.t(var_124_2)
                                        + fconvert.t(240f) * fconvert.t(var_120_2)) * fconvert.t(fconvert
                                        .s(fconvert.t(fconvert.s(float.t(var_110_1 - 1) * data_50282c
                                        + fconvert.t(var_11c_2))) * fconvert.t(var_154_2)
                                        * fconvert.t(var_74_2))) + fconvert.t(arg14)
                                    arg14 = fconvert.s(x87_r7_237)
                
                sub_5042ec(*(edi_1 + 0xac), *(edi_1 + 0xb0), &var_254)
                var_284 = fconvert.s(fconvert.t(var_26c) * fconvert.t(var_74_2)
                    + fconvert.t(var_254) * fconvert.t(var_70_2))
                var_280 = fconvert.s(fconvert.t(var_268) * fconvert.t(var_74_2)
                    + fconvert.t(var_250) * fconvert.t(var_70_2))
                var_27c = fconvert.s(fconvert.t(var_264) * fconvert.t(var_74_2)
                    + fconvert.t(var_24c) * fconvert.t(var_70_2))
                var_278 = fconvert.s(fconvert.t(var_260) * fconvert.t(var_80_2)
                    + fconvert.t(var_248) * fconvert.t(var_84_2))
                var_274 = fconvert.s(fconvert.t(var_25c) * fconvert.t(var_80_2)
                    + fconvert.t(var_244) * fconvert.t(var_84_2))
                var_270 = fconvert.s(fconvert.t(var_258) * fconvert.t(var_80_2)
                    + fconvert.t(var_240) * fconvert.t(var_84_2))
            else if (var_66_1 == 0)
                sub_5042ec(*ebx_1, arg5, &var_284)
            
            if (arg5 s< 0)
                __builtin_memset(&var_284, 0, 0x18)
            
            *(edi_1 + 0xc8)
            (*data_5301d4)(fconvert.s(fconvert.t(var_284) / fconvert.t(502f)), 
                fconvert.s(fneg(fconvert.t(var_280)) / fconvert.t(502f)), 
                fconvert.s(fconvert.t(var_27c) / fconvert.t(502f)))
            (*data_5306b4)(fconvert.s(fconvert.t(var_278) - fconvert.t(10f)), 0x3f800000, 0, 0)
            (*data_5306b4)(fconvert.s(fconvert.t(var_274) + fconvert.t(6f)), 0, 0x3f800000, 0)
            (*data_5306b4)(var_270, 0, 0, 0x3f800000)
            
            if (*ebx_1 s> 0 && arg5 s> 0)
                *ebx_1
                bool o_68 = unimplemented  {imul eax, dword [ebx], 0x2345}
                
                if (o_68)
                    sub_403010()
                    noreturn
                
                bool o_69 = unimplemented  {imul edx, dword [ebp+0xc], 0x35}
                
                if (o_69)
                    sub_403010()
                    noreturn
                
                if (*(data_5301b0 + *ebx_1 * 0x8d14 + arg5 * 0xd4 - 0x8d8c) != 0)
                    *ebx_1
                    bool o_70 = unimplemented  {imul eax, dword [ebx], 0x2345}
                    
                    if (o_70)
                        sub_403010()
                        noreturn
                    
                    bool o_71 = unimplemented  {imul edx, dword [ebp+0xc], 0x35}
                    
                    if (o_71)
                        sub_403010()
                        noreturn
                    
                    (*data_5301d4)(0, 
                        fconvert.s(
                            fneg(fconvert.t(*(data_5301b0 + *ebx_1 * 0x8d14 + arg5 * 0xd4 - 0x8d64)))
                            / fconvert.t(502f)), 
                        0)
            
            (*data_5301d4)(
                fconvert.s((fconvert.t(arg13) / fconvert.t(2f) + fconvert.t(arg16))
                    / fconvert.t(502f)), 
                fconvert.s(fneg(fconvert.t(arg12) / fconvert.t(2f) + fconvert.t(arg15))
                / fconvert.t(502f)), fconvert.s(fconvert.t(arg14) / fconvert.t(502f)))
            sub_5044a0(0, arg5, *ebx_1, edi_1)
            float var_8c_1 = fconvert.s(fconvert.t(*(edi_1 + 0x60)) * fconvert.t(2f) - fconvert.t(0f))
            long double x87_r7_302 = fconvert.t(var_8c_1)
            long double temp47_1 = fconvert.t(0f)
            x87_r7_302 - temp47_1
            
            if (test_bit(
                    ((x87_r7_302 < temp47_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_302, temp47_1) ? 1 : 0) << 0xa
                        | (x87_r7_302 == temp47_1 ? 1 : 0) << 0xe):1.b, 
                    0))
                var_8c_1 = 0f
            
            long double x87_r7_303 = fconvert.t(var_8c_1)
            long double temp50_1 = fconvert.t(1f)
            x87_r7_303 - temp50_1
            int16_t eax_334 = (x87_r7_303 < temp50_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_303, temp50_1) ? 1 : 0) << 0xa
                | (x87_r7_303 == temp50_1 ? 1 : 0) << 0xe
            
            if (not(test_bit(eax_334:1.b, 6)) && not(test_bit(eax_334:1.b, 0)))
                var_8c_1 = 1f
            
            float var_90_1 = fconvert.s(fconvert.t(1f) - fconvert.t(var_8c_1))
            int32_t var_94_1 = 0x3f800000
            
            if (*ebx_1 s> 0xa && *(edi_1 + 0x5c) != 0 && *(edi_1 + 0xa4) s> 0xa)
                (*data_5301d4)(0, 
                    fconvert.s(fconvert.t(arg12) / fconvert.t(2f) * data_502848 / fconvert.t(502f)), 0)
            else if (*ebx_1 s> 0xa && *(edi_1 + 0x5c) == 0)
                (*data_5301d4)(0, 
                    fconvert.s(fconvert.t(arg12) / fconvert.t(2f) * data_502848 / fconvert.t(502f)), 0)
            else if (*ebx_1 s> 0xa && *(edi_1 + 0x5c) != 0 && *(edi_1 + 0xa4) s<= 0xa)
                (*data_5301d4)(0, 
                    fconvert.s(fconvert.t(arg12) / fconvert.t(2f) * data_502848 / fconvert.t(502f)
                        * fconvert.t(var_90_1)), 
                    0)
            else if (*(edi_1 + 0x5c) == 0 || *(edi_1 + 0xa4) s<= 0xa)
                *ebx_1
            else
                (*data_5301d4)(0, 
                    fconvert.s(fconvert.t(arg12) / fconvert.t(2f) * data_502848 / fconvert.t(502f)
                        * fconvert.t(var_8c_1)), 
                    0)
            
            if (var_c6 != 0)
                if (*ebx_1 == 1)
                    long double x87_r7_324 = fconvert.t(var_2c)
                    long double temp78_1 = fconvert.t(0f)
                    x87_r7_324 - temp78_1
                    eax_334 = (x87_r7_324 < temp78_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_324, temp78_1) ? 1 : 0) << 0xa
                        | (x87_r7_324 == temp78_1 ? 1 : 0) << 0xe
                
                if (*ebx_1 != 1 || test_bit(eax_334:1.b, 6) || test_bit(eax_334:1.b, 0))
                    long double x87_r7_336 = fconvert.t(var_2c)
                    long double temp77_1 = fconvert.t(0f)
                    x87_r7_336 - temp77_1
                    eax_334 = (x87_r7_336 < temp77_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_336, temp77_1) ? 1 : 0) << 0xa
                        | (x87_r7_336 == temp77_1 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_334:1.b, 6) || test_bit(eax_334:1.b, 0))
                        (*data_5306b4)(arg6, 0, 0, 0x3f800000)
                        (*data_5306b4)(arg8, 0x3f800000, 0, 0)
                        (*data_5306b4)(arg7, 0, 0x3f800000, 0)
                    else
                        (*data_5306b4)(
                            fconvert.s((fconvert.t(1f) - fconvert.t(var_2c)) * fconvert.t(arg6)), 0, 0, 
                            0x3f800000)
                        (*data_5306b4)(arg8, 0x3f800000, 0, 0)
                        (*data_5306b4)(arg7, 0, 0x3f800000, 0)
                else
                    (*data_5306b4)(
                        fconvert.s((fconvert.t(1f) - fconvert.t(var_2c)) * fconvert.t(arg6)), 0, 0, 
                        0x3f800000)
                    (*data_5306b4)(fconvert.s(fconvert.t(var_2c) * fconvert.t(40f) + fconvert.t(arg8)), 
                        0x3f800000, 0, 0)
                    (*data_5306b4)(
                        fconvert.s((fconvert.t(1f) - fconvert.t(var_2c)) * fconvert.t(arg7)), 0, 
                        0x3f800000, 0)
                    (*data_5301d4)(0, 0, fconvert.s(data_502858 * fconvert.t(var_2c)))
                
                if (*(*data_5301f4 + 4) == 7)
                    float var_154_4 = fconvert.s(sub_4ca104(*ebx_1, arg5))
                    long double x87_r7_341 = fconvert.t(var_154_4)
                    long double temp87_1 = fconvert.t(0f)
                    x87_r7_341 - temp87_1
                    int16_t eax_366 = (x87_r7_341 < temp87_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_341, temp87_1) ? 1 : 0) << 0xa
                        | (x87_r7_341 == temp87_1 ? 1 : 0) << 0xe
                    
                    if (not(test_bit(eax_366:1.b, 6)) && not(test_bit(eax_366:1.b, 0)))
                        if (*ebx_1 == 0xc)
                            (*data_5301d4)(0, 0, 
                                fconvert.s(fconvert.t(var_154_4) * fconvert.t(8f) / fconvert.t(502f)))
                        
                        if (*ebx_1 != 1)
                            (*data_5306b4)(
                                fconvert.s(sub_402b3c(fconvert.t(*(*data_5301f4 + 0x21118))
                                    / fconvert.t(18f) * data_502794) * fconvert.t(var_154_4)
                                    * data_50286c), 
                                0x3f800000, 0, 0)
                        else
                            (*data_5306b4)(
                                fconvert.s(sub_402b3c(fconvert.t(*(*data_5301f4 + 0x21118))
                                    / fconvert.t(18f) * data_502794) * fconvert.t(var_154_4)
                                    * data_5026f4), 
                                0x3f800000, 0, 0)
                
                if (*(edi_1 + 0xd0) s> 0)
                    long double x87_r7_360 = sub_402b3c(data_502794 * fconvert.t(*(edi_1 + 0x60)))
                        * fconvert.t(arg12) / fconvert.t(2f) * data_502848 / fconvert.t(502f)
                        * float.t(*(edi_1 + 0xd0))
                    (*data_5301d4)(0, 0, 
                        fconvert.s(sub_402b3c(data_502794 * fconvert.t(*(edi_1 + 0x60))) * x87_r7_360
                            / fconvert.t(-14f)))
                
                if ((*ebx_1 s<= 0xa || *(edi_1 + 0x5c) == 0 || *(edi_1 + 0xa4) s<= 0xa)
                        && (*ebx_1 s<= 0xa || *(edi_1 + 0x5c) != 0))
                    if (*ebx_1 s> 0xa && *(edi_1 + 0x5c) != 0 && *(edi_1 + 0xa4) s<= 0xa)
                        (*data_5301d4)(0, 
                            fconvert.s(fconvert.t(arg12) / fconvert.t(2f) * data_502848
                                / fconvert.t(502f) * fconvert.t(var_8c_1)), 
                            0)
                    else if (*ebx_1 s<= 0xa && *(edi_1 + 0x5c) != 0 && *(edi_1 + 0xa4) s> 0xa)
                        (*data_5301d4)(0, 
                            fconvert.s(fconvert.t(arg12) / fconvert.t(2f) * data_502848
                                / fconvert.t(502f) * fconvert.t(var_90_1)), 
                            0)
                    else if (*ebx_1 != 0xffffffff)
                        (*data_5301d4)(0, 
                            fconvert.s(fconvert.t(arg12) / fconvert.t(2f) * data_502848
                                / fconvert.t(502f)), 
                            0)
                
                if (var_1d != 0)
                    (*data_5306b4)(0x43340000, 0, 0x3f800000, 0)
                
                (*data_5301d4)(fconvert.s(fneg(fconvert.t(arg13)) / fconvert.t(2f) / fconvert.t(497f)), 
                    fconvert.s((fneg(fconvert.t(arg12)) - fconvert.t(var_88_1)) / fconvert.t(2f)
                        / fconvert.t(497f)), 
                    fconvert.s(fconvert.t(arg14) / fconvert.t(497f) * fconvert.t(0f)))
            
            if (*data_530364 == 3)
                (*data_53006c)(0xb50)
            else if (*ebx_1 == 0xe)
                arg13 = fconvert.s(float.t(*data_5309b8) * data_502880)
                arg12 = fconvert.s(float.t(*data_530990) * data_502880)
                (*data_53006c)(0xb50)
                (*data_53006c)(0xbe2)
            else if (*ebx_1 != 1)
                sub_4f0c7c(0xb50)
            else
                (*data_53006c)(0xb50)
            
            float var_34_1 = arg13
            
            if (*ebx_1 == 0xc)
                *data_530364
            
            if (var_ee != 0)
                sub_4ff39c()
                
                if (*ebx_1 s> 0 && arg5 s> 0)
                    void* eax_403 = sub_500030() & 0x7f
                    *ebx_1
                    bool o_72 = unimplemented  {imul edx, dword [ebx], 0x2345}
                    
                    if (o_72)
                        sub_403010()
                        noreturn
                    
                    bool o_73 = unimplemented  {imul edx, dword [ebp+0xc], 0x35}
                    
                    if (o_73)
                        sub_403010()
                        noreturn
                    
                    int32_t edx_118
                    edx_118.b = var_1d
                    *(data_5301b0 + *ebx_1 * 0x8d14 + arg5 * 0xd4 + (eax_403 << 1) + edx_118
                        - 0x8d90) = 1
            
            if (*data_530364 == 3)
                float var_148_1 = fconvert.s(fconvert.t(arg14) - fconvert.t(arg15))
                float var_140_1 = 0f
                *ebx_1
                bool o_74 = unimplemented  {imul eax, dword [ebx], 0x2345}
                
                if (o_74)
                    sub_403010()
                    noreturn
                
                bool o_75 = unimplemented  {imul edx, dword [ebp+0xc], 0x35}
                
                if (o_75)
                    sub_403010()
                    noreturn
                
                if (*(data_5301b0 + *ebx_1 * 0x8d14 + arg5 * 0xd4 - 0x8d8c) == 0)
                label_5022e9:
                    
                    if (*ebx_1 s<= 8)
                        var_140_1 = 1f
                else
                    *ebx_1
                    bool o_76 = unimplemented  {imul eax, dword [ebx], 0x2345}
                    
                    if (o_76)
                        sub_403010()
                        noreturn
                    
                    bool o_77 = unimplemented  {imul edx, dword [ebp+0xc], 0x35}
                    
                    if (o_77)
                        sub_403010()
                        noreturn
                    
                    int32_t edx_123 = *ebx_1
                    
                    if (neg.d(edx_123) == 0x80000000)
                        sub_403010()
                        noreturn
                    
                    if (*(data_5301b0 + *ebx_1 * 0x8d14 + arg5 * 0xd4 - 0x8d44) == neg.d(edx_123))
                        goto label_5022e9
                    
                    if (*ebx_1 s> 8)
                        var_140_1 = *(edi_1 + 0x60)
                    else
                        var_140_1 = fconvert.s(fconvert.t(1f) - fconvert.t(*(edi_1 + 0x60)))
                
                float var_c_1 = fconvert.s(fconvert.t(1f)
                    - fconvert.t(var_148_1) / float.t(*(data_530598 + 0x394)) / data_50288c
                    - fconvert.t(var_140_1))
                float var_10_1 = fconvert.s(fconvert.t(1f)
                    - fconvert.t(var_148_1) / float.t(*(data_530598 + 0x394)) / data_50288c)
                long double x87_r7_409 = data_5027e8
                long double temp103_1 = fconvert.t(var_c_1)
                x87_r7_409 - temp103_1
                void* eax_413
                eax_413.w = (x87_r7_409 < temp103_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_409, temp103_1) ? 1 : 0) << 0xa
                    | (x87_r7_409 == temp103_1 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_413:1.b, 6)) && not(test_bit(eax_413:1.b, 0)))
                    var_c_1 = fconvert.s(fconvert.t(1f) - fconvert.t(var_148_1)
                        / float.t(*(data_530598 + 0x394)) / data_50288c / fconvert.t(1.5f)
                        - fconvert.t(var_140_1))
                    long double x87_r7_416 = data_5027e8
                    long double temp107_1 = fconvert.t(var_c_1)
                    x87_r7_416 - temp107_1
                    eax_413.w = (x87_r7_416 < temp107_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_416, temp107_1) ? 1 : 0) << 0xa
                        | (x87_r7_416 == temp107_1 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_413:1.b, 0))
                        var_c_1 = 0.200000003f
                
                long double x87_r7_417 = data_5027e8
                long double temp106_1 = fconvert.t(var_10_1)
                x87_r7_417 - temp106_1
                eax_413.w = (x87_r7_417 < temp106_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_417, temp106_1) ? 1 : 0) << 0xa
                    | (x87_r7_417 == temp106_1 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_413:1.b, 6)) && not(test_bit(eax_413:1.b, 0)))
                    var_10_1 = fconvert.s(fconvert.t(1f) - fconvert.t(var_148_1)
                        / float.t(*(data_530598 + 0x394)) / data_50288c / fconvert.t(1.5f))
                    long double x87_r7_423 = data_5027e8
                    long double temp111_1 = fconvert.t(var_10_1)
                    x87_r7_423 - temp111_1
                    eax_413.w = (x87_r7_423 < temp111_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_423, temp111_1) ? 1 : 0) << 0xa
                        | (x87_r7_423 == temp111_1 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_413:1.b, 0))
                        var_10_1 = 0.200000003f
                
                long double x87_r7_424 = data_50282c
                long double temp110_1 = fconvert.t(var_c_1)
                x87_r7_424 - temp110_1
                eax_413.w = (x87_r7_424 < temp110_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_424, temp110_1) ? 1 : 0) << 0xa
                    | (x87_r7_424 == temp110_1 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_413:1.b, 6)) && not(test_bit(eax_413:1.b, 0)))
                    var_c_1 = 0.100000001f
                
                long double x87_r7_425 = data_50282c
                long double temp116_1 = fconvert.t(var_10_1)
                x87_r7_425 - temp116_1
                eax_413.w = (x87_r7_425 < temp116_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_425, temp116_1) ? 1 : 0) << 0xa
                    | (x87_r7_425 == temp116_1 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_413:1.b, 6)) && not(test_bit(eax_413:1.b, 0)))
                    var_10_1 = 0.100000001f
                
                *ebx_1
                bool o_79 = unimplemented  {imul eax, dword [ebx], 0x2345}
                
                if (o_79)
                    sub_403010()
                    noreturn
                
                bool o_80 = unimplemented  {imul edx, dword [ebp+0xc], 0x35}
                
                if (o_80)
                    sub_403010()
                    noreturn
                
                if (*(data_5301b0 + *ebx_1 * 0x8d14 + arg5 * 0xd4 - 0x8d8c) != 0)
                    *ebx_1
                    bool o_81 = unimplemented  {imul eax, dword [ebx], 0x2345}
                    
                    if (o_81)
                        sub_403010()
                        noreturn
                    
                    bool o_82 = unimplemented  {imul edx, dword [ebp+0xc], 0x35}
                    
                    if (o_82)
                        sub_403010()
                        noreturn
                    
                    if (*(data_5301b0 + *ebx_1 * 0x8d14 + arg5 * 0xd4 - 0x8d44) == 0xc && *ebx_1 s<= 8)
                        float var_c_2 = fconvert.s(fconvert.t(var_c_1) * fconvert.t(*(edi_1 + 0x60)))
                        float var_10_2 = fconvert.s(fconvert.t(var_10_1) * fconvert.t(*(edi_1 + 0x60)))
            
            int32_t eax_418 = *ebx_1
            void* eax_427
            
            if (eax_418 == 0xb || eax_418 == 0xf)
            label_5024b6:
                *ebx_1
                bool o_83 = unimplemented  {imul eax, dword [ebx], 0x2345}
                
                if (o_83)
                    sub_403010()
                    noreturn
                
                bool o_84 = unimplemented  {imul edx, dword [ebp+0xc], 0x35}
                
                if (o_84)
                    sub_403010()
                    noreturn
                
                if (*(data_5301b0 + *ebx_1 * 0x8d14 + arg5 * 0xd4 - 0x8d8c) == 0)
                    eax_427.b = 1
                else
                    *ebx_1
                    bool o_85 = unimplemented  {imul eax, dword [ebx], 0x2345}
                    
                    if (o_85)
                        sub_403010()
                        noreturn
                    
                    bool o_86 = unimplemented  {imul edx, dword [ebp+0xc], 0x35}
                    
                    if (o_86)
                        sub_403010()
                        noreturn
                    
                    if (*(data_5301b0 + *ebx_1 * 0x8d14 + arg5 * 0xd4 - 0x8d44) s>= 0xffffffff)
                        eax_427.b = 1
                    else
                        *ebx_1
                        bool o_87 = unimplemented  {imul eax, dword [ebx], 0x2345}
                        
                        if (o_87)
                            sub_403010()
                            noreturn
                        
                        bool o_88 = unimplemented  {imul edx, dword [ebp+0xc], 0x35}
                        
                        if (o_88)
                            sub_403010()
                            noreturn
                        
                        if (*(data_5301b0 + *ebx_1 * 0x8d14 + arg5 * 0xd4 - 0x8d44) s<= 0xfffffff9)
                            eax_427.b = 1
                        else
                            eax_427 = nullptr
            else
                int32_t eax_421 = *(edi_1 + 0xa4)
                
                if (eax_421 == 0xb)
                    if (*(edi_1 + 0x5c) != 0 && *(*data_5301f4 + 4) != 1)
                        goto label_5024b6
                    
                    eax_427 = nullptr
                else
                    if (eax_421 == 0xf && *(edi_1 + 0x5c) != 0 && *(*data_5301f4 + 4) != 1)
                        goto label_5024b6
                    
                    eax_427 = nullptr
            
            char var_2e_1 = eax_427.b
            
            if (arg4 == 0)
            label_502571:
                
                if (*data_530364 == 2)
                    sub_4ffdd0(&var_4)
                else if (var_c7 != 0)
                    sub_4ffb38(&var_4)
            else
                long double x87_r7_430 = fconvert.t(var_8)
                long double temp109_1 = fconvert.t(0f)
                x87_r7_430 - temp109_1
                eax_427.w = (x87_r7_430 < temp109_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_430, temp109_1) ? 1 : 0) << 0xa
                    | (x87_r7_430 == temp109_1 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_427:1.b, 6)) && not(test_bit(eax_427:1.b, 0)) && *data_530364 == 0)
                    goto label_502571
                
                long double x87_r7_431 = fconvert.t(var_8)
                long double temp114_1 = fconvert.t(0.5f)
                x87_r7_431 - temp114_1
                eax_427.w = (x87_r7_431 < temp114_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_431, temp114_1) ? 1 : 0) << 0xa
                    | (x87_r7_431 == temp114_1 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_427:1.b, 6)) && not(test_bit(eax_427:1.b, 0)))
                    goto label_502571
            
            if (*data_530364 == 0 && *ebx_1 == 0xc)
                void* eax_433
                eax_433.b = *(*data_5301f4 + 4)
                eax_433.b -= 3
                char temp124_1 = eax_433.b
                eax_433.b -= 2
                
                if (temp124_1 u< 2)
                    bool o_89 = unimplemented  {imul eax, dword [ebp+0xc], 0x35}
                    
                    if (o_89)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_435 = *(data_5301b0 + arg5 * 0xd4 + 0x60f58)
                    bool o_90 = unimplemented  {imul eax, dword [ebp-0x108], 0x41}
                    
                    if (o_90)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_437 = sx.d(*(*data_52ffd0 + eax_435 * 0x104 + 2))
                    
                    if (eax_437 s> 1)
                        bool o_91 = unimplemented  {imul eax, dword [ebp-0x108], 0x41}
                        
                        if (o_91)
                            sub_403010()
                            noreturn
                        
                        bool o_92 = unimplemented  {imul edx, dword [ebp-0x108], 0x41}
                        
                        if (o_92)
                            sub_403010()
                            noreturn
                        
                        if (sx.d(*(*data_52ffd0 + eax_435 * 0x104
                                + (sx.d(*(*data_52ffd0 + eax_435 * 0x104)) << 2) - 0x102)) == arg5)
                            float var_414_67 = 1f
                            sub_408e1c(eax_437, &var_3f8)
                            long double x87_r0
                            ebx_1, i_1 = sub_4fc3f8(var_3f8, 0, 0, x87_r0, var_414_67)
            
            if (var_c8 != 0)
                (*data_53051c)(0x203)
                (*data_53006c)(0xde1)
                (*data_53006c)(0xbe2)
                
                if (*data_530364 == 2)
                    sub_4ff3d8(&var_4)
        
        var_5c_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_408_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_5026dd
    sub_403df8(&var_3f8)
    int32_t* result = &var_54
    sub_403df8(result)
    return result
}
