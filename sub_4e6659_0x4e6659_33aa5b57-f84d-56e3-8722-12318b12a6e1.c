// ============================================================
// 函数名称: sub_4e6659
// 虚拟地址: 0x4e6659
// WARP GUID: 33aa5b57-f84d-56e3-8722-12318b12a6e1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ShellExecuteA
// [内部子函数调用]: sub_404054, sub_4d815c, sub_4030d0, sub_468ec0, sub_513ae4, sub_42b9bc, sub_4d7b54, sub_47a7ec, sub_4030a0, sub_49574c, sub_468970, sub_42b7a8, sub_47a044, sub_4cc428, sub_402bdc, sub_4c585c, sub_42af98, sub_47b650, sub_5148a0, sub_4dd154, sub_404078, sub_516eec, sub_4318d0, sub_4d78f8, sub_51fdc8, sub_478234, sub_5170a4, sub_4b570c, sub_517a38, sub_48380c, sub_42afb8, sub_4ce468, sub_4d9530, sub_4c1090, sub_50d2f4, sub_509bfc, sub_4dc3b8, sub_516544, sub_514c48, sub_4b566c, sub_42b778, sub_4d7e6c, sub_4b8bb8, sub_4836b0, sub_52c2dc, sub_4834fc, sub_50928c, sub_4d63bc, sub_514468, sub_4748fc, sub_408e4c, sub_511dcc, sub_47a1c0, sub_520efc, sub_47a078, sub_510ba4, sub_4804e4, sub_509af8, sub_50e368, sub_50e22c, sub_4956c0, sub_517794, sub_404280, sub_513e4c, sub_403e1c, sub_483950, sub_4c2418, sub_51fd8c, sub_4b7420, sub_4dad04, sub_528e4c, sub_4727f8, sub_47ab08, sub_47b488, sub_51801c, sub_517b44, sub_46d9ac, sub_46e0ac, sub_4c0fcc, sub_508730, sub_509a28, sub_527230, sub_476bc0, sub_514c8c, sub_48e89c, sub_4c2d7c, sub_403df8, sub_50f6ec, sub_507d4c, sub_4471a4, sub_51ad40, sub_4dd144, sub_507860, sub_51a838, sub_47b304, sub_5255a0, sub_524d14, sub_51497c, sub_403898, sub_47b2ac, sub_408e80, sub_4c1fb8, sub_47a180, sub_52c66c, sub_502898, sub_46e17c, sub_517ad4, sub_4d6b10, sub_50d9e0, sub_5140f8, sub_4cda5c, sub_50971c, sub_403010, sub_42bc48, sub_4ca054, sub_528770, sub_4d69e8, sub_4d81c8, sub_4d6660, sub_4d6994, sub_47a2ac, sub_404080, sub_507dbc, sub_5072b8, sub_44613c, sub_4040c4, sub_516ec0, sub_50b624, sub_4ed040, sub_509850, sub_5143f0, sub_4c93fc, sub_4c27e4, sub_4d3e30, sub_42afdc, sub_4c2f1c, sub_4746a0, sub_50732c, sub_4d7ff0, sub_50d318, sub_4d9704, sub_47a9a0, sub_5101f8, sub_4ecb3c, sub_528320, sub_4c4ab8, sub_46910c, sub_4bdac0, sub_46e24c, sub_47a9e0, sub_4c0924, sub_510f54, sub_48e9e4, sub_404138, sub_4f1860, sub_46acf4, sub_4042c0, sub_4837ec, sub_46accc, sub_52452c, sub_509890, sub_480534, sub_4837d0, sub_402b4c, sub_4d6590, sub_47a960, sub_402d38, sub_4d88f8, sub_404188, sub_42affc, sub_4692e4, sub_46d884, sub_517f20, sub_516e74, sub_51d270, sub_47a140, sub_468afc, sub_4d7a1c, sub_4b56b0, sub_4dd1e0, sub_50c5e0, sub_408e1c, sub_469ac0, sub_4c094c, sub_4cd498, sub_520a94, sub_403fa0, sub_4b764c, sub_4eca90, sub_402e64, sub_4d8208, sub_4d6664, sub_4d885c, sub_40fa94, sub_46f698, sub_447198, sub_50e11c, sub_4d7f8c
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_4e6659(void* arg1 @ ebp, void* const arg2)
{
    // 第一条实际指令: data_780dac = 0
    data_780dac = 0
    sub_403898(__return_addr)
    *data_530a18
    int32_t eax_2 = sub_4471a4()
    void arg_4
    void* esp_1 = &arg_4
    sub_42afdc(data_61c8c8, eax_2)
    *data_530a18
    int32_t eax_6 = sub_447198()
    int32_t ecx = sub_42affc(data_61c8c8, eax_6)
    void* ebx = *(*(arg1 - 4) + 0x60a4)
    sub_42b778(ecx, arg1 - 0x280)
    sub_404080(arg1 - 0x280, U".")
    void* ebp = sub_42b7a8(ebx, *(arg1 - 0x280))
    sub_42afdc(*(*(ebp - 4) + 0x60a4), 0x78)
    sub_42affc(*(*(ebp - 4) + 0x60a4), 0x14)
    *data_530a18
    int32_t eax_18 = sub_4471a4()
    int32_t edx_5 = eax_18 s>> 1
    bool c = unimplemented  {sar edx, 0x1}
    
    if (eax_18 s>> 1 s< 0)
        edx_5 = adc.d(edx_5, 0, c)
    
    if (add_overflow(edx_5, 0xffffffc4))
        sub_403010()
        noreturn
    
    sub_42af98(*(*(ebp - 4) + 0x60a4))
    *data_530a18
    
    if (add_overflow(sub_447198(), 0xffffff9c))
        sub_403010()
        noreturn
    
    sub_42afb8(*(*(ebp - 4) + 0x60a4))
    void* ebp_1
    int32_t esi
    ebp_1, esi = sub_42b7a8(*(*(ebp - 4) + 0x60a4), "Initializing..")
    sub_42bc48(*(*(ebp_1 - 4) + 0x60a4))
    *(*(ebp_1 - 4) + 0x60a4)
    sub_42b9bc()
    int32_t ecx_1
    int32_t edx_10
    edx_10, ecx_1 = (*(**(*(ebp_1 - 4) + 0x60a4) + 0x78))()
    
    if (*(ebp_1 - 0x14) == 0xfffffff5)
        __return_addr = nullptr
        sub_51ad40(data_780c5c, 1)
        esp_1 = &arg_4
    else if (*(ebp_1 - 0x14) == 0xfffffff4)
        __return_addr = nullptr
        sub_51ad40(data_780c5c, 2)
        esp_1 = &arg_4
    else if (0x38 == *(ebp_1 - 5))
        PSTR lpFile
        void* lpDirectory
        
        if (*(ebp_1 - 0x14) == 0xfffffffd && *(data_61c8c8 + 0x9b0) == 0)
        label_4e6876:
            
            if (*data_530508 != 0 && data_77e245 == 1)
                __return_addr = *data_530508
                lpDirectory = nullptr
                int32_t var_8_1 = 0
                lpFile = nullptr
                edx_10.b = 3
                sub_527230(*data_5300a0, edx_10.b, data_780c58, lpFile.b, var_8_1, lpDirectory)
                esp_1 = &arg_4
                *data_5300a0 = 0
                *data_530508 = 0
            
            ecx_1, edx_10 = sub_4ce468(*data_53067c)
            
            if (*data_5305b8 != 0 && data_77e245 == 1)
                if (*(data_780c58 + 0x10278) != 0)
                    void* eax_53 = data_5305b8
                    *eax_53
                    int32_t eax_54 = *eax_53 * 0x35
                    bool o_2 = unimplemented  {imul eax, dword [eax], 0x35}
                    
                    if (o_2)
                        sub_403010()
                        noreturn
                    
                    if (*((eax_54 << 2) + &data_61d69c) != 0)
                        __return_addr = *data_5305b8
                        sub_4f1860(1, 1, (eax_54 << 2) + &data_61d69c, __return_addr)
                        __return_addr = *data_5305b8
                        sub_51ad40(data_780c5c, 0xf)
                    else
                        __return_addr = *data_5305b8
                        sub_4f1860(1, 0, (eax_54 << 2) + &data_61d69c, __return_addr)
                        __return_addr = *data_5305b8
                        sub_51ad40(data_780c5c, 0xf)
                    
                    __return_addr = 1
                    ecx_1, edx_10 = sub_47a180(data_61cd60, data_61ccfc, data_61c8c8, __return_addr.b)
                    esp_1 = &arg_4
                else
                    sub_4837d0(*(ebp_1 - 4), data_61ccf0)
                    __return_addr = *data_5305b8
                    lpDirectory = nullptr
                    int32_t var_8_2 = 0
                    lpFile = nullptr
                    ecx_1 = 0
                    edx_10 = sub_527230(0, 0, data_780c58, lpFile.b, var_8_2, lpDirectory)
                    esp_1 = &arg_4
                    data_77e245 = 2
        else if (*(data_61c8c8 + 0x9b0) != 0 && *(ebp_1 - 0x14) == data_61cda0)
            goto label_4e6876
        
        if (*(ebp_1 - 0x14) == 0xfffffffb)
            sub_507dbc(1)
            data_61c8c8
            sub_46acf4()
            ebp_1 = sub_46d884(*(ebp_1 - 4))
            data_61c8c8
            sub_46acf4()
            data_61c8c8
            sub_46acf4()
            *(ebp_1 - 4)
            sub_4dd154()
            data_61c8c8
            sub_46acf4()
            data_61c8c8
            sub_46acf4()
            sub_4030d0(data_780c68)
            data_61c8c8
            sub_46acf4()
            data_61c8c8
            sub_46acf4()
            sub_4030d0(data_780c60)
            sub_4030d0(data_780c64)
            data_61c8c8
            sub_46acf4()
            data_61c8c8
            sub_46acf4()
            sub_4030d0(data_780c58)
            data_61c8c8
            sub_46acf4()
            data_61c8c8
            sub_46acf4()
            sub_4030d0(data_780c5c)
            data_61c8c8
            sub_46acf4()
            data_61c8c8
            sub_46acf4()
            sub_4030d0(data_780da4)
            data_61c8c8
            sub_46acf4()
            data_61c8c8
            sub_46acf4()
            sub_4030d0(data_780db0)
            sub_4030d0(data_780db4)
            sub_4030d0(data_61c9f0)
            
            if (data_7a6e5c != 0)
                sub_4030d0(data_7a6e5c)
            
            sub_4030d0(data_61c9f4)
            data_61c8c8
            sub_46acf4()
            int32_t edx_34
            edx_34.b = 1
            sub_4b8bb8(*data_530380)
        else
            int32_t edi
            
            if (*(ebp_1 - 0x14) == 0xfffffffc)
                data_61c8c8
                sub_46acf4()
                data_61c8c8
                sub_46acf4()
                int32_t ecx_9
                ecx_9.b = 1
                *(ebp_1 - 4)
                sub_4dc3b8(ecx_9, 1, esi, edi)
                data_61c8c8
                sub_46acf4()
            else if (*(ebp_1 - 0x14) == 0xfffffffe)
                edx_10.b = *(ebp_1 - 0x18) == 0
                sub_4dad04(*(ebp_1 - 4), edx_10.b, esi, edi)
            else
                void* const arg_8
                long double x87_r0
                
                if (*(ebp_1 - 0x14) == 0xfffffff8)
                    if (*(*(ebp_1 - 4) + 0xce0) != 0)
                        char eax_101 = (*(ebp_1 - 0x18)).b
                        
                        if (eax_101 == 0x4a)
                            data_7a6e78 = fconvert.s(fconvert.t(data_7a6e78) - data_4ebfc0)
                        
                        if (eax_101 == 0x4b)
                            data_7a6e78 = fconvert.s(data_4ebfc0 + fconvert.t(data_7a6e78))
                        
                        if (eax_101 == 0x49)
                            data_7a6e80 = fconvert.s(fconvert.t(data_7a6e80) - data_4ebfc0)
                        
                        if (eax_101 == 0x4d)
                            data_7a6e80 = fconvert.s(data_4ebfc0 + fconvert.t(data_7a6e80))
                        
                        if (eax_101 == 0x4f)
                            data_7a6e7c = fconvert.s(fconvert.t(data_7a6e7c) - data_4ebfc0)
                        
                        if (*(ebp_1 - 0x18) == 0xbc)
                            data_7a6e7c = fconvert.s(data_4ebfc0 + fconvert.t(data_7a6e7c))
                        
                        if (*(ebp_1 - 0x18) == 0xbd)
                            __return_addr = nullptr
                            lpDirectory = nullptr
                            int32_t var_8_3 = 0
                            lpFile = nullptr
                            int32_t eax_102
                            int32_t edx_39
                            eax_102, edx_39 = sub_402b4c(fconvert.t(data_7a6e78) * fconvert.t(100f))
                            int32_t var_10_1 = edx_39
                            int32_t var_14_1 = eax_102
                            sub_408e4c()
                            int32_t var_10_2 = *(ebp_1 - 0x288)
                            void* const var_14_2 = &data_4ebfd8
                            int32_t eax_104
                            int32_t edx_40
                            eax_104, edx_40 = sub_402b4c(fconvert.t(data_7a6e7c) * fconvert.t(100f))
                            int32_t var_18_1 = edx_40
                            int32_t var_1c_1 = eax_104
                            sub_408e4c()
                            int32_t var_18_2 = *(ebp_1 - 0x28c)
                            void* const var_1c_2 = &data_4ebfd8
                            int32_t eax_106
                            int32_t edx_41
                            eax_106, edx_41 = sub_402b4c(fconvert.t(data_7a6e80) * fconvert.t(100f))
                            int32_t var_20_1 = edx_41
                            int32_t var_24_1 = eax_106
                            sub_408e4c()
                            int32_t var_20_2 = *(ebp_1 - 0x290)
                            sub_404138(ebp_1 - 0x284, 5)
                            ecx_1 =
                                sub_4748fc(data_61c8c8, *(ebp_1 - 0x284), nullptr, arg_4, arg_8, arg2)
                    
                    int32_t edx_43 = 0
                    *(data_780c58 + 0x4578) = 0
                    
                    if (*(ebp_1 - 0x18) != 0xd)
                    label_4e6e19:
                        
                        if (*(ebp_1 - 0x18) != 0xd)
                        label_4e6e50:
                            int32_t eax_123 = *(ebp_1 - 0x18) - 8
                            bool c_1 = eax_123 u< 0xdf
                            
                            if (eax_123 == 0xdf || c_1)
                                c_1 = test_bit(0x1000020, eax_123)
                            
                            if (c_1 || (*(ebp_1 - 0x18) s>= 0x30 && *(ebp_1 - 0x18) s<= 0x7a))
                                char ebx_1 = 0
                                
                                if (sub_4c0924() == 0 || *(data_61c9f0 + 0x54) s> 1)
                                    int32_t eax_127 = *(ebp_1 - 0x18) - 8
                                    bool c_2 = eax_127 u< 0xdf
                                    
                                    if (eax_127 == 0xdf || c_2)
                                        c_2 = test_bit(0x1000020, eax_127)
                                    
                                    if (c_2)
                                    label_4e6eb3:
                                        data_61c90c
                                        bool o_8 = unimplemented  {imul eax, dword [0x61c90c], 0x1038}
                                        
                                        if (o_8)
                                            sub_403010()
                                            noreturn
                                        
                                        ebx_1 = *(*(data_61c8c8 + 0xab0) + data_61c90c * 0x81c0 + 1) ^ 1
                                    else if (*(ebp_1 - 0x18) s>= 0x30 && *(ebp_1 - 0x18) s<= 0x7a)
                                        goto label_4e6eb3
                                    
                                    if (*(ebp_1 - 0x18) == 0x20)
                                        data_61c90c
                                        bool o_9 = unimplemented  {imul eax, dword [0x61c90c], 0x1038}
                                        
                                        if (o_9)
                                            sub_403010()
                                            noreturn
                                        
                                        if (*(*(data_61c8c8 + 0xab0) + data_61c90c * 0x81c0 + 1) == 0)
                                            ebx_1 = 1
                                    
                                    if (data_77e23c != 1)
                                        data_61c90c
                                        bool o_10 = unimplemented  {imul eax, dword [0x61c90c], 0x1038}
                                        
                                        if (o_10)
                                            sub_403010()
                                            noreturn
                                        
                                        if (*(*(data_61c8c8 + 0xab0) + data_61c90c * 0x81c0 + 1) == 0)
                                            ebx_1 = 0
                                    
                                    if (*(ebp_1 - 0x18) == 0xd)
                                        if (*(data_61c8c8 + 0x9b0) == 0
                                                || *(data_61c8c8 + 0x9b8) == data_61c90c
                                                || *(data_61c8c8 + 0x9b8) s<= 0
                                                || *(data_61c8c8 + 0x9b4) s<= 0)
                                            ebx_1 = 1
                                        else if (sub_47a078(data_61c8c8, *(data_61c8c8 + 0x9b8), 
                                                *(data_61c8c8 + 0x9b4)) == 0)
                                            ebx_1 = 1
                                        else if (sub_47a044(data_61c8c8, *(data_61c8c8 + 0x9b8), 
                                                *(data_61c8c8 + 0x9b4)) == 0)
                                            ebx_1 = 1
                                    
                                    if (sub_4c0924() != 0 && *(data_61c9f0 + 0x54) == 2 && ebx_1 != 0)
                                        data_61c90c
                                        bool o_11 = unimplemented  {imul eax, dword [0x61c90c], 0x1038}
                                        
                                        if (o_11)
                                            sub_403010()
                                            noreturn
                                        
                                        ebx_1 = *(*(data_61c8c8 + 0xab0) + data_61c90c * 0x81c0 + 1) ^ 1
                                        
                                        if (ebx_1 == 0)
                                            sub_509850()
                                        else
                                            sub_4836b0(data_61c8c8, data_61c90c)
                                        
                                        if (ebx_1 != 0)
                                            sub_50971c()
                                            *(*(ebp_1 - 4) + 0x1340) = 1
                            else if (*(ebp_1 - 0x18) == 0x1b)
                                if (data_77e23c == 1)
                                    data_61c90c
                                    bool o_12 = unimplemented  {imul eax, dword [0x61c90c], 0x1038}
                                    
                                    if (o_12)
                                        sub_403010()
                                        noreturn
                                    
                                    if (*(*(data_61c8c8 + 0xab0) + data_61c90c * 0x81c0 + 1) == 0)
                                        sub_40fa94(data_61cf9c, 1, ebp_1 - 0x298)
                                        __return_addr = ebp_1 - 0x298
                                        lpDirectory = ebp_1 - 0x2d
                                        void* ebx_2 = *(ebp_1 - 4)
                                        void* ecx_14
                                        ecx_14.b = 0x38
                                        *(ebx_2 + 0x1d4)
                                        (*(ebx_2 + 0x1d0))(lpDirectory)
                                    else
                                        sub_509850()
                                else if (*(data_61c8c8 + 0x8a0) == data_61c8cc)
                                    sub_44613c(data_61c8c8, edx_43, ecx_1)
                        else
                            data_61c90c
                            bool o_7 = unimplemented  {imul eax, dword [0x61c90c], 0x1038}
                            
                            if (o_7)
                                sub_403010()
                                noreturn
                            
                            edx_43 = *(data_61c8c8 + 0xab0)
                            
                            if (*(edx_43 + data_61c90c * 0x81c0 + 1) == 0)
                                goto label_4e6e50
                            
                            sub_509890()
                    else
                        data_61c8f0
                        bool o_3 = unimplemented  {imul eax, dword [0x61c8f0], 0x1038}
                        
                        if (o_3)
                            sub_403010()
                            noreturn
                        
                        edx_43 = *(data_61c8c8 + 0xab0)
                        
                        if (*(edx_43 + data_61c8f0 * 0x81c0 + 1) == 0)
                            goto label_4e6e19
                        
                        data_61c8f0
                        bool o_4 = unimplemented  {imul eax, dword [0x61c8f0], 0x1038}
                        
                        if (o_4)
                            sub_403010()
                            noreturn
                        
                        edx_43 = *(data_61c8c8 + 0xab0)
                        
                        if (sx.d(*(edx_43 + data_61c8f0 * 0x81c0 + 0x8134)) != data_61c9c4)
                            goto label_4e6e19
                        
                        __return_addr = nullptr
                        lpDirectory = ebp_1 - 0x28
                        data_61c8f0
                        data_61c8c8
                        ebp_1 = sub_47a7ec(data_61c9c4, lpDirectory, __return_addr.b)
                        
                        if (*(ebp_1 - 0x28) != 0)
                            esi = sub_514468(data_61c9f0, *(ebp_1 - 0x28))
                        
                        __return_addr = nullptr
                        sub_47ab08(data_61c8c8, data_61c8f0, data_61c9c4, x87_r0, __return_addr)
                        data_61c8f0
                        bool o_5 = unimplemented  {imul eax, dword [0x61c8f0], 0x1038}
                        
                        if (o_5)
                            sub_403010()
                            noreturn
                        
                        data_61c9c4
                        bool o_6 = unimplemented  {imul edx, dword [0x61c9c4], 0x23}
                        
                        if (o_6)
                            sub_403010()
                            noreturn
                        
                        *(*(data_61c8c8 + 0xab0) + data_61c8f0 * 0x81c0 + data_61c9c4 * 0x118 - 0x86) =
                            0
                        *(*(ebp_1 - 4) + 0x1340) = 1
                    
                    if (sub_404078(data_61c8c4) s> 0x20)
                        sub_4042c0(&data_61c8c4, 1, 1)
                    
                    *(ebp_1 - 0x18)
                    sub_403fa0()
                    sub_404080(&data_61c8c4, *(ebp_1 - 0x29c))
                    __return_addr = ebp_1 - 0x2a0
                    int32_t eax_166 = sub_404078(data_61c8c4)
                    
                    if (add_overflow(eax_166, 0xfffffffc))
                        sub_403010()
                        noreturn
                    
                    sub_404280(5, eax_166 - 4, data_61c8c4)
                    esp_1 = &arg_4
                    int32_t ecx_15 = sub_404188(*(ebp_1 - 0x2a0), "BETAX")
                    
                    if (eax_166 == 4)
                        void* eax_169
                        eax_169.b = *(*(ebp_1 - 4) + 0xce0)
                        eax_169.b ^= 1
                        *(*(ebp_1 - 4) + 0xce0) = eax_169.b
                        __return_addr = nullptr
                        ecx_15 = sub_51ad40(data_780c5c, 2)
                        esp_1 = &arg_4
                    
                    if (*(ebp_1 - 0x18) == 0x70)
                        char eax_172
                        eax_172, ecx_15 = sub_47a078(data_61c8c8, data_61cf9c, data_61cd88)
                        
                        if (eax_172 != 0)
                            ecx_15 = sub_4d81c8(data_61c8c8)
                    
                    if (*(*(ebp_1 - 4) + 0xce0) != 0)
                        if (*(ebp_1 - 0x18) == 0xbb)
                            data_77e23c = 0
                            sub_4c93fc()
                            sub_4837ec(data_61c8c8, data_61cda4, false)
                            sub_4837ec(data_61c8c8, data_61cdc8, false)
                            sub_48380c(*(ebp_1 - 4), data_61c8d0)
                            sub_4834fc(*(ebp_1 - 4), data_61c8cc)
                            sub_502898()
                            sub_4837d0(*(ebp_1 - 4), data_61c8d4)
                            sub_48380c(*(ebp_1 - 4), data_61c8cc)
                            data_77e23c = 1
                            ecx_15 = sub_528320(data_780c58, *(data_780c58 + 4), 0)
                        
                        if (*(ebp_1 - 0x18) == 0xbf)
                            *(ebp_1 - 4)
                            ebp_1 = sub_4d7b54(ecx_15, 1, esi, edi)
                else if (*(ebp_1 - 0x14) == 0xfffffff7)
                    sub_51a838(data_780c5c, 0)
                else if (*(ebp_1 - 0x14) == 0xfffffff6)
                    edx_10.b = 1
                    sub_51a838(data_780c5c, edx_10.b)
                else if (*(ebp_1 - 0x14) != 0xfffffff9)
                    if (*(ebp_1 - 0x14) == 0xffffffff)
                        char* ecx_18
                        int32_t esi_1
                        ecx_18, esi_1 = sub_468ec0(*(sub_468970(*(ebp_1 - 4), "english", 2) - 4))
                        void* ebp_3 = sub_4804e4(data_61c8c8, "Objekte erstellen..", ecx_18)
                        sub_480534(data_61c8c8, 0x14, 1)
                        data_61c8c8
                        sub_46accc()
                        *(ebp_3 - 4)
                        sub_4dd1e0()
                        data_61c8c8
                        sub_46accc()
                        *(ebp_3 - 4)
                        char* ecx_20 = sub_4dd144()
                        void* ebp_4 = sub_4804e4(data_61c8c8, "Einstellungen laden..", ecx_20)
                        sub_480534(data_61c8c8, 0x16, 1)
                        data_61c8c8
                        sub_46accc()
                        void* ebp_5 = sub_46d9ac(*(ebp_4 - 4))
                        data_61c8c8
                        sub_46accc()
                        data_61c8c8
                        sub_46accc()
                        int32_t ecx_22
                        ecx_22.b = 1
                        *(ebp_5 - 4)
                        sub_4dc3b8(ecx_22, 1, esi_1, edi)
                        sub_4c1fb8()
                        data_61c8c8
                        sub_46accc()
                        data_61c8c8
                        sub_46accc()
                        sub_502898()
                        *(ebp_5 - 4)
                        sub_4d7e6c()
                        data_61c8c8
                        sub_46accc()
                        sub_51a838(data_780c5c, 0)
                        
                        if (data_780da8 != 0)
                            __return_addr = data_780da8
                            sub_47ab08(data_61c8c8, data_61cae4, data_61cbb0, x87_r0, __return_addr)
                            __return_addr = data_780da8
                            sub_47ab08(data_61c8c8, data_61caec, data_61cbb4, x87_r0, __return_addr)
                            __return_addr = data_780da8
                            sub_47ab08(data_61c8c8, data_61c8f0, data_61c9dc, x87_r0, __return_addr)
                            
                            if (data_780dac == 0)
                                __return_addr = 2
                                sub_47b304(data_61cbc4, data_61cae4, data_61c8c8, __return_addr)
                                __return_addr = 2
                                sub_47b304(data_61cbc8, data_61caec, data_61c8c8, __return_addr)
                                __return_addr = 2
                                sub_47b304(data_61cbcc, data_61c8f0, data_61c8c8, __return_addr)
                                __return_addr = 2
                                sub_47b304(data_61cbd0, data_61c8fc, data_61c8c8, __return_addr)
                                __return_addr = 4
                                sub_47b304(data_61cc60, data_61cabc, data_61c8c8, __return_addr)
                                *(data_780c58 + 0x111d0) = 4
                            else
                                __return_addr = 1
                                sub_47b304(data_61cbc4, data_61cae4, data_61c8c8, __return_addr)
                                __return_addr = 1
                                sub_47b304(data_61cbc8, data_61caec, data_61c8c8, __return_addr)
                                __return_addr = 1
                                sub_47b304(data_61cbcc, data_61c8f0, data_61c8c8, __return_addr)
                                __return_addr = 1
                                sub_47b304(data_61cbd0, data_61c8fc, data_61c8c8, __return_addr)
                                __return_addr = 1
                                sub_47b304(data_61cc60, data_61cabc, data_61c8c8, __return_addr)
                                *(data_780c58 + 0x111d0) = 1
                        
                        data_61c8c8
                        sub_46accc()
                        data_61c8c8
                        sub_46accc()
                        data_61c8c8
                        sub_46accc()
                        void* ebp_6
                        int32_t esi_2
                        ebp_6, esi_2 = sub_468970(*(ebp_5 - 4), "english", 2)
                        sub_4692e4(*(ebp_6 - 4), esi_2, edi)
                        sub_468afc(*(ebp_6 - 4))
                        __return_addr = 1
                        sub_47a140(data_61cbac, data_61cab8, data_61c8c8, __return_addr.b)
                        __return_addr = nullptr
                        sub_47a1c0(data_61cbac, data_61cab8, data_61c8c8, __return_addr.b)
                        data_61cab8
                        int32_t edx_108 = data_61cab8 * 0x1038
                        bool o_14 = unimplemented  {imul edx, dword [0x61cab8], 0x1038}
                        
                        if (o_14)
                            sub_403010()
                            noreturn
                        
                        data_61cc18
                        int32_t eax_232 = data_61cc18 * 0x23
                        bool o_15 = unimplemented  {imul eax, dword [0x61cc18], 0x23}
                        
                        if (o_15)
                            sub_403010()
                            noreturn
                        
                        int32_t ecx_41 =
                            sx.d(*(*(data_61c8c8 + 0xab0) + (edx_108 << 3) + (eax_232 << 3) - 0x20c))
                        
                        if (add_overflow(ecx_41, 8))
                            sub_403010()
                            noreturn
                        
                        *(*(data_61c8c8 + 0xab0) + (edx_108 << 3) + (eax_232 << 3) - 0x20c) =
                            ecx_41.w + 8
                        data_61cab8
                        int32_t edx_110 = data_61cab8 * 0x1038
                        bool o_17 = unimplemented  {imul edx, dword [0x61cab8], 0x1038}
                        
                        if (o_17)
                            sub_403010()
                            noreturn
                        
                        data_61cc00
                        int32_t eax_233 = data_61cc00 * 0x23
                        bool o_18 = unimplemented  {imul eax, dword [0x61cc00], 0x23}
                        
                        if (o_18)
                            sub_403010()
                            noreturn
                        
                        int32_t ecx_46 =
                            sx.d(*(*(data_61c8c8 + 0xab0) + (edx_110 << 3) + (eax_233 << 3) - 0xf4))
                        
                        if (add_overflow(ecx_46, 0xffffffdd))
                            sub_403010()
                            noreturn
                        
                        *(*(data_61c8c8 + 0xab0) + (edx_110 << 3) + (eax_233 << 3) - 0xf4) =
                            ecx_46.w - 0x23
                        data_61cab8
                        int32_t edx_112 = data_61cab8 * 0x1038
                        bool o_20 = unimplemented  {imul edx, dword [0x61cab8], 0x1038}
                        
                        if (o_20)
                            sub_403010()
                            noreturn
                        
                        data_61cc10
                        int32_t eax_234 = data_61cc10 * 0x23
                        bool o_21 = unimplemented  {imul eax, dword [0x61cc10], 0x23}
                        
                        if (o_21)
                            sub_403010()
                            noreturn
                        
                        int32_t ecx_51 =
                            sx.d(*(*(data_61c8c8 + 0xab0) + (edx_112 << 3) + (eax_234 << 3) - 0xf4))
                        
                        if (add_overflow(ecx_51, 0xffffffdd))
                            sub_403010()
                            noreturn
                        
                        *(*(data_61c8c8 + 0xab0) + (edx_112 << 3) + (eax_234 << 3) - 0xf4) =
                            ecx_51.w - 0x23
                        ebp_1 = sub_46910c(data_61c8c8, "f_kurz1", ebp_6 - 0x2a4)
                        __return_addr = *(ebp_1 - 0x2a4)
                        int32_t ecx_55 =
                            sub_47ab08(data_61c8c8, data_61cab8, data_61cc00, x87_r0, __return_addr)
                        esp_1 = &arg_4
                        *(ebp_1 - 4)
                        sub_4d63bc(ecx_55)
                    else if (*(data_61c8c8 + 0x10d8) != *(ebp_1 - 0x14))
                        if (*(data_61c8c8 + 0x10d4) == *(ebp_1 - 0x14))
                            if (*(data_780c58 + 4) == 7)
                                sub_46e24c(*(ebp_1 - 4), esi, edi)
                                sub_4ca054()
                            
                            *(ebp_1 - 0x18)
                        else if (*(ebp_1 - 0x14) != data_61cda4)
                            void* const arg_14
                            void* const arg_18
                            
                            if (*(ebp_1 - 0x14) != data_61cac0)
                                void* const arg_1c
                                
                                if (*(ebp_1 - 0x14) != data_61cac4)
                                    if (*(ebp_1 - 0x14) == data_61ccfc)
                                        if (*(ebp_1 - 0x18) == data_61cd74)
                                            *(ebp_1 - 0x1c) = 1
                                        else if (*(ebp_1 - 0x18) == data_61cd60)
                                            *(ebp_1 - 0x1c) = 1
                                        else if (*(ebp_1 - 0x18) == data_61cd64)
                                            *(ebp_1 - 0x1c) = 2
                                        else if (*(ebp_1 - 0x18) == data_61cd68)
                                            *(ebp_1 - 0x1c) = 1
                                        else if (*(ebp_1 - 0x18) == data_61cd6c)
                                            *(ebp_1 - 0x1c) = 2
                                        else if (*(ebp_1 - 0x18) == data_61cd70)
                                            *(ebp_1 - 0x1c) = 3
                                        else if (*(ebp_1 - 0x18) == data_61cd04)
                                            *(ebp_1 - 0x1c) = 1
                                        else if (*(ebp_1 - 0x18) == data_61cd08)
                                            *(ebp_1 - 0x1c) = 2
                                        else if (*(ebp_1 - 0x18) == data_61cd0c)
                                            *(ebp_1 - 0x1c) = 3
                                        else if (*(ebp_1 - 0x18) == data_61cd10)
                                            *(ebp_1 - 0x1c) = 4
                                        else if (*(ebp_1 - 0x18) == data_61cd14)
                                            *(ebp_1 - 0x1c) = 1
                                        else if (*(ebp_1 - 0x18) == data_61cd18)
                                            *(ebp_1 - 0x1c) = 2
                                        else if (*(ebp_1 - 0x18) == data_61cd1c)
                                            *(ebp_1 - 0x1c) = 3
                                        else if (*(ebp_1 - 0x18) == data_61cd20)
                                            *(ebp_1 - 0x1c) = 4
                                        else if (*(ebp_1 - 0x18) == data_61cd24)
                                            *(ebp_1 - 0x1c) = 5
                                        else if (*(ebp_1 - 0x18) == data_61cd28)
                                            *(ebp_1 - 0x1c) = 1
                                        else if (*(ebp_1 - 0x18) == data_61cd2c)
                                            *(ebp_1 - 0x1c) = 2
                                        else if (*(ebp_1 - 0x18) == data_61cd30)
                                            *(ebp_1 - 0x1c) = 3
                                        else if (*(ebp_1 - 0x18) == data_61cd34)
                                            *(ebp_1 - 0x1c) = 4
                                        else if (*(ebp_1 - 0x18) == data_61cd38)
                                            *(ebp_1 - 0x1c) = 5
                                        else if (*(ebp_1 - 0x18) == data_61cd3c)
                                            *(ebp_1 - 0x1c) = 5
                                        else if (*(ebp_1 - 0x18) == data_61cd5c)
                                            *(ebp_1 - 0x1c) = 8
                                        else if (*(ebp_1 - 0x18) == data_61cd40)
                                            *(ebp_1 - 0x1c) = 1
                                        else if (*(ebp_1 - 0x18) == data_61cd44)
                                            *(ebp_1 - 0x1c) = 2
                                        else if (*(ebp_1 - 0x18) == data_61cd48)
                                            *(ebp_1 - 0x1c) = 3
                                        else if (*(ebp_1 - 0x18) == data_61cd4c)
                                            *(ebp_1 - 0x1c) = 4
                                        else if (*(ebp_1 - 0x18) == data_61cd50)
                                            *(ebp_1 - 0x1c) = 5
                                        else if (*(ebp_1 - 0x18) == data_61cd54)
                                            *(ebp_1 - 0x1c) = 6
                                        else if (*(ebp_1 - 0x18) == data_61cd58)
                                            *(ebp_1 - 0x1c) = 7
                                        
                                        ecx_1.b = 0x20
                                        sub_402e64(ebp_1 - 0x2d4, (data_61cd80).b, ecx_1.b)
                                        int32_t eax_310 = data_61cd84
                                        
                                        if (eax_310 u<= 0xff)
                                            *(ebp_1 - 0x2d4) |= 1 << (eax_310 u% 0x20)
                                        
                                        int32_t eax_311 = *(ebp_1 - 0x18)
                                        bool c_3 = eax_311 u< 0xff
                                        
                                        if (eax_311 == 0xff || c_3)
                                            c_3 = test_bit(*(ebp_1 - 0x2d4), eax_311)
                                        
                                        if (not(c_3))
                                            sub_402e64(ebp_1 - 0x2d4, (data_61cd78).b, 0x20)
                                            int32_t eax_334 = data_61cd7c
                                            
                                            if (eax_334 u<= 0xff)
                                                *(ebp_1 - 0x2d4) |= 1 << (eax_334 u% 0x20)
                                            
                                            int32_t eax_335 = *(ebp_1 - 0x18)
                                            bool c_4 = eax_335 u< 0xff
                                            
                                            if (eax_335 == 0xff || c_4)
                                                c_4 = test_bit(*(ebp_1 - 0x2d4), eax_335)
                                            
                                            if (not(c_4))
                                                *(ebp_1 - 0x20) = sx.d(
                                                    *(data_780c58 + (*(ebp_1 - 0x1c) << 1) + 0x10872))
                                                sub_4837d0(*(ebp_1 - 4), *(ebp_1 - 0x14))
                                                
                                                if (*(data_780c58 + 4) == 7)
                                                    *(ebp_1 - 0x1c) = *(data_780c58 + 0x210fc)
                                                    __return_addr = *(ebp_1 - 0x20)
                                                    lpDirectory = nullptr
                                                    int32_t var_8_8 = 0
                                                    lpFile = nullptr
                                                    sub_527230(*(ebp_1 - 0x1c), 2, data_780c58, 
                                                        lpFile.b, var_8_8, lpDirectory)
                                                    esp_1 = &arg_4
                                                else if (*(data_780c58 + 4) != 6)
                                                    __return_addr = *(ebp_1 - 0x20)
                                                    lpDirectory = nullptr
                                                    int32_t var_8_10 = 0
                                                    lpFile = nullptr
                                                    sub_527230(0, 2, data_780c58, lpFile.b, var_8_10, 
                                                        lpDirectory)
                                                    esp_1 = &arg_4
                                                else
                                                    __return_addr = *(ebp_1 - 0x20)
                                                    lpDirectory = nullptr
                                                    int32_t var_8_9 = 0
                                                    lpFile = nullptr
                                                    sub_527230(*(ebp_1 - 0x1c), 2, data_780c58, 
                                                        lpFile.b, var_8_9, lpDirectory)
                                                    esp_1 = &arg_4
                                            else
                                                if (*(ebp_1 - 0x18) == data_61cd78)
                                                    int32_t eax_338 = *(data_780c58 + 0x21108)
                                                    int32_t eax_339 = eax_338 s>> 1
                                                    bool c_5 = unimplemented  {sar eax, 0x1}
                                                    
                                                    if (eax_338 s>> 1 s< 0)
                                                        eax_339 = adc.d(eax_339, 0, c_5)
                                                    
                                                    void* edx_151 = data_780c58
                                                    int32_t temp50_1 = *(edx_151 + 0x210fc)
                                                    *(edx_151 + 0x210fc) += eax_339
                                                    
                                                    if (add_overflow(temp50_1, eax_339))
                                                        sub_403010()
                                                        noreturn
                                                
                                                if (*(ebp_1 - 0x18) == data_61cd7c)
                                                    int32_t eax_342 = *(data_780c58 + 0x21108)
                                                    int32_t eax_343 = eax_342 s>> 1
                                                    bool c_6 = unimplemented  {sar eax, 0x1}
                                                    
                                                    if (eax_342 s>> 1 s< 0)
                                                        eax_343 = adc.d(eax_343, 0, c_6)
                                                    
                                                    void* edx_152 = data_780c58
                                                    int32_t temp55_1 = *(edx_152 + 0x210fc)
                                                    *(edx_152 + 0x210fc) -= eax_343
                                                    
                                                    if (add_overflow(temp55_1, neg.d(eax_343)))
                                                        sub_403010()
                                                        noreturn
                                                
                                                void* eax_344 = data_780c58
                                                *(eax_344 + 0x10020)
                                                bool o_37 =
                                                    unimplemented  {imul eax, dword [eax+0x10020], 0x41}
                                                
                                                if (o_37)
                                                    sub_403010()
                                                    noreturn
                                                
                                                __return_addr = *(data_780c58
                                                    + *(eax_344 + 0x10020) * 0x208 + 0x1fea4)
                                                int32_t eax_347 = *(data_780c58 + 0x21104)
                                                void* const __return_addr_5 = __return_addr
                                                void* eax_348 = eax_347 - __return_addr_5
                                                
                                                if (add_overflow(eax_347, neg.d(__return_addr_5)))
                                                    sub_403010()
                                                    noreturn
                                                
                                                if (*(data_780c58 + 0x210f8)
                                                        s> *(data_780c58 + 0x210fc))
                                                    *(data_780c58 + 0x210fc) = *(data_780c58 + 0x210f8)
                                                
                                                void* edx_158 = data_780c58
                                                *(edx_158 + 0x10020)
                                                bool o_39 =
                                                    unimplemented  {imul edx, dword [edx+0x10020], 0x41}
                                                
                                                if (o_39)
                                                    sub_403010()
                                                    noreturn
                                                
                                                int32_t edx_160 = *(data_780c58
                                                    + *(edx_158 + 0x10020) * 0x208 + 0x20078)
                                                
                                                if (add_overflow(edx_160, neg.d(eax_348)))
                                                    sub_403010()
                                                    noreturn
                                                
                                                if (edx_160 - eax_348 s< *(data_780c58 + 0x210fc))
                                                    void* edx_162 = data_780c58
                                                    *(edx_162 + 0x10020)
                                                    bool o_41 = unimplemented  {imul edx, dword [edx
                                                        +0x10020], 0x41}
                                                    
                                                    if (o_41)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    int32_t edx_164 = *(data_780c58
                                                        + *(edx_162 + 0x10020) * 0x208 + 0x20078)
                                                    
                                                    if (add_overflow(edx_164, neg.d(eax_348)))
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(data_780c58 + 0x210fc) = edx_164 - eax_348
                                                
                                                ebp_1 = sub_4cda5c(*(data_780c58 + 0x210fc), 0, 
                                                    ebp_1 - 0x2e4)
                                                sub_4040c4(ebp_1 - 0x2e0, U"!", *(ebp_1 - 0x2e4))
                                                __return_addr = *(ebp_1 - 0x2e0)
                                                esp_1 = &arg_4
                                                sub_4cc428(sub_47ab08(data_61c8c8, *(ebp_1 - 0x14), 
                                                    data_61cd0c, x87_r0, __return_addr))
                                        else
                                            if (*(ebp_1 - 0x18) == data_61cd80)
                                                void* eax_313 = data_780c58
                                                *(eax_313 + 0x21108)
                                                int32_t eax_314 = *(eax_313 + 0x21108) * 2
                                                bool o_25 =
                                                    unimplemented  {imul eax, dword [eax+0x21108], 0x2}
                                                
                                                if (o_25)
                                                    sub_403010()
                                                    noreturn
                                                
                                                void* edx_132 = data_780c58
                                                int32_t temp37_1 = *(edx_132 + 0x210fc)
                                                *(edx_132 + 0x210fc) += eax_314
                                                
                                                if (add_overflow(temp37_1, eax_314))
                                                    sub_403010()
                                                    noreturn
                                            
                                            if (*(ebp_1 - 0x18) == data_61cd84)
                                                void* eax_316 = data_780c58
                                                *(eax_316 + 0x21108)
                                                int32_t eax_317 = *(eax_316 + 0x21108) * 2
                                                bool o_27 =
                                                    unimplemented  {imul eax, dword [eax+0x21108], 0x2}
                                                
                                                if (o_27)
                                                    sub_403010()
                                                    noreturn
                                                
                                                void* edx_133 = data_780c58
                                                int32_t temp42_1 = *(edx_133 + 0x210fc)
                                                *(edx_133 + 0x210fc) -= eax_317
                                                
                                                if (add_overflow(temp42_1, neg.d(eax_317)))
                                                    sub_403010()
                                                    noreturn
                                            
                                            if (*(data_780c58 + 0x210ec) s< *(data_780c58 + 0x210fc))
                                                *(data_780c58 + 0x210fc) = *(data_780c58 + 0x210ec)
                                            
                                            void* eax_322 = data_780c58
                                            *(eax_322 + 0x10020)
                                            bool o_29 =
                                                unimplemented  {imul eax, dword [eax+0x10020], 0x41}
                                            
                                            if (o_29)
                                                sub_403010()
                                                noreturn
                                            
                                            __return_addr =
                                                *(data_780c58 + *(eax_322 + 0x10020) * 0x208 + 0x1fea4)
                                            int32_t eax_325 = *(data_780c58 + 0x21104)
                                            void* const __return_addr_4 = __return_addr
                                            void* eax_326 = eax_325 - __return_addr_4
                                            
                                            if (add_overflow(eax_325, neg.d(__return_addr_4)))
                                                sub_403010()
                                                noreturn
                                            
                                            if (*(data_780c58 + 0x210f8) s> *(data_780c58 + 0x210fc))
                                                *(data_780c58 + 0x210fc) = *(data_780c58 + 0x210f8)
                                            
                                            void* edx_141 = data_780c58
                                            *(edx_141 + 0x10020)
                                            bool o_31 =
                                                unimplemented  {imul edx, dword [edx+0x10020], 0x41}
                                            
                                            if (o_31)
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t edx_143 =
                                                *(data_780c58 + *(edx_141 + 0x10020) * 0x208 + 0x20078)
                                            
                                            if (add_overflow(edx_143, neg.d(eax_326)))
                                                sub_403010()
                                                noreturn
                                            
                                            if (edx_143 - eax_326 s< *(data_780c58 + 0x210fc))
                                                void* edx_145 = data_780c58
                                                *(edx_145 + 0x10020)
                                                bool o_33 =
                                                    unimplemented  {imul edx, dword [edx+0x10020], 0x41}
                                                
                                                if (o_33)
                                                    sub_403010()
                                                    noreturn
                                                
                                                int32_t edx_147 = *(data_780c58
                                                    + *(edx_145 + 0x10020) * 0x208 + 0x20078)
                                                
                                                if (add_overflow(edx_147, neg.d(eax_326)))
                                                    sub_403010()
                                                    noreturn
                                                
                                                *(data_780c58 + 0x210fc) = edx_147 - eax_326
                                            
                                            ebp_1 =
                                                sub_4cda5c(*(data_780c58 + 0x210fc), 0, ebp_1 - 0x2dc)
                                            sub_4040c4(ebp_1 - 0x2d8, U"!", *(ebp_1 - 0x2dc))
                                            __return_addr = *(ebp_1 - 0x2d8)
                                            esp_1 = &arg_4
                                            sub_4cc428(sub_47ab08(data_61c8c8, *(ebp_1 - 0x14), 
                                                data_61cd0c, x87_r0, __return_addr))
                                    else if (*(ebp_1 - 0x14) != data_61ccb0)
                                        int32_t arg_10
                                        
                                        if (*(ebp_1 - 0x14) != data_61ccac)
                                            if (*(ebp_1 - 0x14) != data_61cf9c)
                                                if (*(ebp_1 - 0x14) != data_61cb2c)
                                                label_4e9746:
                                                    
                                                    if (*(ebp_1 - 0x14) != data_61cb28)
                                                        char eax_678
                                                        
                                                        if (*(ebp_1 - 0x14) == data_61cb30)
                                                            eax_678 = sub_4c0924()
                                                        
                                                        if (*(ebp_1 - 0x14) == data_61cb30
                                                                && eax_678 != 0)
                                                            sub_48380c(*(ebp_1 - 4), data_61cb30)
                                                            
                                                            if (sub_4c2f1c(1) != 0)
                                                                *(data_61c9f0 + 0x1e0) = 1
                                                            
                                                            *(data_61c9f0 + 0x9c) = 4
                                                            int32_t ecx_129 = sub_513e4c(data_61c9f0, 0)
                                                            
                                                            if (*(data_61c9f0 + 0x1e0) == 0)
                                                                *(data_61c9f0 + 0x1b4) = 0
                                                                ecx_129 = sub_510f54(data_61c9f0, 0)
                                                            
                                                            data_780c58
                                                            sub_520efc(ecx_129, 1, esi, edi)
                                                            int32_t ecx_130 =
                                                                sub_4836b0(data_61c8c8, data_61cb2c)
                                                            
                                                            if (sub_4c094c() != 0)
                                                                data_61c9f0
                                                                
                                                                if (sub_50d2f4() != 0
                                                                        && *(data_7a6e5c + 0x48) s< 5)
                                                                    ecx_130 =
                                                                        sub_478234(data_61c8c8, data_61cb2c, 2)
                                                            
                                                            if (sub_4c094c() != 0)
                                                                data_61c90c
                                                                bool o_104 = unimplemented  {imul eax, 
                                                                    dword [0x61c90c], 0x1038}
                                                                
                                                                if (o_104)
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                if (*(*(data_61c8c8 + 0xab0)
                                                                        + data_61c90c * 0x81c0 + 1) != 0)
                                                                    sub_469ac0(data_61c8c8, data_61c90c, 
                                                                        ecx_130)
                                                        else if (*(ebp_1 - 0x14) != data_61cb24)
                                                            if (*(ebp_1 - 0x14) == data_61ca54)
                                                                *(ebp_1 - 0x1c) = 1
                                                                *(ebp_1 - 0x34) = 0x61ca58
                                                                
                                                                do
                                                                    if (**(ebp_1 - 0x34) == *(ebp_1 - 0x18))
                                                                        sub_516e74(&data_61d714)
                                                                        sub_51801c(0x6260c4, *(ebp_1 - 0x1c))
                                                                        sub_516ec0(&data_61d714)
                                                                    
                                                                    *(ebp_1 - 0x1c) += 1
                                                                    *(ebp_1 - 0x34) += 4
                                                                while (*(ebp_1 - 0x1c) != 0x15)
                                                            else if (*(ebp_1 - 0x14) != data_61ca1c)
                                                                int32_t edx_360 = *(ebp_1 - 0x14)
                                                                *(ebp_1 - 4)
                                                                char eax_734
                                                                struct _EXCEPTION_REGISTRATION_RECORD* 
                                                                    ecx_135
                                                                eax_734, ecx_135 =
                                                                    sub_4d815c(&data_61cac8, edx_360)
                                                                
                                                                if (eax_734 == 0)
                                                                    edx_360 = data_61ca48
                                                                    ecx_135.b = 0x20
                                                                    ecx_135 = sub_402e64(ebp_1 - 0x2d4, 
                                                                        edx_360.b, ecx_135.b)
                                                                    int32_t eax_736 = data_61ca4c
                                                                    
                                                                    if (eax_736 u<= 0xff)
                                                                        *(ebp_1 - 0x2d4) |=
                                                                            1 << (eax_736 u% 0x20)
                                                                    
                                                                    int32_t eax_737 = data_61ca50
                                                                    
                                                                    if (eax_737 u<= 0xff)
                                                                        *(ebp_1 - 0x2d4) |=
                                                                            1 << (eax_737 u% 0x20)
                                                                    
                                                                    int32_t eax_738 = data_61ca1c
                                                                    
                                                                    if (eax_738 u<= 0xff)
                                                                        *(ebp_1 - 0x2d4) |=
                                                                            1 << (eax_738 u% 0x20)
                                                                    
                                                                    int32_t eax_739 = *(ebp_1 - 0x14)
                                                                    bool c_10 = eax_739 u< 0xff
                                                                    
                                                                    if (eax_739 == 0xff || c_10)
                                                                        c_10 =
                                                                            test_bit(*(ebp_1 - 0x2d4), eax_739)
                                                                    
                                                                    if (not(c_10) || *(ebp_1 - 0x18) != 2)
                                                                        goto label_4e9e3c
                                                                    
                                                                    sub_48380c(*(ebp_1 - 4), 
                                                                        *(ebp_1 - 0x14))
                                                                else if (*(ebp_1 - 0x18) != 2)
                                                                label_4e9e3c:
                                                                    
                                                                    if (*((zx.d(*(data_780c58 + 4)) << 2) +
                                                                            &data_61cac8) == *(ebp_1 - 0x14) && *(
                                                                            (zx.d(*(data_780c58 + 4)) << 2) +
                                                                            &data_61cb00) == *(ebp_1 - 0x18))
                                                                        __return_addr = nullptr
                                                                        lpDirectory = *(*(ebp_1 - 4) + 0xa64)
                                                                        void* const var_8_23 =
                                                                            "\data\settings\di_"
                                                                        sub_408e1c(
                                                                            *((zx.d(*(data_780c58 + 4)) << 2) +
                                                                                &data_61cac8), 
                                                                            ebp_1 - 0x350)
                                                                        lpFile = *(ebp_1 - 0x350)
                                                                        void* const var_10_9 = "_def.dco"
                                                                        sub_404138(ebp_1 - 0x34c, 4)
                                                                        esp_1 = &arg_14
                                                                        *((zx.d(*(data_780c58 + 4)) << 2) +
                                                                            &data_61cac8)
                                                                        data_61c8c8
                                                                        sub_46f698(*(ebp_1 - 0x34c), esi, edi)
                                                                        
                                                                        if (*(ebp_1 - 0x14) == data_61cae4)
                                                                            *(ebp_1 - 0x14)
                                                                            bool o_108 = unimplemented  {imul eax, 
                                                                                dword [ebp-0x14], 0x1038}
                                                                            
                                                                            if (o_108)
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            *(ebp_1 - 0x18)
                                                                            bool o_109 = unimplemented  {imul edx, 
                                                                                dword [ebp-0x18], 0x23}
                                                                            
                                                                            if (o_109)
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            if (*(*(*(ebp_1 - 4) + 0xab0)
                                                                                    + *(ebp_1 - 0x14) * 0x81c0
                                                                                    + *(ebp_1 - 0x18) * 0x118 - 0x70) s> 0)
                                                                                *(ebp_1 - 0x14)
                                                                                bool o_110 = unimplemented  {imul eax, 
                                                                                    dword [ebp-0x14], 0x1038}
                                                                                
                                                                                if (o_110)
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                *(ebp_1 - 0x18)
                                                                                bool o_111 = unimplemented  {imul edx, 
                                                                                    dword [ebp-0x18], 0x23}
                                                                                
                                                                                if (o_111)
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                int32_t edx_371 = *(ebp_1 - 0x18)
                                                                                
                                                                                if (add_overflow(edx_371, 0xffffffff))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                int32_t edx_372
                                                                                edx_372.b = sx.d(*(
                                                                                    *(*(ebp_1 - 4) + 0xab0)
                                                                                    + *(ebp_1 - 0x14) * 0x81c0
                                                                                    + *(ebp_1 - 0x18) * 0x118 - 0x70))
                                                                                    == edx_371 - 1
                                                                                *(ebp_1 - 0x14)
                                                                                bool o_113 = unimplemented  {imul eax, 
                                                                                    dword [ebp-0x14], 0x1038}
                                                                                
                                                                                if (o_113)
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                *(ebp_1 - 0x18)
                                                                                bool o_114 = unimplemented  {imul ecx, 
                                                                                    dword [ebp-0x18], 0x23}
                                                                                
                                                                                if (o_114)
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                *(*(*(ebp_1 - 4) + 0xab0)
                                                                                    + *(ebp_1 - 0x14) * 0x81c0
                                                                                    + *(ebp_1 - 0x18) * 0x118 - 0x70)
                                                                                sub_4c2418()
                                                                            else
                                                                                *(ebp_1 - 0x18)
                                                                                sub_4c2418()
                                                                    else if (*(ebp_1 - 0x14) == data_61cacc)
                                                                        if (*(ebp_1 - 0x18) != 4)
                                                                            *(ebp_1 - 0x18)
                                                                        
                                                                        if (*(ebp_1 - 0x18) == 0x25)
                                                                            sub_5170a4()
                                                                        
                                                                        if (*(ebp_1 - 0x18) == data_780c90)
                                                                            sub_4836b0(*(ebp_1 - 4), data_61ca48)
                                                                        else if (*(ebp_1 - 0x18) == data_780c94)
                                                                            sub_4836b0(*(ebp_1 - 4), data_61ca4c)
                                                                        else if (*(ebp_1 - 0x18) == data_780c98)
                                                                            sub_4836b0(*(ebp_1 - 4), data_61ca50)
                                                                        
                                                                        sub_516eec()
                                                                    else if (*(ebp_1 - 0x14) == data_61cae4)
                                                                        if (*(ebp_1 - 0x18) == data_61cbbc)
                                                                            sub_4d69e8(*(ebp_1 - 4), 1)
                                                                        else if (*(ebp_1 - 0x18) == 2)
                                                                            sub_48380c(*(ebp_1 - 4), 
                                                                                *(ebp_1 - 0x14))
                                                                        else if (*(ebp_1 - 0x18) == data_61cbe8)
                                                                            sub_4d7ff0(*(ebp_1 - 4))
                                                                            sub_4d6b10(*(ebp_1 - 4), 1)
                                                                            sub_4836b0(*(ebp_1 - 4), data_61cabc)
                                                                        
                                                                        *(ebp_1 - 0x14)
                                                                        bool o_115 = unimplemented  {imul eax, 
                                                                            dword [ebp-0x14], 0x1038}
                                                                        
                                                                        if (o_115)
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        *(ebp_1 - 0x18)
                                                                        bool o_116 = unimplemented  {imul edx, 
                                                                            dword [ebp-0x18], 0x23}
                                                                        
                                                                        if (o_116)
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        if (*(*(*(ebp_1 - 4) + 0xab0)
                                                                                + *(ebp_1 - 0x14) * 0x81c0
                                                                                + *(ebp_1 - 0x18) * 0x118 - 0x70) s> 0)
                                                                            *(ebp_1 - 0x14)
                                                                            bool o_117 = unimplemented  {imul eax, 
                                                                                dword [ebp-0x14], 0x1038}
                                                                            
                                                                            if (o_117)
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            *(ebp_1 - 0x18)
                                                                            bool o_118 = unimplemented  {imul edx, 
                                                                                dword [ebp-0x18], 0x23}
                                                                            
                                                                            if (o_118)
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            int32_t edx_386 = *(ebp_1 - 0x18)
                                                                            
                                                                            if (add_overflow(edx_386, 0xffffffff))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            int32_t edx_387
                                                                            edx_387.b = sx.d(*(
                                                                                *(*(ebp_1 - 4) + 0xab0)
                                                                                + *(ebp_1 - 0x14) * 0x81c0
                                                                                + *(ebp_1 - 0x18) * 0x118 - 0x70))
                                                                                == edx_386 - 1
                                                                            *(ebp_1 - 0x14)
                                                                            bool o_120 = unimplemented  {imul eax, 
                                                                                dword [ebp-0x14], 0x1038}
                                                                            
                                                                            if (o_120)
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            *(ebp_1 - 0x18)
                                                                            bool o_121 = unimplemented  {imul ecx, 
                                                                                dword [ebp-0x18], 0x23}
                                                                            
                                                                            if (o_121)
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            *(*(*(ebp_1 - 4) + 0xab0)
                                                                                + *(ebp_1 - 0x14) * 0x81c0
                                                                                + *(ebp_1 - 0x18) * 0x118 - 0x70)
                                                                            sub_4c2418()
                                                                        else
                                                                            *(ebp_1 - 0x18)
                                                                            sub_4c2418()
                                                                    else if (*(ebp_1 - 0x14) != data_61cab8)
                                                                        if (*(ebp_1 - 0x14) != data_61cabc)
                                                                            if (*(ebp_1 - 0x14) != data_61cab4)
                                                                                if (*(ebp_1 - 0x14) != data_61c8d0)
                                                                                    if (*(ebp_1 - 0x14) != data_61c8dc)
                                                                                        if (*(ebp_1 - 0x14) != data_61caec)
                                                                                            if (*(ebp_1 - 0x14) != data_61c8e4)
                                                                                                if (*(ebp_1 - 0x14) == data_61cdc8)
                                                                                                    sub_4eca90(*(ebp_1 - 0x18))
                                                                                                else if (*(ebp_1 - 0x14) != data_61c8fc)
                                                                                                    if (*(ebp_1 - 0x14) != data_61cdc4)
                                                                                                        if (*(ebp_1 - 0x14) != data_61c8f8)
                                                                                                            if (*(ebp_1 - 0x14) != data_61c8f4)
                                                                                                                if (*(ebp_1 - 0x14) != data_61c90c)
                                                                                                                    if (*(ebp_1 - 0x14) == data_61c8f0)
                                                                                                                        int32_t eax_1007 = data_61cbcc
                                                                                                                        
                                                                                                                        if (add_overflow(eax_1007, 1))
                                                                                                                            sub_403010()
                                                                                                                            noreturn
                                                                                                                        
                                                                                                                        if (eax_1007 + 1 == *(ebp_1 - 0x18))
                                                                                                                            sub_5072b8(ecx_135)
                                                                                                                            ebp_1 = sub_51497c(data_61c9f0, 0, 0)
                                                                                                                        else if (*(ebp_1 - 0x18) == data_61c9c8)
                                                                                                                            __return_addr = nullptr
                                                                                                                            lpDirectory = ebp_1 - 0x28
                                                                                                                            data_61c8f0
                                                                                                                            data_61c8c8
                                                                                                                            ebp_1 = sub_47a7ec(data_61c9c4, 
                                                                                                                                lpDirectory, __return_addr.b)
                                                                                                                            
                                                                                                                            if (*(ebp_1 - 0x28) != 0)
                                                                                                                                sub_514468(data_61c9f0, *(ebp_1 - 0x28))
                                                                                                                            
                                                                                                                            __return_addr = nullptr
                                                                                                                            sub_47ab08(data_61c8c8, data_61c8f0, 
                                                                                                                                data_61c9c4, x87_r0, __return_addr)
                                                                                                                            esp_1 = &arg_4
                                                                                                                        else if (*(ebp_1 - 0x18) == data_61c9d8)
                                                                                                                            void* esp_22
                                                                                                                            int32_t arg_20
                                                                                                                            void* const arg_24
                                                                                                                            int32_t arg_28
                                                                                                                            void arg_2c
                                                                                                                            void arg_3c
                                                                                                                            
                                                                                                                            if (*(data_61c9f0 + 0x344) == 0)
                                                                                                                                void* ebp_21 = sub_46910c(*(ebp_1 - 4), 
                                                                                                                                    "f_lochost", ebp_1 - 0x4a0)
                                                                                                                                __return_addr = *(ebp_21 - 0x4a0)
                                                                                                                                lpDirectory = &data_4ec3c8
                                                                                                                                sub_49574c(
                                                                                                                                    *(*(data_61c9f0 + 0x94) + 0x80), 
                                                                                                                                    ebp_21 - 0x4a4)
                                                                                                                                int32_t var_8_27 = *(ebp_21 - 0x4a4)
                                                                                                                                sub_404138(ebp_21 - 0x28, 3)
                                                                                                                                arg_18 = *(ebp_21 - 0x28)
                                                                                                                                arg_14 = &data_4ec3d4
                                                                                                                                ebp_1 = sub_46910c(*(ebp_21 - 4), 
                                                                                                                                    "f_locip", ebp_21 - 0x4a8)
                                                                                                                                arg_10 = *(ebp_1 - 0x4a8)
                                                                                                                                arg2 = &data_4ec3c8
                                                                                                                                sub_4956c0(
                                                                                                                                    *(*(data_61c9f0 + 0x94) + 0x80), 
                                                                                                                                    ebp_1 - 0x4ac)
                                                                                                                                arg_8 = *(ebp_1 - 0x4ac)
                                                                                                                                sub_404138(ebp_1 - 0x28, 5)
                                                                                                                                esp_22 = &arg_2c
                                                                                                                                
                                                                                                                                if (*(ebp_1 - 0x2c) != 0)
                                                                                                                                    arg_28 = *(ebp_1 - 0x28)
                                                                                                                                    arg_24 = &data_4ec3d4
                                                                                                                                    ebp_1 = sub_46910c(*(ebp_1 - 4), 
                                                                                                                                        "f_internetip", ebp_1 - 0x4b0)
                                                                                                                                    arg_20 = *(ebp_1 - 0x4b0)
                                                                                                                                    arg_1c = &data_4ec3c8
                                                                                                                                    arg_18 = *(ebp_1 - 0x2c)
                                                                                                                                    sub_404138(ebp_1 - 0x28, 5)
                                                                                                                                    esp_22 = &arg_3c
                                                                                                                            else
                                                                                                                                void* ebp_17 = sub_46910c(*(ebp_1 - 4), 
                                                                                                                                    "f_lochost", ebp_1 - 0x484)
                                                                                                                                __return_addr = *(ebp_17 - 0x484)
                                                                                                                                lpDirectory = &data_4ec3c8
                                                                                                                                sub_4b56b0(ebp_17 - 0x48c)
                                                                                                                                void* ebp_18 = sub_4b570c(
                                                                                                                                    *(ebp_17 - 0x48c), ebp_17 - 0x488)
                                                                                                                                int32_t var_8_26 = *(ebp_18 - 0x488)
                                                                                                                                sub_404138(ebp_18 - 0x28, 3)
                                                                                                                                arg_18 = *(ebp_18 - 0x28)
                                                                                                                                arg_14 = &data_4ec3d4
                                                                                                                                void* ebp_19 = sub_46910c(
                                                                                                                                    *(ebp_18 - 4), "f_locip", 
                                                                                                                                    ebp_18 - 0x490)
                                                                                                                                arg_10 = *(ebp_19 - 0x490)
                                                                                                                                arg2 = &data_4ec3c8
                                                                                                                                sub_4b56b0(ebp_19 - 0x494)
                                                                                                                                arg_8 = *(ebp_19 - 0x494)
                                                                                                                                sub_404138(ebp_19 - 0x28, 5)
                                                                                                                                esp_22 = &arg_2c
                                                                                                                                void* ebp_20 = sub_46910c(
                                                                                                                                    *(ebp_19 - 4), "f_ipauslesen", 
                                                                                                                                    ebp_19 - 0x498)
                                                                                                                                ebp_1 = sub_510ba4(data_7a6e5c, 
                                                                                                                                    *(ebp_20 - 0x498), ebp_20 - 0x2c)
                                                                                                                                
                                                                                                                                if (*(ebp_1 - 0x2c) != 0)
                                                                                                                                    arg_28 = *(ebp_1 - 0x28)
                                                                                                                                    arg_24 = &data_4ec3d4
                                                                                                                                    ebp_1 = sub_46910c(*(ebp_1 - 4), 
                                                                                                                                        "f_internetip", ebp_1 - 0x49c)
                                                                                                                                    arg_20 = *(ebp_1 - 0x49c)
                                                                                                                                    arg_1c = &data_4ec3c8
                                                                                                                                    arg_18 = *(ebp_1 - 0x2c)
                                                                                                                                    sub_404138(ebp_1 - 0x28, 5)
                                                                                                                                    esp_22 = &arg_3c
                                                                                                                            *(esp_22 - 4) = 0
                                                                                                                            *(esp_22 - 8) = 0
                                                                                                                            *(esp_22 - 0xc) = 0
                                                                                                                            *(esp_22 - 0x10) = 0
                                                                                                                            esp_1 = esp_22 - 0x10
                                                                                                                            sub_4748fc(data_61c8c8, 
                                                                                                                                *(ebp_1 - 0x28), &data_4ec420)
                                                                                                                        else if (data_61c9a0 s<= *(ebp_1 - 0x18)
                                                                                                                                && *(ebp_1 - 0x18) s<= data_61c9bc)
                                                                                                                            int32_t edx_492 = *(ebp_1 - 0x18)
                                                                                                                            int32_t edx_493 = edx_492 - data_61c9a0
                                                                                                                            
                                                                                                                            if (add_overflow(edx_492, 
                                                                                                                                    neg.d(data_61c9a0)))
                                                                                                                                sub_403010()
                                                                                                                                noreturn
                                                                                                                            
                                                                                                                            if (add_overflow(edx_493, 1))
                                                                                                                                sub_403010()
                                                                                                                                noreturn
                                                                                                                            
                                                                                                                            sub_5140f8(data_61c9f0, edx_493 + 1)
                                                                                                                            __return_addr = nullptr
                                                                                                                            int32_t eax_1044 = *(ebp_1 - 0x18)
                                                                                                                            
                                                                                                                            if (add_overflow(eax_1044, 
                                                                                                                                    neg.d(data_61c9a0)))
                                                                                                                                sub_403010()
                                                                                                                                noreturn
                                                                                                                            
                                                                                                                            sub_47a1c0(
                                                                                                                                (&data_61c9a0)[eax_1044 - data_61c9a0], 
                                                                                                                                data_61c8f0, data_61c8c8)
                                                                                                                            __return_addr = nullptr
                                                                                                                            int32_t eax_1047 = *(ebp_1 - 0x18)
                                                                                                                            
                                                                                                                            if (add_overflow(eax_1047, 
                                                                                                                                    neg.d(data_61c9a0)))
                                                                                                                                sub_403010()
                                                                                                                                noreturn
                                                                                                                            
                                                                                                                            sub_47a180(
                                                                                                                                *(((eax_1047 - data_61c9a0) << 2) +
                                                                                                                                    &data_61c980), 
                                                                                                                                data_61c8f0, data_61c8c8)
                                                                                                                            esp_1 = &arg_4
                                                                                                                        else if (*(ebp_1 - 0x18) != data_61c9d4)
                                                                                                                            if (*(ebp_1 - 0x18) == data_61c9d0)
                                                                                                                                data_61c8f0
                                                                                                                                bool o_145 = unimplemented  {imul eax, 
                                                                                                                                    dword [0x61c8f0], 0x1038}
                                                                                                                                
                                                                                                                                if (o_145)
                                                                                                                                    sub_403010()
                                                                                                                                    noreturn
                                                                                                                                
                                                                                                                                if (*(*(data_61c8c8 + 0xab0)
                                                                                                                                        + data_61c8f0 * 0x81c0 + 1) != 0)
                                                                                                                                    if (sub_50d9e0(data_7a6e5c) == 0)
                                                                                                                                        data_61c9f0
                                                                                                                                        
                                                                                                                                        if (sub_50d2f4() == 0)
                                                                                                                                            sub_511dcc(data_61c9f0, 1, 0xbb8)
                                                                                                                                            sub_5143f0(data_61c9f0, 0xbb8)
                                                                                                                                        else
                                                                                                                                            sub_511dcc(data_61c9f0, 1, 0x1388)
                                                                                                                                            sub_5143f0(data_61c9f0, 0x1388)
                                                                                                                                    else
                                                                                                                                        sub_511dcc(data_61c9f0, 1, 0x1388)
                                                                                                                                        sub_5143f0(data_61c9f0, 0x1388)
                                                                                                                            else if (*(ebp_1 - 0x18) != 2)
                                                                                                                                sub_50c5e0(0, 0)
                                                                                                                                
                                                                                                                                if (sub_50d318(data_61c9f0) != 0)
                                                                                                                                    sub_5148a0(data_61c9f0)
                                                                                                                                
                                                                                                                                ebp_1 = sub_51497c(data_61c9f0, 0, 0)
                                                                                                                            else
                                                                                                                                sub_48380c(*(ebp_1 - 4), data_61c8f0)
                                                                                                                        else if (*(data_61c9f0 + 0x1c8) == 0)
                                                                                                                            data_61c9f0
                                                                                                                            
                                                                                                                            if (sub_50d2f4() == 0)
                                                                                                                                sub_507dbc(2)
                                                                                                                            
                                                                                                                            struct _EXCEPTION_REGISTRATION_RECORD* 
                                                                                                                                ecx_210
                                                                                                                            int32_t edx_498
                                                                                                                            
                                                                                                                            if (*(data_61c9f0 + 0x344) == 0)
                                                                                                                                *(data_61c9f0 + 0x5c) = 1
                                                                                                                                ecx_210, edx_498 =
                                                                                                                                    sub_514c48(data_61c9f0)
                                                                                                                            else
                                                                                                                                ecx_210, edx_498 =
                                                                                                                                    sub_514c8c(data_61c9f0)
                                                                                                                            
                                                                                                                            data_61c9f0
                                                                                                                            
                                                                                                                            if (sub_50d2f4() == 0)
                                                                                                                                sub_509af8(nullptr, edx_498, ecx_210)
                                                                                                                                sub_48380c(*(ebp_1 - 4), data_61c8f0)
                                                                                                                            else
                                                                                                                                sub_48380c(*(ebp_1 - 4), data_61c8f0)
                                                                                                                                struct _EXCEPTION_REGISTRATION_RECORD* 
                                                                                                                                    ecx_211
                                                                                                                                int32_t edx_501
                                                                                                                                ecx_211, edx_501 = sub_507dbc(2)
                                                                                                                                sub_509af8(nullptr, edx_501, ecx_211)
                                                                                                                        else
                                                                                                                            *(data_61c9f0 + 0x1c8) = 0
                                                                                                                            sub_5143f0(data_61c9f0, 1)
                                                                                                                    else if (*(ebp_1 - 0x14) != data_61c8e0)
                                                                                                                        if (*(ebp_1 - 0x14) != data_61c9f8)
                                                                                                                            int32_t edx_517 = data_61c8d4
                                                                                                                            ecx_135.b = 0x20
                                                                                                                            int32_t ecx_216 = sub_402e64(
                                                                                                                                ebp_1 - 0x2d4, edx_517.b, ecx_135.b)
                                                                                                                            int32_t eax_1133 = *(ebp_1 - 0x14)
                                                                                                                            bool c_11 = eax_1133 u< 0xff
                                                                                                                            
                                                                                                                            if (eax_1133 == 0xff || c_11)
                                                                                                                                c_11 =
                                                                                                                                    test_bit(*(ebp_1 - 0x2d4), eax_1133)
                                                                                                                            
                                                                                                                            if (not(c_11) || data_77e23c != 0)
                                                                                                                                if (*(ebp_1 - 0x14) != data_61cdcc)
                                                                                                                                    if (*(ebp_1 - 0x14) != data_61cdf0)
                                                                                                                                        if (*(ebp_1 - 0x14) == data_61c8cc)
                                                                                                                                            if (*(ebp_1 - 0x18) == data_61ca0c)
                                                                                                                                                sub_4836b0(*(ebp_1 - 4), data_61cdf0)
                                                                                                                                            else if (*(ebp_1 - 0x18) == data_61c9fc)
                                                                                                                                                sub_4836b0(*(ebp_1 - 4), data_61c9f8)
                                                                                                                                            else if (*(ebp_1 - 0x18) == data_61ca00)
                                                                                                                                                sub_4d9530(*(ebp_1 - 4))
                                                                                                                                            else if (*(ebp_1 - 0x18) == data_61ca04)
                                                                                                                                                ecx_216.b = 1
                                                                                                                                                *(ebp_1 - 4)
                                                                                                                                                sub_4d78f8(ecx_216.b, data_61cabc)
                                                                                                                                                *(ebp_1 - 4)
                                                                                                                                                sub_4d78f8(1, 
                                                                                                                                                    *((zx.d(*(data_780c58 + 4)) << 2) +
                                                                                                                                                        &data_61cac8))
                                                                                                                                                data_61c8cc
                                                                                                                                                bool o_151 = unimplemented  {imul eax, 
                                                                                                                                                    dword [0x61c8cc], 0x1038}
                                                                                                                                                
                                                                                                                                                if (o_151)
                                                                                                                                                    sub_403010()
                                                                                                                                                    noreturn
                                                                                                                                                
                                                                                                                                                int32_t eax_1208
                                                                                                                                                eax_1208.w = *(*(data_61c8c8 + 0xab0)
                                                                                                                                                    + data_61c8cc * 0x81c0 + 4)
                                                                                                                                                data_61cab4
                                                                                                                                                bool o_152 = unimplemented  {imul edx, 
                                                                                                                                                    dword [0x61cab4], 0x1038}
                                                                                                                                                
                                                                                                                                                if (o_152)
                                                                                                                                                    sub_403010()
                                                                                                                                                    noreturn
                                                                                                                                                
                                                                                                                                                *(*(data_61c8c8 + 0xab0)
                                                                                                                                                    + data_61cab4 * 0x81c0 + 4) =
                                                                                                                                                    eax_1208.w
                                                                                                                                                data_61c8cc
                                                                                                                                                bool o_153 = unimplemented  {imul eax, 
                                                                                                                                                    dword [0x61c8cc], 0x1038}
                                                                                                                                                
                                                                                                                                                if (o_153)
                                                                                                                                                    sub_403010()
                                                                                                                                                    noreturn
                                                                                                                                                
                                                                                                                                                int32_t eax_1209
                                                                                                                                                eax_1209.w = *(*(data_61c8c8 + 0xab0)
                                                                                                                                                    + data_61c8cc * 0x81c0 + 8)
                                                                                                                                                data_61cab4
                                                                                                                                                bool o_154 = unimplemented  {imul edx, 
                                                                                                                                                    dword [0x61cab4], 0x1038}
                                                                                                                                                
                                                                                                                                                if (o_154)
                                                                                                                                                    sub_403010()
                                                                                                                                                    noreturn
                                                                                                                                                
                                                                                                                                                *(*(data_61c8c8 + 0xab0)
                                                                                                                                                    + data_61cab4 * 0x81c0 + 8) =
                                                                                                                                                    eax_1209.w
                                                                                                                                                data_61cab4
                                                                                                                                                bool o_155 = unimplemented  {imul eax, 
                                                                                                                                                    dword [0x61cab4], 0x1038}
                                                                                                                                                
                                                                                                                                                if (o_155)
                                                                                                                                                    sub_403010()
                                                                                                                                                    noreturn
                                                                                                                                                
                                                                                                                                                void* eax_1211 = *(data_61c8c8 + 0xab0)
                                                                                                                                                    + data_61cab4 * 0x81c0
                                                                                                                                                data_61cca0
                                                                                                                                                bool o_156 = unimplemented  {imul edx, 
                                                                                                                                                    dword [0x61cca0], 0x23}
                                                                                                                                                
                                                                                                                                                if (o_156)
                                                                                                                                                    sub_403010()
                                                                                                                                                    noreturn
                                                                                                                                                
                                                                                                                                                *(eax_1211 + data_61cca0 * 0x118
                                                                                                                                                    - 0xf4) = 0x76
                                                                                                                                                data_61cc94
                                                                                                                                                bool o_157 = unimplemented  {imul edx, 
                                                                                                                                                    dword [0x61cc94], 0x23}
                                                                                                                                                
                                                                                                                                                if (o_157)
                                                                                                                                                    sub_403010()
                                                                                                                                                    noreturn
                                                                                                                                                
                                                                                                                                                *(eax_1211 + data_61cc94 * 0x118
                                                                                                                                                    - 0xf4) = 0xa8
                                                                                                                                                data_61cc98
                                                                                                                                                bool o_158 = unimplemented  {imul edx, 
                                                                                                                                                    dword [0x61cc98], 0x23}
                                                                                                                                                
                                                                                                                                                if (o_158)
                                                                                                                                                    sub_403010()
                                                                                                                                                    noreturn
                                                                                                                                                
                                                                                                                                                *(eax_1211 + data_61cc98 * 0x118
                                                                                                                                                    - 0xf4) = 0xda
                                                                                                                                                *(eax_1211 + 0x13c) = 0x134
                                                                                                                                                sub_4836b0(*(ebp_1 - 4), data_61cab4)
                                                                                                                                            else if (*(ebp_1 - 0x18) != data_61ca18)
                                                                                                                                                if (*(ebp_1 - 0x18) == data_61ca08)
                                                                                                                                                    data_61ca1c
                                                                                                                                                    bool o_159 = unimplemented  {imul eax, 
                                                                                                                                                        dword [0x61ca1c], 0x1038}
                                                                                                                                                    
                                                                                                                                                    if (o_159)
                                                                                                                                                        sub_403010()
                                                                                                                                                        noreturn
                                                                                                                                                    
                                                                                                                                                    data_61ca20
                                                                                                                                                    bool o_160 = unimplemented  {imul edx, 
                                                                                                                                                        dword [0x61ca20], 0x23}
                                                                                                                                                    
                                                                                                                                                    if (o_160)
                                                                                                                                                        sub_403010()
                                                                                                                                                        noreturn
                                                                                                                                                    
                                                                                                                                                    *(*(data_61c8c8 + 0xab0)
                                                                                                                                                        + data_61ca1c * 0x81c0
                                                                                                                                                        + data_61ca20 * 0x118 - 0x78) =
                                                                                                                                                        0xc3200000
                                                                                                                                                    sub_4836b0(data_61c8c8, data_61ca1c)
                                                                                                                                                else if (*(ebp_1 - 0x18) == data_61cfa4)
                                                                                                                                                    if (*(data_780c58 + 4) == 7)
                                                                                                                                                        sub_4c585c()
                                                                                                                                                    
                                                                                                                                                    *(ebp_1 - 4)
                                                                                                                                                    sub_4d885c()
                                                                                                                                                    sub_4836b0(*(ebp_1 - 4), data_61cb28)
                                                                                                                                                else if (*(ebp_1 - 0x18) == data_61cfa0)
                                                                                                                                                    sub_44613c(data_61c8c8, edx_517, 
                                                                                                                                                        ecx_216)
                                                                                                                                    else if (*(ebp_1 - 0x18) == 2)
                                                                                                                                        sub_48380c(*(ebp_1 - 4), data_61cdf0)
                                                                                                                                    else if (*(ebp_1 - 0x18) == data_61cdf4)
                                                                                                                                        *(ebp_1 - 4)
                                                                                                                                        sub_4d885c()
                                                                                                                                        sub_4836b0(*(ebp_1 - 4), data_61cb28)
                                                                                                                                    else if (*(ebp_1 - 0x18) == data_61ce00)
                                                                                                                                        data_61ca1c
                                                                                                                                        bool o_149 = unimplemented  {imul eax, 
                                                                                                                                            dword [0x61ca1c], 0x1038}
                                                                                                                                        
                                                                                                                                        if (o_149)
                                                                                                                                            sub_403010()
                                                                                                                                            noreturn
                                                                                                                                        
                                                                                                                                        data_61ca20
                                                                                                                                        bool o_150 = unimplemented  {imul edx, 
                                                                                                                                            dword [0x61ca20], 0x23}
                                                                                                                                        
                                                                                                                                        if (o_150)
                                                                                                                                            sub_403010()
                                                                                                                                            noreturn
                                                                                                                                        
                                                                                                                                        *(*(data_61c8c8 + 0xab0)
                                                                                                                                            + data_61ca1c * 0x81c0
                                                                                                                                            + data_61ca20 * 0x118 - 0x78) =
                                                                                                                                            0xc3b40000
                                                                                                                                        sub_4836b0(data_61c8c8, data_61ca1c)
                                                                                                                                    else if (*(ebp_1 - 0x18) == data_61cdfc)
                                                                                                                                        if (data_7a6a9c - 1 u>= 2)
                                                                                                                                            data_7a6a9c = 3
                                                                                                                                        
                                                                                                                                        sub_4d88f8(*(ebp_1 - 4), 1, 
                                                                                                                                            data_7a6a9c, esi, edi)
                                                                                                                                        sub_4836b0(*(ebp_1 - 4), data_61cb24)
                                                                                                                                    else if (*(ebp_1 - 0x18) == data_61cdf8)
                                                                                                                                        sub_48380c(*(ebp_1 - 4), data_61cdf0)
                                                                                                                                        sub_4836b0(*(ebp_1 - 4), data_61cdcc)
                                                                                                                                        *(*(ebp_1 - 4) + 0x9b0) = 0
                                                                                                                                else if (*(ebp_1 - 0x18) == 2)
                                                                                                                                    sub_48380c(*(ebp_1 - 4), data_61cdcc)
                                                                                                                                else if (*(ebp_1 - 0x18) == data_61cdd0)
                                                                                                                                    *data_52ffac = 0
                                                                                                                                    sub_48380c(*(ebp_1 - 4), data_61cdcc)
                                                                                                                                    ebp_1 = sub_4ecb3c()
                                                                                                                                    *data_530a8c = 0
                                                                                                                                else if (*(ebp_1 - 0x18) == data_61cdd4)
                                                                                                                                    *data_52ffac = 0
                                                                                                                                    sub_48380c(*(ebp_1 - 4), data_61cdcc)
                                                                                                                                    ebp_1 = sub_4ecb3c()
                                                                                                                                    *data_530a8c = 1
                                                                                                                                else if (*(ebp_1 - 0x18) == data_61cdd8)
                                                                                                                                    *data_52ffac = 1
                                                                                                                                    sub_48380c(*(ebp_1 - 4), data_61cdcc)
                                                                                                                                    ebp_1 = sub_4ecb3c()
                                                                                                                                    *data_530a8c = 0x4f
                                                                                                                                    sub_4ed040()
                                                                                                                                else if (*(ebp_1 - 0x18) == data_61cddc)
                                                                                                                                    *data_52ffac = 0
                                                                                                                                    sub_48380c(*(ebp_1 - 4), data_61cdcc)
                                                                                                                                    ebp_1 = sub_4ecb3c()
                                                                                                                                    *data_530a8c = 0xa2
                                                                                                                                    sub_4ed040()
                                                                                                                            else if (*(ebp_1 - 0x18) == data_61cc90)
                                                                                                                                *(*(ebp_1 - 4) + 0xce1) = 0
                                                                                                                                sub_4d9530(*(ebp_1 - 4))
                                                                                                                            else if (*(ebp_1 - 0x14) == data_61c8cc
                                                                                                                                    || *(ebp_1 - 0x18) != data_61cfb0)
                                                                                                                                ecx_216.b = 0x20
                                                                                                                                sub_402e64(ebp_1 - 0x2d4, 
                                                                                                                                    (data_61cfa8).b, ecx_216.b)
                                                                                                                                int32_t eax_1141 = data_61ca04
                                                                                                                                
                                                                                                                                if (eax_1141 u<= 0xff)
                                                                                                                                    *(ebp_1 - 0x2d4) |=
                                                                                                                                        1 << (eax_1141 u% 0x20)
                                                                                                                                
                                                                                                                                int32_t eax_1142 = *(ebp_1 - 0x18)
                                                                                                                                bool c_12 = eax_1142 u< 0xff
                                                                                                                                
                                                                                                                                if (eax_1142 == 0xff || c_12)
                                                                                                                                    c_12 =
                                                                                                                                        test_bit(*(ebp_1 - 0x2d4), eax_1142)
                                                                                                                                
                                                                                                                                if (c_12)
                                                                                                                                    *(ebp_1 - 4)
                                                                                                                                    sub_4d78f8(1, data_61cabc)
                                                                                                                                    *(ebp_1 - 4)
                                                                                                                                    sub_4d78f8(1, 
                                                                                                                                        *((zx.d(*(data_780c58 + 4)) << 2) +
                                                                                                                                            &data_61cac8))
                                                                                                                                    sub_4836b0(*(ebp_1 - 4), data_61cab4)
                                                                                                                                    __return_addr = 1
                                                                                                                                    sub_47a180(data_61cca8, data_61cab4, 
                                                                                                                                        data_61c8c8, __return_addr.b)
                                                                                                                                    __return_addr = 1
                                                                                                                                    sub_47a180(data_61cca4, data_61cab4, 
                                                                                                                                        data_61c8c8, __return_addr.b)
                                                                                                                                    esp_1 = &arg_4
                                                                                                                                else if (*(ebp_1 - 0x18) == data_61cfb8)
                                                                                                                                    sub_4837d0(*(ebp_1 - 4), data_61c8d4)
                                                                                                                                    data_77e23c = 1
                                                                                                                                    sub_528320(data_780c58, 
                                                                                                                                        *(data_780c58 + 4), 0)
                                                                                                                                else if (*(ebp_1 - 0x18) == data_61cfb4)
                                                                                                                                    if (*(data_780c58 + 0x25b40) == 1)
                                                                                                                                        sub_516eec()
                                                                                                                                    
                                                                                                                                    sub_4836b0(*(ebp_1 - 4), 
                                                                                                                                        *(
                                                                                                                                            (zx.d(*(data_780c58 + 0x25b40)) << 2) +
                                                                                                                                            &data_61cac8))
                                                                                                                            else
                                                                                                                                sub_48380c(*(ebp_1 - 4), data_61c8d4)
                                                                                                                        else
                                                                                                                            *(data_61c9f0 + 0x1e3) = 0
                                                                                                                            int32_t eax_1090 = data_61ca18
                                                                                                                            
                                                                                                                            if (add_overflow(eax_1090, 3))
                                                                                                                                sub_403010()
                                                                                                                                noreturn
                                                                                                                            
                                                                                                                            if (eax_1090 + 3 != *(ebp_1 - 0x18))
                                                                                                                                int32_t eax_1103 = data_61ca18
                                                                                                                                
                                                                                                                                if (add_overflow(eax_1103, 2))
                                                                                                                                    sub_403010()
                                                                                                                                    noreturn
                                                                                                                                
                                                                                                                                if (eax_1103 + 2 != *(ebp_1 - 0x18))
                                                                                                                                    int32_t eax_1117 = data_61ca18
                                                                                                                                    
                                                                                                                                    if (add_overflow(eax_1117, 1))
                                                                                                                                        sub_403010()
                                                                                                                                        noreturn
                                                                                                                                    
                                                                                                                                    if (eax_1117 + 1 == *(ebp_1 - 0x18))
                                                                                                                                        *(*(ebp_1 - 4) + 0xce1) = 0
                                                                                                                                        *(data_780c58 + 0x111f9) = 0
                                                                                                                                        *(data_780c58 + 0x111f8) = 1
                                                                                                                                        *(data_780c58 + 0x111fa) = 0
                                                                                                                                        sub_4d6994(*(ebp_1 - 4), 2)
                                                                                                                                    else if (*(ebp_1 - 0x18) == data_61ca18)
                                                                                                                                        *(*(ebp_1 - 4) + 0xce1) = 0
                                                                                                                                        *(data_780c58 + 0x111f9) = 0
                                                                                                                                        *(data_780c58 + 0x111f8) = 0
                                                                                                                                        *(data_780c58 + 0x111fa) = 0
                                                                                                                                        sub_4d6994(*(ebp_1 - 4), 1)
                                                                                                                                    else if (*(ebp_1 - 0x18) == data_61cfb0)
                                                                                                                                        sub_48380c(*(ebp_1 - 4), data_61c9f8)
                                                                                                                                else
                                                                                                                                    *(*(ebp_1 - 4) + 0xce1) = 1
                                                                                                                                    *(data_780c58 + 0x111f9) = 0
                                                                                                                                    *(data_780c58 + 0x111f8) = 0
                                                                                                                                    *(data_780c58 + 0x111fa) = 0
                                                                                                                                    __return_addr = ebp_1 - 0x28
                                                                                                                                    esp_1 = &__return_addr
                                                                                                                                    sub_47a2ac(data_61c8c8, data_61c8f0, 
                                                                                                                                        data_61c9dc, __return_addr)
                                                                                                                                    sub_404054(ebp_1 - 0x450, 
                                                                                                                                        *(ebp_1 - 0x28), 0xff)
                                                                                                                                    sub_402bdc(data_61c9f0 + 0x31, 
                                                                                                                                        ebp_1 - 0x450, 0x20)
                                                                                                                                    
                                                                                                                                    if (data_7a6e5c == 0)
                                                                                                                                        void* edx_514
                                                                                                                                        edx_514.b = 1
                                                                                                                                        data_7a6e5c =
                                                                                                                                            sub_5101f8(sub_50d118+0x128, edx_514, 0)
                                                                                                                                    
                                                                                                                                    *(data_7a6e5c + 0x4c) = 1
                                                                                                                                    sub_4836b0(*(ebp_1 - 4), data_61c8e4)
                                                                                                                            else
                                                                                                                                *(*(ebp_1 - 4) + 0xce1) = 1
                                                                                                                                *(data_780c58 + 0x111f9) = 0
                                                                                                                                *(data_780c58 + 0x111f8) = 0
                                                                                                                                *(data_780c58 + 0x111fa) = 1
                                                                                                                                __return_addr = ebp_1 - 0x28
                                                                                                                                esp_1 = &__return_addr
                                                                                                                                sub_47a2ac(data_61c8c8, data_61c8f0, 
                                                                                                                                    data_61c9dc, __return_addr)
                                                                                                                                sub_404054(ebp_1 - 0x450, 
                                                                                                                                    *(ebp_1 - 0x28), 0xff)
                                                                                                                                sub_402bdc(data_61c9f0 + 0x31, 
                                                                                                                                    ebp_1 - 0x450, 0x20)
                                                                                                                                
                                                                                                                                if (data_7a6e5c == 0)
                                                                                                                                    void* edx_511
                                                                                                                                    edx_511.b = 1
                                                                                                                                    data_7a6e5c =
                                                                                                                                        sub_5101f8(sub_50d118+0x128, edx_511, 0)
                                                                                                                                
                                                                                                                                data_7a6e5c
                                                                                                                                sub_50f6ec()
                                                                                                                    else if (*(ebp_1 - 0x18) == 2)
                                                                                                                        sub_48380c(*(ebp_1 - 4), 
                                                                                                                            *(ebp_1 - 0x14))
                                                                                                                    else if (*(ebp_1 - 0x18) == 3)
                                                                                                                        sub_4d6994(*(ebp_1 - 4), 2)
                                                                                                                    else if (*(ebp_1 - 0x18) == 4)
                                                                                                                        sub_4836b0(*(ebp_1 - 4), data_61caec)
                                                                                                                    else if (*(ebp_1 - 0x18) == 5)
                                                                                                                        sub_4d7ff0(*(ebp_1 - 4))
                                                                                                                        sub_4d6b10(*(ebp_1 - 4), 0)
                                                                                                                        sub_4836b0(*(ebp_1 - 4), data_61cabc)
                                                                                                                else if (*(ebp_1 - 0x18) != data_61c914)
                                                                                                                    int32_t eax_1004 = data_61c910
                                                                                                                    
                                                                                                                    if (add_overflow(eax_1004, 1))
                                                                                                                        sub_403010()
                                                                                                                        noreturn
                                                                                                                    
                                                                                                                    if (eax_1004 + 1 == *(ebp_1 - 0x18))
                                                                                                                        sub_509890()
                                                                                                                else
                                                                                                                    sub_509850()
                                                                                                            else if (*(ebp_1 - 0x18) == data_61c91c)
                                                                                                                sub_509bfc(0)
                                                                                                                __return_addr = nullptr
                                                                                                                sub_47a140(data_61c9cc, data_61c8f0, 
                                                                                                                    data_61c8c8, __return_addr.b)
                                                                                                                __return_addr = ebp_1 - 0x28
                                                                                                                sub_47a2ac(data_61c8c8, data_61c8f4, 
                                                                                                                    data_61c918, __return_addr)
                                                                                                                lpDirectory = ebp_1 - 0x47c
                                                                                                                sub_404280(1, 1, *(ebp_1 - 0x28), 
                                                                                                                    lpDirectory)
                                                                                                                sub_404188(*(ebp_1 - 0x47c), 
                                                                                                                    &data_4ec188)
                                                                                                                lpDirectory = nullptr
                                                                                                                sub_47ab08(data_61c8c8, data_61c8f4, 
                                                                                                                    data_61c918, x87_r0, lpDirectory)
                                                                                                                int32_t ecx_181 =
                                                                                                                    sub_4042c0(ebp_1 - 0x28, 1, 1)
                                                                                                                *(data_61c9f0 + 0x350) = 0
                                                                                                                
                                                                                                                if (*(ebp_1 - 0x28) != 0)
                                                                                                                    data_61c9f0
                                                                                                                    
                                                                                                                    if (sub_50d2f4() == 0)
                                                                                                                        lpDirectory = nullptr
                                                                                                                        esp_1 = &lpDirectory
                                                                                                                        char eax_999
                                                                                                                        int32_t ecx_196
                                                                                                                        eax_999, ecx_196 = sub_516544(
                                                                                                                            data_61c9f0, 0, *(ebp_1 - 0x28), 
                                                                                                                            lpDirectory.b)
                                                                                                                        
                                                                                                                        if (eax_999 == 0)
                                                                                                                            data_61c9f0
                                                                                                                            sub_513ae4(ecx_196, 0x65)
                                                                                                                    else
                                                                                                                        *(data_61c9f0 + 4) =
                                                                                                                            sub_408e80(*(ebp_1 - 0x28))
                                                                                                                        lpDirectory = nullptr
                                                                                                                        esp_1 = &lpDirectory
                                                                                                                        char eax_996
                                                                                                                        int32_t ecx_194
                                                                                                                        eax_996, ecx_194 = sub_516544(
                                                                                                                            data_61c9f0, *(data_7a6e5c + 0x40), 
                                                                                                                            *(data_7a6e5c + 0x38), lpDirectory.b)
                                                                                                                        
                                                                                                                        if (eax_996 == 0)
                                                                                                                            data_61c9f0
                                                                                                                            sub_513ae4(ecx_194, 0x65)
                                                                                                                else
                                                                                                                    int32_t eax_962
                                                                                                                    int32_t ecx_183
                                                                                                                    int32_t edx_466
                                                                                                                    eax_962, ecx_183, edx_466 =
                                                                                                                        sub_4030a0(ecx_181, 1)
                                                                                                                    data_7a6e50 = eax_962
                                                                                                                    edx_466.b = 1
                                                                                                                    int32_t eax_964
                                                                                                                    int32_t ecx_184
                                                                                                                    int32_t edx_467
                                                                                                                    eax_964, ecx_184, edx_467 =
                                                                                                                        sub_4030a0(ecx_183, edx_466)
                                                                                                                    data_7a6e54 = eax_964
                                                                                                                    
                                                                                                                    if (data_7a6e58 == 0)
                                                                                                                        edx_467.b = 1
                                                                                                                        data_7a6e58 =
                                                                                                                            sub_4030a0(ecx_184, edx_467)
                                                                                                                    else
                                                                                                                        (*(*data_7a6e58 + 0x40))()
                                                                                                                    
                                                                                                                    sub_4b566c(&data_7a6e50)
                                                                                                                    int32_t i_16 =
                                                                                                                        (*(*data_7a6e50 + 0x14))()
                                                                                                                    
                                                                                                                    if (add_overflow(i_16, 0xffffffff))
                                                                                                                        sub_403010()
                                                                                                                        noreturn
                                                                                                                    
                                                                                                                    if (i_16 - 1 s>= 0)
                                                                                                                        int32_t i_14 = i_16
                                                                                                                        *(ebp_1 - 0x1c) = 0
                                                                                                                        int32_t i
                                                                                                                        
                                                                                                                        do
                                                                                                                            *(ebp_1 - 0x1c)
                                                                                                                            (*(*data_7a6e50 + 0xc))()
                                                                                                                            
                                                                                                                            if (*(ebp_1 - 0x28) != 0)
                                                                                                                                while (sub_404078(*(ebp_1 - 0x28)) s> 0)
                                                                                                                                    char* eax_973
                                                                                                                                    eax_973.b = **(ebp_1 - 0x28)
                                                                                                                                    char temp169_1 = eax_973.b
                                                                                                                                    eax_973.b -= 0x2f
                                                                                                                                    
                                                                                                                                    if (temp169_1 != 0x2f)
                                                                                                                                        char temp172_1 = eax_973.b
                                                                                                                                        eax_973.b -= 0x2d
                                                                                                                                        
                                                                                                                                        if (temp172_1 != 0x2d)
                                                                                                                                            break
                                                                                                                                    
                                                                                                                                    sub_4042c0(ebp_1 - 0x28, 1, 1)
                                                                                                                                
                                                                                                                                *(ebp_1 - 0x28)
                                                                                                                                *(ebp_1 - 0x1c)
                                                                                                                                (*(*data_7a6e50 + 0x20))()
                                                                                                                            
                                                                                                                            *(ebp_1 - 0x1c) += 1
                                                                                                                            i = i_14
                                                                                                                            i_14 -= 1
                                                                                                                        while (i != 1)
                                                                                                                    
                                                                                                                    lpDirectory = 0x1770
                                                                                                                    ebp_1 = sub_508730(&data_7a6e54, 
                                                                                                                        &data_7a6e58, &data_7a6e50, lpDirectory)
                                                                                                                    int32_t eax_976
                                                                                                                    int32_t ecx_187
                                                                                                                    eax_976, ecx_187 =
                                                                                                                        (*(*data_7a6e54 + 0x14))()
                                                                                                                    esp_1 = &__return_addr
                                                                                                                    
                                                                                                                    if (eax_976 s<= 0)
                                                                                                                        data_61c9f0
                                                                                                                        sub_513ae4(ecx_187, 0x67)
                                                                                                                    else
                                                                                                                        sub_403df8(ebp_1 - 0x28)
                                                                                                                        sub_483950(data_61c8c8, data_61c8f8)
                                                                                                                        lpDirectory = 1
                                                                                                                        sub_47b488(data_61c900, data_61c8f8, 
                                                                                                                            data_61c8c8, lpDirectory.b)
                                                                                                                        int32_t i_17 =
                                                                                                                            (*(*data_7a6e54 + 0x14))()
                                                                                                                        
                                                                                                                        if (add_overflow(i_17, 0xffffffff))
                                                                                                                            sub_403010()
                                                                                                                            noreturn
                                                                                                                        
                                                                                                                        if (i_17 - 1 s>= 0)
                                                                                                                            int32_t i_15 = i_17
                                                                                                                            *(ebp_1 - 0x1c) = 0
                                                                                                                            int32_t i_1
                                                                                                                            
                                                                                                                            do
                                                                                                                                lpDirectory = nullptr
                                                                                                                                *(ebp_1 - 0x1c)
                                                                                                                                (*(*data_7a6e54 + 0xc))(lpDirectory)
                                                                                                                                sub_47b650(data_61c8c8, data_61c900, 
                                                                                                                                    *(ebp_1 - 0x480))
                                                                                                                                *(ebp_1 - 0x1c) += 1
                                                                                                                                i_1 = i_15
                                                                                                                                i_15 -= 1
                                                                                                                            while (i_1 != 1)
                                                                                                                        
                                                                                                                        lpDirectory = nullptr
                                                                                                                        sub_47b304(data_61c900, data_61c8f8, 
                                                                                                                            data_61c8c8, lpDirectory)
                                                                                                                        lpDirectory = 1
                                                                                                                        sub_47b2ac(data_61c900, data_61c8f8, 
                                                                                                                            data_61c8c8, lpDirectory)
                                                                                                                        esp_1 = &__return_addr
                                                                                                                        sub_4836b0(*(ebp_1 - 4), data_61c8f8)
                                                                                                                    
                                                                                                                    sub_4030d0(data_7a6e54)
                                                                                                                    sub_4030d0(data_7a6e50)
                                                                                                            else if (*(ebp_1 - 0x18) == 2)
                                                                                                                sub_48380c(*(ebp_1 - 4), data_61c8f4)
                                                                                                        else if (*(ebp_1 - 0x18) == data_61c904)
                                                                                                            sub_48380c(*(ebp_1 - 4), data_61c8f8)
                                                                                                            __return_addr = ebp_1 - 0x20
                                                                                                            sub_47a960(data_61c900, data_61c8f8, 
                                                                                                                data_61c8c8, __return_addr)
                                                                                                            
                                                                                                            if (add_overflow(*(ebp_1 - 0x20), 
                                                                                                                    0xffffffff))
                                                                                                                sub_403010()
                                                                                                                noreturn
                                                                                                            
                                                                                                            (*(*data_7a6e58 + 0xc))()
                                                                                                            sub_4040c4(ebp_1 - 0x478,  ", 
                                                                                                                *(ebp_1 - 0x28))
                                                                                                            __return_addr = *(ebp_1 - 0x478)
                                                                                                            sub_47ab08(data_61c8c8, data_61c8f4, 
                                                                                                                data_61c918, x87_r0, __return_addr)
                                                                                                            esp_1 = &arg_4
                                                                                                            sub_478234(*(ebp_1 - 4), data_61c8f4, 
                                                                                                                data_61c91c)
                                                                                                        else if (*(ebp_1 - 0x18) == data_61c908)
                                                                                                            struct _EXCEPTION_REGISTRATION_RECORD* 
                                                                                                                ecx_178
                                                                                                            int32_t edx_462
                                                                                                            ecx_178, edx_462 =
                                                                                                                sub_48380c(*(ebp_1 - 4), data_61c8f8)
                                                                                                            sub_509af8(nullptr, edx_462, ecx_178)
                                                                                                    else if (*(ebp_1 - 0x18) == data_61cdac)
                                                                                                        sub_50e22c(data_7a6e5c)
                                                                                                    else if (*(ebp_1 - 0x18) == data_61cdb8)
                                                                                                        sub_50e11c(data_7a6e5c, 1)
                                                                                                    else if (*(ebp_1 - 0x18) == data_61cdbc)
                                                                                                        sub_50e11c(data_7a6e5c, 2)
                                                                                                    else if (*(ebp_1 - 0x18) == data_61cdc0)
                                                                                                        sub_50e11c(data_7a6e5c, 3)
                                                                                                else if (*(ebp_1 - 0x18) != data_61c9e8)
                                                                                                    if (*(ebp_1 - 0x18) == data_61c9ec)
                                                                                                        sub_48380c(*(ebp_1 - 4), data_61c8fc)
                                                                                                        
                                                                                                        if (*(data_7a6e5c + 0x1b1f6) != 3)
                                                                                                            if (sub_50d9e0(data_7a6e5c) != 0)
                                                                                                                *(data_7a6e5c + 0x1b1f6) = 5
                                                                                                                *(data_7a6e5c + 0x1b1f8) = 0
                                                                                                        else
                                                                                                            sub_50e368(data_7a6e5c, 0, nullptr)
                                                                                                else if (*(data_7a6e5c + 0x1b1f6) != 3)
                                                                                                    sub_48380c(*(ebp_1 - 4), data_61c8fc)
                                                                                                    sub_50732c(1)
                                                                                                else
                                                                                                    sub_48380c(*(ebp_1 - 4), data_61c8fc)
                                                                                                    sub_50b624(8, nullptr, esi, edi)
                                                                                                    __return_addr = nullptr
                                                                                                    lpDirectory = ebp_1 - 0x2c
                                                                                                    data_61c8fc
                                                                                                    data_61c8c8
                                                                                                    ebp_1 = sub_47a7ec(data_61c9e4, 
                                                                                                        lpDirectory, __return_addr.b)
                                                                                                    __return_addr = *(ebp_1 - 0x2c)
                                                                                                    sub_47ab08(data_61c8c8, data_61c8f0, 
                                                                                                        data_61c9dc, x87_r0, __return_addr)
                                                                                                    __return_addr = ebp_1 - 0x20
                                                                                                    sub_47a9a0(data_61cbd0, data_61c8fc, 
                                                                                                        data_61c8c8, __return_addr)
                                                                                                    __return_addr = *(ebp_1 - 0x20)
                                                                                                    esp_1 = &arg_4
                                                                                                    sub_5072b8(sub_47b304(data_61cbcc, 
                                                                                                        data_61c8f0, data_61c8c8, 
                                                                                                        __return_addr))
                                                                                                    sub_404054(ebp_1 - 0x450, 
                                                                                                        *(ebp_1 - 0x2c), 0xff)
                                                                                                    sub_402bdc(data_61c9f0 + 0x31, 
                                                                                                        ebp_1 - 0x450, 0x20)
                                                                                            else if (*(ebp_1 - 0x18) == data_61c8e8)
                                                                                                __return_addr = ebp_1 - 0x2c
                                                                                                lpDirectory = nullptr
                                                                                                data_61c8f0
                                                                                                *(ebp_1 - 4)
                                                                                                void* ebp_13 = sub_47a7ec(data_61c9dc, 
                                                                                                    ebp_1 - 0x45c, lpDirectory.b)
                                                                                                sub_404280(0x15, 1, *(ebp_13 - 0x45c), 
                                                                                                    __return_addr)
                                                                                                void* ebp_14 = sub_46910c(data_61c8c8, 
                                                                                                    "f_sspiel", ebp_13 - 0x460)
                                                                                                sub_404080(ebp_14 - 0x2c, 
                                                                                                    *(ebp_14 - 0x460))
                                                                                                __return_addr = *(ebp_14 - 0x2c)
                                                                                                sub_47ab08(*(ebp_14 - 4), data_61c8fc, 
                                                                                                    data_61c9e4, x87_r0, __return_addr)
                                                                                                void* ebp_15 = sub_46910c(data_61c8c8, 
                                                                                                    "f_einl1", ebp_14 - 0x468)
                                                                                                __return_addr = *(ebp_15 - 0x468)
                                                                                                sub_507d4c(ebp_15 - 0x46c)
                                                                                                lpDirectory = *(ebp_15 - 0x46c)
                                                                                                void* ebp_16 = sub_46910c(data_61c8c8, 
                                                                                                    "f_einl2", ebp_15 - 0x470)
                                                                                                int32_t var_8_25 = *(ebp_16 - 0x470)
                                                                                                sub_404138(ebp_16 - 0x464, 3)
                                                                                                arg_18 = *(ebp_16 - 0x464)
                                                                                                sub_47ab08(*(ebp_16 - 4), data_61c8fc, 
                                                                                                    1, x87_r0, arg_18)
                                                                                                data_61c8fc
                                                                                                bool o_125 = unimplemented  {imul eax, 
                                                                                                    dword [0x61c8fc], 0x1038}
                                                                                                
                                                                                                if (o_125)
                                                                                                    sub_403010()
                                                                                                    noreturn
                                                                                                
                                                                                                data_61c9e4
                                                                                                bool o_126 = unimplemented  {imul edx, 
                                                                                                    dword [0x61c9e4], 0x23}
                                                                                                
                                                                                                if (o_126)
                                                                                                    sub_403010()
                                                                                                    noreturn
                                                                                                
                                                                                                *(*(data_61c8c8 + 0xab0)
                                                                                                    + data_61c8fc * 0x81c0
                                                                                                    + data_61c9e4 * 0x118 - 0x82) = 0x1c
                                                                                                data_61c8fc
                                                                                                bool o_127 = unimplemented  {imul eax, 
                                                                                                    dword [0x61c8fc], 0x1038}
                                                                                                
                                                                                                if (o_127)
                                                                                                    sub_403010()
                                                                                                    noreturn
                                                                                                
                                                                                                data_61c9e4
                                                                                                bool o_128 = unimplemented  {imul edx, 
                                                                                                    dword [0x61c9e4], 0x23}
                                                                                                
                                                                                                if (o_128)
                                                                                                    sub_403010()
                                                                                                    noreturn
                                                                                                
                                                                                                *(*(data_61c8c8 + 0xab0)
                                                                                                    + data_61c8fc * 0x81c0
                                                                                                    + data_61c9e4 * 0x118 - 0x84) = 0
                                                                                                data_61c8fc
                                                                                                bool o_129 = unimplemented  {imul eax, 
                                                                                                    dword [0x61c8fc], 0x1038}
                                                                                                
                                                                                                if (o_129)
                                                                                                    sub_403010()
                                                                                                    noreturn
                                                                                                
                                                                                                data_61c9e4
                                                                                                bool o_130 = unimplemented  {imul edx, 
                                                                                                    dword [0x61c9e4], 0x23}
                                                                                                
                                                                                                if (o_130)
                                                                                                    sub_403010()
                                                                                                    noreturn
                                                                                                
                                                                                                *(*(data_61c8c8 + 0xab0)
                                                                                                    + data_61c8fc * 0x81c0
                                                                                                    + data_61c9e4 * 0x118 - 0x7e) = 0x18
                                                                                                ebp_1 = sub_46910c(data_61c8c8, 
                                                                                                    "f_bittespielname", ebp_16 - 0x474)
                                                                                                arg_18 = *(ebp_1 - 0x474)
                                                                                                int32_t ecx_160 = data_61c9e4
                                                                                                
                                                                                                if (add_overflow(ecx_160, 0xffffffff))
                                                                                                    sub_403010()
                                                                                                    noreturn
                                                                                                
                                                                                                sub_47ab08(*(ebp_1 - 4), data_61c8fc, 
                                                                                                    ecx_160 - 1, x87_r0, arg_18)
                                                                                                arg_18 = "Name:"
                                                                                                int32_t ecx_162 = data_61c9e4
                                                                                                
                                                                                                if (add_overflow(ecx_162, 0xfffffffe))
                                                                                                    sub_403010()
                                                                                                    noreturn
                                                                                                
                                                                                                sub_47ab08(*(ebp_1 - 4), data_61c8fc, 
                                                                                                    ecx_162 - 2, x87_r0)
                                                                                                data_61c8fc
                                                                                                bool o_133 = unimplemented  {imul eax, 
                                                                                                    dword [0x61c8fc], 0x1038}
                                                                                                
                                                                                                if (o_133)
                                                                                                    sub_403010()
                                                                                                    noreturn
                                                                                                
                                                                                                data_61c9e4
                                                                                                bool o_134 = unimplemented  {imul edx, 
                                                                                                    dword [0x61c9e4], 0x23}
                                                                                                
                                                                                                if (o_134)
                                                                                                    sub_403010()
                                                                                                    noreturn
                                                                                                
                                                                                                *(*(data_61c8c8 + 0xab0)
                                                                                                    + data_61c8fc * 0x81c0
                                                                                                    + data_61c9e4 * 0x118 - 0xf6) = 0x64
                                                                                                arg_18 = nullptr
                                                                                                sub_47a1c0(data_61cbd0, data_61c8fc, 
                                                                                                    data_61c8c8, arg_18.b)
                                                                                                arg_18 = nullptr
                                                                                                int32_t ecx_165 = data_61cbd0
                                                                                                
                                                                                                if (add_overflow(ecx_165, 1))
                                                                                                    sub_403010()
                                                                                                    noreturn
                                                                                                
                                                                                                sub_47a1c0(ecx_165 + 1, data_61c8fc, 
                                                                                                    data_61c8c8)
                                                                                                esp_1 = &arg_1c
                                                                                                sub_4836b0(*(ebp_1 - 4), data_61c8fc)
                                                                                            else if (*(ebp_1 - 0x18) == 2)
                                                                                                sub_48380c(*(ebp_1 - 4), 
                                                                                                    *(ebp_1 - 0x14))
                                                                                            else if (*(ebp_1 - 0x18) == data_61c8ec)
                                                                                                sub_509af8(nullptr, edx_360, ecx_135)
                                                                                                sub_4836b0(*(ebp_1 - 4), data_61c8f4)
                                                                                        else if (*(ebp_1 - 0x18) == data_61cbc0)
                                                                                            sub_4d69e8(*(ebp_1 - 4), 2)
                                                                                        else if (*(ebp_1 - 0x18) == 2)
                                                                                            sub_48380c(*(ebp_1 - 4), 
                                                                                                *(ebp_1 - 0x14))
                                                                                    else if (*(ebp_1 - 0x18) == 2)
                                                                                        sub_48380c(*(ebp_1 - 4), data_61c8dc)
                                                                                    else if (*(ebp_1 - 0x18) == data_61cca4)
                                                                                        sub_4d7ff0(*(ebp_1 - 4))
                                                                                        sub_4d6b10(*(ebp_1 - 4), 1)
                                                                                        sub_4836b0(*(ebp_1 - 4), data_61cabc)
                                                                                    else if (*(ebp_1 - 0x18) == data_61cca8)
                                                                                        if (*(data_780c58 + 0x25b40) == 7)
                                                                                            sub_4c2418()
                                                                                        
                                                                                        sub_4836b0(*(ebp_1 - 4), 
                                                                                            *(
                                                                                                (zx.d(*(data_780c58 + 0x25b40)) << 2) +
                                                                                                &data_61cac8))
                                                                                    else if (*(ebp_1 - 0x18) == 3)
                                                                                        sub_4d6994(*(ebp_1 - 4), 1)
                                                                                else if (*(ebp_1 - 0x18) == data_61cfbc)
                                                                                    *(ebp_1 - 4)
                                                                                    sub_4d885c()
                                                                                    sub_4836b0(*(ebp_1 - 4), data_61cb28)
                                                                                else if (*(ebp_1 - 0x18) != data_61cfc0)
                                                                                    if (*(ebp_1 - 0x18) == 2)
                                                                                        if (data_77e23c == 2)
                                                                                            data_77e23c = 1
                                                                                        
                                                                                        sub_48380c(*(ebp_1 - 4), data_61c8d0)
                                                                                        
                                                                                        if (sub_4c1090() != 0)
                                                                                            sub_4837ec(data_61c8c8, data_61ccd8, 
                                                                                                true)
                                                                                    else if (*(ebp_1 - 0x18) == data_61cc8c)
                                                                                        sub_4d9704(*(ebp_1 - 4))
                                                                                    else if (*(ebp_1 - 0x18) == data_61cc80)
                                                                                        char eax_837 = sub_4c0924()
                                                                                        char eax_838
                                                                                        
                                                                                        if (eax_837 != 0)
                                                                                            eax_838, ebp_1 = sub_509a28()
                                                                                        
                                                                                        if (eax_837 == 0 || eax_838 != 0)
                                                                                            data_77e23c = 0
                                                                                            sub_4c93fc()
                                                                                            data_61c8c8
                                                                                            sub_4837ec(data_61c8c8, data_61cda4, 
                                                                                                false)
                                                                                            sub_4837ec(data_61c8c8, data_61cdc8, 
                                                                                                false)
                                                                                            sub_4c0fcc()
                                                                                            sub_48380c(*(ebp_1 - 4), data_61c8d0)
                                                                                            sub_4834fc(*(ebp_1 - 4), data_61c8cc)
                                                                                            sub_502898()
                                                                                    else if (*(ebp_1 - 0x18) == data_61cc84)
                                                                                        ecx_135.b = 1
                                                                                        *(ebp_1 - 4)
                                                                                        sub_4d78f8(ecx_135.b, data_61cabc)
                                                                                        *(ebp_1 - 4)
                                                                                        sub_4d78f8(1, 
                                                                                            *((zx.d(*(data_780c58 + 4)) << 2) +
                                                                                                &data_61cac8))
                                                                                        sub_4836b0(*(ebp_1 - 4), data_61cab4)
                                                                                    else if (*(ebp_1 - 0x18) == data_61cc88)
                                                                                        sub_4727f8(*(ebp_1 - 4))
                                                                                else if (*(data_780c58 + 0xffec) != 5)
                                                                                    data_780c58
                                                                                    sub_520efc(ecx_135, 0, esi, edi)
                                                                                    ebp_1 = sub_46910c(data_61c8c8, 
                                                                                        "f_zurueck", ebp_1 - 0x458)
                                                                                    sub_4040c4(ebp_1 - 0x454, 0x4ec338, 
                                                                                        *(ebp_1 - 0x458))
                                                                                    sub_404054(ebp_1 - 0x450, 
                                                                                        *(ebp_1 - 0x454), 0xff)
                                                                                    data_61cb2c
                                                                                    bool o_123 = unimplemented  {imul eax, 
                                                                                        dword [0x61cb2c], 0x1038}
                                                                                    
                                                                                    if (o_123)
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    int32_t ecx_150
                                                                                    ecx_150.b = 0x19
                                                                                    sub_402bdc(
                                                                                        *(data_61c8c8 + 0xab0)
                                                                                            + data_61cb2c * 0x81c0 + 0x140, 
                                                                                        ebp_1 - 0x450, ecx_150.b)
                                                                                    int32_t ecx_151 =
                                                                                        sub_4836b0(data_61c8c8, data_61cb2c)
                                                                                    
                                                                                    if (sub_4c094c() != 0)
                                                                                        data_61c90c
                                                                                        bool o_124 = unimplemented  {imul eax, 
                                                                                            dword [0x61c90c], 0x1038}
                                                                                        
                                                                                        if (o_124)
                                                                                            sub_403010()
                                                                                            noreturn
                                                                                        
                                                                                        if (*(*(data_61c8c8 + 0xab0)
                                                                                                + data_61c90c * 0x81c0 + 1) != 0)
                                                                                            sub_469ac0(data_61c8c8, data_61c90c, 
                                                                                                ecx_151)
                                                                                else
                                                                                    sub_48380c(*(ebp_1 - 4), data_61c8d0)
                                                                            else if (*(ebp_1 - 0x18) == 2)
                                                                                sub_48380c(*(ebp_1 - 4), data_61cab4)
                                                                            else if (*(ebp_1 - 0x18) == data_61cc94)
                                                                                sub_46e0ac(data_61c8c8)
                                                                            else if (*(ebp_1 - 0x18) == data_61cc98)
                                                                                sub_46e17c(data_61c8c8)
                                                                            else if (*(ebp_1 - 0x18) == data_61cca0)
                                                                                __return_addr = nullptr
                                                                                int32_t ecx_143 = data_61cc08
                                                                                
                                                                                if (add_overflow(ecx_143, 0xffffffff))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                sub_47a1c0(ecx_143 - 1, data_61cab8, 
                                                                                    data_61c8c8)
                                                                                __return_addr = nullptr
                                                                                sub_47a1c0(data_61cc08, data_61cab8, 
                                                                                    data_61c8c8, __return_addr.b)
                                                                                __return_addr = nullptr
                                                                                sub_476bc0(data_61cc08, data_61cab8, 
                                                                                    data_61c8c8, __return_addr.b)
                                                                                esp_1 = &arg_4
                                                                                sub_4836b0(*(ebp_1 - 4), data_61cab8)
                                                                            else if (*(ebp_1 - 0x18) == data_61cc9c)
                                                                                sub_4836b0(*(ebp_1 - 4), 
                                                                                    *(*(ebp_1 - 4) + 0x10d0))
                                                                        else if (*(ebp_1 - 0x18) == 2)
                                                                            sub_48380c(*(ebp_1 - 4), 
                                                                                *(ebp_1 - 0x14))
                                                                        else if (*(ebp_1 - 0x18) == data_61cbec)
                                                                            ecx_135.b = 1
                                                                            *(ebp_1 - 4)
                                                                            sub_4dc3b8(ecx_135, 0, esi, edi)
                                                                            sub_4837d0(*(ebp_1 - 4), data_61cabc)
                                                                            data_77e23c = 1
                                                                            sub_528320(data_780c58, 
                                                                                *(data_780c58 + 4), 0)
                                                                    else if (*(ebp_1 - 0x18) != 2)
                                                                        *(ebp_1 - 4)
                                                                        sub_4d7f8c(ecx_135, *(ebp_1 - 0x18))
                                                                    else
                                                                        ecx_135.b = 1
                                                                        *(ebp_1 - 4)
                                                                        sub_4dc3b8(ecx_135, 0, esi, edi)
                                                                        sub_48380c(*(ebp_1 - 4), data_61cab8)
                                                                else
                                                                    sub_48380c(*(ebp_1 - 4), 
                                                                        *(ebp_1 - 0x14))
                                                            else if (*(ebp_1 - 0x18) != 2)
                                                                int32_t eax_715 = data_61ca2c
                                                                
                                                                if (neg.d(eax_715) == 0x80000000)
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                if (neg.d(eax_715) != *(ebp_1 - 0x18))
                                                                    int32_t eax_721 = data_61ca24
                                                                    
                                                                    if (neg.d(eax_721) == 0x80000000)
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    if (neg.d(eax_721) != *(ebp_1 - 0x18))
                                                                        int32_t eax_727 = data_61ca28
                                                                        
                                                                        if (neg.d(eax_727) == 0x80000000)
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        if (neg.d(eax_727) == *(ebp_1 - 0x18))
                                                                            if (*(data_61c8c8 + 0x97d) != 0)
                                                                                sub_44613c(*(ebp_1 - 4), edx_10, ecx_1)
                                                                            
                                                                            __return_addr = nullptr
                                                                            lpDirectory = &data_4ebfcc
                                                                            PSTR lpParameters_2 =
                                                                                "http://www.bufopro.de/"
                                                                            lpFile = "explorer"
                                                                            void* const var_10_8 = "open"
                                                                            ShellExecuteA(sub_4318d0(*(ebp_1 - 4)), 
                                                                                "open", lpFile, lpParameters_2, 
                                                                                lpDirectory, __return_addr)
                                                                            esp_1 = &arg_4
                                                                    else
                                                                        if (*(data_61c8c8 + 0x97d) != 0)
                                                                            sub_44613c(*(ebp_1 - 4), edx_10, ecx_1)
                                                                        
                                                                        __return_addr = nullptr
                                                                        lpDirectory = &data_4ebfcc
                                                                        PSTR lpParameters_1 =
                                                                            "http://www.zone2media.de/"
                                                                        lpFile = "explorer"
                                                                        void* const var_10_7 = "open"
                                                                        ShellExecuteA(sub_4318d0(*(ebp_1 - 4)), 
                                                                            "open", lpFile, lpParameters_1, 
                                                                            lpDirectory, __return_addr)
                                                                        esp_1 = &arg_4
                                                                else
                                                                    if (*(data_61c8c8 + 0x97d) != 0)
                                                                        sub_44613c(*(ebp_1 - 4), edx_10, ecx_1)
                                                                    
                                                                    __return_addr = nullptr
                                                                    lpDirectory = &data_4ebfcc
                                                                    PSTR lpParameters =
                                                                        "http://www.playandsmile.de/"
                                                                    lpFile = "explorer"
                                                                    void* const var_10_6 = "open"
                                                                    ShellExecuteA(sub_4318d0(*(ebp_1 - 4)), 
                                                                        "open", lpFile, lpParameters, 
                                                                        lpDirectory, __return_addr)
                                                                    esp_1 = &arg_4
                                                            else
                                                                sub_48380c(*(ebp_1 - 4), 
                                                                    *(ebp_1 - 0x14))
                                                        else if (*(ebp_1 - 0x18) == 2)
                                                            sub_48380c(*(ebp_1 - 4), data_61cb24)
                                                        else if (*(ebp_1 - 0x18) == data_61cb70)
                                                            __return_addr = nullptr
                                                            lpDirectory = &data_4ebfcc
                                                            esp_1 = &arg_4
                                                            
                                                            if (sub_4746a0(nullptr, 1, data_61c8c8, 
                                                                    &data_4ebfcc, lpDirectory) == 6)
                                                                sub_51fdc8(data_780c58)
                                                                sub_4d88f8(*(ebp_1 - 4), 1, 
                                                                    data_7a6a9c, esi, edi)
                                                        else if (*(ebp_1 - 0x18) == data_61cb64)
                                                            data_7a6a9c = 1
                                                            sub_4d88f8(*(ebp_1 - 4), 1, data_7a6a9c, 
                                                                esi, edi)
                                                        else if (*(ebp_1 - 0x18) == data_61cb68)
                                                            data_7a6a9c = 2
                                                            sub_4d88f8(*(ebp_1 - 4), 1, data_7a6a9c, 
                                                                esi, edi)
                                                        else if (*(ebp_1 - 0x18) == data_61cb6c)
                                                            data_7a6a9c = 3
                                                            sub_4d88f8(*(ebp_1 - 4), 1, data_7a6a9c, 
                                                                esi, edi)
                                                    else if (*(ebp_1 - 0x18) == 2)
                                                        sub_48380c(*(ebp_1 - 4), data_61cb28)
                                                        
                                                        if (*(data_61c8c8 + 0x8a0) != data_61c8d0
                                                                && *(data_780c58 + 0x111f8) != 0
                                                                && data_77e23c == 1)
                                                            sub_4837ec(data_61c8c8, data_61ccd8, true)
                                                    else if (sx.d(data_61cb52) == *(ebp_1 - 0x18))
                                                        __return_addr = 2
                                                        sub_47a9e0(data_61cb54, data_61cb28, 
                                                            data_61c8c8, __return_addr)
                                                        esp_1 = &arg_4
                                                    else if (sx.d(data_61cb50) == *(ebp_1 - 0x18))
                                                        __return_addr = 1
                                                        sub_47a9e0(data_61cb54, data_61cb28, 
                                                            data_61c8c8, __return_addr)
                                                        esp_1 = &arg_4
                                                    else if (*(ebp_1 - 0x18) == data_61cb4c)
                                                        __return_addr = 1
                                                        sub_47a9e0(data_61cb58, data_61cb28, 
                                                            data_61c8c8, __return_addr)
                                                        esp_1 = &arg_4
                                                    else if (*(ebp_1 - 0x18) == data_61cb48)
                                                        __return_addr = nullptr
                                                        lpDirectory = ebp_1 - 0x2c
                                                        data_61cb28
                                                        data_61c8c8
                                                        ebp_1 = sub_47a7ec(data_61cb44, lpDirectory, 
                                                            __return_addr.b)
                                                        esp_1 = &arg_4
                                                        sub_51d270(data_780c60, *(ebp_1 - 0x2c))
                                                        data_61cb28
                                                        bool o_92 = unimplemented  {imul eax, dword [
                                                            0x61cb28], 0x1038}
                                                        
                                                        if (o_92)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        data_61cb40
                                                        bool o_93 = unimplemented  {imul edx, dword [
                                                            0x61cb40], 0x23}
                                                        
                                                        if (o_93)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        if (*(*(data_61c8c8 + 0xab0)
                                                                + data_61cb28 * 0x81c0
                                                                + data_61cb40 * 0x118 - 0x14) s> 1)
                                                            __return_addr = 2
                                                            sub_47a9e0(data_61cb58, data_61cb28, 
                                                                data_61c8c8, __return_addr)
                                                            esp_1 = &arg_4
                                                    else if (*(ebp_1 - 0x18) == data_61cb40)
                                                        __return_addr = ebp_1 - 0x1c
                                                        sub_47a960(data_61cb40, data_61cb28, 
                                                            data_61c8c8, __return_addr)
                                                        *(ebp_1 - 0x1c)
                                                        bool o_94 = unimplemented  {imul eax, dword [ebp
                                                            -0x1c], 0x5}
                                                        
                                                        if (o_94)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        *(ebp_1 - 0x20) = *(data_780c60
                                                            + *(ebp_1 - 0x1c) * 0x14 + 0xfe8)
                                                        *(ebp_1 - 0x20)
                                                        bool o_95 = unimplemented  {imul eax, dword [ebp
                                                            -0x20], 0x5}
                                                        
                                                        if (o_95)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        __return_addr = *(data_780c60
                                                            + *(ebp_1 - 0x20) * 0x14 + 0x14)
                                                        *(ebp_1 - 0x1c)
                                                        bool o_96 = unimplemented  {imul eax, dword [ebp
                                                            -0x1c], 0x5}
                                                        
                                                        if (o_96)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        lpDirectory = *(data_780c60
                                                            + *(ebp_1 - 0x1c) * 0x14 + 0xfe0)
                                                        *(ebp_1 - 0x20)
                                                        bool o_97 = unimplemented  {imul eax, dword [ebp
                                                            -0x20], 0x5}
                                                        
                                                        if (o_97)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        *(ebp_1 - 0x20)
                                                        bool o_98 = unimplemented  {imul eax, dword [ebp
                                                            -0x20], 0x5}
                                                        
                                                        if (o_98)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        sub_4d8208(*(ebp_1 - 4), 
                                                            *(data_780c60 + *(ebp_1 - 0x20) * 0x14
                                                                + 0x1c), 
                                                            *(data_780c60 + *(ebp_1 - 0x20) * 0x14
                                                            + 0x10), esi, edi, lpDirectory)
                                                        esp_1 = &arg_4
                                                    else if (*(ebp_1 - 0x18) == data_61cb38)
                                                        __return_addr = ebp_1 - 0x1c
                                                        sub_47a960(data_61cb38, data_61cb28, 
                                                            data_61c8c8, __return_addr)
                                                        
                                                        while (true)
                                                            *(ebp_1 - 0x1c)
                                                            bool o_100 = unimplemented  {imul eax, 
                                                                dword [ebp-0x1c], 0x5}
                                                            
                                                            if (o_100)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            if (*(data_780c60 + *(ebp_1 - 0x1c) * 0x14
                                                                    + 0x18) s<= 0)
                                                                break
                                                            
                                                            int32_t temp70_1 = *(ebp_1 - 0x1c)
                                                            *(ebp_1 - 0x1c) += 1
                                                            
                                                            if (add_overflow(temp70_1, 1))
                                                                sub_403010()
                                                                noreturn
                                                        
                                                        *(ebp_1 - 0x1c)
                                                        bool o_101 = unimplemented  {imul eax, dword [
                                                            ebp-0x1c], 0x5}
                                                        
                                                        if (o_101)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        __return_addr = *(data_780c60
                                                            + *(ebp_1 - 0x1c) * 0x14 + 0x14)
                                                        lpDirectory = nullptr
                                                        *(ebp_1 - 0x1c)
                                                        bool o_102 = unimplemented  {imul eax, dword [
                                                            ebp-0x1c], 0x5}
                                                        
                                                        if (o_102)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        *(ebp_1 - 0x1c)
                                                        bool o_103 = unimplemented  {imul eax, dword [
                                                            ebp-0x1c], 0x5}
                                                        
                                                        if (o_103)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        sub_4d8208(*(ebp_1 - 4), 
                                                            *(data_780c60 + *(ebp_1 - 0x1c) * 0x14
                                                                + 0x1c), 
                                                            *(data_780c60 + *(ebp_1 - 0x1c) * 0x14
                                                            + 0x10), esi, edi, lpDirectory)
                                                        esp_1 = &arg_4
                                                else
                                                    if (data_77e23c != 2)
                                                        if (*(data_61c8c8 + 0x8a0) != data_61cb2c)
                                                            goto label_4e9746
                                                        
                                                        data_61cb2c
                                                        bool o_86 = unimplemented  {imul eax, dword [
                                                            0x61cb2c], 0x1038}
                                                        
                                                        if (o_86)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        edx_10 = *(data_61c8c8 + 0xab0)
                                                        
                                                        if (*(edx_10 + data_61cb2c * 0x81c0 + 1) == 0)
                                                            goto label_4e9746
                                                        
                                                        goto label_4e9330
                                                    
                                                label_4e9330:
                                                    
                                                    if (*(ebp_1 - 0x18) == 2)
                                                        __return_addr = ebp_1 - 0x310
                                                        lpDirectory = nullptr
                                                        *(ebp_1 - 0x14)
                                                        *(ebp_1 - 4)
                                                        void* ebp_8 = sub_47a7ec(*(ebp_1 - 0x18), 
                                                            ebp_1 - 0x314, lpDirectory.b)
                                                        int32_t eax_571 = sub_404078(*(ebp_8 - 0x314))
                                                        
                                                        if (add_overflow(eax_571, 0xfffffffb))
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        lpDirectory = eax_571 - 5
                                                        char var_8_14 = 0
                                                        lpFile = ebp_8 - 0x318
                                                        *(ebp_8 - 0x14)
                                                        *(ebp_8 - 4)
                                                        ebp_1 = sub_47a7ec(*(ebp_8 - 0x18), lpFile, 
                                                            var_8_14)
                                                        sub_404280(6, lpDirectory, *(ebp_1 - 0x318))
                                                        esp_1 = &arg_4
                                                        sub_404188(*(ebp_1 - 0x310), 0x4ec224)
                                                        
                                                        if (eax_571 == 5)
                                                            sub_48380c(*(ebp_1 - 4), data_61cb2c)
                                                        else
                                                            __return_addr = ebp_1 - 0x31c
                                                            lpDirectory = nullptr
                                                            *(ebp_1 - 0x14)
                                                            *(ebp_1 - 4)
                                                            void* ebp_9 = sub_47a7ec(*(ebp_1 - 0x18), 
                                                                ebp_1 - 0x320, lpDirectory.b)
                                                            int32_t eax_581 =
                                                                sub_404078(*(ebp_9 - 0x320))
                                                            
                                                            if (add_overflow(eax_581, 0xfffffffd))
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            lpDirectory = eax_581 - 3
                                                            char var_8_16 = 0
                                                            lpFile = ebp_9 - 0x324
                                                            *(ebp_9 - 0x14)
                                                            *(ebp_9 - 4)
                                                            ebp_1 = sub_47a7ec(*(ebp_9 - 0x18), lpFile, 
                                                                var_8_16)
                                                            sub_404280(4, lpDirectory, *(ebp_1 - 0x324))
                                                            esp_1 = &arg_4
                                                            sub_404188(*(ebp_1 - 0x31c), "Back")
                                                            
                                                            if (eax_581 != 3)
                                                                __return_addr = ebp_1 - 0x328
                                                                lpDirectory = nullptr
                                                                *(ebp_1 - 0x14)
                                                                *(ebp_1 - 4)
                                                                void* ebp_10 = sub_47a7ec(
                                                                    *(ebp_1 - 0x18), ebp_1 - 0x32c, 
                                                                    lpDirectory.b)
                                                                int32_t eax_592 =
                                                                    sub_404078(*(ebp_10 - 0x32c))
                                                                
                                                                if (add_overflow(eax_592, 0xfffffffb))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                lpDirectory = eax_592 - 5
                                                                char var_8_18 = 0
                                                                lpFile = ebp_10 - 0x330
                                                                *(ebp_10 - 0x14)
                                                                *(ebp_10 - 4)
                                                                ebp_1 = sub_47a7ec(*(ebp_10 - 0x18), 
                                                                    lpFile, var_8_18)
                                                                sub_404280(6, lpDirectory, 
                                                                    *(ebp_1 - 0x330))
                                                                esp_1 = &arg_4
                                                                sub_404188(*(ebp_1 - 0x328), "Weiter")
                                                                
                                                                if (eax_592 == 5)
                                                                label_4e9509:
                                                                    
                                                                    if (sub_4c0924() == 0)
                                                                        sub_4837d0(*(ebp_1 - 4), data_61cb2c)
                                                                        data_77e23c = 1
                                                                        sub_528320(data_780c58, 
                                                                            *(data_780c58 + 4), 1)
                                                                    else
                                                                        data_7a6e4c = 1
                                                                        
                                                                        if (data_77e234 s> 0)
                                                                            *(ebp_1 - 0x1c) = 1
                                                                            *(ebp_1 - 0x34) = &data_61ce9c
                                                                            int32_t i_2
                                                                            
                                                                            do
                                                                                __return_addr = nullptr
                                                                                i_2 = sub_47ab08(data_61c8c8, 
                                                                                    data_61cda0, **(ebp_1 - 0x34), x87_r0, 
                                                                                    __return_addr)
                                                                                esp_1 = &arg_4
                                                                                *(ebp_1 - 0x1c) += 1
                                                                                *(ebp_1 - 0x34) += 4
                                                                            while (i_2 != 1)
                                                                        
                                                                        sub_50928c()
                                                                        sub_4837d0(*(ebp_1 - 4), data_61cb2c)
                                                                        *(data_61c9f0 + 0x1b4) = 0
                                                                        ebp_1 = sub_507860(ebp_1 - 0x340)
                                                                        sub_404054(data_61c9f0 + 0xa0, 
                                                                            *(ebp_1 - 0x340), 0xff)
                                                                        *(data_61c9f0 + 0x9c) = 1
                                                                else
                                                                    __return_addr = ebp_1 - 0x334
                                                                    lpDirectory = nullptr
                                                                    *(ebp_1 - 0x14)
                                                                    *(ebp_1 - 4)
                                                                    void* ebp_11 = sub_47a7ec(
                                                                        *(ebp_1 - 0x18), ebp_1 - 0x338, 
                                                                        lpDirectory.b)
                                                                    int32_t eax_602 =
                                                                        sub_404078(*(ebp_11 - 0x338))
                                                                    
                                                                    if (add_overflow(eax_602, 0xfffffffb))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    lpDirectory = eax_602 - 5
                                                                    char var_8_20 = 0
                                                                    lpFile = ebp_11 - 0x33c
                                                                    *(ebp_11 - 0x14)
                                                                    *(ebp_11 - 4)
                                                                    ebp_1 = sub_47a7ec(*(ebp_11 - 0x18), 
                                                                        lpFile, var_8_20)
                                                                    sub_404280(6, lpDirectory, 
                                                                        *(ebp_1 - 0x33c))
                                                                    esp_1 = &arg_4
                                                                    sub_404188(*(ebp_1 - 0x334), "ntinue")
                                                                    
                                                                    if (eax_602 == 5)
                                                                        goto label_4e9509
                                                                    
                                                                    if (sub_4c0924() != 0)
                                                                        *(data_61c9f0 + 0x1b4) = 0
                                                                    
                                                                    if (*(data_780c58 + 4) == 7)
                                                                        int32_t i_13 = data_77e234
                                                                        
                                                                        if (i_13 s> 0)
                                                                            int32_t eax_623 = 1
                                                                            int32_t i_3
                                                                            
                                                                            do
                                                                                for (int32_t j = 1; j != 8; j += 1)
                                                                                    bool o_91 =
                                                                                        unimplemented  {imul ecx, eax, 0x41}
                                                                                    
                                                                                    if (o_91)
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    *(data_780c58 + eax_623 * 0x208 + j
                                                                                        + 0x20093) = 0
                                                                                
                                                                                eax_623 += 1
                                                                                i_3 = i_13
                                                                                i_13 -= 1
                                                                            while (i_3 != 1)
                                                                    
                                                                    sub_4837d0(*(ebp_1 - 4), data_61cb2c)
                                                                    sub_4c0fcc()
                                                                    
                                                                    if (sub_4c094c() != 0)
                                                                        data_77e23c = 0
                                                                        sub_4c93fc()
                                                                        int32_t edx_325
                                                                        edx_325.b = 1
                                                                        sub_520a94(data_780c58)
                                                                        sub_4834fc(*(ebp_1 - 4), data_61c8cc)
                                                                    else
                                                                        sub_520a94(data_780c58)
                                                                        data_7a6e64 = 0
                                                                        sub_51fd8c(data_780c58, ebp_1 - 0x2c)
                                                                        
                                                                        if (*(ebp_1 - 0x2c) != 0)
                                                                            if (data_7a6e64 s> 3)
                                                                                __return_addr = nullptr
                                                                                sub_51ad40(data_780c5c, 0x11)
                                                                            else
                                                                                __return_addr = nullptr
                                                                                sub_51ad40(data_780c5c, 0x12)
                                                                            
                                                                            __return_addr = nullptr
                                                                            void* ebp_12 = sub_46910c(data_61c8c8, 
                                                                                "f_weiter", ebp_1 - 0x344)
                                                                            lpDirectory = *(ebp_12 - 0x344)
                                                                            void* const var_8_21 = nullptr
                                                                            lpFile = nullptr
                                                                            esp_1 = &lpFile
                                                                            ebp_1 = sub_46910c(data_61c8c8, 
                                                                                "f_gutgemacht", ebp_12 - 0x348)
                                                                            sub_4748fc(data_61c8c8, 
                                                                                *(ebp_1 - 0x2c), *(ebp_1 - 0x348), 
                                                                                lpFile, var_8_21, lpDirectory)
                                                                        
                                                                        data_77e23c = 0
                                                                        sub_4c93fc()
                                                                        sub_4834fc(*(ebp_1 - 4), data_61c8cc)
                                                            else
                                                                sub_48380c(*(ebp_1 - 4), data_61cb2c)
                                            else if (*(ebp_1 - 0x18) == data_61cd9c)
                                                int32_t eax_515 = data_7a6e74
                                                
                                                if (add_overflow(eax_515, 1))
                                                    sub_403010()
                                                    noreturn
                                                
                                                int32_t eax_517 = (eax_515 + 1) & 0x80000003
                                                
                                                if (eax_517 s< 0)
                                                    eax_517 = ((eax_517 - 1) | 0xfffffffc) + 1
                                                
                                                data_7a6e74 = eax_517
                                            else if (*(ebp_1 - 0x18) == data_61cd98)
                                                sub_4836b0(*(ebp_1 - 4), data_61c90c)
                                                sub_50971c()
                                            else if (*(ebp_1 - 0x18) == data_61cd88)
                                                if (*(data_780c58 + 0x111f8) != 0)
                                                    sub_4837ec(data_61c8c8, data_61ccd8, false)
                                                
                                                sub_4d81c8(data_61c8c8)
                                            else if (*(ebp_1 - 0x18) == 1)
                                                if (sub_4c0924() == 0)
                                                    data_77e23c = 2
                                                
                                                data_61c90c
                                                bool o_57 =
                                                    unimplemented  {imul eax, dword [0x61c90c], 0x1038}
                                                
                                                if (o_57)
                                                    sub_403010()
                                                    noreturn
                                                
                                                if (*(*(data_61c8c8 + 0xab0) + data_61c90c * 0x81c0 + 1)
                                                        != 0)
                                                    sub_509850()
                                                
                                                __return_addr = nullptr
                                                sub_47ab08(*(ebp_1 - 4), data_61c8d0, 1, x87_r0, 
                                                    __return_addr)
                                                void* __return_addr_1
                                                
                                                if (*(data_780c58 + 0x4584) s<= 0)
                                                    __return_addr_1 = nullptr
                                                else if (sub_4c094c().b == 0)
                                                    __return_addr_1.b = 1
                                                else if (sub_4c2d7c(1).b != 0)
                                                    __return_addr_1.b = 1
                                                else
                                                    __return_addr_1 = nullptr
                                                
                                                __return_addr = __return_addr_1
                                                sub_47a180(data_61cfc0, data_61c8d0, data_61c8c8, 
                                                    __return_addr.b)
                                                void* __return_addr_2
                                                
                                                if (*(data_780c58 + 4) != 7)
                                                    __return_addr_2.b = 1
                                                else if (*(*data_53067c + 0x10) s> 0
                                                        || *(data_780c58 + 0xffec) == 1)
                                                    __return_addr_2 = nullptr
                                                else if (data_52fe90 == 0)
                                                    __return_addr_2.b = 1
                                                else if (sub_4c1090().b == 0)
                                                    __return_addr_2.b = 1
                                                else
                                                    __return_addr_2 = nullptr
                                                
                                                __return_addr = __return_addr_2
                                                sub_47a180(data_61cc8c, data_61c8d0, data_61c8c8, 
                                                    __return_addr.b)
                                                void* __return_addr_3
                                                
                                                if (sub_4c0924() != 0 || *(data_61c9f0 + 0x1e3) != 0
                                                        || *(data_780c58 + 0x111f9) != 0)
                                                    __return_addr_3 = nullptr
                                                else
                                                    __return_addr_3.b = 1
                                                
                                                __return_addr = __return_addr_3
                                                sub_47a1c0(data_61cc8c, data_61c8d0, data_61c8c8, 
                                                    __return_addr.b)
                                                
                                                if (*(data_780c58 + 0x111f9) == 0)
                                                    ebp_1 = sub_46910c(*(ebp_1 - 4), "f_spielende", 
                                                        ebp_1 - 0x30c)
                                                    __return_addr = *(ebp_1 - 0x30c)
                                                    sub_47ab08(data_61c8c8, data_61c8d0, data_61cc80, 
                                                        x87_r0, __return_addr)
                                                    esp_1 = &arg_4
                                                else
                                                    ebp_1 = sub_46910c(*(ebp_1 - 4), "f_tutende", 
                                                        ebp_1 - 0x308)
                                                    __return_addr = *(ebp_1 - 0x308)
                                                    sub_47ab08(data_61c8c8, data_61c8d0, data_61cc80, 
                                                        x87_r0, __return_addr)
                                                    esp_1 = &arg_4
                                                
                                                char eax_545
                                                
                                                if (*(data_780c58 + 0x111f9) == 0)
                                                    eax_545 = sub_4c0924()
                                                
                                                if (*(data_780c58 + 0x111f9) == 0 && eax_545 == 0)
                                                    data_61c8d0
                                                    bool o_70 = unimplemented  {imul eax, dword [
                                                        0x61c8d0], 0x1038}
                                                    
                                                    if (o_70)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(*(data_61c8c8 + 0xab0) + data_61c8d0 * 0x81c0
                                                        + 8) = 0x163
                                                    data_61c8d0
                                                    bool o_71 = unimplemented  {imul eax, dword [
                                                        0x61c8d0], 0x1038}
                                                    
                                                    if (o_71)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(*(data_61c8c8 + 0xab0) + data_61c8d0 * 0x81c0
                                                        + 4) = 0xbc
                                                    data_61c8d0
                                                    bool o_72 = unimplemented  {imul eax, dword [
                                                        0x61c8d0], 0x1038}
                                                    
                                                    if (o_72)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    void* eax_555 =
                                                        *(data_61c8c8 + 0xab0) + data_61c8d0 * 0x81c0
                                                    data_61cc80
                                                    bool o_73 = unimplemented  {imul edx, dword [
                                                        0x61cc80], 0x23}
                                                    
                                                    if (o_73)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(eax_555 + data_61cc80 * 0x118 - 0xf4) = 0x32
                                                    data_61cc8c
                                                    bool o_74 = unimplemented  {imul edx, dword [
                                                        0x61cc8c], 0x23}
                                                    
                                                    if (o_74)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(eax_555 + data_61cc8c * 0x118 - 0xf4) = 0x64
                                                    data_61cc84
                                                    bool o_75 = unimplemented  {imul edx, dword [
                                                        0x61cc84], 0x23}
                                                    
                                                    if (o_75)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(eax_555 + data_61cc84 * 0x118 - 0xf4) = 0x96
                                                    data_61cfc0
                                                    bool o_76 = unimplemented  {imul edx, dword [
                                                        0x61cfc0], 0x23}
                                                    
                                                    if (o_76)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(eax_555 + data_61cfc0 * 0x118 - 0xf4) = 0xc8
                                                    data_61cfbc
                                                    bool o_77 = unimplemented  {imul edx, dword [
                                                        0x61cfbc], 0x23}
                                                    
                                                    if (o_77)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(eax_555 + data_61cfbc * 0x118 - 0xf4) = 0xfa
                                                    *(eax_555 + 0x13c) = 0x12c
                                                    *(eax_555 + 0x13a) = 0x6e
                                                    data_61cab4
                                                    bool o_78 = unimplemented  {imul eax, dword [
                                                        0x61cab4], 0x1038}
                                                    
                                                    if (o_78)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    void* eax_557 =
                                                        *(data_61c8c8 + 0xab0) + data_61cab4 * 0x81c0
                                                    data_61cca0
                                                    bool o_79 = unimplemented  {imul edx, dword [
                                                        0x61cca0], 0x23}
                                                    
                                                    if (o_79)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(eax_557 + data_61cca0 * 0x118 - 0xf4) = 0x64
                                                    data_61cc94
                                                    bool o_80 = unimplemented  {imul edx, dword [
                                                        0x61cc94], 0x23}
                                                    
                                                    if (o_80)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(eax_557 + data_61cc94 * 0x118 - 0xf4) = 0x96
                                                    data_61cc98
                                                    bool o_81 = unimplemented  {imul edx, dword [
                                                        0x61cc98], 0x23}
                                                    
                                                    if (o_81)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(eax_557 + data_61cc98 * 0x118 - 0xf4) = 0xc8
                                                    *(eax_557 + 0x13c) = 0x122
                                                else
                                                    data_61c8d0
                                                    bool o_58 = unimplemented  {imul eax, dword [
                                                        0x61c8d0], 0x1038}
                                                    
                                                    if (o_58)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(*(data_61c8c8 + 0xab0) + data_61c8d0 * 0x81c0
                                                        + 8) = 0x127
                                                    data_61c8d0
                                                    bool o_59 = unimplemented  {imul eax, dword [
                                                        0x61c8d0], 0x1038}
                                                    
                                                    if (o_59)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(*(data_61c8c8 + 0xab0) + data_61c8d0 * 0x81c0
                                                        + 4) = 0xf8
                                                    data_61c8d0
                                                    bool o_60 = unimplemented  {imul eax, dword [
                                                        0x61c8d0], 0x1038}
                                                    
                                                    if (o_60)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    void* eax_549 =
                                                        *(data_61c8c8 + 0xab0) + data_61c8d0 * 0x81c0
                                                    data_61cc80
                                                    bool o_61 = unimplemented  {imul edx, dword [
                                                        0x61cc80], 0x23}
                                                    
                                                    if (o_61)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(eax_549 + data_61cc80 * 0x118 - 0xf4) = 0x32
                                                    data_61cc8c
                                                    bool o_62 = unimplemented  {imul edx, dword [
                                                        0x61cc8c], 0x23}
                                                    
                                                    if (o_62)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(eax_549 + data_61cc8c * 0x118 - 0xf4) = 0x32
                                                    data_61cc84
                                                    bool o_63 = unimplemented  {imul edx, dword [
                                                        0x61cc84], 0x23}
                                                    
                                                    if (o_63)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(eax_549 + data_61cc84 * 0x118 - 0xf4) = 0x64
                                                    data_61cfc0
                                                    bool o_64 = unimplemented  {imul edx, dword [
                                                        0x61cfc0], 0x23}
                                                    
                                                    if (o_64)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(eax_549 + data_61cfc0 * 0x118 - 0xf4) = 0x96
                                                    data_61cfbc
                                                    bool o_65 = unimplemented  {imul edx, dword [
                                                        0x61cfbc], 0x23}
                                                    
                                                    if (o_65)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(eax_549 + data_61cfbc * 0x118 - 0xf4) = 0xc8
                                                    *(eax_549 + 0x13c) = 0xfa
                                                    *(eax_549 + 0x13a) = 0x6e
                                                    data_61cab4
                                                    bool o_66 = unimplemented  {imul eax, dword [
                                                        0x61cab4], 0x1038}
                                                    
                                                    if (o_66)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    void* eax_551 =
                                                        *(data_61c8c8 + 0xab0) + data_61cab4 * 0x81c0
                                                    data_61cca0
                                                    bool o_67 = unimplemented  {imul edx, dword [
                                                        0x61cca0], 0x23}
                                                    
                                                    if (o_67)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(eax_551 + data_61cca0 * 0x118 - 0xf4) = 0x5f
                                                    data_61cc94
                                                    bool o_68 = unimplemented  {imul edx, dword [
                                                        0x61cc94], 0x23}
                                                    
                                                    if (o_68)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(eax_551 + data_61cc94 * 0x118 - 0xf4) = 0x91
                                                    data_61cc98
                                                    bool o_69 = unimplemented  {imul edx, dword [
                                                        0x61cc98], 0x23}
                                                    
                                                    if (o_69)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(eax_551 + data_61cc98 * 0x118 - 0xf4) = 0xc3
                                                    *(eax_551 + 0x13c) = 0xf5
                                                
                                                data_61c8d0
                                                bool o_82 =
                                                    unimplemented  {imul eax, dword [0x61c8d0], 0x1038}
                                                
                                                if (o_82)
                                                    sub_403010()
                                                    noreturn
                                                
                                                int32_t eax_558
                                                eax_558.w =
                                                    *(*(data_61c8c8 + 0xab0) + data_61c8d0 * 0x81c0 + 4)
                                                data_61cab4
                                                bool o_83 =
                                                    unimplemented  {imul edx, dword [0x61cab4], 0x1038}
                                                
                                                if (o_83)
                                                    sub_403010()
                                                    noreturn
                                                
                                                *(*(data_61c8c8 + 0xab0) + data_61cab4 * 0x81c0 + 4) =
                                                    eax_558.w
                                                data_61c8d0
                                                bool o_84 =
                                                    unimplemented  {imul eax, dword [0x61c8d0], 0x1038}
                                                
                                                if (o_84)
                                                    sub_403010()
                                                    noreturn
                                                
                                                int32_t eax_559
                                                eax_559.w =
                                                    *(*(data_61c8c8 + 0xab0) + data_61c8d0 * 0x81c0 + 8)
                                                data_61cab4
                                                bool o_85 =
                                                    unimplemented  {imul edx, dword [0x61cab4], 0x1038}
                                                
                                                if (o_85)
                                                    sub_403010()
                                                    noreturn
                                                
                                                *(*(data_61c8c8 + 0xab0) + data_61cab4 * 0x81c0 + 8) =
                                                    eax_559.w
                                                
                                                if (*(data_780c58 + 0x111f8) != 0)
                                                    sub_4837ec(data_61c8c8, data_61ccd8, false)
                                                
                                                sub_4836b0(*(ebp_1 - 4), data_61c8d0)
                                        else if (*(ebp_1 - 0x18) == 0xb)
                                            edx_10.b = 1
                                            *(ebp_1 - 4)
                                            ebp_1 = sub_4d7b54(ecx_1, edx_10.b, esi, edi)
                                        else if (*(ebp_1 - 0x18) != 0xa)
                                            if (*(ebp_1 - 0x18) == 0xc)
                                                int32_t temp29_1 = data_61d48c
                                                data_61d48c += 5
                                                
                                                if (add_overflow(temp29_1, 5))
                                                    sub_403010()
                                                    noreturn
                                            else if (*(ebp_1 - 0x18) == 0xd)
                                                int32_t temp33_1 = data_61d48c
                                                data_61d48c -= 5
                                                
                                                if (add_overflow(temp33_1, 0xfffffffb))
                                                    sub_403010()
                                                    noreturn
                                            else if (*(ebp_1 - 0x18) == 0xe)
                                                int32_t temp35_1 = data_61d490
                                                data_61d490 += 1
                                                
                                                if (add_overflow(temp35_1, 1))
                                                    sub_403010()
                                                    noreturn
                                            else if (*(ebp_1 - 0x18) == 0xf)
                                                int32_t temp40_1 = data_61d490
                                                data_61d490 -= 1
                                                
                                                if (add_overflow(temp40_1, 0xffffffff))
                                                    sub_403010()
                                                    noreturn
                                            else if (*(ebp_1 - 0x18) == 0x10)
                                                sub_48e89c(data_61c8c8, 0xf, ecx_1)
                                            else if (*(ebp_1 - 0x18) == 0x11)
                                                ebp_1 = sub_48e9e4(data_61c8c8, esi, edi)
                                            else if (*(ebp_1 - 0x18) == 0x76)
                                                *(ebp_1 - 4)
                                                sub_4d6590()
                                            else if (*(ebp_1 - 0x18) == 0x77)
                                                sub_4c4ab8(1, ebp_1 - 0x14c)
                                                sub_4cd498(ebp_1 - 0x14c, 1, ebp_1 - 0x27c)
                                            else if (*(ebp_1 - 0x18) == 0x12)
                                                int32_t ebx_9 = data_77e234
                                                
                                                if (ebx_9 s>= 0)
                                                    int32_t i_9 = ebx_9 + 1
                                                    *(ebp_1 - 0x1c) = 0
                                                    int32_t i_4
                                                    
                                                    do
                                                        if (*(ebp_1 - 0x1c) != 0)
                                                            *(ebp_1 - 0x20) = *(ebp_1 - 0x1c)
                                                        else
                                                            *(ebp_1 - 0x20) = 0xa
                                                        
                                                        char eax_406
                                                        
                                                        if (*(ebp_1 - 0x20) != 0xa)
                                                            eax_406, edx_10 =
                                                                sub_4c2d7c(*(ebp_1 - 0x20))
                                                        
                                                        if (*(ebp_1 - 0x20) == 0xa || eax_406 != 0)
                                                            __return_addr = 0xffffffff
                                                            edx_10.b = 4
                                                            sub_4d3e30(0xa, edx_10.b, *(ebp_1 - 0x20), 
                                                                __return_addr)
                                                            esp_1 = &arg_4
                                                        
                                                        *(ebp_1 - 0x1c) += 1
                                                        i_4 = i_9
                                                        i_9 -= 1
                                                    while (i_4 != 1)
                                            else
                                                int32_t eax_398
                                                
                                                if (*(ebp_1 - 0x18) == 0x13)
                                                    int32_t ebx_10 = data_77e234
                                                    
                                                    if (ebx_10 s>= 0)
                                                        int32_t i_10 = ebx_10 + 1
                                                        *(ebp_1 - 0x1c) = 0
                                                        int32_t i_5
                                                        
                                                        do
                                                            if (*(ebp_1 - 0x1c) != 0)
                                                                *(ebp_1 - 0x20) = *(ebp_1 - 0x1c)
                                                            else
                                                                *(ebp_1 - 0x20) = 0xa
                                                            
                                                            if (*(ebp_1 - 0x20) != 0xa)
                                                                eax_398 = sub_4c2d7c(*(ebp_1 - 0x20))
                                                            
                                                            if (*(ebp_1 - 0x20) == 0xa
                                                                    || eax_398.b != 0)
                                                                long double st0_1 = sub_402d38()
                                                                long double x87_r6_1 = data_4ec114
                                                                x87_r6_1 - st0_1
                                                                eax_398.w =
                                                                    (x87_r6_1 < st0_1 ? 1 : 0) << 8 | (
                                                                    is_unordered.t(x87_r6_1, st0_1) ? 1 : 0)
                                                                    << 0xa
                                                                    | (x87_r6_1 == st0_1 ? 1 : 0) << 0xe
                                                                
                                                                if (test_bit(eax_398:1.b, 6)
                                                                        || test_bit(eax_398:1.b, 0))
                                                                    long double st0_2 = sub_402d38()
                                                                    long double x87_r6_2 = data_4ec114
                                                                    x87_r6_2 - st0_2
                                                                    eax_398.w =
                                                                        (x87_r6_2 < st0_2 ? 1 : 0) << 8 | (
                                                                        is_unordered.t(x87_r6_2, st0_2) ? 1 : 0)
                                                                        << 0xa
                                                                        | (x87_r6_2 == st0_2 ? 1 : 0) << 0xe
                                                                    
                                                                    if (test_bit(eax_398:1.b, 6)
                                                                            || test_bit(eax_398:1.b, 0))
                                                                        long double st0_3 = sub_402d38()
                                                                        long double x87_r6_3 = data_4ec114
                                                                        x87_r6_3 - st0_3
                                                                        eax_398.w =
                                                                            (x87_r6_3 < st0_3 ? 1 : 0) << 8 | (
                                                                            is_unordered.t(x87_r6_3, st0_3) ? 1 : 0)
                                                                            << 0xa
                                                                            | (x87_r6_3 == st0_3 ? 1 : 0) << 0xe
                                                                        
                                                                        if (test_bit(eax_398:1.b, 6)
                                                                                || test_bit(eax_398:1.b, 0))
                                                                            __return_addr = 0xffffffff
                                                                            sub_4d3e30(0xa, 0, *(ebp_1 - 0x20), 
                                                                                __return_addr)
                                                                            esp_1 = &arg_4
                                                                        else
                                                                            __return_addr = 0xffffffff
                                                                            sub_4d3e30(0xa, 3, *(ebp_1 - 0x20), 
                                                                                __return_addr)
                                                                            esp_1 = &arg_4
                                                                    else
                                                                        __return_addr = 0xffffffff
                                                                        sub_4d3e30(0xa, 2, *(ebp_1 - 0x20), 
                                                                            __return_addr)
                                                                        esp_1 = &arg_4
                                                                else
                                                                    __return_addr = 0xffffffff
                                                                    sub_4d3e30(0xa, 1, *(ebp_1 - 0x20), 
                                                                        __return_addr)
                                                                    esp_1 = &arg_4
                                                            
                                                            *(ebp_1 - 0x1c) += 1
                                                            i_5 = i_10
                                                            i_10 -= 1
                                                        while (i_5 != 1)
                                                else if (*(ebp_1 - 0x18) == 0x76)
                                                    data_687338 = 0
                                                    edx_10.b = 2
                                                    eax_398.b = 0xa
                                                    sub_517a38(0x6870a0, 
                                                        sub_517f20(eax_398.b, edx_10.b))
                                                    sub_517a38(0x6870a0, sub_517f20(4, 2))
                                                    sub_517a38(0x6870a0, sub_517f20(1, 2))
                                                    sub_517a38(0x6870a0, sub_517f20(5, 2))
                                                    sub_516ec0(0x67e6f0)
                                                    data_62635c = 0
                                                    sub_517a38(0x6260c4, sub_517f20(6, 2))
                                                    sub_517a38(0x6260c4, sub_517f20(9, 1))
                                                    sub_516ec0(&data_61d714)
                                                else if (*(ebp_1 - 0x18) == 0x3f9)
                                                    __return_addr = nullptr
                                                    lpDirectory = nullptr
                                                    void* const var_8_11 = nullptr
                                                    lpFile = nullptr
                                                    sub_528770(data_780db4)
                                                    sub_4748fc(data_61c8c8, *(ebp_1 - 0x2e8), 
                                                        "Table-info", lpFile, var_8_11, lpDirectory)
                                                    int32_t var_10_5 = 0
                                                    int32_t var_14_4 = 0
                                                    int32_t var_18_3 = 0
                                                    int32_t var_1c_3 = 0
                                                    void* var_20_3 = ebp_1 - 0x2ec
                                                    sub_528e4c(data_780db4, 1)
                                                    esp_1 = &arg_4
                                                    sub_4748fc(data_61c8c8, *(ebp_1 - 0x2ec), 
                                                        "Player-info", arg_4, arg_8, arg2)
                                                else if (*(ebp_1 - 0x18) == 0x3f9)
                                                    data_687338 = 0
                                                    data_62635c = 0
                                                    data_637d84 = 0
                                                    data_640a98 = 0
                                                    edx_10.b = 3
                                                    eax_398.b = 0xb
                                                    sub_517a38(0x6870a0, 
                                                        sub_517f20(eax_398.b, edx_10.b))
                                                    sub_517a38(0x6870a0, sub_517f20(0xa, 4))
                                                    sub_517a38(0x6870a0, sub_517f20(9, 3))
                                                    sub_517a38(0x6870a0, sub_517f20(8, 4))
                                                    sub_517a38(0x6870a0, sub_517f20(0xc, 3))
                                                    sub_517a38(0x6260c4, sub_517f20(8, 1))
                                                    sub_517a38(0x6260c4, sub_517f20(0xd, 3))
                                                    sub_517a38(0x637aec, sub_517f20(1, 1))
                                                    sub_517a38(0x637aec, sub_517f20(0xd, 3))
                                                    sub_517a38(0x640800, sub_517f20(1, 1))
                                                    sub_517a38(0x640800, sub_517f20(0xd, 3))
                                                    sub_516ec0(&data_61d714)
                                                    sub_516ec0(0x62f13c)
                                                    sub_516ec0(0x637e50)
                                                    sub_516ec0(0x67e6f0)
                                                else if (*(ebp_1 - 0x18) == 0x76)
                                                    data_687338 = 0
                                                    edx_10.b = 2
                                                    eax_398.b = 0xa
                                                    sub_517a38(0x6870a0, 
                                                        sub_517f20(eax_398.b, edx_10.b))
                                                    sub_517a38(0x6870a0, sub_517f20(4, 2))
                                                    sub_517a38(0x6870a0, sub_517f20(1, 2))
                                                    sub_517a38(0x6870a0, sub_517f20(5, 2))
                                                    sub_516ec0(0x67e6f0)
                                                    data_62635c = 0
                                                    sub_517a38(0x6260c4, sub_517f20(6, 2))
                                                    sub_517a38(0x6260c4, sub_517f20(5, 1))
                                                    sub_516ec0(&data_61d714)
                                                else if (*(ebp_1 - 0x18) == 0x76)
                                                    *(data_780c58 + 0x10020) = 4
                                                    sub_403df8(&data_7a6a88)
                                                    int32_t ecx_85
                                                    ecx_85.b = 1
                                                    sub_4bdac0(1, 1)
                                                    __return_addr = data_7a6a88
                                                    lpDirectory = &data_4ec150
                                                    void* const var_8_12 = &data_4ec150
                                                    lpFile = "3-GEGENSPIELER:"
                                                    sub_404138(&data_7a6a88, 4)
                                                    int32_t ecx_86
                                                    ecx_86.b = 1
                                                    sub_4bdac0(1, 3)
                                                    arg_14 = nullptr
                                                    arg_10 = 0
                                                    arg2 = nullptr
                                                    arg_8 = nullptr
                                                    esp_1 = &arg_8
                                                    sub_4040c4(ebp_1 - 0x2f0, "Testfall1: ", 
                                                        data_7a6a88)
                                                    sub_4748fc(data_61c8c8, *(ebp_1 - 0x2f0), nullptr, 
                                                        arg_8, arg2, arg_10)
                                                else
                                                    long double x87_r1
                                                    
                                                    if (*(ebp_1 - 0x18) == 0x13)
                                                        sub_4c27e4(esi, edi, x87_r0, x87_r1)
                                                    else if (*(ebp_1 - 0x18) == 9)
                                                        *(ebp_1 - 0x1c) = 0xa
                                                        *(ebp_1 - 0x34) = data_5304fc + 0xd50b0
                                                        
                                                        do
                                                            if (*(data_780c58 + 4) == 7)
                                                                **(ebp_1 - 0x34) = 0
                                                                *(*(ebp_1 - 0x34) + 0x353c) = 0
                                                                *(*(ebp_1 - 0x34) + 0x6a78) = 0
                                                                __return_addr = 0xffffffff
                                                                sub_4d3e30(0xf, 2, *(ebp_1 - 0x1c), 
                                                                    __return_addr)
                                                                esp_1 = &arg_4
                                                            
                                                            *(ebp_1 - 0x1c) += 1
                                                            *(ebp_1 - 0x34) += 0x174e0
                                                        while (*(ebp_1 - 0x1c) != 0xb)
                                                        
                                                        void* eax_471
                                                        eax_471.b = *(data_780c58 + 4)
                                                        eax_471.b -= 3
                                                        char temp111_1 = eax_471.b
                                                        eax_471.b -= 2
                                                        
                                                        if (temp111_1 u< 2)
                                                            data_61d714 = 0xc
                                                            data_61d715 = 2
                                                            data_61d7e8 = 5
                                                            data_61d7e9 = 2
                                                            data_61d8bc = 0xc
                                                            data_61d8bd = 3
                                                            data_61d990 = 8
                                                            data_61d991 = 3
                                                            data_61da64 = 9
                                                            data_61da65 = 2
                                                            data_61db38 = 9
                                                            data_61db39 = 1
                                                            data_61dc0c = 6
                                                            data_61dc0d = 2
                                                            data_61dce0 = 6
                                                            data_61dce1 = 2
                                                            data_61ddb4 = 6
                                                            data_61ddb5 = 4
                                                            data_61de88 = 6
                                                            data_61de89 = 3
                                                            data_61df5c = 6
                                                            data_61df5d = 1
                                                            data_62608c = 0xb
                                                        else if (*(data_780c58 + 4) == 6)
                                                            edx_10.b = 4
                                                            void* eax_472
                                                            eax_472.b = 8
                                                            __return_addr =
                                                                sub_517f20(eax_472.b, edx_10.b)
                                                            void* eax_473
                                                            eax_473.b = 1
                                                            int32_t eax_474 = sub_517f20(eax_473.b, 4)
                                                            *(ebp_1 - 4)
                                                            sub_4d7a1c(__return_addr, eax_474)
                                                            __return_addr = nullptr
                                                            sub_52c2dc(0, 0, 0x6260c4, __return_addr.b)
                                                            esp_1 = &arg_4
                                                            sub_516ec0(&data_61d714)
                                                        else if (*(data_780c58 + 4) == 4)
                                                            data_67e354
                                                            bool o_48 = unimplemented  {imul eax, 
                                                                dword [0x67e354], 0x35}
                                                            
                                                            if (o_48)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            *(data_67e354 * 0xd4 + &data_675908) = 0xa
                                                            data_67e354
                                                            bool o_49 = unimplemented  {imul eax, 
                                                                dword [0x67e354], 0x35}
                                                            
                                                            if (o_49)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            *(data_67e354 * 0xd4 + &data_675834) = 0xa
                                                            data_67e354
                                                            bool o_50 = unimplemented  {imul eax, 
                                                                dword [0x67e354], 0x35}
                                                            
                                                            if (o_50)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            *(data_67e354 * 0xd4 + &data_675909) = 3
                                                            data_67e354
                                                            bool o_51 = unimplemented  {imul eax, 
                                                                dword [0x67e354], 0x35}
                                                            
                                                            if (o_51)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            *(data_67e354 * 0xd4 + &data_675835) = 4
                                                            sub_516e74(0x6759dc)
                                                        
                                                        if (*(data_780c58 + 4) == 1)
                                                            *(ebp_1 - 0x1c) = 1
                                                            *(ebp_1 - 0x34) = &data_61d714
                                                            
                                                            do
                                                                sub_516e74(*(ebp_1 - 0x34))
                                                                *(ebp_1 - 0x1c) += 1
                                                                *(ebp_1 - 0x34) += 0x8d14
                                                            while (*(ebp_1 - 0x1c) != 0x15)
                                                            
                                                            *(ebp_1 - 0x1c) = 1
                                                            *(ebp_1 - 0x34) = 0x6260c4
                                                            
                                                            do
                                                                sub_517794(0x67e38c, *(ebp_1 - 0x34))
                                                                sub_517b44(*(ebp_1 - 0x34))
                                                                *(ebp_1 - 0x1c) += 1
                                                                *(ebp_1 - 0x34) += 0x8d14
                                                            while (*(ebp_1 - 0x1c) != 4)
                                                            
                                                            sub_51801c(0x67e38c, 0xa)
                                                            *(ebp_1 - 0x1c) = 1
                                                            
                                                            do
                                                                sub_517a38(0x6260c4, 
                                                                    sub_517ad4(0x67e38c, sx.d(data_67e624)))
                                                                *(ebp_1 - 0x1c) += 1
                                                            while (*(ebp_1 - 0x1c) != 0xb)
                                                            
                                                            sub_52c66c(0x6759dc)
                                                            *(ebp_1 - 0x1c) = 1
                                                            
                                                            do
                                                                sub_517a38(0x62edd8, 
                                                                    sub_517ad4(0x67e38c, sx.d(data_67e624)))
                                                                *(ebp_1 - 0x1c) += 1
                                                            while (*(ebp_1 - 0x1c) != 0xb)
                                                            
                                                            *(ebp_1 - 0x1c) = 1
                                                            
                                                            do
                                                                sub_517a38(0x637aec, 
                                                                    sub_517ad4(0x67e38c, sx.d(data_67e624)))
                                                                *(ebp_1 - 0x1c) += 1
                                                            while (*(ebp_1 - 0x1c) != 0xb)
                                                            
                                                            *(ebp_1 - 0x1c) = 1
                                                            *(ebp_1 - 0x34) = &data_61d714
                                                            
                                                            do
                                                                sub_516ec0(*(ebp_1 - 0x34))
                                                                *(ebp_1 - 0x1c) += 1
                                                                *(ebp_1 - 0x34) += 0x8d14
                                                            while (*(ebp_1 - 0x1c) != 0x15)
                                                    else if (*(ebp_1 - 0x18) == 7)
                                                        sub_51fdc8(data_780c58)
                                                    else if (*(ebp_1 - 0x18) == 8)
                                                        sub_403df8(ebp_1 - 0x28)
                                                        *(ebp_1 - 0x24) = 0
                                                        *(ebp_1 - 0x1c) = 1
                                                        *(ebp_1 - 0x34) = 0x7804ac
                                                        
                                                        do
                                                            *(ebp_1 - 0x20) = 1
                                                            *(ebp_1 - 0x48) = 0x7805a4
                                                            
                                                            do
                                                                int32_t esi_3 = 0
                                                                int32_t i_11 = data_77e234
                                                                
                                                                if (i_11 s> 0)
                                                                    *(ebp_1 - 0x38) = &data_62608c
                                                                    int32_t i_6
                                                                    
                                                                    do
                                                                        int32_t j_4 = **(ebp_1 - 0x38)
                                                                        
                                                                        if (j_4 s> 0)
                                                                            *(ebp_1 - 0x3c) =
                                                                                *(ebp_1 - 0x38) - 0x8978
                                                                            int32_t j_1
                                                                            
                                                                            do
                                                                                if (sx.d(**(ebp_1 - 0x3c))
                                                                                        == *(ebp_1 - 0x20)
                                                                                        && sx.d(*(*(ebp_1 - 0x3c) + 1))
                                                                                        == *(ebp_1 - 0x1c))
                                                                                    int32_t temp145_1 = esi_3
                                                                                    esi_3 += 1
                                                                                    
                                                                                    if (add_overflow(temp145_1, 1))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                
                                                                                *(ebp_1 - 0x3c) += 0xd4
                                                                                j_1 = j_4
                                                                                j_4 -= 1
                                                                            while (j_1 != 1)
                                                                        
                                                                        *(ebp_1 - 0x38) += 0x8d14
                                                                        i_6 = i_11
                                                                        i_11 -= 1
                                                                    while (i_6 != 1)
                                                                
                                                                if (*(data_780c58 + 4) == 1)
                                                                    int32_t i_12 = data_77e234
                                                                    
                                                                    if (i_12 s> 0)
                                                                        *(ebp_1 - 0x38) = data_5306ac + 0x298
                                                                        int32_t i_7
                                                                        
                                                                        do
                                                                            int32_t j_5 = sx.d(**(ebp_1 - 0x38))
                                                                            
                                                                            if (j_5 s> 0)
                                                                                *(ebp_1 - 0x40) =
                                                                                    *(ebp_1 - 0x38) - 0x298
                                                                                int32_t j_2
                                                                                
                                                                                do
                                                                                    if (sx.d(**(ebp_1 - 0x40))
                                                                                            == *(ebp_1 - 0x20)
                                                                                            && sx.d(*(*(ebp_1 - 0x40) + 1))
                                                                                            == *(ebp_1 - 0x1c))
                                                                                        int32_t temp153_1 = esi_3
                                                                                        esi_3 += 1
                                                                                        
                                                                                        if (add_overflow(temp153_1, 1))
                                                                                            sub_403010()
                                                                                            noreturn
                                                                                    
                                                                                    *(ebp_1 - 0x40) += 4
                                                                                    j_2 = j_5
                                                                                    j_5 -= 1
                                                                                while (j_2 != 1)
                                                                            
                                                                            *(ebp_1 - 0x38) += 0x31a
                                                                            i_7 = i_12
                                                                            i_12 -= 1
                                                                        while (i_7 != 1)
                                                                
                                                                int32_t i_8 = 0xb
                                                                *(ebp_1 - 0x38) = &data_67e354
                                                                
                                                                do
                                                                    if (i_8 != 0xe)
                                                                        int32_t j_6 = **(ebp_1 - 0x38)
                                                                        
                                                                        if (j_6 s> 0)
                                                                            *(ebp_1 - 0x44) =
                                                                                *(ebp_1 - 0x38) - 0x8978
                                                                            int32_t j_3
                                                                            
                                                                            do
                                                                                if (sx.d(**(ebp_1 - 0x44))
                                                                                        == *(ebp_1 - 0x20)
                                                                                        && sx.d(*(*(ebp_1 - 0x44) + 1))
                                                                                        == *(ebp_1 - 0x1c))
                                                                                    int32_t temp152_1 = esi_3
                                                                                    esi_3 += 1
                                                                                    
                                                                                    if (add_overflow(temp152_1, 1))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                
                                                                                *(ebp_1 - 0x44) += 0xd4
                                                                                j_3 = j_6
                                                                                j_6 -= 1
                                                                            while (j_3 != 1)
                                                                    
                                                                    i_8 += 1
                                                                    *(ebp_1 - 0x38) += 0x8d14
                                                                while (i_8 != 0x10)
                                                                
                                                                if (esi_3 != 1)
                                                                    *(esp_1 - 4) = *(ebp_1 - 0x28)
                                                                    *(esp_1 - 8) = &data_4ec188
                                                                    *(esp_1 - 0xc) = **(ebp_1 - 0x34)
                                                                    *(esp_1 - 0x10) = &data_4ec188
                                                                    *(esp_1 - 0x14) = **(ebp_1 - 0x48)
                                                                    *(esp_1 - 0x18) = &data_4ec194
                                                                    sub_408e1c(esi_3, ebp_1 - 0x2f4)
                                                                    *(esp_1 - 0x1c) = *(ebp_1 - 0x2f4)
                                                                    *(esp_1 - 0x20) = &data_4ec1a0
                                                                    sub_404138(ebp_1 - 0x28, 8)
                                                                    esp_1 += 4
                                                                
                                                                int32_t temp144_1 = *(ebp_1 - 0x24)
                                                                *(ebp_1 - 0x24) += esi_3
                                                                
                                                                if (add_overflow(temp144_1, esi_3))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                *(ebp_1 - 0x20) += 1
                                                                *(ebp_1 - 0x48) += 4
                                                            while (*(ebp_1 - 0x20) != 9)
                                                            
                                                            *(ebp_1 - 0x1c) += 1
                                                            *(ebp_1 - 0x34) += 4
                                                        while (*(ebp_1 - 0x1c) != 5)
                                                        
                                                        if (*(ebp_1 - 0x28) == 0)
                                                            *(esp_1 - 4) = 0
                                                            *(esp_1 - 8) = 0
                                                            *(esp_1 - 0xc) = 0
                                                            *(esp_1 - 0x10) = 0
                                                            esp_1 -= 0x10
                                                            sub_408e1c(*(ebp_1 - 0x24), ebp_1 - 0x304)
                                                            sub_4040c4(ebp_1 - 0x300, 
                                                                "konsistent. Summe ", *(ebp_1 - 0x304))
                                                            sub_4748fc(*(ebp_1 - 4), *(ebp_1 - 0x300), 
                                                                0)
                                                        else
                                                            *(esp_1 - 4) = 0
                                                            *(esp_1 - 8) = 0
                                                            *(esp_1 - 0xc) = 0
                                                            *(esp_1 - 0x10) = 0
                                                            *(esp_1 - 0x14) = "INKONSISTENT: \r"
                                                            *(esp_1 - 0x18) = *(ebp_1 - 0x28)
                                                            *(esp_1 - 0x1c) = &data_4ec1c4
                                                            *(esp_1 - 0x20) = "Summe "
                                                            sub_408e1c(*(ebp_1 - 0x24), ebp_1 - 0x2fc)
                                                            *(esp_1 - 0x24) = *(ebp_1 - 0x2fc)
                                                            sub_404138(ebp_1 - 0x2f8, 5)
                                                            sub_4748fc(*(ebp_1 - 4), *(ebp_1 - 0x2f8), 
                                                                0)
                                    else if (*(ebp_1 - 0x18) == data_61ccc0)
                                        *(*data_530380 + 0xc3d20) = 1
                                        int32_t eax_375 = *(*data_530380 + 0xc3d24) & 0x80000003
                                        
                                        if (eax_375 s< 0)
                                            eax_375 = ((eax_375 - 1) | 0xfffffffc) + 1
                                        
                                        if (add_overflow(eax_375, 1))
                                            sub_403010()
                                            noreturn
                                        
                                        *(*data_530380 + 0xc3d24) = eax_375 + 1
                                    else if (*(ebp_1 - 0x18) == data_61ccc4)
                                        *(*data_530380 + 0xc3d20) = 0
                                        *(*data_530380 + 0xc3d24) = 0
                                    else if (*(ebp_1 - 0x18) == data_61ccd0)
                                        *(*data_530380 + 0xc3d21) = 1
                                    else if (*(ebp_1 - 0x18) == data_61ccd4)
                                        *(*data_530380 + 0xc3d21) = 0
                                    else if (*(ebp_1 - 0x18) == data_61ccc8)
                                        sub_4b7420(*data_530380, edx_10)
                                    else if (*(ebp_1 - 0x18) == data_61cccc)
                                        ebp_1 = sub_4b764c(*data_530380, *(*data_530380 + 0xc3d1c))
                                else if (*(ebp_1 - 0x18) == 2)
                                    sub_48380c(*(ebp_1 - 4), data_61cac4)
                                else if (*(ebp_1 - 0x18) == data_61cbe4)
                                    __return_addr = *(*(ebp_1 - 4) + 0xa64)
                                    lpDirectory = "\save\"
                                    char var_8_6 = 0
                                    lpFile = ebp_1 - 0x2b4
                                    data_61cac4
                                    data_61c8c8
                                    ebp_1 = sub_47a7ec(data_61cbd4, lpFile, var_8_6)
                                    int32_t var_8_7 = *(ebp_1 - 0x2b4)
                                    sub_404138(ebp_1 - 0x28, 3)
                                    esp_1 = &arg_1c
                                    
                                    if (sub_524d14(data_780c58, *(ebp_1 - 0x28), esi, edi) != 0)
                                        data_77e23c = 1
                                        sub_5255a0(data_780c58)
                                        sub_4837d0(*(ebp_1 - 4), data_61cac4)
                            else if (*(ebp_1 - 0x18) == 2)
                                sub_48380c(*(ebp_1 - 4), data_61cac0)
                            else if (*(ebp_1 - 0x18) == data_61cbd4)
                                __return_addr = ebp_1 - 0x2c
                                sub_47a2ac(data_61c8c8, data_61cac0, data_61cbd4, __return_addr)
                                lpDirectory = *(ebp_1 - 0x2c)
                                sub_47ab08(data_61c8c8, data_61cac0, data_61cbdc, x87_r0, lpDirectory)
                                esp_1 = &__return_addr
                                data_61cac0
                                bool o_23 = unimplemented  {imul eax, dword [0x61cac0], 0x1038}
                                
                                if (o_23)
                                    sub_403010()
                                    noreturn
                                
                                data_61cbdc
                                bool o_24 = unimplemented  {imul edx, dword [0x61cbdc], 0x23}
                                
                                if (o_24)
                                    sub_403010()
                                    noreturn
                                
                                *(*(data_61c8c8 + 0xab0) + data_61cac0 * 0x81c0 + data_61cbdc * 0x118
                                    - 0x84) = 0
                            else if (*(ebp_1 - 0x18) == data_61cbe0)
                                __return_addr = nullptr
                                lpDirectory = nullptr
                                data_61cac0
                                data_61c8c8
                                void* ebp_7 = sub_47a7ec(data_61cbdc, ebp_1 - 0x2a8, lpDirectory.b)
                                lpDirectory = *(ebp_7 - 0x2a8)
                                int32_t var_8_5 = *(*(ebp_7 - 4) + 0xa64)
                                lpFile = "\save\"
                                int32_t var_10_3 = 0
                                data_61cac0
                                data_61c8c8
                                ebp_1 = sub_47a7ec(data_61cbdc, ebp_7 - 0x2b0, 0)
                                int32_t var_10_4 = *(ebp_1 - 0x2b0)
                                sub_404138(ebp_1 - 0x2ac, 3)
                                esp_1 = &arg_18
                                sub_52452c(data_780c58, *(ebp_1 - 0x2ac), arg_14, esi, edi, arg_18.b)
                                sub_48380c(data_61c8c8, data_61cac0)
                        else if (*(ebp_1 - 0x18) == data_61cd94)
                            sub_4837ec(data_61c8c8, data_61cda4, false)
                            *(ebp_1 - 4)
    
    *(esp_1 + 8)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_1
    *(esp_1 + 8) = sub_4ebdeb
    sub_403e1c(ebp_1 - 0x4b0, 0x18)
    sub_403e1c(ebp_1 - 0x350, 0x1f)
    sub_403e1c(ebp_1 - 0x2b4, 7)
    sub_403e1c(ebp_1 - 0x290, 4)
    sub_403df8(ebp_1 - 0x280)
    return sub_403e1c(ebp_1 - 0x2c, 2)
}
