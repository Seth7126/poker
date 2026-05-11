// ============================================================
// 函数名称: sub_4e649b
// 虚拟地址: 0x4e649b
// WARP GUID: cfa0396d-ab9f-56eb-aabf-de0b6b898164
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ShellExecuteA, GetTickCount
// [内部子函数调用]: sub_404054, sub_4d815c, sub_4030d0, sub_468ec0, sub_513ae4, sub_42b9bc, sub_4d7b54, sub_47a7ec, sub_4030a0, sub_49574c, sub_468970, sub_42b7a8, sub_47a044, sub_4cc428, sub_402bdc, sub_4c585c, sub_42af98, sub_47b650, sub_5148a0, sub_4dd154, sub_404078, sub_516eec, sub_4318d0, sub_4d78f8, sub_51fdc8, sub_478234, sub_5170a4, sub_4b570c, sub_517a38, sub_48380c, sub_42afb8, sub_4ce468, sub_4d9530, sub_4c1090, sub_50d2f4, sub_509bfc, sub_4dc3b8, sub_516544, sub_514c48, sub_4b566c, sub_42b778, sub_4d7e6c, sub_4b8bb8, sub_4836b0, sub_52c2dc, sub_4834fc, sub_50928c, sub_4d63bc, sub_514468, sub_4748fc, sub_408e4c, sub_4e63cc, sub_511dcc, sub_47a1c0, sub_520efc, sub_403e4c, sub_47a078, sub_510ba4, sub_4804e4, sub_509af8, sub_50e368, sub_50e22c, sub_4956c0, sub_517794, sub_404280, sub_513e4c, sub_403e1c, sub_483950, sub_4c2418, sub_51fd8c, sub_4b7420, sub_4dad04, sub_528e4c, sub_4727f8, sub_47ab08, sub_47b488, sub_51801c, sub_517b44, sub_46d9ac, sub_46e0ac, sub_4c0fcc, sub_508730, sub_509a28, sub_527230, sub_476bc0, sub_514c8c, sub_48e89c, sub_4c2d7c, sub_403df8, sub_50f6ec, sub_507d4c, sub_4471a4, sub_51ad40, sub_4dd144, sub_507860, sub_51a838, sub_47b304, sub_5255a0, sub_524d14, sub_51497c, sub_47b2ac, sub_408e80, sub_4c1fb8, sub_47a180, sub_52c66c, sub_502898, sub_46e17c, sub_517ad4, sub_4d6b10, sub_50d9e0, sub_5140f8, sub_4cda5c, sub_50971c, sub_403010, sub_42bc48, sub_4ca054, sub_528770, sub_4d69e8, sub_4d81c8, sub_4d6660, sub_4d6994, sub_47a2ac, sub_404080, sub_507dbc, sub_5072b8, sub_44613c, sub_4040c4, sub_516ec0, sub_50b624, sub_4ed040, sub_509850, sub_5143f0, sub_4c93fc, sub_4c27e4, sub_4d3e30, sub_42afdc, sub_4c2f1c, sub_4746a0, sub_50732c, sub_4d7ff0, sub_50d318, sub_4d9704, sub_47a9a0, sub_5101f8, sub_4ecb3c, sub_528320, sub_4c4ab8, sub_46910c, sub_4bdac0, sub_46e24c, sub_47a9e0, sub_4c0924, sub_510f54, sub_48e9e4, sub_404138, sub_4f1860, sub_46acf4, sub_4042c0, sub_46accc, sub_4837ec, sub_4f9424, sub_52452c, sub_509890, sub_480534, sub_4837d0, sub_402b4c, sub_4d6590, sub_47a960, sub_402d38, sub_4d88f8, sub_404188, sub_42affc, sub_4692e4, sub_46d884, sub_517f20, sub_42bc40, sub_516e74, sub_51d270, sub_47a140, sub_468afc, sub_4d7a1c, sub_4b56b0, sub_4dd1e0, sub_50c5e0, sub_408e1c, sub_469ac0, sub_4c094c, sub_4cd498, sub_520a94, sub_403fa0, sub_4b764c, sub_4e5e3c, sub_4eca90, sub_402e64, sub_4d8208, sub_4d6664, sub_4d885c, sub_40fa94, sub_46f698, sub_447198, sub_50e11c, sub_4d7f8c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4e649b(char* arg1, int32_t arg2, int32_t* arg3, int32_t arg4 @ esi, int32_t arg5 @ edi, int32_t* arg6)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    *0x55000000 += arg3:1.b
    void* const* ebp = &__return_addr
    int32_t* i_19 = arg3
    int32_t** esp_1 = &i_19
    int32_t* i_11 = 0x95
    int32_t* i
    
    do
        *(esp_1 - 4) = 0
        *(esp_1 - 8) = 0
        esp_1 -= 8
        i = i_11
        i_11 -= 1
    while (i != 1)
    *(esp_1 - 4) = i_11
    int32_t* i_22 = i_19
    i_19 = i_11
    int32_t* i_23 = i_22
    int32_t entry_ebx
    *(esp_1 - 8) = entry_ebx
    *(esp_1 - 0xc) = arg4
    *(esp_1 - 0x10) = arg5
    int32_t var_10 = *arg6
    uint32_t var_c
    int32_t* edi = &var_c
    void* esi_1 = &arg6[1]
    *edi = *esi_1
    void* edi_1 = &edi[1]
    void* esi_2 = esi_1 + 4
    char var_5 = i_23.b
    i_19 = arg1
    *(esp_1 - 0x14) = &__return_addr
    *(esp_1 - 0x18) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0x1c) = fsbase->NtTib.ExceptionList
    void* esp_9 = esp_1 - 0x1c
    fsbase->NtTib.ExceptionList = esp_9
    int32_t var_14 = var_10
    uint32_t var_18 = var_c
    uint32_t eax_1
    
    if (var_14 s> 0)
        if (var_18 == 1 && var_14 == data_61cf9c && data_77e23c == 0)
            var_18 = data_61cfa0
            var_14 = data_61c8cc
        
        uint32_t eax_5 = GetTickCount()
        *(esp_9 - 4) = 0
        *(esp_9 - 8) = eax_5
        int32_t eax_7
        int32_t edx
        edx:eax_7 = sx.q(data_7a6e70)
        int32_t temp2_1 = *(esp_9 - 8)
        *(esp_9 - 8) -= eax_7
        *(esp_9 - 4) = sbb.d(*(esp_9 - 4), edx, temp2_1 u< eax_7)
        int32_t edx_1 = *(esp_9 - 4)
        
        if (edx_1 != 0)
            if (edx_1 s<= 0)
            label_4e654a:
                
                if (var_14 == data_61cdc4 && var_18 == data_61cdb0 && *(data_780c58 + 0x111fa) != 0)
                    data_61cdc4
                    bool o_1 = unimplemented  {imul edx, dword [0x61cdc4], 0x1038}
                    
                    if (o_1)
                        sub_403010()
                        noreturn
                    
                    data_61cdb0
                    int32_t eax_12 = data_61cdb0 * 0x23
                    bool o_2 = unimplemented  {imul eax, dword [0x61cdb0], 0x23}
                    
                    if (o_2)
                        sub_403010()
                        noreturn
                    
                    if (*(*(data_61c8c8 + 0xab0) + data_61cdc4 * 0x81c0 + (eax_12 << 3) - 0x14) s> 0)
                        data_61cdc4
                        bool o_3 = unimplemented  {imul edx, dword [0x61cdc4], 0x1038}
                        
                        if (o_3)
                            sub_403010()
                            noreturn
                        
                        if (*(*(data_61c8c8 + 0xab0) + data_61cdc4 * 0x81c0 + (eax_12 << 3) - 0x86)
                                s> 0)
                            sub_50e11c(data_7a6e5c, 1)
        else if (*(esp_9 - 8) u<= 0x12c)
            goto label_4e654a
        
        eax_1, i_23, arg2 = GetTickCount()
        data_7a6e70 = eax_1
    
    if (var_14 == 0xffffffef)
        data_780dac = 0
        sub_4e5e3c("Username")
        char* var_2c
        
        if (var_2c == 0)
            sub_4e5e3c("Computername")
        
        if (var_2c != 0)
            sub_403e4c(&data_780da8, var_2c)
            *(esp_9 - 4) = &__return_addr
            *(esp_9 - 8) = j_sub_40353c
            *(esp_9 - 0xc) = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = esp_9 - 0xc
            *(esp_9 - 0x10) = &__return_addr
            data_780dac = sub_4e63cc(var_2c)
            *(esp_9 - 4)
            fsbase->NtTib.ExceptionList = *(esp_9 - 0xc)
        
        *data_530a18
        int32_t eax_18 = sub_4471a4()
        sub_42afdc(data_61c8c8, eax_18)
        *data_530a18
        int32_t eax_22 = sub_447198()
        int32_t ecx_5 = sub_42affc(data_61c8c8, eax_22)
        void* ebx = i_19[0x1829]
        void* var_280
        sub_42b778(ecx_5, &var_280)
        sub_404080(&var_280, U".")
        void* ebp_1 = sub_42b7a8(ebx, var_280)
        sub_42afdc(*(*(ebp_1 - 4) + 0x60a4), 0x78)
        sub_42affc(*(*(ebp_1 - 4) + 0x60a4), 0x14)
        *data_530a18
        int32_t eax_34 = sub_4471a4()
        int32_t edx_13 = eax_34 s>> 1
        bool c_2 = unimplemented  {sar edx, 0x1}
        
        if (eax_34 s>> 1 s< 0)
            edx_13 = adc.d(edx_13, 0, c_2)
        
        if (add_overflow(edx_13, 0xffffffc4))
            sub_403010()
            noreturn
        
        sub_42af98(*(*(ebp_1 - 4) + 0x60a4))
        *data_530a18
        
        if (add_overflow(sub_447198(), 0xffffff9c))
            sub_403010()
            noreturn
        
        sub_42afb8(*(*(ebp_1 - 4) + 0x60a4))
        ebp, esi_2 = sub_42b7a8(*(*(ebp_1 - 4) + 0x60a4), "Initializing..")
        sub_42bc48(*(ebp[-1] + 0x60a4))
        *(ebp[-1] + 0x60a4)
        sub_42b9bc()
        arg2, i_23 = (*(**(ebp[-1] + 0x60a4) + 0x78))()
    else if (var_14 == 0xffffffee)
        i_19[0x1829]
        i_23, arg2 = sub_42bc40()
    else if (var_14 == 0xfffffff1)
        if (var_18 == 1)
            arg2.b = 1
            i_23, arg2 = sub_4f9424(0)
        else if (var_18 == 2)
            arg2.b = 1
            eax_1.b = 4
            i_23, arg2 = sub_4f9424(eax_1.b)
        else if (var_18 == 3)
            for (int32_t i_1 = 1; i_1 != 6; i_1 += 1)
                arg2.b = 1
                eax_1.b = 4
                sub_4f9424(eax_1.b)
                int32_t edx_18
                edx_18.b = 1
                eax_1, i_23, arg2 = sub_4f9424(0)
    
    if (ebp[-5] == 0xfffffff5)
        *(esp_9 - 4) = 0
        sub_51ad40(data_780c5c, 1)
    else if (ebp[-5] == 0xfffffff4)
        *(esp_9 - 4) = 0
        sub_51ad40(data_780c5c, 2)
    else if (0x38 == *(ebp - 5))
        if (ebp[-5] == 0xfffffffd && *(data_61c8c8 + 0x9b0) == 0)
        label_4e6876:
            
            if (*data_530508 != 0 && data_77e245 == 1)
                *(esp_9 - 4) = *data_530508
                *(esp_9 - 8) = 0
                *(esp_9 - 0xc) = 0
                *(esp_9 - 0x10) = 0
                arg2.b = 3
                sub_527230(*data_5300a0, arg2, data_780c58)
                *data_5300a0 = 0
                *data_530508 = 0
            
            i_23, arg2 = sub_4ce468(*data_53067c)
            
            if (*data_5305b8 != 0 && data_77e245 == 1)
                if (*(data_780c58 + 0x10278) != 0)
                    void* eax_71 = data_5305b8
                    *eax_71
                    int32_t eax_72 = *eax_71 * 0x35
                    bool o_6 = unimplemented  {imul eax, dword [eax], 0x35}
                    
                    if (o_6)
                        sub_403010()
                        noreturn
                    
                    void* esp_33
                    
                    if (*((eax_72 << 2) + &data_61d69c) != 0)
                        *(esp_9 - 4) = *data_5305b8
                        data_5305b8
                        void* edx_26
                        edx_26.b = 1
                        sub_4f1860(1, edx_26, (eax_72 << 2) + &data_61d69c)
                        *(esp_9 - 4) = *data_5305b8
                        sub_51ad40(data_780c5c, 0xf)
                        esp_33 = esp_9
                    else
                        *(esp_9 - 4) = *data_5305b8
                        sub_4f1860(1, 0, (eax_72 << 2) + &data_61d69c)
                        *(esp_9 - 4) = *data_5305b8
                        sub_51ad40(data_780c5c, 0xf)
                        esp_33 = esp_9
                    
                    *(esp_33 - 4) = 1
                    i_23, arg2 = sub_47a180(data_61cd60, data_61ccfc, data_61c8c8)
                    esp_9 = esp_33
                else
                    sub_4837d0(ebp[-1], data_61ccf0)
                    *(esp_9 - 4) = *data_5305b8
                    *(esp_9 - 8) = 0
                    *(esp_9 - 0xc) = 0
                    *(esp_9 - 0x10) = 0
                    i_23 = nullptr
                    arg2 = sub_527230(i_23, 0, data_780c58)
                    data_77e245 = 2
        else if (*(data_61c8c8 + 0x9b0) != 0 && ebp[-5] == data_61cda0)
            goto label_4e6876
        
        if (ebp[-5] == 0xfffffffb)
            sub_507dbc(1)
            data_61c8c8
            sub_46acf4()
            ebp = sub_46d884(ebp[-1])
            esp_9 += 0x20
            data_61c8c8
            sub_46acf4()
            data_61c8c8
            sub_46acf4()
            ebp[-1]
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
            int32_t edx_44
            edx_44.b = 1
            sub_4b8bb8(*data_530380)
        else if (ebp[-5] == 0xfffffffc)
            data_61c8c8
            sub_46acf4()
            data_61c8c8
            sub_46acf4()
            int32_t ecx_15
            ecx_15.b = 1
            ebp[-1]
            sub_4dc3b8(ecx_15, 1, esi_2, edi_1)
            esp_9 += 0x20
            data_61c8c8
            sub_46acf4()
        else if (ebp[-5] == 0xfffffffe)
            arg2.b = ebp[-6] == 0
            sub_4dad04(ebp[-1], arg2.b, esi_2, edi_1)
            esp_9 += 0x20
        else
            long double x87_r0
            
            if (ebp[-5] == 0xfffffff8)
                if (*(ebp[-1] + 0xce0) != 0)
                    char eax_119 = (ebp[-6]).b
                    
                    if (eax_119 == 0x4a)
                        data_7a6e78 = fconvert.s(fconvert.t(data_7a6e78) - data_4ebfc0)
                    
                    if (eax_119 == 0x4b)
                        data_7a6e78 = fconvert.s(data_4ebfc0 + fconvert.t(data_7a6e78))
                    
                    if (eax_119 == 0x49)
                        data_7a6e80 = fconvert.s(fconvert.t(data_7a6e80) - data_4ebfc0)
                    
                    if (eax_119 == 0x4d)
                        data_7a6e80 = fconvert.s(data_4ebfc0 + fconvert.t(data_7a6e80))
                    
                    if (eax_119 == 0x4f)
                        data_7a6e7c = fconvert.s(fconvert.t(data_7a6e7c) - data_4ebfc0)
                    
                    if (ebp[-6] == 0xbc)
                        data_7a6e7c = fconvert.s(data_4ebfc0 + fconvert.t(data_7a6e7c))
                    
                    if (ebp[-6] == 0xbd)
                        *(esp_9 - 4) = 0
                        *(esp_9 - 8) = 0
                        *(esp_9 - 0xc) = 0
                        *(esp_9 - 0x10) = 0
                        int32_t eax_120
                        int32_t edx_49
                        eax_120, edx_49 = sub_402b4c(fconvert.t(data_7a6e78) * fconvert.t(100f))
                        *(esp_9 - 0x14) = edx_49
                        *(esp_9 - 0x18) = eax_120
                        sub_408e4c()
                        *(esp_9 - 0x14) = ebp[-0xa2]
                        *(esp_9 - 0x18) = &data_4ebfd8
                        int32_t eax_122
                        int32_t edx_50
                        eax_122, edx_50 = sub_402b4c(fconvert.t(data_7a6e7c) * fconvert.t(100f))
                        *(esp_9 - 0x1c) = edx_50
                        *(esp_9 - 0x20) = eax_122
                        sub_408e4c()
                        *(esp_9 - 0x1c) = ebp[-0xa3]
                        *(esp_9 - 0x20) = &data_4ebfd8
                        int32_t eax_124
                        int32_t edx_51
                        eax_124, edx_51 = sub_402b4c(fconvert.t(data_7a6e80) * fconvert.t(100f))
                        *(esp_9 - 0x24) = edx_51
                        *(esp_9 - 0x28) = eax_124
                        sub_408e4c()
                        *(esp_9 - 0x24) = ebp[-0xa4]
                        sub_404138(&ebp[-0xa1], 5)
                        i_23 = sub_4748fc(data_61c8c8, ebp[-0xa1], 0)
                
                int32_t edx_53 = 0
                *(data_780c58 + 0x4578) = 0
                
                if (ebp[-6] != 0xd)
                label_4e6e19:
                    
                    if (ebp[-6] != 0xd)
                    label_4e6e50:
                        int32_t eax_141 = ebp[-6] - 8
                        bool c_3 = eax_141 u< 0xdf
                        
                        if (eax_141 == 0xdf || c_3)
                            c_3 = test_bit(0x1000020, eax_141)
                        
                        if (c_3 || (ebp[-6] s>= 0x30 && ebp[-6] s<= 0x7a))
                            char ebx_1 = 0
                            
                            if (sub_4c0924() == 0 || *(data_61c9f0 + 0x54) s> 1)
                                int32_t eax_145 = ebp[-6] - 8
                                bool c_4 = eax_145 u< 0xdf
                                
                                if (eax_145 == 0xdf || c_4)
                                    c_4 = test_bit(0x1000020, eax_145)
                                
                                if (c_4)
                                label_4e6eb3:
                                    data_61c90c
                                    bool o_12 = unimplemented  {imul eax, dword [0x61c90c], 0x1038}
                                    
                                    if (o_12)
                                        sub_403010()
                                        noreturn
                                    
                                    ebx_1 = *(*(data_61c8c8 + 0xab0) + data_61c90c * 0x81c0 + 1) ^ 1
                                else if (ebp[-6] s>= 0x30 && ebp[-6] s<= 0x7a)
                                    goto label_4e6eb3
                                
                                if (ebp[-6] == 0x20)
                                    data_61c90c
                                    bool o_13 = unimplemented  {imul eax, dword [0x61c90c], 0x1038}
                                    
                                    if (o_13)
                                        sub_403010()
                                        noreturn
                                    
                                    if (*(*(data_61c8c8 + 0xab0) + data_61c90c * 0x81c0 + 1) == 0)
                                        ebx_1 = 1
                                
                                if (data_77e23c != 1)
                                    data_61c90c
                                    bool o_14 = unimplemented  {imul eax, dword [0x61c90c], 0x1038}
                                    
                                    if (o_14)
                                        sub_403010()
                                        noreturn
                                    
                                    if (*(*(data_61c8c8 + 0xab0) + data_61c90c * 0x81c0 + 1) == 0)
                                        ebx_1 = 0
                                
                                if (ebp[-6] == 0xd)
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
                                    bool o_15 = unimplemented  {imul eax, dword [0x61c90c], 0x1038}
                                    
                                    if (o_15)
                                        sub_403010()
                                        noreturn
                                    
                                    ebx_1 = *(*(data_61c8c8 + 0xab0) + data_61c90c * 0x81c0 + 1) ^ 1
                                    
                                    if (ebx_1 == 0)
                                        sub_509850()
                                    else
                                        sub_4836b0(data_61c8c8, data_61c90c)
                                    
                                    if (ebx_1 != 0)
                                        sub_50971c()
                                        *(ebp[-1] + 0x1340) = 1
                        else if (ebp[-6] == 0x1b)
                            if (data_77e23c == 1)
                                data_61c90c
                                bool o_16 = unimplemented  {imul eax, dword [0x61c90c], 0x1038}
                                
                                if (o_16)
                                    sub_403010()
                                    noreturn
                                
                                if (*(*(data_61c8c8 + 0xab0) + data_61c90c * 0x81c0 + 1) == 0)
                                    sub_40fa94(data_61cf9c, 1, &ebp[-0xa6])
                                    *(esp_9 - 4) = &ebp[-0xa6]
                                    *(esp_9 - 8) = ebp - 0x2d
                                    void* ebx_2 = ebp[-1]
                                    void* ecx_21
                                    ecx_21.b = 0x38
                                    *(ebx_2 + 0x1d4)
                                    (*(ebx_2 + 0x1d0))()
                                else
                                    sub_509850()
                            else if (*(data_61c8c8 + 0x8a0) == data_61c8cc)
                                sub_44613c(data_61c8c8, edx_53, i_23)
                    else
                        data_61c90c
                        bool o_11 = unimplemented  {imul eax, dword [0x61c90c], 0x1038}
                        
                        if (o_11)
                            sub_403010()
                            noreturn
                        
                        edx_53 = *(data_61c8c8 + 0xab0)
                        
                        if (*(edx_53 + data_61c90c * 0x81c0 + 1) == 0)
                            goto label_4e6e50
                        
                        sub_509890()
                else
                    data_61c8f0
                    bool o_7 = unimplemented  {imul eax, dword [0x61c8f0], 0x1038}
                    
                    if (o_7)
                        sub_403010()
                        noreturn
                    
                    edx_53 = *(data_61c8c8 + 0xab0)
                    
                    if (*(edx_53 + data_61c8f0 * 0x81c0 + 1) == 0)
                        goto label_4e6e19
                    
                    data_61c8f0
                    bool o_8 = unimplemented  {imul eax, dword [0x61c8f0], 0x1038}
                    
                    if (o_8)
                        sub_403010()
                        noreturn
                    
                    edx_53 = *(data_61c8c8 + 0xab0)
                    
                    if (sx.d(*(edx_53 + data_61c8f0 * 0x81c0 + 0x8134)) != data_61c9c4)
                        goto label_4e6e19
                    
                    *(esp_9 - 4) = 0
                    *(esp_9 - 8) = &ebp[-0xa]
                    data_61c8f0
                    data_61c8c8
                    ebp = sub_47a7ec(data_61c9c4)
                    
                    if (ebp[-0xa] != 0)
                        esi_2 = sub_514468(data_61c9f0, ebp[-0xa])
                    
                    *(esp_9 - 4) = 0
                    sub_47ab08(data_61c8c8, data_61c8f0, data_61c9c4, x87_r0)
                    data_61c8f0
                    bool o_9 = unimplemented  {imul eax, dword [0x61c8f0], 0x1038}
                    
                    if (o_9)
                        sub_403010()
                        noreturn
                    
                    data_61c9c4
                    bool o_10 = unimplemented  {imul edx, dword [0x61c9c4], 0x23}
                    
                    if (o_10)
                        sub_403010()
                        noreturn
                    
                    *(*(data_61c8c8 + 0xab0) + data_61c8f0 * 0x81c0 + data_61c9c4 * 0x118 - 0x86) = 0
                    *(ebp[-1] + 0x1340) = 1
                
                if (sub_404078(data_61c8c4) s> 0x20)
                    sub_4042c0(&data_61c8c4, 1, 1)
                
                ebp[-6]
                sub_403fa0()
                sub_404080(&data_61c8c4, ebp[-0xa7])
                *(esp_9 - 4) = &ebp[-0xa8]
                int32_t eax_184 = sub_404078(data_61c8c4)
                
                if (add_overflow(eax_184, 0xfffffffc))
                    sub_403010()
                    noreturn
                
                sub_404280(5, eax_184 - 4, data_61c8c4)
                int32_t ecx_23 = sub_404188(ebp[-0xa8], "BETAX")
                
                if (eax_184 == 4)
                    void* eax_187
                    eax_187.b = *(ebp[-1] + 0xce0)
                    eax_187.b ^= 1
                    *(ebp[-1] + 0xce0) = eax_187.b
                    *(esp_9 - 4) = 0
                    ecx_23 = sub_51ad40(data_780c5c, 2)
                
                if (ebp[-6] == 0x70)
                    char eax_190
                    eax_190, ecx_23 = sub_47a078(data_61c8c8, data_61cf9c, data_61cd88)
                    
                    if (eax_190 != 0)
                        ecx_23 = sub_4d81c8(data_61c8c8)
                
                if (*(ebp[-1] + 0xce0) != 0)
                    if (ebp[-6] == 0xbb)
                        data_77e23c = 0
                        sub_4c93fc()
                        sub_4837ec(data_61c8c8, data_61cda4, false)
                        sub_4837ec(data_61c8c8, data_61cdc8, false)
                        sub_48380c(ebp[-1], data_61c8d0)
                        sub_4834fc(ebp[-1], data_61c8cc)
                        sub_502898()
                        sub_4837d0(ebp[-1], data_61c8d4)
                        sub_48380c(ebp[-1], data_61c8cc)
                        data_77e23c = 1
                        ecx_23 = sub_528320(data_780c58, *(data_780c58 + 4), 0)
                    
                    if (ebp[-6] == 0xbf)
                        ebp[-1]
                        ebp = sub_4d7b54(ecx_23, 1, esi_2, edi_1)
                        esp_9 += 0x20
            else if (ebp[-5] == 0xfffffff7)
                sub_51a838(data_780c5c, 0)
            else if (ebp[-5] == 0xfffffff6)
                arg2.b = 1
                sub_51a838(data_780c5c, arg2.b)
            else if (ebp[-5] != 0xfffffff9)
                if (ebp[-5] == 0xffffffff)
                    char* ecx_26
                    int32_t esi_3
                    ecx_26, esi_3 = sub_468ec0(*(sub_468970(ebp[-1], "english", 2) - 4))
                    void* ebp_3 = sub_4804e4(data_61c8c8, "Objekte erstellen..", ecx_26)
                    sub_480534(data_61c8c8, 0x14, 1)
                    data_61c8c8
                    sub_46accc()
                    *(ebp_3 - 4)
                    sub_4dd1e0()
                    data_61c8c8
                    sub_46accc()
                    *(ebp_3 - 4)
                    char* ecx_28 = sub_4dd144()
                    void* ebp_4 = sub_4804e4(data_61c8c8, "Einstellungen laden..", ecx_28)
                    sub_480534(data_61c8c8, 0x16, 1)
                    data_61c8c8
                    sub_46accc()
                    void* ebp_5 = sub_46d9ac(*(ebp_4 - 4))
                    data_61c8c8
                    sub_46accc()
                    data_61c8c8
                    sub_46accc()
                    int32_t ecx_30
                    ecx_30.b = 1
                    *(ebp_5 - 4)
                    sub_4dc3b8(ecx_30, 1, esi_3, edi_1)
                    void* esp_64 = esp_9 + 0x20
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
                        *(esp_64 - 4) = data_780da8
                        sub_47ab08(data_61c8c8, data_61cae4, data_61cbb0, x87_r0)
                        *(esp_64 - 4) = data_780da8
                        sub_47ab08(data_61c8c8, data_61caec, data_61cbb4, x87_r0)
                        *(esp_64 - 4) = data_780da8
                        sub_47ab08(data_61c8c8, data_61c8f0, data_61c9dc, x87_r0)
                        
                        if (data_780dac == 0)
                            *(esp_64 - 4) = 2
                            sub_47b304(data_61cbc4, data_61cae4, data_61c8c8)
                            *(esp_64 - 4) = 2
                            sub_47b304(data_61cbc8, data_61caec, data_61c8c8)
                            *(esp_64 - 4) = 2
                            sub_47b304(data_61cbcc, data_61c8f0, data_61c8c8)
                            *(esp_64 - 4) = 2
                            sub_47b304(data_61cbd0, data_61c8fc, data_61c8c8)
                            *(esp_64 - 4) = 4
                            sub_47b304(data_61cc60, data_61cabc, data_61c8c8)
                            *(data_780c58 + 0x111d0) = 4
                        else
                            *(esp_64 - 4) = 1
                            sub_47b304(data_61cbc4, data_61cae4, data_61c8c8)
                            *(esp_64 - 4) = 1
                            sub_47b304(data_61cbc8, data_61caec, data_61c8c8)
                            *(esp_64 - 4) = 1
                            sub_47b304(data_61cbcc, data_61c8f0, data_61c8c8)
                            *(esp_64 - 4) = 1
                            sub_47b304(data_61cbd0, data_61c8fc, data_61c8c8)
                            *(esp_64 - 4) = 1
                            sub_47b304(data_61cc60, data_61cabc, data_61c8c8)
                            *(data_780c58 + 0x111d0) = 1
                    
                    data_61c8c8
                    sub_46accc()
                    data_61c8c8
                    sub_46accc()
                    data_61c8c8
                    sub_46accc()
                    void* ebp_6
                    int32_t esi_4
                    ebp_6, esi_4 = sub_468970(*(ebp_5 - 4), "english", 2)
                    sub_4692e4(*(ebp_6 - 4), esi_4, edi_1)
                    sub_468afc(*(ebp_6 - 4))
                    *(esp_64 - 4) = 1
                    sub_47a140(data_61cbac, data_61cab8, data_61c8c8)
                    *(esp_64 - 4) = 0
                    sub_47a1c0(data_61cbac, data_61cab8, data_61c8c8)
                    data_61cab8
                    int32_t edx_118 = data_61cab8 * 0x1038
                    bool o_18 = unimplemented  {imul edx, dword [0x61cab8], 0x1038}
                    
                    if (o_18)
                        sub_403010()
                        noreturn
                    
                    data_61cc18
                    int32_t eax_250 = data_61cc18 * 0x23
                    bool o_19 = unimplemented  {imul eax, dword [0x61cc18], 0x23}
                    
                    if (o_19)
                        sub_403010()
                        noreturn
                    
                    int32_t ecx_49 =
                        sx.d(*(*(data_61c8c8 + 0xab0) + (edx_118 << 3) + (eax_250 << 3) - 0x20c))
                    
                    if (add_overflow(ecx_49, 8))
                        sub_403010()
                        noreturn
                    
                    *(*(data_61c8c8 + 0xab0) + (edx_118 << 3) + (eax_250 << 3) - 0x20c) = ecx_49.w + 8
                    data_61cab8
                    int32_t edx_120 = data_61cab8 * 0x1038
                    bool o_21 = unimplemented  {imul edx, dword [0x61cab8], 0x1038}
                    
                    if (o_21)
                        sub_403010()
                        noreturn
                    
                    data_61cc00
                    int32_t eax_251 = data_61cc00 * 0x23
                    bool o_22 = unimplemented  {imul eax, dword [0x61cc00], 0x23}
                    
                    if (o_22)
                        sub_403010()
                        noreturn
                    
                    int32_t ecx_54 =
                        sx.d(*(*(data_61c8c8 + 0xab0) + (edx_120 << 3) + (eax_251 << 3) - 0xf4))
                    
                    if (add_overflow(ecx_54, 0xffffffdd))
                        sub_403010()
                        noreturn
                    
                    *(*(data_61c8c8 + 0xab0) + (edx_120 << 3) + (eax_251 << 3) - 0xf4) = ecx_54.w - 0x23
                    data_61cab8
                    int32_t edx_122 = data_61cab8 * 0x1038
                    bool o_24 = unimplemented  {imul edx, dword [0x61cab8], 0x1038}
                    
                    if (o_24)
                        sub_403010()
                        noreturn
                    
                    data_61cc10
                    int32_t eax_252 = data_61cc10 * 0x23
                    bool o_25 = unimplemented  {imul eax, dword [0x61cc10], 0x23}
                    
                    if (o_25)
                        sub_403010()
                        noreturn
                    
                    int32_t ecx_59 =
                        sx.d(*(*(data_61c8c8 + 0xab0) + (edx_122 << 3) + (eax_252 << 3) - 0xf4))
                    
                    if (add_overflow(ecx_59, 0xffffffdd))
                        sub_403010()
                        noreturn
                    
                    *(*(data_61c8c8 + 0xab0) + (edx_122 << 3) + (eax_252 << 3) - 0xf4) = ecx_59.w - 0x23
                    ebp = sub_46910c(data_61c8c8, "f_kurz1", ebp_6 - 0x2a4)
                    *(esp_64 - 4) = ebp[-0xa9]
                    int32_t ecx_63 = sub_47ab08(data_61c8c8, data_61cab8, data_61cc00, x87_r0)
                    esp_9 = esp_64
                    ebp[-1]
                    sub_4d63bc(ecx_63)
                else if (*(data_61c8c8 + 0x10d8) != ebp[-5])
                    if (*(data_61c8c8 + 0x10d4) == ebp[-5])
                        if (*(data_780c58 + 4) == 7)
                            sub_46e24c(ebp[-1], esi_2, edi_1)
                            esp_9 += 0x20
                            sub_4ca054()
                        
                        ebp[-6]
                    else if (ebp[-5] != data_61cda4)
                        if (ebp[-5] != data_61cac0)
                            if (ebp[-5] != data_61cac4)
                                if (ebp[-5] == data_61ccfc)
                                    if (ebp[-6] == data_61cd74)
                                        ebp[-7] = 1
                                    else if (ebp[-6] == data_61cd60)
                                        ebp[-7] = 1
                                    else if (ebp[-6] == data_61cd64)
                                        ebp[-7] = 2
                                    else if (ebp[-6] == data_61cd68)
                                        ebp[-7] = 1
                                    else if (ebp[-6] == data_61cd6c)
                                        ebp[-7] = 2
                                    else if (ebp[-6] == data_61cd70)
                                        ebp[-7] = 3
                                    else if (ebp[-6] == data_61cd04)
                                        ebp[-7] = 1
                                    else if (ebp[-6] == data_61cd08)
                                        ebp[-7] = 2
                                    else if (ebp[-6] == data_61cd0c)
                                        ebp[-7] = 3
                                    else if (ebp[-6] == data_61cd10)
                                        ebp[-7] = 4
                                    else if (ebp[-6] == data_61cd14)
                                        ebp[-7] = 1
                                    else if (ebp[-6] == data_61cd18)
                                        ebp[-7] = 2
                                    else if (ebp[-6] == data_61cd1c)
                                        ebp[-7] = 3
                                    else if (ebp[-6] == data_61cd20)
                                        ebp[-7] = 4
                                    else if (ebp[-6] == data_61cd24)
                                        ebp[-7] = 5
                                    else if (ebp[-6] == data_61cd28)
                                        ebp[-7] = 1
                                    else if (ebp[-6] == data_61cd2c)
                                        ebp[-7] = 2
                                    else if (ebp[-6] == data_61cd30)
                                        ebp[-7] = 3
                                    else if (ebp[-6] == data_61cd34)
                                        ebp[-7] = 4
                                    else if (ebp[-6] == data_61cd38)
                                        ebp[-7] = 5
                                    else if (ebp[-6] == data_61cd3c)
                                        ebp[-7] = 5
                                    else if (ebp[-6] == data_61cd5c)
                                        ebp[-7] = 8
                                    else if (ebp[-6] == data_61cd40)
                                        ebp[-7] = 1
                                    else if (ebp[-6] == data_61cd44)
                                        ebp[-7] = 2
                                    else if (ebp[-6] == data_61cd48)
                                        ebp[-7] = 3
                                    else if (ebp[-6] == data_61cd4c)
                                        ebp[-7] = 4
                                    else if (ebp[-6] == data_61cd50)
                                        ebp[-7] = 5
                                    else if (ebp[-6] == data_61cd54)
                                        ebp[-7] = 6
                                    else if (ebp[-6] == data_61cd58)
                                        ebp[-7] = 7
                                    
                                    i_23.b = 0x20
                                    sub_402e64(&ebp[-0xb5], (data_61cd80).b, i_23.b)
                                    int32_t eax_328 = data_61cd84
                                    
                                    if (eax_328 u<= 0xff)
                                        ebp[-0xb5] |= 1 << (eax_328 u% 0x20)
                                    
                                    int32_t eax_329 = ebp[-6]
                                    bool c_5 = eax_329 u< 0xff
                                    
                                    if (eax_329 == 0xff || c_5)
                                        c_5 = test_bit(ebp[-0xb5], eax_329)
                                    
                                    if (not(c_5))
                                        sub_402e64(&ebp[-0xb5], (data_61cd78).b, 0x20)
                                        int32_t eax_352 = data_61cd7c
                                        
                                        if (eax_352 u<= 0xff)
                                            ebp[-0xb5] |= 1 << (eax_352 u% 0x20)
                                        
                                        int32_t eax_353 = ebp[-6]
                                        bool c_6 = eax_353 u< 0xff
                                        
                                        if (eax_353 == 0xff || c_6)
                                            c_6 = test_bit(ebp[-0xb5], eax_353)
                                        
                                        if (not(c_6))
                                            ebp[-8] = sx.d(*(data_780c58 + (ebp[-7] << 1) + 0x10872))
                                            sub_4837d0(ebp[-1], ebp[-5])
                                            int32_t edx_181
                                            
                                            if (*(data_780c58 + 4) == 7)
                                                ebp[-7] = *(data_780c58 + 0x210fc)
                                                *(esp_9 - 4) = ebp[-8]
                                                *(esp_9 - 8) = 0
                                                *(esp_9 - 0xc) = 0
                                                *(esp_9 - 0x10) = 0
                                                edx_181.b = 2
                                                sub_527230(ebp[-7], edx_181, data_780c58)
                                            else if (*(data_780c58 + 4) != 6)
                                                *(esp_9 - 4) = ebp[-8]
                                                *(esp_9 - 8) = 0
                                                *(esp_9 - 0xc) = 0
                                                *(esp_9 - 0x10) = 0
                                                edx_181.b = 2
                                                sub_527230(0, edx_181, data_780c58)
                                            else
                                                *(esp_9 - 4) = ebp[-8]
                                                *(esp_9 - 8) = 0
                                                *(esp_9 - 0xc) = 0
                                                *(esp_9 - 0x10) = 0
                                                edx_181.b = 2
                                                sub_527230(ebp[-7], edx_181, data_780c58)
                                        else
                                            if (ebp[-6] == data_61cd78)
                                                int32_t eax_356 = *(data_780c58 + 0x21108)
                                                int32_t eax_357 = eax_356 s>> 1
                                                bool c_7 = unimplemented  {sar eax, 0x1}
                                                
                                                if (eax_356 s>> 1 s< 0)
                                                    eax_357 = adc.d(eax_357, 0, c_7)
                                                
                                                void* edx_162 = data_780c58
                                                int32_t temp56_1 = *(edx_162 + 0x210fc)
                                                *(edx_162 + 0x210fc) += eax_357
                                                
                                                if (add_overflow(temp56_1, eax_357))
                                                    sub_403010()
                                                    noreturn
                                            
                                            if (ebp[-6] == data_61cd7c)
                                                int32_t eax_360 = *(data_780c58 + 0x21108)
                                                int32_t eax_361 = eax_360 s>> 1
                                                bool c_8 = unimplemented  {sar eax, 0x1}
                                                
                                                if (eax_360 s>> 1 s< 0)
                                                    eax_361 = adc.d(eax_361, 0, c_8)
                                                
                                                void* edx_163 = data_780c58
                                                int32_t temp61_1 = *(edx_163 + 0x210fc)
                                                *(edx_163 + 0x210fc) -= eax_361
                                                
                                                if (add_overflow(temp61_1, neg.d(eax_361)))
                                                    sub_403010()
                                                    noreturn
                                            
                                            void* eax_362 = data_780c58
                                            *(eax_362 + 0x10020)
                                            bool o_41 =
                                                unimplemented  {imul eax, dword [eax+0x10020], 0x41}
                                            
                                            if (o_41)
                                                sub_403010()
                                                noreturn
                                            
                                            *(esp_9 - 4) =
                                                *(data_780c58 + *(eax_362 + 0x10020) * 0x208 + 0x1fea4)
                                            int32_t eax_365 = *(data_780c58 + 0x21104)
                                            int32_t edx_165 = *(esp_9 - 4)
                                            int32_t eax_366 = eax_365 - edx_165
                                            
                                            if (add_overflow(eax_365, neg.d(edx_165)))
                                                sub_403010()
                                                noreturn
                                            
                                            if (*(data_780c58 + 0x210f8) s> *(data_780c58 + 0x210fc))
                                                *(data_780c58 + 0x210fc) = *(data_780c58 + 0x210f8)
                                            
                                            void* edx_170 = data_780c58
                                            *(edx_170 + 0x10020)
                                            bool o_43 =
                                                unimplemented  {imul edx, dword [edx+0x10020], 0x41}
                                            
                                            if (o_43)
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t edx_172 =
                                                *(data_780c58 + *(edx_170 + 0x10020) * 0x208 + 0x20078)
                                            
                                            if (add_overflow(edx_172, neg.d(eax_366)))
                                                sub_403010()
                                                noreturn
                                            
                                            if (edx_172 - eax_366 s< *(data_780c58 + 0x210fc))
                                                void* edx_174 = data_780c58
                                                *(edx_174 + 0x10020)
                                                bool o_45 =
                                                    unimplemented  {imul edx, dword [edx+0x10020], 0x41}
                                                
                                                if (o_45)
                                                    sub_403010()
                                                    noreturn
                                                
                                                int32_t edx_176 = *(data_780c58
                                                    + *(edx_174 + 0x10020) * 0x208 + 0x20078)
                                                
                                                if (add_overflow(edx_176, neg.d(eax_366)))
                                                    sub_403010()
                                                    noreturn
                                                
                                                *(data_780c58 + 0x210fc) = edx_176 - eax_366
                                            
                                            ebp = sub_4cda5c(*(data_780c58 + 0x210fc), 0, &ebp[-0xb9])
                                            sub_4040c4(&ebp[-0xb8], U"!", ebp[-0xb9])
                                            *(esp_9 - 4) = ebp[-0xb8]
                                            sub_4cc428(sub_47ab08(data_61c8c8, ebp[-5], data_61cd0c, 
                                                x87_r0))
                                    else
                                        if (ebp[-6] == data_61cd80)
                                            void* eax_331 = data_780c58
                                            *(eax_331 + 0x21108)
                                            int32_t eax_332 = *(eax_331 + 0x21108) * 2
                                            bool o_29 =
                                                unimplemented  {imul eax, dword [eax+0x21108], 0x2}
                                            
                                            if (o_29)
                                                sub_403010()
                                                noreturn
                                            
                                            void* edx_142 = data_780c58
                                            int32_t temp43_1 = *(edx_142 + 0x210fc)
                                            *(edx_142 + 0x210fc) += eax_332
                                            
                                            if (add_overflow(temp43_1, eax_332))
                                                sub_403010()
                                                noreturn
                                        
                                        if (ebp[-6] == data_61cd84)
                                            void* eax_334 = data_780c58
                                            *(eax_334 + 0x21108)
                                            int32_t eax_335 = *(eax_334 + 0x21108) * 2
                                            bool o_31 =
                                                unimplemented  {imul eax, dword [eax+0x21108], 0x2}
                                            
                                            if (o_31)
                                                sub_403010()
                                                noreturn
                                            
                                            void* edx_143 = data_780c58
                                            int32_t temp48_1 = *(edx_143 + 0x210fc)
                                            *(edx_143 + 0x210fc) -= eax_335
                                            
                                            if (add_overflow(temp48_1, neg.d(eax_335)))
                                                sub_403010()
                                                noreturn
                                        
                                        if (*(data_780c58 + 0x210ec) s< *(data_780c58 + 0x210fc))
                                            *(data_780c58 + 0x210fc) = *(data_780c58 + 0x210ec)
                                        
                                        void* eax_340 = data_780c58
                                        *(eax_340 + 0x10020)
                                        bool o_33 = unimplemented  {imul eax, dword [eax+0x10020], 0x41}
                                        
                                        if (o_33)
                                            sub_403010()
                                            noreturn
                                        
                                        *(esp_9 - 4) =
                                            *(data_780c58 + *(eax_340 + 0x10020) * 0x208 + 0x1fea4)
                                        int32_t eax_343 = *(data_780c58 + 0x21104)
                                        int32_t edx_147 = *(esp_9 - 4)
                                        int32_t eax_344 = eax_343 - edx_147
                                        
                                        if (add_overflow(eax_343, neg.d(edx_147)))
                                            sub_403010()
                                            noreturn
                                        
                                        if (*(data_780c58 + 0x210f8) s> *(data_780c58 + 0x210fc))
                                            *(data_780c58 + 0x210fc) = *(data_780c58 + 0x210f8)
                                        
                                        void* edx_152 = data_780c58
                                        *(edx_152 + 0x10020)
                                        bool o_35 = unimplemented  {imul edx, dword [edx+0x10020], 0x41}
                                        
                                        if (o_35)
                                            sub_403010()
                                            noreturn
                                        
                                        int32_t edx_154 =
                                            *(data_780c58 + *(edx_152 + 0x10020) * 0x208 + 0x20078)
                                        
                                        if (add_overflow(edx_154, neg.d(eax_344)))
                                            sub_403010()
                                            noreturn
                                        
                                        if (edx_154 - eax_344 s< *(data_780c58 + 0x210fc))
                                            void* edx_156 = data_780c58
                                            *(edx_156 + 0x10020)
                                            bool o_37 =
                                                unimplemented  {imul edx, dword [edx+0x10020], 0x41}
                                            
                                            if (o_37)
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t edx_158 =
                                                *(data_780c58 + *(edx_156 + 0x10020) * 0x208 + 0x20078)
                                            
                                            if (add_overflow(edx_158, neg.d(eax_344)))
                                                sub_403010()
                                                noreturn
                                            
                                            *(data_780c58 + 0x210fc) = edx_158 - eax_344
                                        
                                        ebp = sub_4cda5c(*(data_780c58 + 0x210fc), 0, &ebp[-0xb7])
                                        sub_4040c4(&ebp[-0xb6], U"!", ebp[-0xb7])
                                        *(esp_9 - 4) = ebp[-0xb6]
                                        sub_4cc428(sub_47ab08(data_61c8c8, ebp[-5], data_61cd0c, 
                                            x87_r0))
                                else if (ebp[-5] != data_61ccb0)
                                    if (ebp[-5] != data_61ccac)
                                        if (ebp[-5] != data_61cf9c)
                                            if (ebp[-5] != data_61cb2c)
                                            label_4e9746:
                                                
                                                if (ebp[-5] != data_61cb28)
                                                    char eax_700
                                                    
                                                    if (ebp[-5] == data_61cb30)
                                                        eax_700 = sub_4c0924()
                                                    
                                                    if (ebp[-5] == data_61cb30 && eax_700 != 0)
                                                        sub_48380c(ebp[-1], data_61cb30)
                                                        
                                                        if (sub_4c2f1c(1) != 0)
                                                            *(data_61c9f0 + 0x1e0) = 1
                                                        
                                                        *(data_61c9f0 + 0x9c) = 4
                                                        int32_t ecx_153 = sub_513e4c(data_61c9f0, 0)
                                                        
                                                        if (*(data_61c9f0 + 0x1e0) == 0)
                                                            *(data_61c9f0 + 0x1b4) = 0
                                                            ecx_153 = sub_510f54(data_61c9f0, 0)
                                                        
                                                        data_780c58
                                                        sub_520efc(ecx_153, 1, esi_2, edi_1)
                                                        esp_9 += 0x20
                                                        int32_t ecx_154 =
                                                            sub_4836b0(data_61c8c8, data_61cb2c)
                                                        
                                                        if (sub_4c094c() != 0)
                                                            data_61c9f0
                                                            
                                                            if (sub_50d2f4() != 0
                                                                    && *(data_7a6e5c + 0x48) s< 5)
                                                                ecx_154 =
                                                                    sub_478234(data_61c8c8, data_61cb2c, 2)
                                                        
                                                        if (sub_4c094c() != 0)
                                                            data_61c90c
                                                            bool o_108 = unimplemented  {imul eax, 
                                                                dword [0x61c90c], 0x1038}
                                                            
                                                            if (o_108)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            if (*(*(data_61c8c8 + 0xab0)
                                                                    + data_61c90c * 0x81c0 + 1) != 0)
                                                                sub_469ac0(data_61c8c8, data_61c90c, 
                                                                    ecx_154)
                                                    else if (ebp[-5] != data_61cb24)
                                                        if (ebp[-5] == data_61ca54)
                                                            ebp[-7] = 1
                                                            ebp[-0xd] = 0x61ca58
                                                            
                                                            do
                                                                if (*ebp[-0xd] == ebp[-6])
                                                                    sub_516e74(&data_61d714)
                                                                    sub_51801c(0x6260c4, ebp[-7])
                                                                    sub_516ec0(&data_61d714)
                                                                
                                                                ebp[-7] += 1
                                                                ebp[-0xd] += 4
                                                            while (ebp[-7] != 0x15)
                                                        else if (ebp[-5] != data_61ca1c)
                                                            int32_t edx_376 = ebp[-5]
                                                            ebp[-1]
                                                            char eax_756
                                                            struct _EXCEPTION_REGISTRATION_RECORD* 
                                                                ecx_160
                                                            eax_756, ecx_160 =
                                                                sub_4d815c(&data_61cac8, edx_376)
                                                            
                                                            if (eax_756 == 0)
                                                                edx_376 = data_61ca48
                                                                ecx_160.b = 0x20
                                                                ecx_160 = sub_402e64(&ebp[-0xb5], 
                                                                    edx_376.b, ecx_160.b)
                                                                int32_t eax_758 = data_61ca4c
                                                                
                                                                if (eax_758 u<= 0xff)
                                                                    ebp[-0xb5] |= 1 << (eax_758 u% 0x20)
                                                                
                                                                int32_t eax_759 = data_61ca50
                                                                
                                                                if (eax_759 u<= 0xff)
                                                                    ebp[-0xb5] |= 1 << (eax_759 u% 0x20)
                                                                
                                                                int32_t eax_760 = data_61ca1c
                                                                
                                                                if (eax_760 u<= 0xff)
                                                                    ebp[-0xb5] |= 1 << (eax_760 u% 0x20)
                                                                
                                                                int32_t eax_761 = ebp[-5]
                                                                bool c_12 = eax_761 u< 0xff
                                                                
                                                                if (eax_761 == 0xff || c_12)
                                                                    c_12 = test_bit(ebp[-0xb5], eax_761)
                                                                
                                                                if (not(c_12) || ebp[-6] != 2)
                                                                    goto label_4e9e3c
                                                                
                                                                sub_48380c(ebp[-1], ebp[-5])
                                                            else if (ebp[-6] != 2)
                                                            label_4e9e3c:
                                                                
                                                                if (*((zx.d(*(data_780c58 + 4)) << 2) +
                                                                        &data_61cac8) == ebp[-5] && *(
                                                                        (zx.d(*(data_780c58 + 4)) << 2) +
                                                                        &data_61cb00) == ebp[-6])
                                                                    *(esp_9 - 4) = 0
                                                                    *(esp_9 - 8) = *(ebp[-1] + 0xa64)
                                                                    *(esp_9 - 0xc) = "\data\settings\di_"
                                                                    sub_408e1c(
                                                                        *((zx.d(*(data_780c58 + 4)) << 2) +
                                                                            &data_61cac8), 
                                                                        &ebp[-0xd4])
                                                                    *(esp_9 - 0x10) = ebp[-0xd4]
                                                                    *(esp_9 - 0x14) = "_def.dco"
                                                                    sub_404138(&ebp[-0xd3], 4)
                                                                    *((zx.d(*(data_780c58 + 4)) << 2) +
                                                                        &data_61cac8)
                                                                    data_61c8c8
                                                                    sub_46f698(ebp[-0xd3], esi_2, edi_1)
                                                                    esp_9 += 0x20
                                                                    
                                                                    if (ebp[-5] == data_61cae4)
                                                                        ebp[-5]
                                                                        bool o_112 = unimplemented  {imul eax, 
                                                                            dword [ebp-0x14], 0x1038}
                                                                        
                                                                        if (o_112)
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        ebp[-6]
                                                                        bool o_113 = unimplemented  {imul edx, 
                                                                            dword [ebp-0x18], 0x23}
                                                                        
                                                                        if (o_113)
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        if (*(*(ebp[-1] + 0xab0)
                                                                                + ebp[-5] * 0x81c0 + ebp[-6] * 0x118
                                                                                - 0x70) s> 0)
                                                                            ebp[-5]
                                                                            bool o_114 = unimplemented  {imul eax, 
                                                                                dword [ebp-0x14], 0x1038}
                                                                            
                                                                            if (o_114)
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            ebp[-6]
                                                                            bool o_115 = unimplemented  {imul edx, 
                                                                                dword [ebp-0x18], 0x23}
                                                                            
                                                                            if (o_115)
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            int32_t edx_387 = ebp[-6]
                                                                            
                                                                            if (add_overflow(edx_387, 0xffffffff))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            int32_t edx_388
                                                                            edx_388.b = sx.d(*(*(ebp[-1] + 0xab0)
                                                                                + ebp[-5] * 0x81c0 + ebp[-6] * 0x118
                                                                                - 0x70)) == edx_387 - 1
                                                                            ebp[-5]
                                                                            bool o_117 = unimplemented  {imul eax, 
                                                                                dword [ebp-0x14], 0x1038}
                                                                            
                                                                            if (o_117)
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            ebp[-6]
                                                                            bool o_118 = unimplemented  {imul ecx, 
                                                                                dword [ebp-0x18], 0x23}
                                                                            
                                                                            if (o_118)
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            *(*(ebp[-1] + 0xab0) + ebp[-5] * 0x81c0
                                                                                + ebp[-6] * 0x118 - 0x70)
                                                                            sub_4c2418()
                                                                        else
                                                                            ebp[-6]
                                                                            sub_4c2418()
                                                                else if (ebp[-5] == data_61cacc)
                                                                    if (ebp[-6] != 4)
                                                                        ebp[-6]
                                                                    
                                                                    if (ebp[-6] == 0x25)
                                                                        sub_5170a4()
                                                                    
                                                                    if (ebp[-6] == data_780c90)
                                                                        sub_4836b0(ebp[-1], data_61ca48)
                                                                    else if (ebp[-6] == data_780c94)
                                                                        sub_4836b0(ebp[-1], data_61ca4c)
                                                                    else if (ebp[-6] == data_780c98)
                                                                        sub_4836b0(ebp[-1], data_61ca50)
                                                                    
                                                                    sub_516eec()
                                                                else if (ebp[-5] == data_61cae4)
                                                                    if (ebp[-6] == data_61cbbc)
                                                                        sub_4d69e8(ebp[-1], 1)
                                                                    else if (ebp[-6] == 2)
                                                                        sub_48380c(ebp[-1], ebp[-5])
                                                                    else if (ebp[-6] == data_61cbe8)
                                                                        sub_4d7ff0(ebp[-1])
                                                                        sub_4d6b10(ebp[-1], 1)
                                                                        sub_4836b0(ebp[-1], data_61cabc)
                                                                    
                                                                    ebp[-5]
                                                                    bool o_119 = unimplemented  {imul eax, 
                                                                        dword [ebp-0x14], 0x1038}
                                                                    
                                                                    if (o_119)
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    ebp[-6]
                                                                    bool o_120 = unimplemented  {imul edx, 
                                                                        dword [ebp-0x18], 0x23}
                                                                    
                                                                    if (o_120)
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    if (*(*(ebp[-1] + 0xab0)
                                                                            + ebp[-5] * 0x81c0 + ebp[-6] * 0x118
                                                                            - 0x70) s> 0)
                                                                        ebp[-5]
                                                                        bool o_121 = unimplemented  {imul eax, 
                                                                            dword [ebp-0x14], 0x1038}
                                                                        
                                                                        if (o_121)
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        ebp[-6]
                                                                        bool o_122 = unimplemented  {imul edx, 
                                                                            dword [ebp-0x18], 0x23}
                                                                        
                                                                        if (o_122)
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        int32_t edx_402 = ebp[-6]
                                                                        
                                                                        if (add_overflow(edx_402, 0xffffffff))
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        int32_t edx_403
                                                                        edx_403.b = sx.d(*(*(ebp[-1] + 0xab0)
                                                                            + ebp[-5] * 0x81c0 + ebp[-6] * 0x118
                                                                            - 0x70)) == edx_402 - 1
                                                                        ebp[-5]
                                                                        bool o_124 = unimplemented  {imul eax, 
                                                                            dword [ebp-0x14], 0x1038}
                                                                        
                                                                        if (o_124)
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        ebp[-6]
                                                                        bool o_125 = unimplemented  {imul ecx, 
                                                                            dword [ebp-0x18], 0x23}
                                                                        
                                                                        if (o_125)
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        *(*(ebp[-1] + 0xab0) + ebp[-5] * 0x81c0
                                                                            + ebp[-6] * 0x118 - 0x70)
                                                                        sub_4c2418()
                                                                    else
                                                                        ebp[-6]
                                                                        sub_4c2418()
                                                                else if (ebp[-5] != data_61cab8)
                                                                    if (ebp[-5] != data_61cabc)
                                                                        if (ebp[-5] != data_61cab4)
                                                                            if (ebp[-5] != data_61c8d0)
                                                                                if (ebp[-5] != data_61c8dc)
                                                                                    if (ebp[-5] != data_61caec)
                                                                                        if (ebp[-5] != data_61c8e4)
                                                                                            if (ebp[-5] == data_61cdc8)
                                                                                                sub_4eca90(ebp[-6])
                                                                                            else if (ebp[-5] != data_61c8fc)
                                                                                                if (ebp[-5] != data_61cdc4)
                                                                                                    if (ebp[-5] != data_61c8f8)
                                                                                                        if (ebp[-5] != data_61c8f4)
                                                                                                            if (ebp[-5] != data_61c90c)
                                                                                                                if (ebp[-5] == data_61c8f0)
                                                                                                                    int32_t eax_1030 = data_61cbcc
                                                                                                                    
                                                                                                                    if (add_overflow(eax_1030, 1))
                                                                                                                        sub_403010()
                                                                                                                        noreturn
                                                                                                                    
                                                                                                                    if (eax_1030 + 1 == ebp[-6])
                                                                                                                        sub_5072b8(ecx_160)
                                                                                                                        ebp = sub_51497c(data_61c9f0, 0, 0)
                                                                                                                    else if (ebp[-6] == data_61c9c8)
                                                                                                                        *(esp_9 - 4) = 0
                                                                                                                        *(esp_9 - 8) = &ebp[-0xa]
                                                                                                                        data_61c8f0
                                                                                                                        data_61c8c8
                                                                                                                        ebp = sub_47a7ec(data_61c9c4)
                                                                                                                        
                                                                                                                        if (ebp[-0xa] != 0)
                                                                                                                            sub_514468(data_61c9f0, ebp[-0xa])
                                                                                                                        
                                                                                                                        *(esp_9 - 4) = 0
                                                                                                                        sub_47ab08(data_61c8c8, data_61c8f0, 
                                                                                                                            data_61c9c4, x87_r0)
                                                                                                                    else if (ebp[-6] == data_61c9d8)
                                                                                                                        void* esp_338
                                                                                                                        
                                                                                                                        if (*(data_61c9f0 + 0x344) == 0)
                                                                                                                            void* ebp_21 = sub_46910c(ebp[-1], 
                                                                                                                                "f_lochost", &ebp[-0x128])
                                                                                                                            *(esp_9 - 4) = *(ebp_21 - 0x4a0)
                                                                                                                            *(esp_9 - 8) = &data_4ec3c8
                                                                                                                            sub_49574c(
                                                                                                                                *(*(data_61c9f0 + 0x94) + 0x80), 
                                                                                                                                ebp_21 - 0x4a4)
                                                                                                                            *(esp_9 - 0xc) = *(ebp_21 - 0x4a4)
                                                                                                                            sub_404138(ebp_21 - 0x28, 3)
                                                                                                                            *(esp_9 + 0x14) = *(ebp_21 - 0x28)
                                                                                                                            *(esp_9 + 0x10) = &data_4ec3d4
                                                                                                                            ebp = sub_46910c(*(ebp_21 - 4), 
                                                                                                                                "f_locip", ebp_21 - 0x4a8)
                                                                                                                            *(esp_9 + 0xc) = ebp[-0x12a]
                                                                                                                            *(esp_9 + 8) = &data_4ec3c8
                                                                                                                            sub_4956c0(
                                                                                                                                *(*(data_61c9f0 + 0x94) + 0x80), 
                                                                                                                                &ebp[-0x12b])
                                                                                                                            *(esp_9 + 4) = ebp[-0x12b]
                                                                                                                            sub_404138(&ebp[-0xa], 5)
                                                                                                                            esp_338 = esp_9 + 0x28
                                                                                                                            
                                                                                                                            if (ebp[-0xb] != 0)
                                                                                                                                *(esp_338 - 4) = ebp[-0xa]
                                                                                                                                *(esp_338 - 8) = &data_4ec3d4
                                                                                                                                ebp = sub_46910c(ebp[-1], 
                                                                                                                                    "f_internetip", &ebp[-0x12c])
                                                                                                                                *(esp_338 - 0xc) = ebp[-0x12c]
                                                                                                                                *(esp_338 - 0x10) = &data_4ec3c8
                                                                                                                                *(esp_338 - 0x14) = ebp[-0xb]
                                                                                                                                sub_404138(&ebp[-0xa], 5)
                                                                                                                                esp_338 += 0x10
                                                                                                                        else
                                                                                                                            void* ebp_17 = sub_46910c(ebp[-1], 
                                                                                                                                "f_lochost", &ebp[-0x121])
                                                                                                                            *(esp_9 - 4) = *(ebp_17 - 0x484)
                                                                                                                            *(esp_9 - 8) = &data_4ec3c8
                                                                                                                            sub_4b56b0(ebp_17 - 0x48c)
                                                                                                                            void* ebp_18 = sub_4b570c(
                                                                                                                                *(ebp_17 - 0x48c), ebp_17 - 0x488)
                                                                                                                            *(esp_9 - 0xc) = *(ebp_18 - 0x488)
                                                                                                                            sub_404138(ebp_18 - 0x28, 3)
                                                                                                                            *(esp_9 + 0x14) = *(ebp_18 - 0x28)
                                                                                                                            *(esp_9 + 0x10) = &data_4ec3d4
                                                                                                                            void* ebp_19 = sub_46910c(
                                                                                                                                *(ebp_18 - 4), "f_locip", 
                                                                                                                                ebp_18 - 0x490)
                                                                                                                            *(esp_9 + 0xc) = *(ebp_19 - 0x490)
                                                                                                                            *(esp_9 + 8) = &data_4ec3c8
                                                                                                                            sub_4b56b0(ebp_19 - 0x494)
                                                                                                                            *(esp_9 + 4) = *(ebp_19 - 0x494)
                                                                                                                            sub_404138(ebp_19 - 0x28, 5)
                                                                                                                            esp_338 = esp_9 + 0x28
                                                                                                                            void* ebp_20 = sub_46910c(
                                                                                                                                *(ebp_19 - 4), "f_ipauslesen", 
                                                                                                                                ebp_19 - 0x498)
                                                                                                                            ebp = sub_510ba4(data_7a6e5c, 
                                                                                                                                *(ebp_20 - 0x498), ebp_20 - 0x2c)
                                                                                                                            
                                                                                                                            if (ebp[-0xb] != 0)
                                                                                                                                *(esp_338 - 4) = ebp[-0xa]
                                                                                                                                *(esp_338 - 8) = &data_4ec3d4
                                                                                                                                ebp = sub_46910c(ebp[-1], 
                                                                                                                                    "f_internetip", &ebp[-0x127])
                                                                                                                                *(esp_338 - 0xc) = ebp[-0x127]
                                                                                                                                *(esp_338 - 0x10) = &data_4ec3c8
                                                                                                                                *(esp_338 - 0x14) = ebp[-0xb]
                                                                                                                                sub_404138(&ebp[-0xa], 5)
                                                                                                                                esp_338 += 0x10
                                                                                                                        
                                                                                                                        *(esp_338 - 4) = 0
                                                                                                                        *(esp_338 - 8) = 0
                                                                                                                        *(esp_338 - 0xc) = 0
                                                                                                                        *(esp_338 - 0x10) = 0
                                                                                                                        esp_9 = esp_338 - 0x10
                                                                                                                        sub_4748fc(data_61c8c8, ebp[-0xa], 
                                                                                                                            &data_4ec420)
                                                                                                                    else if (data_61c9a0 s<= ebp[-6]
                                                                                                                            && ebp[-6] s<= data_61c9bc)
                                                                                                                        int32_t edx_512 = ebp[-6]
                                                                                                                        int32_t edx_513 = edx_512 - data_61c9a0
                                                                                                                        
                                                                                                                        if (add_overflow(edx_512, 
                                                                                                                                neg.d(data_61c9a0)))
                                                                                                                            sub_403010()
                                                                                                                            noreturn
                                                                                                                        
                                                                                                                        if (add_overflow(edx_513, 1))
                                                                                                                            sub_403010()
                                                                                                                            noreturn
                                                                                                                        
                                                                                                                        sub_5140f8(data_61c9f0, edx_513 + 1)
                                                                                                                        *(esp_9 - 4) = 0
                                                                                                                        int32_t eax_1067 = ebp[-6]
                                                                                                                        
                                                                                                                        if (add_overflow(eax_1067, 
                                                                                                                                neg.d(data_61c9a0)))
                                                                                                                            sub_403010()
                                                                                                                            noreturn
                                                                                                                        
                                                                                                                        sub_47a1c0(
                                                                                                                            (&data_61c9a0)[eax_1067 - data_61c9a0], 
                                                                                                                            data_61c8f0, data_61c8c8)
                                                                                                                        *(esp_9 - 4) = 0
                                                                                                                        int32_t eax_1070 = ebp[-6]
                                                                                                                        
                                                                                                                        if (add_overflow(eax_1070, 
                                                                                                                                neg.d(data_61c9a0)))
                                                                                                                            sub_403010()
                                                                                                                            noreturn
                                                                                                                        
                                                                                                                        sub_47a180(
                                                                                                                            *(((eax_1070 - data_61c9a0) << 2) +
                                                                                                                                &data_61c980), 
                                                                                                                            data_61c8f0, data_61c8c8)
                                                                                                                    else if (ebp[-6] != data_61c9d4)
                                                                                                                        if (ebp[-6] == data_61c9d0)
                                                                                                                            data_61c8f0
                                                                                                                            bool o_149 = unimplemented  {imul eax, 
                                                                                                                                dword [0x61c8f0], 0x1038}
                                                                                                                            
                                                                                                                            if (o_149)
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
                                                                                                                        else if (ebp[-6] != 2)
                                                                                                                            sub_50c5e0(0, 0)
                                                                                                                            
                                                                                                                            if (sub_50d318(data_61c9f0) != 0)
                                                                                                                                sub_5148a0(data_61c9f0)
                                                                                                                            
                                                                                                                            ebp = sub_51497c(data_61c9f0, 0, 0)
                                                                                                                        else
                                                                                                                            sub_48380c(ebp[-1], data_61c8f0)
                                                                                                                    else if (*(data_61c9f0 + 0x1c8) == 0)
                                                                                                                        data_61c9f0
                                                                                                                        
                                                                                                                        if (sub_50d2f4() == 0)
                                                                                                                            sub_507dbc(2)
                                                                                                                        
                                                                                                                        struct _EXCEPTION_REGISTRATION_RECORD* 
                                                                                                                            ecx_239
                                                                                                                        int32_t edx_518
                                                                                                                        
                                                                                                                        if (*(data_61c9f0 + 0x344) == 0)
                                                                                                                            *(data_61c9f0 + 0x5c) = 1
                                                                                                                            ecx_239, edx_518 =
                                                                                                                                sub_514c48(data_61c9f0)
                                                                                                                        else
                                                                                                                            ecx_239, edx_518 =
                                                                                                                                sub_514c8c(data_61c9f0)
                                                                                                                        
                                                                                                                        data_61c9f0
                                                                                                                        
                                                                                                                        if (sub_50d2f4() == 0)
                                                                                                                            sub_509af8(nullptr, edx_518, ecx_239)
                                                                                                                            esp_9 += 0x20
                                                                                                                            sub_48380c(ebp[-1], data_61c8f0)
                                                                                                                        else
                                                                                                                            sub_48380c(ebp[-1], data_61c8f0)
                                                                                                                            struct _EXCEPTION_REGISTRATION_RECORD* 
                                                                                                                                ecx_240
                                                                                                                            int32_t edx_521
                                                                                                                            ecx_240, edx_521 = sub_507dbc(2)
                                                                                                                            sub_509af8(nullptr, edx_521, ecx_240)
                                                                                                                            esp_9 += 0x20
                                                                                                                    else
                                                                                                                        *(data_61c9f0 + 0x1c8) = 0
                                                                                                                        sub_5143f0(data_61c9f0, 1)
                                                                                                                else if (ebp[-5] != data_61c8e0)
                                                                                                                    if (ebp[-5] != data_61c9f8)
                                                                                                                        int32_t edx_537 = data_61c8d4
                                                                                                                        ecx_160.b = 0x20
                                                                                                                        int32_t ecx_245 = sub_402e64(
                                                                                                                            &ebp[-0xb5], edx_537.b, ecx_160.b)
                                                                                                                        int32_t eax_1156 = ebp[-5]
                                                                                                                        bool c_13 = eax_1156 u< 0xff
                                                                                                                        
                                                                                                                        if (eax_1156 == 0xff || c_13)
                                                                                                                            c_13 = test_bit(ebp[-0xb5], eax_1156)
                                                                                                                        
                                                                                                                        if (not(c_13) || data_77e23c != 0)
                                                                                                                            if (ebp[-5] != data_61cdcc)
                                                                                                                                if (ebp[-5] != data_61cdf0)
                                                                                                                                    if (ebp[-5] == data_61c8cc)
                                                                                                                                        if (ebp[-6] == data_61ca0c)
                                                                                                                                            sub_4836b0(ebp[-1], data_61cdf0)
                                                                                                                                        else if (ebp[-6] == data_61c9fc)
                                                                                                                                            sub_4836b0(ebp[-1], data_61c9f8)
                                                                                                                                        else if (ebp[-6] == data_61ca00)
                                                                                                                                            sub_4d9530(ebp[-1])
                                                                                                                                        else if (ebp[-6] == data_61ca04)
                                                                                                                                            ecx_245.b = 1
                                                                                                                                            ebp[-1]
                                                                                                                                            sub_4d78f8(ecx_245.b, data_61cabc)
                                                                                                                                            ebp[-1]
                                                                                                                                            sub_4d78f8(1, 
                                                                                                                                                *((zx.d(*(data_780c58 + 4)) << 2) +
                                                                                                                                                    &data_61cac8))
                                                                                                                                            data_61c8cc
                                                                                                                                            bool o_155 = unimplemented  {imul eax, 
                                                                                                                                                dword [0x61c8cc], 0x1038}
                                                                                                                                            
                                                                                                                                            if (o_155)
                                                                                                                                                sub_403010()
                                                                                                                                                noreturn
                                                                                                                                            
                                                                                                                                            int32_t eax_1231
                                                                                                                                            eax_1231.w = *(*(data_61c8c8 + 0xab0)
                                                                                                                                                + data_61c8cc * 0x81c0 + 4)
                                                                                                                                            data_61cab4
                                                                                                                                            bool o_156 = unimplemented  {imul edx, 
                                                                                                                                                dword [0x61cab4], 0x1038}
                                                                                                                                            
                                                                                                                                            if (o_156)
                                                                                                                                                sub_403010()
                                                                                                                                                noreturn
                                                                                                                                            
                                                                                                                                            *(*(data_61c8c8 + 0xab0)
                                                                                                                                                + data_61cab4 * 0x81c0 + 4) =
                                                                                                                                                eax_1231.w
                                                                                                                                            data_61c8cc
                                                                                                                                            bool o_157 = unimplemented  {imul eax, 
                                                                                                                                                dword [0x61c8cc], 0x1038}
                                                                                                                                            
                                                                                                                                            if (o_157)
                                                                                                                                                sub_403010()
                                                                                                                                                noreturn
                                                                                                                                            
                                                                                                                                            int32_t eax_1232
                                                                                                                                            eax_1232.w = *(*(data_61c8c8 + 0xab0)
                                                                                                                                                + data_61c8cc * 0x81c0 + 8)
                                                                                                                                            data_61cab4
                                                                                                                                            bool o_158 = unimplemented  {imul edx, 
                                                                                                                                                dword [0x61cab4], 0x1038}
                                                                                                                                            
                                                                                                                                            if (o_158)
                                                                                                                                                sub_403010()
                                                                                                                                                noreturn
                                                                                                                                            
                                                                                                                                            *(*(data_61c8c8 + 0xab0)
                                                                                                                                                + data_61cab4 * 0x81c0 + 8) =
                                                                                                                                                eax_1232.w
                                                                                                                                            data_61cab4
                                                                                                                                            bool o_159 = unimplemented  {imul eax, 
                                                                                                                                                dword [0x61cab4], 0x1038}
                                                                                                                                            
                                                                                                                                            if (o_159)
                                                                                                                                                sub_403010()
                                                                                                                                                noreturn
                                                                                                                                            
                                                                                                                                            void* eax_1234 = *(data_61c8c8 + 0xab0)
                                                                                                                                                + data_61cab4 * 0x81c0
                                                                                                                                            data_61cca0
                                                                                                                                            bool o_160 = unimplemented  {imul edx, 
                                                                                                                                                dword [0x61cca0], 0x23}
                                                                                                                                            
                                                                                                                                            if (o_160)
                                                                                                                                                sub_403010()
                                                                                                                                                noreturn
                                                                                                                                            
                                                                                                                                            *(eax_1234 + data_61cca0 * 0x118
                                                                                                                                                - 0xf4) = 0x76
                                                                                                                                            data_61cc94
                                                                                                                                            bool o_161 = unimplemented  {imul edx, 
                                                                                                                                                dword [0x61cc94], 0x23}
                                                                                                                                            
                                                                                                                                            if (o_161)
                                                                                                                                                sub_403010()
                                                                                                                                                noreturn
                                                                                                                                            
                                                                                                                                            *(eax_1234 + data_61cc94 * 0x118
                                                                                                                                                - 0xf4) = 0xa8
                                                                                                                                            data_61cc98
                                                                                                                                            bool o_162 = unimplemented  {imul edx, 
                                                                                                                                                dword [0x61cc98], 0x23}
                                                                                                                                            
                                                                                                                                            if (o_162)
                                                                                                                                                sub_403010()
                                                                                                                                                noreturn
                                                                                                                                            
                                                                                                                                            *(eax_1234 + data_61cc98 * 0x118
                                                                                                                                                - 0xf4) = 0xda
                                                                                                                                            *(eax_1234 + 0x13c) = 0x134
                                                                                                                                            sub_4836b0(ebp[-1], data_61cab4)
                                                                                                                                        else if (ebp[-6] != data_61ca18)
                                                                                                                                            if (ebp[-6] == data_61ca08)
                                                                                                                                                data_61ca1c
                                                                                                                                                bool o_163 = unimplemented  {imul eax, 
                                                                                                                                                    dword [0x61ca1c], 0x1038}
                                                                                                                                                
                                                                                                                                                if (o_163)
                                                                                                                                                    sub_403010()
                                                                                                                                                    noreturn
                                                                                                                                                
                                                                                                                                                data_61ca20
                                                                                                                                                bool o_164 = unimplemented  {imul edx, 
                                                                                                                                                    dword [0x61ca20], 0x23}
                                                                                                                                                
                                                                                                                                                if (o_164)
                                                                                                                                                    sub_403010()
                                                                                                                                                    noreturn
                                                                                                                                                
                                                                                                                                                *(*(data_61c8c8 + 0xab0)
                                                                                                                                                    + data_61ca1c * 0x81c0
                                                                                                                                                    + data_61ca20 * 0x118 - 0x78) =
                                                                                                                                                    0xc3200000
                                                                                                                                                sub_4836b0(data_61c8c8, data_61ca1c)
                                                                                                                                            else if (ebp[-6] == data_61cfa4)
                                                                                                                                                if (*(data_780c58 + 4) == 7)
                                                                                                                                                    sub_4c585c()
                                                                                                                                                
                                                                                                                                                ebp[-1]
                                                                                                                                                sub_4d885c()
                                                                                                                                                sub_4836b0(ebp[-1], data_61cb28)
                                                                                                                                            else if (ebp[-6] == data_61cfa0)
                                                                                                                                                sub_44613c(data_61c8c8, edx_537, 
                                                                                                                                                    ecx_245)
                                                                                                                                else if (ebp[-6] == 2)
                                                                                                                                    sub_48380c(ebp[-1], data_61cdf0)
                                                                                                                                else if (ebp[-6] == data_61cdf4)
                                                                                                                                    ebp[-1]
                                                                                                                                    sub_4d885c()
                                                                                                                                    sub_4836b0(ebp[-1], data_61cb28)
                                                                                                                                else if (ebp[-6] == data_61ce00)
                                                                                                                                    data_61ca1c
                                                                                                                                    bool o_153 = unimplemented  {imul eax, 
                                                                                                                                        dword [0x61ca1c], 0x1038}
                                                                                                                                    
                                                                                                                                    if (o_153)
                                                                                                                                        sub_403010()
                                                                                                                                        noreturn
                                                                                                                                    
                                                                                                                                    data_61ca20
                                                                                                                                    bool o_154 = unimplemented  {imul edx, 
                                                                                                                                        dword [0x61ca20], 0x23}
                                                                                                                                    
                                                                                                                                    if (o_154)
                                                                                                                                        sub_403010()
                                                                                                                                        noreturn
                                                                                                                                    
                                                                                                                                    *(*(data_61c8c8 + 0xab0)
                                                                                                                                        + data_61ca1c * 0x81c0
                                                                                                                                        + data_61ca20 * 0x118 - 0x78) =
                                                                                                                                        0xc3b40000
                                                                                                                                    sub_4836b0(data_61c8c8, data_61ca1c)
                                                                                                                                else if (ebp[-6] == data_61cdfc)
                                                                                                                                    if (data_7a6a9c - 1 u>= 2)
                                                                                                                                        data_7a6a9c = 3
                                                                                                                                    
                                                                                                                                    sub_4d88f8(ebp[-1], 1, data_7a6a9c, 
                                                                                                                                        esi_2, edi_1)
                                                                                                                                    esp_9 += 0x20
                                                                                                                                    sub_4836b0(ebp[-1], data_61cb24)
                                                                                                                                else if (ebp[-6] == data_61cdf8)
                                                                                                                                    sub_48380c(ebp[-1], data_61cdf0)
                                                                                                                                    sub_4836b0(ebp[-1], data_61cdcc)
                                                                                                                                    *(ebp[-1] + 0x9b0) = 0
                                                                                                                            else if (ebp[-6] == 2)
                                                                                                                                sub_48380c(ebp[-1], data_61cdcc)
                                                                                                                            else if (ebp[-6] == data_61cdd0)
                                                                                                                                *data_52ffac = 0
                                                                                                                                sub_48380c(ebp[-1], data_61cdcc)
                                                                                                                                ebp = sub_4ecb3c()
                                                                                                                                *data_530a8c = 0
                                                                                                                            else if (ebp[-6] == data_61cdd4)
                                                                                                                                *data_52ffac = 0
                                                                                                                                sub_48380c(ebp[-1], data_61cdcc)
                                                                                                                                ebp = sub_4ecb3c()
                                                                                                                                *data_530a8c = 1
                                                                                                                            else if (ebp[-6] == data_61cdd8)
                                                                                                                                *data_52ffac = 1
                                                                                                                                sub_48380c(ebp[-1], data_61cdcc)
                                                                                                                                ebp = sub_4ecb3c()
                                                                                                                                *data_530a8c = 0x4f
                                                                                                                                sub_4ed040()
                                                                                                                            else if (ebp[-6] == data_61cddc)
                                                                                                                                *data_52ffac = 0
                                                                                                                                sub_48380c(ebp[-1], data_61cdcc)
                                                                                                                                ebp = sub_4ecb3c()
                                                                                                                                *data_530a8c = 0xa2
                                                                                                                                sub_4ed040()
                                                                                                                        else if (ebp[-6] == data_61cc90)
                                                                                                                            *(ebp[-1] + 0xce1) = 0
                                                                                                                            sub_4d9530(ebp[-1])
                                                                                                                        else if (ebp[-5] == data_61c8cc
                                                                                                                                || ebp[-6] != data_61cfb0)
                                                                                                                            ecx_245.b = 0x20
                                                                                                                            sub_402e64(&ebp[-0xb5], 
                                                                                                                                (data_61cfa8).b, ecx_245.b)
                                                                                                                            int32_t eax_1164 = data_61ca04
                                                                                                                            
                                                                                                                            if (eax_1164 u<= 0xff)
                                                                                                                                ebp[-0xb5] |= 1 << (eax_1164 u% 0x20)
                                                                                                                            
                                                                                                                            int32_t eax_1165 = ebp[-6]
                                                                                                                            bool c_14 = eax_1165 u< 0xff
                                                                                                                            
                                                                                                                            if (eax_1165 == 0xff || c_14)
                                                                                                                                c_14 = test_bit(ebp[-0xb5], eax_1165)
                                                                                                                            
                                                                                                                            if (c_14)
                                                                                                                                ebp[-1]
                                                                                                                                sub_4d78f8(1, data_61cabc)
                                                                                                                                ebp[-1]
                                                                                                                                sub_4d78f8(1, 
                                                                                                                                    *((zx.d(*(data_780c58 + 4)) << 2) +
                                                                                                                                        &data_61cac8))
                                                                                                                                sub_4836b0(ebp[-1], data_61cab4)
                                                                                                                                *(esp_9 - 4) = 1
                                                                                                                                sub_47a180(data_61cca8, data_61cab4, 
                                                                                                                                    data_61c8c8)
                                                                                                                                *(esp_9 - 4) = 1
                                                                                                                                sub_47a180(data_61cca4, data_61cab4, 
                                                                                                                                    data_61c8c8)
                                                                                                                            else if (ebp[-6] == data_61cfb8)
                                                                                                                                sub_4837d0(ebp[-1], data_61c8d4)
                                                                                                                                data_77e23c = 1
                                                                                                                                sub_528320(data_780c58, 
                                                                                                                                    *(data_780c58 + 4), 0)
                                                                                                                            else if (ebp[-6] == data_61cfb4)
                                                                                                                                if (*(data_780c58 + 0x25b40) == 1)
                                                                                                                                    sub_516eec()
                                                                                                                                
                                                                                                                                sub_4836b0(ebp[-1], 
                                                                                                                                    *(
                                                                                                                                        (zx.d(*(data_780c58 + 0x25b40)) << 2) +
                                                                                                                                        &data_61cac8))
                                                                                                                        else
                                                                                                                            sub_48380c(ebp[-1], data_61c8d4)
                                                                                                                    else
                                                                                                                        *(data_61c9f0 + 0x1e3) = 0
                                                                                                                        int32_t eax_1113 = data_61ca18
                                                                                                                        
                                                                                                                        if (add_overflow(eax_1113, 3))
                                                                                                                            sub_403010()
                                                                                                                            noreturn
                                                                                                                        
                                                                                                                        if (eax_1113 + 3 != ebp[-6])
                                                                                                                            int32_t eax_1126 = data_61ca18
                                                                                                                            
                                                                                                                            if (add_overflow(eax_1126, 2))
                                                                                                                                sub_403010()
                                                                                                                                noreturn
                                                                                                                            
                                                                                                                            if (eax_1126 + 2 != ebp[-6])
                                                                                                                                int32_t eax_1140 = data_61ca18
                                                                                                                                
                                                                                                                                if (add_overflow(eax_1140, 1))
                                                                                                                                    sub_403010()
                                                                                                                                    noreturn
                                                                                                                                
                                                                                                                                if (eax_1140 + 1 == ebp[-6])
                                                                                                                                    *(ebp[-1] + 0xce1) = 0
                                                                                                                                    *(data_780c58 + 0x111f9) = 0
                                                                                                                                    *(data_780c58 + 0x111f8) = 1
                                                                                                                                    *(data_780c58 + 0x111fa) = 0
                                                                                                                                    sub_4d6994(ebp[-1], 2)
                                                                                                                                else if (ebp[-6] == data_61ca18)
                                                                                                                                    *(ebp[-1] + 0xce1) = 0
                                                                                                                                    *(data_780c58 + 0x111f9) = 0
                                                                                                                                    *(data_780c58 + 0x111f8) = 0
                                                                                                                                    *(data_780c58 + 0x111fa) = 0
                                                                                                                                    sub_4d6994(ebp[-1], 1)
                                                                                                                                else if (ebp[-6] == data_61cfb0)
                                                                                                                                    sub_48380c(ebp[-1], data_61c9f8)
                                                                                                                            else
                                                                                                                                *(ebp[-1] + 0xce1) = 1
                                                                                                                                *(data_780c58 + 0x111f9) = 0
                                                                                                                                *(data_780c58 + 0x111f8) = 0
                                                                                                                                *(data_780c58 + 0x111fa) = 0
                                                                                                                                *(esp_9 - 4) = &ebp[-0xa]
                                                                                                                                esp_9 -= 4
                                                                                                                                sub_47a2ac(data_61c8c8, data_61c8f0, 
                                                                                                                                    data_61c9dc)
                                                                                                                                sub_404054(&ebp[-0x114], ebp[-0xa], 
                                                                                                                                    0xff)
                                                                                                                                sub_402bdc(data_61c9f0 + 0x31, 
                                                                                                                                    &ebp[-0x114], 0x20)
                                                                                                                                
                                                                                                                                if (data_7a6e5c == 0)
                                                                                                                                    void* edx_534
                                                                                                                                    edx_534.b = 1
                                                                                                                                    data_7a6e5c =
                                                                                                                                        sub_5101f8(sub_50d118+0x128, edx_534, 0)
                                                                                                                                
                                                                                                                                *(data_7a6e5c + 0x4c) = 1
                                                                                                                                sub_4836b0(ebp[-1], data_61c8e4)
                                                                                                                        else
                                                                                                                            *(ebp[-1] + 0xce1) = 1
                                                                                                                            *(data_780c58 + 0x111f9) = 0
                                                                                                                            *(data_780c58 + 0x111f8) = 0
                                                                                                                            *(data_780c58 + 0x111fa) = 1
                                                                                                                            *(esp_9 - 4) = &ebp[-0xa]
                                                                                                                            esp_9 -= 4
                                                                                                                            sub_47a2ac(data_61c8c8, data_61c8f0, 
                                                                                                                                data_61c9dc)
                                                                                                                            sub_404054(&ebp[-0x114], ebp[-0xa], 
                                                                                                                                0xff)
                                                                                                                            sub_402bdc(data_61c9f0 + 0x31, 
                                                                                                                                &ebp[-0x114], 0x20)
                                                                                                                            
                                                                                                                            if (data_7a6e5c == 0)
                                                                                                                                void* edx_531
                                                                                                                                edx_531.b = 1
                                                                                                                                data_7a6e5c =
                                                                                                                                    sub_5101f8(sub_50d118+0x128, edx_531, 0)
                                                                                                                            
                                                                                                                            data_7a6e5c
                                                                                                                            sub_50f6ec()
                                                                                                                else if (ebp[-6] == 2)
                                                                                                                    sub_48380c(ebp[-1], ebp[-5])
                                                                                                                else if (ebp[-6] == 3)
                                                                                                                    sub_4d6994(ebp[-1], 2)
                                                                                                                else if (ebp[-6] == 4)
                                                                                                                    sub_4836b0(ebp[-1], data_61caec)
                                                                                                                else if (ebp[-6] == 5)
                                                                                                                    sub_4d7ff0(ebp[-1])
                                                                                                                    sub_4d6b10(ebp[-1], 0)
                                                                                                                    sub_4836b0(ebp[-1], data_61cabc)
                                                                                                            else if (ebp[-6] != data_61c914)
                                                                                                                int32_t eax_1027 = data_61c910
                                                                                                                
                                                                                                                if (add_overflow(eax_1027, 1))
                                                                                                                    sub_403010()
                                                                                                                    noreturn
                                                                                                                
                                                                                                                if (eax_1027 + 1 == ebp[-6])
                                                                                                                    sub_509890()
                                                                                                            else
                                                                                                                sub_509850()
                                                                                                        else if (ebp[-6] == data_61c91c)
                                                                                                            sub_509bfc(0)
                                                                                                            *(esp_9 - 4) = 0
                                                                                                            sub_47a140(data_61c9cc, data_61c8f0, 
                                                                                                                data_61c8c8)
                                                                                                            *(esp_9 - 4) = &ebp[-0xa]
                                                                                                            sub_47a2ac(data_61c8c8, data_61c8f4, 
                                                                                                                data_61c918)
                                                                                                            *(esp_9 - 8) = &ebp[-0x11f]
                                                                                                            sub_404280(1, 1, ebp[-0xa])
                                                                                                            void* esp_316 = esp_9 - 4
                                                                                                            sub_404188(ebp[-0x11f], &data_4ec188)
                                                                                                            *(esp_316 - 4) = 0
                                                                                                            sub_47ab08(data_61c8c8, data_61c8f4, 
                                                                                                                data_61c918, x87_r0)
                                                                                                            int32_t ecx_209 =
                                                                                                                sub_4042c0(&ebp[-0xa], 1, 1)
                                                                                                            *(data_61c9f0 + 0x350) = 0
                                                                                                            
                                                                                                            if (ebp[-0xa] != 0)
                                                                                                                data_61c9f0
                                                                                                                
                                                                                                                if (sub_50d2f4() == 0)
                                                                                                                    *(esp_316 - 4) = 0
                                                                                                                    esp_9 = esp_316 - 4
                                                                                                                    char eax_1022
                                                                                                                    int32_t ecx_225
                                                                                                                    eax_1022, ecx_225 =
                                                                                                                        sub_516544(data_61c9f0, 0, ebp[-0xa])
                                                                                                                    
                                                                                                                    if (eax_1022 == 0)
                                                                                                                        data_61c9f0
                                                                                                                        sub_513ae4(ecx_225, 0x65)
                                                                                                                else
                                                                                                                    *(data_61c9f0 + 4) =
                                                                                                                        sub_408e80(ebp[-0xa])
                                                                                                                    *(esp_316 - 4) = 0
                                                                                                                    esp_9 = esp_316 - 4
                                                                                                                    char eax_1019
                                                                                                                    int32_t ecx_223
                                                                                                                    eax_1019, ecx_223 = sub_516544(
                                                                                                                        data_61c9f0, *(data_7a6e5c + 0x40), 
                                                                                                                        *(data_7a6e5c + 0x38))
                                                                                                                    
                                                                                                                    if (eax_1019 == 0)
                                                                                                                        data_61c9f0
                                                                                                                        sub_513ae4(ecx_223, 0x65)
                                                                                                            else
                                                                                                                int32_t eax_984
                                                                                                                int32_t ecx_211
                                                                                                                int32_t edx_484
                                                                                                                eax_984, ecx_211, edx_484 =
                                                                                                                    sub_4030a0(ecx_209, 1)
                                                                                                                data_7a6e50 = eax_984
                                                                                                                edx_484.b = 1
                                                                                                                int32_t eax_986
                                                                                                                int32_t ecx_212
                                                                                                                int32_t edx_485
                                                                                                                eax_986, ecx_212, edx_485 =
                                                                                                                    sub_4030a0(ecx_211, edx_484)
                                                                                                                data_7a6e54 = eax_986
                                                                                                                
                                                                                                                if (data_7a6e58 == 0)
                                                                                                                    edx_485.b = 1
                                                                                                                    data_7a6e58 =
                                                                                                                        sub_4030a0(ecx_212, edx_485)
                                                                                                                else
                                                                                                                    (*(*data_7a6e58 + 0x40))()
                                                                                                                
                                                                                                                sub_4b566c(&data_7a6e50)
                                                                                                                int32_t i_20 =
                                                                                                                    (*(*data_7a6e50 + 0x14))()
                                                                                                                
                                                                                                                if (add_overflow(i_20, 0xffffffff))
                                                                                                                    sub_403010()
                                                                                                                    noreturn
                                                                                                                
                                                                                                                if (i_20 - 1 s>= 0)
                                                                                                                    int32_t i_17 = i_20
                                                                                                                    ebp[-7] = 0
                                                                                                                    int32_t i_2
                                                                                                                    
                                                                                                                    do
                                                                                                                        ebp[-7]
                                                                                                                        (*(*data_7a6e50 + 0xc))()
                                                                                                                        
                                                                                                                        if (ebp[-0xa] != 0)
                                                                                                                            while (sub_404078(ebp[-0xa]) s> 0)
                                                                                                                                char* eax_995
                                                                                                                                eax_995.b = *ebp[-0xa]
                                                                                                                                char temp175_1 = eax_995.b
                                                                                                                                eax_995.b -= 0x2f
                                                                                                                                
                                                                                                                                if (temp175_1 != 0x2f)
                                                                                                                                    char temp178_1 = eax_995.b
                                                                                                                                    eax_995.b -= 0x2d
                                                                                                                                    
                                                                                                                                    if (temp178_1 != 0x2d)
                                                                                                                                        break
                                                                                                                                
                                                                                                                                sub_4042c0(&ebp[-0xa], 1, 1)
                                                                                                                            
                                                                                                                            ebp[-0xa]
                                                                                                                            ebp[-7]
                                                                                                                            (*(*data_7a6e50 + 0x20))()
                                                                                                                        
                                                                                                                        ebp[-7] += 1
                                                                                                                        i_2 = i_17
                                                                                                                        i_17 -= 1
                                                                                                                    while (i_2 != 1)
                                                                                                                
                                                                                                                *(esp_316 - 4) = 0x1770
                                                                                                                ebp = sub_508730(&data_7a6e54, 
                                                                                                                    &data_7a6e58, &data_7a6e50)
                                                                                                                int32_t eax_999
                                                                                                                int32_t ecx_216
                                                                                                                eax_999, ecx_216 =
                                                                                                                    (*(*data_7a6e54 + 0x14))()
                                                                                                                esp_9 = esp_316
                                                                                                                
                                                                                                                if (eax_999 s<= 0)
                                                                                                                    data_61c9f0
                                                                                                                    sub_513ae4(ecx_216, 0x67)
                                                                                                                else
                                                                                                                    sub_403df8(&ebp[-0xa])
                                                                                                                    sub_483950(data_61c8c8, data_61c8f8)
                                                                                                                    *(esp_9 - 4) = 1
                                                                                                                    sub_47b488(data_61c900, data_61c8f8, 
                                                                                                                        data_61c8c8)
                                                                                                                    int32_t i_21 =
                                                                                                                        (*(*data_7a6e54 + 0x14))()
                                                                                                                    
                                                                                                                    if (add_overflow(i_21, 0xffffffff))
                                                                                                                        sub_403010()
                                                                                                                        noreturn
                                                                                                                    
                                                                                                                    if (i_21 - 1 s>= 0)
                                                                                                                        int32_t i_18 = i_21
                                                                                                                        ebp[-7] = 0
                                                                                                                        int32_t i_3
                                                                                                                        
                                                                                                                        do
                                                                                                                            *(esp_9 - 4) = 0
                                                                                                                            ebp[-7]
                                                                                                                            (*(*data_7a6e54 + 0xc))()
                                                                                                                            sub_47b650(data_61c8c8, data_61c900, 
                                                                                                                                ebp[-0x120])
                                                                                                                            ebp[-7] += 1
                                                                                                                            i_3 = i_18
                                                                                                                            i_18 -= 1
                                                                                                                        while (i_3 != 1)
                                                                                                                    
                                                                                                                    *(esp_9 - 4) = 0
                                                                                                                    sub_47b304(data_61c900, data_61c8f8, 
                                                                                                                        data_61c8c8)
                                                                                                                    *(esp_9 - 4) = 1
                                                                                                                    sub_47b2ac(data_61c900, data_61c8f8, 
                                                                                                                        data_61c8c8)
                                                                                                                    esp_9 = esp_9
                                                                                                                    sub_4836b0(ebp[-1], data_61c8f8)
                                                                                                                
                                                                                                                sub_4030d0(data_7a6e54)
                                                                                                                sub_4030d0(data_7a6e50)
                                                                                                        else if (ebp[-6] == 2)
                                                                                                            sub_48380c(ebp[-1], data_61c8f4)
                                                                                                    else if (ebp[-6] == data_61c904)
                                                                                                        sub_48380c(ebp[-1], data_61c8f8)
                                                                                                        *(esp_9 - 4) = &ebp[-8]
                                                                                                        sub_47a960(data_61c900, data_61c8f8, 
                                                                                                            data_61c8c8)
                                                                                                        
                                                                                                        if (add_overflow(ebp[-8], 0xffffffff))
                                                                                                            sub_403010()
                                                                                                            noreturn
                                                                                                        
                                                                                                        (*(*data_7a6e58 + 0xc))()
                                                                                                        sub_4040c4(&ebp[-0x11e],  ", ebp[-0xa])
                                                                                                        *(esp_9 + 0x1c) = ebp[-0x11e]
                                                                                                        sub_47ab08(data_61c8c8, data_61c8f4, 
                                                                                                            data_61c918, x87_r0)
                                                                                                        esp_9 += 0x20
                                                                                                        sub_478234(ebp[-1], data_61c8f4, 
                                                                                                            data_61c91c)
                                                                                                    else if (ebp[-6] == data_61c908)
                                                                                                        struct _EXCEPTION_REGISTRATION_RECORD* 
                                                                                                            ecx_205
                                                                                                        int32_t edx_479
                                                                                                        ecx_205, edx_479 =
                                                                                                            sub_48380c(ebp[-1], data_61c8f8)
                                                                                                        sub_509af8(nullptr, edx_479, ecx_205)
                                                                                                        esp_9 += 0x20
                                                                                                else if (ebp[-6] == data_61cdac)
                                                                                                    sub_50e22c(data_7a6e5c)
                                                                                                else if (ebp[-6] == data_61cdb8)
                                                                                                    sub_50e11c(data_7a6e5c, 1)
                                                                                                else if (ebp[-6] == data_61cdbc)
                                                                                                    sub_50e11c(data_7a6e5c, 2)
                                                                                                else if (ebp[-6] == data_61cdc0)
                                                                                                    sub_50e11c(data_7a6e5c, 3)
                                                                                            else if (ebp[-6] != data_61c9e8)
                                                                                                if (ebp[-6] == data_61c9ec)
                                                                                                    sub_48380c(ebp[-1], data_61c8fc)
                                                                                                    
                                                                                                    if (*(data_7a6e5c + 0x1b1f6) != 3)
                                                                                                        if (sub_50d9e0(data_7a6e5c) != 0)
                                                                                                            *(data_7a6e5c + 0x1b1f6) = 5
                                                                                                            *(data_7a6e5c + 0x1b1f8) = 0
                                                                                                    else
                                                                                                        sub_50e368(data_7a6e5c, 0, nullptr)
                                                                                                        esp_9 += 0x20
                                                                                            else if (*(data_7a6e5c + 0x1b1f6) != 3)
                                                                                                sub_48380c(ebp[-1], data_61c8fc)
                                                                                                sub_50732c(1)
                                                                                            else
                                                                                                sub_48380c(ebp[-1], data_61c8fc)
                                                                                                sub_50b624(8, nullptr, esi_2, edi_1)
                                                                                                *(esp_9 + 0x1c) = 0
                                                                                                *(esp_9 + 0x18) = &ebp[-0xb]
                                                                                                data_61c8fc
                                                                                                data_61c8c8
                                                                                                ebp = sub_47a7ec(data_61c9e4)
                                                                                                *(esp_9 + 0x1c) = ebp[-0xb]
                                                                                                sub_47ab08(data_61c8c8, data_61c8f0, 
                                                                                                    data_61c9dc, x87_r0)
                                                                                                *(esp_9 + 0x1c) = &ebp[-8]
                                                                                                sub_47a9a0(data_61cbd0, data_61c8fc, 
                                                                                                    data_61c8c8)
                                                                                                *(esp_9 + 0x1c) = ebp[-8]
                                                                                                esp_9 += 0x20
                                                                                                sub_5072b8(sub_47b304(data_61cbcc, 
                                                                                                    data_61c8f0, data_61c8c8))
                                                                                                sub_404054(&ebp[-0x114], ebp[-0xb], 
                                                                                                    0xff)
                                                                                                sub_402bdc(data_61c9f0 + 0x31, 
                                                                                                    &ebp[-0x114], 0x20)
                                                                                        else if (ebp[-6] == data_61c8e8)
                                                                                            *(esp_9 - 4) = &ebp[-0xb]
                                                                                            *(esp_9 - 8) = 0
                                                                                            *(esp_9 - 0xc) = &ebp[-0x117]
                                                                                            data_61c8f0
                                                                                            ebp[-1]
                                                                                            void* ebp_13 = sub_47a7ec(data_61c9dc)
                                                                                            sub_404280(0x15, 1, *(ebp_13 - 0x45c))
                                                                                            void* ebp_14 = sub_46910c(data_61c8c8, 
                                                                                                "f_sspiel", ebp_13 - 0x460)
                                                                                            sub_404080(ebp_14 - 0x2c, 
                                                                                                *(ebp_14 - 0x460))
                                                                                            *(esp_9 - 4) = *(ebp_14 - 0x2c)
                                                                                            sub_47ab08(*(ebp_14 - 4), data_61c8fc, 
                                                                                                data_61c9e4, x87_r0)
                                                                                            void* ebp_15 = sub_46910c(data_61c8c8, 
                                                                                                "f_einl1", ebp_14 - 0x468)
                                                                                            *(esp_9 - 4) = *(ebp_15 - 0x468)
                                                                                            sub_507d4c(ebp_15 - 0x46c)
                                                                                            *(esp_9 - 8) = *(ebp_15 - 0x46c)
                                                                                            void* ebp_16 = sub_46910c(data_61c8c8, 
                                                                                                "f_einl2", ebp_15 - 0x470)
                                                                                            *(esp_9 - 0xc) = *(ebp_16 - 0x470)
                                                                                            sub_404138(ebp_16 - 0x464, 3)
                                                                                            *(esp_9 + 0x14) = *(ebp_16 - 0x464)
                                                                                            sub_47ab08(*(ebp_16 - 4), data_61c8fc, 
                                                                                                1, x87_r0)
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
                                                                                                + data_61c9e4 * 0x118 - 0x82) = 0x1c
                                                                                            data_61c8fc
                                                                                            bool o_131 = unimplemented  {imul eax, 
                                                                                                dword [0x61c8fc], 0x1038}
                                                                                            
                                                                                            if (o_131)
                                                                                                sub_403010()
                                                                                                noreturn
                                                                                            
                                                                                            data_61c9e4
                                                                                            bool o_132 = unimplemented  {imul edx, 
                                                                                                dword [0x61c9e4], 0x23}
                                                                                            
                                                                                            if (o_132)
                                                                                                sub_403010()
                                                                                                noreturn
                                                                                            
                                                                                            *(*(data_61c8c8 + 0xab0)
                                                                                                + data_61c8fc * 0x81c0
                                                                                                + data_61c9e4 * 0x118 - 0x84) = 0
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
                                                                                                + data_61c9e4 * 0x118 - 0x7e) = 0x18
                                                                                            ebp = sub_46910c(data_61c8c8, 
                                                                                                "f_bittespielname", ebp_16 - 0x474)
                                                                                            *(esp_9 + 0x14) = ebp[-0x11d]
                                                                                            int32_t ecx_187 = data_61c9e4
                                                                                            
                                                                                            if (add_overflow(ecx_187, 0xffffffff))
                                                                                                sub_403010()
                                                                                                noreturn
                                                                                            
                                                                                            sub_47ab08(ebp[-1], data_61c8fc, 
                                                                                                ecx_187 - 1, x87_r0)
                                                                                            *(esp_9 + 0x14) = "Name:"
                                                                                            int32_t ecx_189 = data_61c9e4
                                                                                            
                                                                                            if (add_overflow(ecx_189, 0xfffffffe))
                                                                                                sub_403010()
                                                                                                noreturn
                                                                                            
                                                                                            sub_47ab08(ebp[-1], data_61c8fc, 
                                                                                                ecx_189 - 2, x87_r0)
                                                                                            data_61c8fc
                                                                                            bool o_137 = unimplemented  {imul eax, 
                                                                                                dword [0x61c8fc], 0x1038}
                                                                                            
                                                                                            if (o_137)
                                                                                                sub_403010()
                                                                                                noreturn
                                                                                            
                                                                                            data_61c9e4
                                                                                            bool o_138 = unimplemented  {imul edx, 
                                                                                                dword [0x61c9e4], 0x23}
                                                                                            
                                                                                            if (o_138)
                                                                                                sub_403010()
                                                                                                noreturn
                                                                                            
                                                                                            *(*(data_61c8c8 + 0xab0)
                                                                                                + data_61c8fc * 0x81c0
                                                                                                + data_61c9e4 * 0x118 - 0xf6) = 0x64
                                                                                            void* esp_294
                                                                                            *esp_294 = 0
                                                                                            sub_47a1c0(data_61cbd0, data_61c8fc, 
                                                                                                data_61c8c8)
                                                                                            *esp_294 = 0
                                                                                            int32_t ecx_192 = data_61cbd0
                                                                                            
                                                                                            if (add_overflow(ecx_192, 1))
                                                                                                sub_403010()
                                                                                                noreturn
                                                                                            
                                                                                            sub_47a1c0(ecx_192 + 1, data_61c8fc, 
                                                                                                data_61c8c8)
                                                                                            esp_9 = esp_294 + 4
                                                                                            sub_4836b0(ebp[-1], data_61c8fc)
                                                                                        else if (ebp[-6] == 2)
                                                                                            sub_48380c(ebp[-1], ebp[-5])
                                                                                        else if (ebp[-6] == data_61c8ec)
                                                                                            sub_509af8(nullptr, edx_376, ecx_160)
                                                                                            esp_9 += 0x20
                                                                                            sub_4836b0(ebp[-1], data_61c8f4)
                                                                                    else if (ebp[-6] == data_61cbc0)
                                                                                        sub_4d69e8(ebp[-1], 2)
                                                                                    else if (ebp[-6] == 2)
                                                                                        sub_48380c(ebp[-1], ebp[-5])
                                                                                else if (ebp[-6] == 2)
                                                                                    sub_48380c(ebp[-1], data_61c8dc)
                                                                                else if (ebp[-6] == data_61cca4)
                                                                                    sub_4d7ff0(ebp[-1])
                                                                                    sub_4d6b10(ebp[-1], 1)
                                                                                    sub_4836b0(ebp[-1], data_61cabc)
                                                                                else if (ebp[-6] == data_61cca8)
                                                                                    if (*(data_780c58 + 0x25b40) == 7)
                                                                                        sub_4c2418()
                                                                                    
                                                                                    sub_4836b0(ebp[-1], 
                                                                                        *(
                                                                                            (zx.d(*(data_780c58 + 0x25b40)) << 2) +
                                                                                            &data_61cac8))
                                                                                else if (ebp[-6] == 3)
                                                                                    sub_4d6994(ebp[-1], 1)
                                                                            else if (ebp[-6] == data_61cfbc)
                                                                                ebp[-1]
                                                                                sub_4d885c()
                                                                                sub_4836b0(ebp[-1], data_61cb28)
                                                                            else if (ebp[-6] != data_61cfc0)
                                                                                if (ebp[-6] == 2)
                                                                                    if (data_77e23c == 2)
                                                                                        data_77e23c = 1
                                                                                    
                                                                                    sub_48380c(ebp[-1], data_61c8d0)
                                                                                    
                                                                                    if (sub_4c1090() != 0)
                                                                                        sub_4837ec(data_61c8c8, data_61ccd8, 
                                                                                            true)
                                                                                else if (ebp[-6] == data_61cc8c)
                                                                                    sub_4d9704(ebp[-1])
                                                                                else if (ebp[-6] == data_61cc80)
                                                                                    char eax_859 = sub_4c0924()
                                                                                    char eax_860
                                                                                    
                                                                                    if (eax_859 != 0)
                                                                                        eax_860, ebp = sub_509a28()
                                                                                    
                                                                                    if (eax_859 == 0 || eax_860 != 0)
                                                                                        data_77e23c = 0
                                                                                        sub_4c93fc()
                                                                                        data_61c8c8
                                                                                        sub_4837ec(data_61c8c8, data_61cda4, 
                                                                                            false)
                                                                                        sub_4837ec(data_61c8c8, data_61cdc8, 
                                                                                            false)
                                                                                        sub_4c0fcc()
                                                                                        sub_48380c(ebp[-1], data_61c8d0)
                                                                                        sub_4834fc(ebp[-1], data_61c8cc)
                                                                                        sub_502898()
                                                                                else if (ebp[-6] == data_61cc84)
                                                                                    ecx_160.b = 1
                                                                                    ebp[-1]
                                                                                    sub_4d78f8(ecx_160.b, data_61cabc)
                                                                                    ebp[-1]
                                                                                    sub_4d78f8(1, 
                                                                                        *((zx.d(*(data_780c58 + 4)) << 2) +
                                                                                            &data_61cac8))
                                                                                    sub_4836b0(ebp[-1], data_61cab4)
                                                                                else if (ebp[-6] == data_61cc88)
                                                                                    sub_4727f8(ebp[-1])
                                                                            else if (*(data_780c58 + 0xffec) != 5)
                                                                                data_780c58
                                                                                sub_520efc(ecx_160, 0, esi_2, edi_1)
                                                                                esp_9 += 0x20
                                                                                ebp = sub_46910c(data_61c8c8, 
                                                                                    "f_zurueck", &ebp[-0x116])
                                                                                sub_4040c4(&ebp[-0x115], 0x4ec338, 
                                                                                    ebp[-0x116])
                                                                                sub_404054(&ebp[-0x114], ebp[-0x115], 
                                                                                    0xff)
                                                                                data_61cb2c
                                                                                bool o_127 = unimplemented  {imul eax, 
                                                                                    dword [0x61cb2c], 0x1038}
                                                                                
                                                                                if (o_127)
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                int32_t ecx_175
                                                                                ecx_175.b = 0x19
                                                                                sub_402bdc(
                                                                                    *(data_61c8c8 + 0xab0)
                                                                                        + data_61cb2c * 0x81c0 + 0x140, 
                                                                                    &ebp[-0x114], ecx_175.b)
                                                                                int32_t ecx_176 =
                                                                                    sub_4836b0(data_61c8c8, data_61cb2c)
                                                                                
                                                                                if (sub_4c094c() != 0)
                                                                                    data_61c90c
                                                                                    bool o_128 = unimplemented  {imul eax, 
                                                                                        dword [0x61c90c], 0x1038}
                                                                                    
                                                                                    if (o_128)
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    if (*(*(data_61c8c8 + 0xab0)
                                                                                            + data_61c90c * 0x81c0 + 1) != 0)
                                                                                        sub_469ac0(data_61c8c8, data_61c90c, 
                                                                                            ecx_176)
                                                                            else
                                                                                sub_48380c(ebp[-1], data_61c8d0)
                                                                        else if (ebp[-6] == 2)
                                                                            sub_48380c(ebp[-1], data_61cab4)
                                                                        else if (ebp[-6] == data_61cc94)
                                                                            sub_46e0ac(data_61c8c8)
                                                                        else if (ebp[-6] == data_61cc98)
                                                                            sub_46e17c(data_61c8c8)
                                                                        else if (ebp[-6] == data_61cca0)
                                                                            *(esp_9 - 4) = 0
                                                                            int32_t ecx_168 = data_61cc08
                                                                            
                                                                            if (add_overflow(ecx_168, 0xffffffff))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            sub_47a1c0(ecx_168 - 1, data_61cab8, 
                                                                                data_61c8c8)
                                                                            *(esp_9 - 4) = 0
                                                                            sub_47a1c0(data_61cc08, data_61cab8, 
                                                                                data_61c8c8)
                                                                            *(esp_9 - 4) = 0
                                                                            sub_476bc0(data_61cc08, data_61cab8, 
                                                                                data_61c8c8)
                                                                            sub_4836b0(ebp[-1], data_61cab8)
                                                                        else if (ebp[-6] == data_61cc9c)
                                                                            sub_4836b0(ebp[-1], *(ebp[-1] + 0x10d0))
                                                                    else if (ebp[-6] == 2)
                                                                        sub_48380c(ebp[-1], ebp[-5])
                                                                    else if (ebp[-6] == data_61cbec)
                                                                        ecx_160.b = 1
                                                                        ebp[-1]
                                                                        sub_4dc3b8(ecx_160, 0, esi_2, edi_1)
                                                                        esp_9 += 0x20
                                                                        sub_4837d0(ebp[-1], data_61cabc)
                                                                        data_77e23c = 1
                                                                        sub_528320(data_780c58, 
                                                                            *(data_780c58 + 4), 0)
                                                                else if (ebp[-6] != 2)
                                                                    ebp[-1]
                                                                    sub_4d7f8c(ecx_160, ebp[-6])
                                                                else
                                                                    ecx_160.b = 1
                                                                    ebp[-1]
                                                                    sub_4dc3b8(ecx_160, 0, esi_2, edi_1)
                                                                    esp_9 += 0x20
                                                                    sub_48380c(ebp[-1], data_61cab8)
                                                            else
                                                                sub_48380c(ebp[-1], ebp[-5])
                                                        else if (ebp[-6] != 2)
                                                            int32_t eax_737 = data_61ca2c
                                                            
                                                            if (neg.d(eax_737) == 0x80000000)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            if (neg.d(eax_737) != ebp[-6])
                                                                int32_t eax_743 = data_61ca24
                                                                
                                                                if (neg.d(eax_743) == 0x80000000)
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                if (neg.d(eax_743) != ebp[-6])
                                                                    int32_t eax_749 = data_61ca28
                                                                    
                                                                    if (neg.d(eax_749) == 0x80000000)
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    if (neg.d(eax_749) == ebp[-6])
                                                                        if (*(data_61c8c8 + 0x97d) != 0)
                                                                            sub_44613c(ebp[-1], arg2, i_23)
                                                                        
                                                                        *(esp_9 - 4) = 0
                                                                        *(esp_9 - 8) = &data_4ebfcc
                                                                        *(esp_9 - 0xc) =
                                                                            "http://www.bufopro.de/"
                                                                        *(esp_9 - 0x10) = "explorer"
                                                                        *(esp_9 - 0x14) = "open"
                                                                        *(esp_9 - 0x18) = sub_4318d0(ebp[-1])
                                                                        ShellExecuteA()
                                                                else
                                                                    if (*(data_61c8c8 + 0x97d) != 0)
                                                                        sub_44613c(ebp[-1], arg2, i_23)
                                                                    
                                                                    *(esp_9 - 4) = 0
                                                                    *(esp_9 - 8) = &data_4ebfcc
                                                                    *(esp_9 - 0xc) =
                                                                        "http://www.zone2media.de/"
                                                                    *(esp_9 - 0x10) = "explorer"
                                                                    *(esp_9 - 0x14) = "open"
                                                                    *(esp_9 - 0x18) = sub_4318d0(ebp[-1])
                                                                    ShellExecuteA()
                                                            else
                                                                if (*(data_61c8c8 + 0x97d) != 0)
                                                                    sub_44613c(ebp[-1], arg2, i_23)
                                                                
                                                                *(esp_9 - 4) = 0
                                                                *(esp_9 - 8) = &data_4ebfcc
                                                                *(esp_9 - 0xc) =
                                                                    "http://www.playandsmile.de/"
                                                                *(esp_9 - 0x10) = "explorer"
                                                                *(esp_9 - 0x14) = "open"
                                                                *(esp_9 - 0x18) = sub_4318d0(ebp[-1])
                                                                ShellExecuteA()
                                                        else
                                                            sub_48380c(ebp[-1], ebp[-5])
                                                    else if (ebp[-6] == 2)
                                                        sub_48380c(ebp[-1], data_61cb24)
                                                    else if (ebp[-6] == data_61cb70)
                                                        *(esp_9 - 4) = 0
                                                        *(esp_9 - 8) = &data_4ebfcc
                                                        *(esp_9 - 0xc) = &data_4ebfcc
                                                        
                                                        if (sub_4746a0(0, 1, data_61c8c8) == 6)
                                                            sub_51fdc8(data_780c58)
                                                            sub_4d88f8(ebp[-1], 1, data_7a6a9c, esi_2, 
                                                                edi_1)
                                                            esp_9 += 0x20
                                                    else if (ebp[-6] == data_61cb64)
                                                        data_7a6a9c = 1
                                                        sub_4d88f8(ebp[-1], 1, data_7a6a9c, esi_2, 
                                                            edi_1)
                                                        esp_9 += 0x20
                                                    else if (ebp[-6] == data_61cb68)
                                                        data_7a6a9c = 2
                                                        sub_4d88f8(ebp[-1], 1, data_7a6a9c, esi_2, 
                                                            edi_1)
                                                        esp_9 += 0x20
                                                    else if (ebp[-6] == data_61cb6c)
                                                        data_7a6a9c = 3
                                                        sub_4d88f8(ebp[-1], 1, data_7a6a9c, esi_2, 
                                                            edi_1)
                                                        esp_9 += 0x20
                                                else if (ebp[-6] == 2)
                                                    sub_48380c(ebp[-1], data_61cb28)
                                                    
                                                    if (*(data_61c8c8 + 0x8a0) != data_61c8d0
                                                            && *(data_780c58 + 0x111f8) != 0
                                                            && data_77e23c == 1)
                                                        sub_4837ec(data_61c8c8, data_61ccd8, true)
                                                else if (sx.d(data_61cb52) == ebp[-6])
                                                    *(esp_9 - 4) = 2
                                                    sub_47a9e0(data_61cb54, data_61cb28, data_61c8c8)
                                                else if (sx.d(data_61cb50) == ebp[-6])
                                                    *(esp_9 - 4) = 1
                                                    sub_47a9e0(data_61cb54, data_61cb28, data_61c8c8)
                                                else if (ebp[-6] == data_61cb4c)
                                                    *(esp_9 - 4) = 1
                                                    sub_47a9e0(data_61cb58, data_61cb28, data_61c8c8)
                                                else if (ebp[-6] == data_61cb48)
                                                    *(esp_9 - 4) = 0
                                                    *(esp_9 - 8) = &ebp[-0xb]
                                                    data_61cb28
                                                    data_61c8c8
                                                    ebp = sub_47a7ec(data_61cb44)
                                                    sub_51d270(data_780c60, ebp[-0xb])
                                                    data_61cb28
                                                    bool o_96 = unimplemented  {imul eax, dword [
                                                        0x61cb28], 0x1038}
                                                    
                                                    if (o_96)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    data_61cb40
                                                    bool o_97 = unimplemented  {imul edx, dword [
                                                        0x61cb40], 0x23}
                                                    
                                                    if (o_97)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    if (*(*(data_61c8c8 + 0xab0) + data_61cb28 * 0x81c0
                                                            + data_61cb40 * 0x118 - 0x14) s> 1)
                                                        *(esp_9 - 4) = 2
                                                        sub_47a9e0(data_61cb58, data_61cb28, 
                                                            data_61c8c8)
                                                else if (ebp[-6] == data_61cb40)
                                                    *(esp_9 - 4) = &ebp[-7]
                                                    sub_47a960(data_61cb40, data_61cb28, data_61c8c8)
                                                    ebp[-7]
                                                    bool o_98 =
                                                        unimplemented  {imul eax, dword [ebp-0x1c], 0x5}
                                                    
                                                    if (o_98)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    ebp[-8] = *(data_780c60 + ebp[-7] * 0x14 + 0xfe8)
                                                    ebp[-8]
                                                    bool o_99 =
                                                        unimplemented  {imul eax, dword [ebp-0x20], 0x5}
                                                    
                                                    if (o_99)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(esp_9 - 4) =
                                                        *(data_780c60 + ebp[-8] * 0x14 + 0x14)
                                                    ebp[-7]
                                                    bool o_100 =
                                                        unimplemented  {imul eax, dword [ebp-0x1c], 0x5}
                                                    
                                                    if (o_100)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(esp_9 - 8) =
                                                        *(data_780c60 + ebp[-7] * 0x14 + 0xfe0)
                                                    ebp[-8]
                                                    bool o_101 =
                                                        unimplemented  {imul eax, dword [ebp-0x20], 0x5}
                                                    
                                                    if (o_101)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    ebp[-8]
                                                    bool o_102 =
                                                        unimplemented  {imul eax, dword [ebp-0x20], 0x5}
                                                    
                                                    if (o_102)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    sub_4d8208(ebp[-1], 
                                                        *(data_780c60 + ebp[-8] * 0x14 + 0x1c), 
                                                        *(data_780c60 + ebp[-8] * 0x14 + 0x10), esi_2, 
                                                        edi_1)
                                                    esp_9 += 0x20
                                                else if (ebp[-6] == data_61cb38)
                                                    *(esp_9 - 4) = &ebp[-7]
                                                    sub_47a960(data_61cb38, data_61cb28, data_61c8c8)
                                                    
                                                    while (true)
                                                        ebp[-7]
                                                        bool o_104 = unimplemented  {imul eax, dword [
                                                            ebp-0x1c], 0x5}
                                                        
                                                        if (o_104)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        if (*(data_780c60 + ebp[-7] * 0x14 + 0x18)
                                                                s<= 0)
                                                            break
                                                        
                                                        int32_t temp76_1 = ebp[-7]
                                                        ebp[-7] += 1
                                                        
                                                        if (add_overflow(temp76_1, 1))
                                                            sub_403010()
                                                            noreturn
                                                    
                                                    ebp[-7]
                                                    bool o_105 =
                                                        unimplemented  {imul eax, dword [ebp-0x1c], 0x5}
                                                    
                                                    if (o_105)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(esp_9 - 4) =
                                                        *(data_780c60 + ebp[-7] * 0x14 + 0x14)
                                                    *(esp_9 - 8) = 0
                                                    ebp[-7]
                                                    bool o_106 =
                                                        unimplemented  {imul eax, dword [ebp-0x1c], 0x5}
                                                    
                                                    if (o_106)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    ebp[-7]
                                                    bool o_107 =
                                                        unimplemented  {imul eax, dword [ebp-0x1c], 0x5}
                                                    
                                                    if (o_107)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    sub_4d8208(ebp[-1], 
                                                        *(data_780c60 + ebp[-7] * 0x14 + 0x1c), 
                                                        *(data_780c60 + ebp[-7] * 0x14 + 0x10), esi_2, 
                                                        edi_1)
                                                    esp_9 += 0x20
                                            else
                                                if (data_77e23c != 2)
                                                    if (*(data_61c8c8 + 0x8a0) != data_61cb2c)
                                                        goto label_4e9746
                                                    
                                                    data_61cb2c
                                                    bool o_90 = unimplemented  {imul eax, dword [
                                                        0x61cb2c], 0x1038}
                                                    
                                                    if (o_90)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    arg2 = *(data_61c8c8 + 0xab0)
                                                    
                                                    if (*(arg2 + data_61cb2c * 0x81c0 + 1) == 0)
                                                        goto label_4e9746
                                                    
                                                    goto label_4e9330
                                                
                                            label_4e9330:
                                                
                                                if (ebp[-6] == 2)
                                                    *(esp_9 - 4) = &ebp[-0xc4]
                                                    *(esp_9 - 8) = 0
                                                    *(esp_9 - 0xc) = &ebp[-0xc5]
                                                    ebp[-5]
                                                    ebp[-1]
                                                    void* ebp_8 = sub_47a7ec(ebp[-6])
                                                    int32_t eax_593 = sub_404078(*(ebp_8 - 0x314))
                                                    
                                                    if (add_overflow(eax_593, 0xfffffffb))
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(esp_9 - 8) = eax_593 - 5
                                                    *(esp_9 - 0xc) = 0
                                                    *(esp_9 - 0x10) = ebp_8 - 0x318
                                                    *(ebp_8 - 0x14)
                                                    *(ebp_8 - 4)
                                                    ebp = sub_47a7ec(*(ebp_8 - 0x18))
                                                    sub_404280(6, *(esp_9 - 8), ebp[-0xc6])
                                                    sub_404188(ebp[-0xc4], 0x4ec224)
                                                    
                                                    if (eax_593 == 5)
                                                        sub_48380c(ebp[-1], data_61cb2c)
                                                    else
                                                        *(esp_9 - 4) = &ebp[-0xc7]
                                                        *(esp_9 - 8) = 0
                                                        *(esp_9 - 0xc) = &ebp[-0xc8]
                                                        ebp[-5]
                                                        ebp[-1]
                                                        void* ebp_9 = sub_47a7ec(ebp[-6])
                                                        int32_t eax_603 = sub_404078(*(ebp_9 - 0x320))
                                                        
                                                        if (add_overflow(eax_603, 0xfffffffd))
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        *(esp_9 - 8) = eax_603 - 3
                                                        *(esp_9 - 0xc) = 0
                                                        *(esp_9 - 0x10) = ebp_9 - 0x324
                                                        *(ebp_9 - 0x14)
                                                        *(ebp_9 - 4)
                                                        ebp = sub_47a7ec(*(ebp_9 - 0x18))
                                                        sub_404280(4, *(esp_9 - 8), ebp[-0xc9])
                                                        sub_404188(ebp[-0xc7], "Back")
                                                        
                                                        if (eax_603 != 3)
                                                            *(esp_9 - 4) = &ebp[-0xca]
                                                            *(esp_9 - 8) = 0
                                                            *(esp_9 - 0xc) = &ebp[-0xcb]
                                                            ebp[-5]
                                                            ebp[-1]
                                                            void* ebp_10 = sub_47a7ec(ebp[-6])
                                                            int32_t eax_614 =
                                                                sub_404078(*(ebp_10 - 0x32c))
                                                            
                                                            if (add_overflow(eax_614, 0xfffffffb))
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            *(esp_9 - 8) = eax_614 - 5
                                                            *(esp_9 - 0xc) = 0
                                                            *(esp_9 - 0x10) = ebp_10 - 0x330
                                                            *(ebp_10 - 0x14)
                                                            *(ebp_10 - 4)
                                                            ebp = sub_47a7ec(*(ebp_10 - 0x18))
                                                            sub_404280(6, *(esp_9 - 8), ebp[-0xcc])
                                                            sub_404188(ebp[-0xca], "Weiter")
                                                            
                                                            if (eax_614 == 5)
                                                            label_4e9509:
                                                                
                                                                if (sub_4c0924() == 0)
                                                                    sub_4837d0(ebp[-1], data_61cb2c)
                                                                    data_77e23c = 1
                                                                    sub_528320(data_780c58, 
                                                                        *(data_780c58 + 4), 1)
                                                                else
                                                                    data_7a6e4c = 1
                                                                    
                                                                    if (data_77e234 s> 0)
                                                                        ebp[-7] = 1
                                                                        ebp[-0xd] = &data_61ce9c
                                                                        int32_t i_4
                                                                        
                                                                        do
                                                                            *(esp_9 - 4) = 0
                                                                            i_4 = sub_47ab08(data_61c8c8, 
                                                                                data_61cda0, *ebp[-0xd], x87_r0)
                                                                            ebp[-7] += 1
                                                                            ebp[-0xd] += 4
                                                                        while (i_4 != 1)
                                                                    
                                                                    sub_50928c()
                                                                    sub_4837d0(ebp[-1], data_61cb2c)
                                                                    *(data_61c9f0 + 0x1b4) = 0
                                                                    ebp = sub_507860(&ebp[-0xd0])
                                                                    esp_9 += 0x20
                                                                    sub_404054(data_61c9f0 + 0xa0, 
                                                                        ebp[-0xd0], 0xff)
                                                                    *(data_61c9f0 + 0x9c) = 1
                                                            else
                                                                *(esp_9 - 4) = &ebp[-0xcd]
                                                                *(esp_9 - 8) = 0
                                                                *(esp_9 - 0xc) = &ebp[-0xce]
                                                                ebp[-5]
                                                                ebp[-1]
                                                                void* ebp_11 = sub_47a7ec(ebp[-6])
                                                                int32_t eax_624 =
                                                                    sub_404078(*(ebp_11 - 0x338))
                                                                
                                                                if (add_overflow(eax_624, 0xfffffffb))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                *(esp_9 - 8) = eax_624 - 5
                                                                *(esp_9 - 0xc) = 0
                                                                *(esp_9 - 0x10) = ebp_11 - 0x33c
                                                                *(ebp_11 - 0x14)
                                                                *(ebp_11 - 4)
                                                                ebp = sub_47a7ec(*(ebp_11 - 0x18))
                                                                sub_404280(6, *(esp_9 - 8), ebp[-0xcf])
                                                                sub_404188(ebp[-0xcd], "ntinue")
                                                                
                                                                if (eax_624 == 5)
                                                                    goto label_4e9509
                                                                
                                                                if (sub_4c0924() != 0)
                                                                    *(data_61c9f0 + 0x1b4) = 0
                                                                
                                                                if (*(data_780c58 + 4) == 7)
                                                                    int32_t i_16 = data_77e234
                                                                    
                                                                    if (i_16 s> 0)
                                                                        int32_t eax_645 = 1
                                                                        int32_t i_5
                                                                        
                                                                        do
                                                                            for (int32_t j = 1; j != 8; j += 1)
                                                                                bool o_95 =
                                                                                    unimplemented  {imul ecx, eax, 0x41}
                                                                                
                                                                                if (o_95)
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                *(data_780c58 + eax_645 * 0x208 + j
                                                                                    + 0x20093) = 0
                                                                            
                                                                            eax_645 += 1
                                                                            i_5 = i_16
                                                                            i_16 -= 1
                                                                        while (i_5 != 1)
                                                                
                                                                sub_4837d0(ebp[-1], data_61cb2c)
                                                                sub_4c0fcc()
                                                                
                                                                if (sub_4c094c() != 0)
                                                                    data_77e23c = 0
                                                                    sub_4c93fc()
                                                                    int32_t edx_340
                                                                    edx_340.b = 1
                                                                    sub_520a94(data_780c58)
                                                                    sub_4834fc(ebp[-1], data_61c8cc)
                                                                else
                                                                    sub_520a94(data_780c58)
                                                                    data_7a6e64 = 0
                                                                    sub_51fd8c(data_780c58, &ebp[-0xb])
                                                                    
                                                                    if (ebp[-0xb] != 0)
                                                                        void* esp_228
                                                                        
                                                                        if (data_7a6e64 s> 3)
                                                                            *(esp_9 - 4) = 0
                                                                            sub_51ad40(data_780c5c, 0x11)
                                                                            esp_228 = esp_9
                                                                        else
                                                                            *(esp_9 - 4) = 0
                                                                            sub_51ad40(data_780c5c, 0x12)
                                                                            esp_228 = esp_9
                                                                        
                                                                        *(esp_228 - 4) = 0
                                                                        void* ebp_12 = sub_46910c(data_61c8c8, 
                                                                            "f_weiter", &ebp[-0xd1])
                                                                        *(esp_228 - 8) = *(ebp_12 - 0x344)
                                                                        *(esp_228 - 0xc) = 0
                                                                        *(esp_228 - 0x10) = 0
                                                                        esp_9 = esp_228 - 0x10
                                                                        ebp = sub_46910c(data_61c8c8, 
                                                                            "f_gutgemacht", ebp_12 - 0x348)
                                                                        sub_4748fc(data_61c8c8, ebp[-0xb], 
                                                                            ebp[-0xd2])
                                                                    
                                                                    data_77e23c = 0
                                                                    sub_4c93fc()
                                                                    sub_4834fc(ebp[-1], data_61c8cc)
                                                        else
                                                            sub_48380c(ebp[-1], data_61cb2c)
                                        else if (ebp[-6] == data_61cd9c)
                                            int32_t eax_534 = data_7a6e74
                                            
                                            if (add_overflow(eax_534, 1))
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t eax_536 = (eax_534 + 1) & 0x80000003
                                            
                                            if (eax_536 s< 0)
                                                eax_536 = ((eax_536 - 1) | 0xfffffffc) + 1
                                            
                                            data_7a6e74 = eax_536
                                        else if (ebp[-6] == data_61cd98)
                                            sub_4836b0(ebp[-1], data_61c90c)
                                            sub_50971c()
                                        else if (ebp[-6] == data_61cd88)
                                            if (*(data_780c58 + 0x111f8) != 0)
                                                sub_4837ec(data_61c8c8, data_61ccd8, false)
                                            
                                            sub_4d81c8(data_61c8c8)
                                        else if (ebp[-6] == 1)
                                            if (sub_4c0924() == 0)
                                                data_77e23c = 2
                                            
                                            data_61c90c
                                            bool o_61 =
                                                unimplemented  {imul eax, dword [0x61c90c], 0x1038}
                                            
                                            if (o_61)
                                                sub_403010()
                                                noreturn
                                            
                                            if (*(*(data_61c8c8 + 0xab0) + data_61c90c * 0x81c0 + 1)
                                                    != 0)
                                                sub_509850()
                                            
                                            *(esp_9 - 4) = 0
                                            sub_47ab08(ebp[-1], data_61c8d0, 1, x87_r0)
                                            void* const eax_549
                                            
                                            if (*(data_780c58 + 0x4584) s<= 0)
                                                eax_549 = nullptr
                                            else if (sub_4c094c().b == 0)
                                                eax_549.b = 1
                                            else if (sub_4c2d7c(1).b != 0)
                                                eax_549.b = 1
                                            else
                                                eax_549 = nullptr
                                            
                                            *(esp_9 - 4) = eax_549
                                            sub_47a180(data_61cfc0, data_61c8d0, data_61c8c8)
                                            void* const eax_551
                                            
                                            if (*(data_780c58 + 4) != 7)
                                                eax_551.b = 1
                                            else if (*(*data_53067c + 0x10) s> 0
                                                    || *(data_780c58 + 0xffec) == 1)
                                                eax_551 = nullptr
                                            else if (data_52fe90 == 0)
                                                eax_551.b = 1
                                            else if (sub_4c1090().b == 0)
                                                eax_551.b = 1
                                            else
                                                eax_551 = nullptr
                                            
                                            *(esp_9 - 4) = eax_551
                                            sub_47a180(data_61cc8c, data_61c8d0, data_61c8c8)
                                            void* const eax_557
                                            
                                            if (sub_4c0924() != 0 || *(data_61c9f0 + 0x1e3) != 0
                                                    || *(data_780c58 + 0x111f9) != 0)
                                                eax_557 = nullptr
                                            else
                                                eax_557.b = 1
                                            
                                            *(esp_9 - 4) = eax_557
                                            sub_47a1c0(data_61cc8c, data_61c8d0, data_61c8c8)
                                            
                                            if (*(data_780c58 + 0x111f9) == 0)
                                                ebp = sub_46910c(ebp[-1], "f_spielende", &ebp[-0xc3])
                                                *(esp_9 - 4) = ebp[-0xc3]
                                                sub_47ab08(data_61c8c8, data_61c8d0, data_61cc80, 
                                                    x87_r0)
                                            else
                                                ebp = sub_46910c(ebp[-1], "f_tutende", &ebp[-0xc2])
                                                *(esp_9 - 4) = ebp[-0xc2]
                                                sub_47ab08(data_61c8c8, data_61c8d0, data_61cc80, 
                                                    x87_r0)
                                            
                                            char eax_567
                                            
                                            if (*(data_780c58 + 0x111f9) == 0)
                                                eax_567 = sub_4c0924()
                                            
                                            if (*(data_780c58 + 0x111f9) == 0 && eax_567 == 0)
                                                data_61c8d0
                                                bool o_74 =
                                                    unimplemented  {imul eax, dword [0x61c8d0], 0x1038}
                                                
                                                if (o_74)
                                                    sub_403010()
                                                    noreturn
                                                
                                                *(*(data_61c8c8 + 0xab0) + data_61c8d0 * 0x81c0 + 8) =
                                                    0x163
                                                data_61c8d0
                                                bool o_75 =
                                                    unimplemented  {imul eax, dword [0x61c8d0], 0x1038}
                                                
                                                if (o_75)
                                                    sub_403010()
                                                    noreturn
                                                
                                                *(*(data_61c8c8 + 0xab0) + data_61c8d0 * 0x81c0 + 4) =
                                                    0xbc
                                                data_61c8d0
                                                bool o_76 =
                                                    unimplemented  {imul eax, dword [0x61c8d0], 0x1038}
                                                
                                                if (o_76)
                                                    sub_403010()
                                                    noreturn
                                                
                                                void* eax_577 =
                                                    *(data_61c8c8 + 0xab0) + data_61c8d0 * 0x81c0
                                                data_61cc80
                                                bool o_77 =
                                                    unimplemented  {imul edx, dword [0x61cc80], 0x23}
                                                
                                                if (o_77)
                                                    sub_403010()
                                                    noreturn
                                                
                                                *(eax_577 + data_61cc80 * 0x118 - 0xf4) = 0x32
                                                data_61cc8c
                                                bool o_78 =
                                                    unimplemented  {imul edx, dword [0x61cc8c], 0x23}
                                                
                                                if (o_78)
                                                    sub_403010()
                                                    noreturn
                                                
                                                *(eax_577 + data_61cc8c * 0x118 - 0xf4) = 0x64
                                                data_61cc84
                                                bool o_79 =
                                                    unimplemented  {imul edx, dword [0x61cc84], 0x23}
                                                
                                                if (o_79)
                                                    sub_403010()
                                                    noreturn
                                                
                                                *(eax_577 + data_61cc84 * 0x118 - 0xf4) = 0x96
                                                data_61cfc0
                                                bool o_80 =
                                                    unimplemented  {imul edx, dword [0x61cfc0], 0x23}
                                                
                                                if (o_80)
                                                    sub_403010()
                                                    noreturn
                                                
                                                *(eax_577 + data_61cfc0 * 0x118 - 0xf4) = 0xc8
                                                data_61cfbc
                                                bool o_81 =
                                                    unimplemented  {imul edx, dword [0x61cfbc], 0x23}
                                                
                                                if (o_81)
                                                    sub_403010()
                                                    noreturn
                                                
                                                *(eax_577 + data_61cfbc * 0x118 - 0xf4) = 0xfa
                                                *(eax_577 + 0x13c) = 0x12c
                                                *(eax_577 + 0x13a) = 0x6e
                                                data_61cab4
                                                bool o_82 =
                                                    unimplemented  {imul eax, dword [0x61cab4], 0x1038}
                                                
                                                if (o_82)
                                                    sub_403010()
                                                    noreturn
                                                
                                                void* eax_579 =
                                                    *(data_61c8c8 + 0xab0) + data_61cab4 * 0x81c0
                                                data_61cca0
                                                bool o_83 =
                                                    unimplemented  {imul edx, dword [0x61cca0], 0x23}
                                                
                                                if (o_83)
                                                    sub_403010()
                                                    noreturn
                                                
                                                *(eax_579 + data_61cca0 * 0x118 - 0xf4) = 0x64
                                                data_61cc94
                                                bool o_84 =
                                                    unimplemented  {imul edx, dword [0x61cc94], 0x23}
                                                
                                                if (o_84)
                                                    sub_403010()
                                                    noreturn
                                                
                                                *(eax_579 + data_61cc94 * 0x118 - 0xf4) = 0x96
                                                data_61cc98
                                                bool o_85 =
                                                    unimplemented  {imul edx, dword [0x61cc98], 0x23}
                                                
                                                if (o_85)
                                                    sub_403010()
                                                    noreturn
                                                
                                                *(eax_579 + data_61cc98 * 0x118 - 0xf4) = 0xc8
                                                *(eax_579 + 0x13c) = 0x122
                                            else
                                                data_61c8d0
                                                bool o_62 =
                                                    unimplemented  {imul eax, dword [0x61c8d0], 0x1038}
                                                
                                                if (o_62)
                                                    sub_403010()
                                                    noreturn
                                                
                                                *(*(data_61c8c8 + 0xab0) + data_61c8d0 * 0x81c0 + 8) =
                                                    0x127
                                                data_61c8d0
                                                bool o_63 =
                                                    unimplemented  {imul eax, dword [0x61c8d0], 0x1038}
                                                
                                                if (o_63)
                                                    sub_403010()
                                                    noreturn
                                                
                                                *(*(data_61c8c8 + 0xab0) + data_61c8d0 * 0x81c0 + 4) =
                                                    0xf8
                                                data_61c8d0
                                                bool o_64 =
                                                    unimplemented  {imul eax, dword [0x61c8d0], 0x1038}
                                                
                                                if (o_64)
                                                    sub_403010()
                                                    noreturn
                                                
                                                void* eax_571 =
                                                    *(data_61c8c8 + 0xab0) + data_61c8d0 * 0x81c0
                                                data_61cc80
                                                bool o_65 =
                                                    unimplemented  {imul edx, dword [0x61cc80], 0x23}
                                                
                                                if (o_65)
                                                    sub_403010()
                                                    noreturn
                                                
                                                *(eax_571 + data_61cc80 * 0x118 - 0xf4) = 0x32
                                                data_61cc8c
                                                bool o_66 =
                                                    unimplemented  {imul edx, dword [0x61cc8c], 0x23}
                                                
                                                if (o_66)
                                                    sub_403010()
                                                    noreturn
                                                
                                                *(eax_571 + data_61cc8c * 0x118 - 0xf4) = 0x32
                                                data_61cc84
                                                bool o_67 =
                                                    unimplemented  {imul edx, dword [0x61cc84], 0x23}
                                                
                                                if (o_67)
                                                    sub_403010()
                                                    noreturn
                                                
                                                *(eax_571 + data_61cc84 * 0x118 - 0xf4) = 0x64
                                                data_61cfc0
                                                bool o_68 =
                                                    unimplemented  {imul edx, dword [0x61cfc0], 0x23}
                                                
                                                if (o_68)
                                                    sub_403010()
                                                    noreturn
                                                
                                                *(eax_571 + data_61cfc0 * 0x118 - 0xf4) = 0x96
                                                data_61cfbc
                                                bool o_69 =
                                                    unimplemented  {imul edx, dword [0x61cfbc], 0x23}
                                                
                                                if (o_69)
                                                    sub_403010()
                                                    noreturn
                                                
                                                *(eax_571 + data_61cfbc * 0x118 - 0xf4) = 0xc8
                                                *(eax_571 + 0x13c) = 0xfa
                                                *(eax_571 + 0x13a) = 0x6e
                                                data_61cab4
                                                bool o_70 =
                                                    unimplemented  {imul eax, dword [0x61cab4], 0x1038}
                                                
                                                if (o_70)
                                                    sub_403010()
                                                    noreturn
                                                
                                                void* eax_573 =
                                                    *(data_61c8c8 + 0xab0) + data_61cab4 * 0x81c0
                                                data_61cca0
                                                bool o_71 =
                                                    unimplemented  {imul edx, dword [0x61cca0], 0x23}
                                                
                                                if (o_71)
                                                    sub_403010()
                                                    noreturn
                                                
                                                *(eax_573 + data_61cca0 * 0x118 - 0xf4) = 0x5f
                                                data_61cc94
                                                bool o_72 =
                                                    unimplemented  {imul edx, dword [0x61cc94], 0x23}
                                                
                                                if (o_72)
                                                    sub_403010()
                                                    noreturn
                                                
                                                *(eax_573 + data_61cc94 * 0x118 - 0xf4) = 0x91
                                                data_61cc98
                                                bool o_73 =
                                                    unimplemented  {imul edx, dword [0x61cc98], 0x23}
                                                
                                                if (o_73)
                                                    sub_403010()
                                                    noreturn
                                                
                                                *(eax_573 + data_61cc98 * 0x118 - 0xf4) = 0xc3
                                                *(eax_573 + 0x13c) = 0xf5
                                            
                                            data_61c8d0
                                            bool o_86 =
                                                unimplemented  {imul eax, dword [0x61c8d0], 0x1038}
                                            
                                            if (o_86)
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t eax_580
                                            eax_580.w =
                                                *(*(data_61c8c8 + 0xab0) + data_61c8d0 * 0x81c0 + 4)
                                            data_61cab4
                                            bool o_87 =
                                                unimplemented  {imul edx, dword [0x61cab4], 0x1038}
                                            
                                            if (o_87)
                                                sub_403010()
                                                noreturn
                                            
                                            *(*(data_61c8c8 + 0xab0) + data_61cab4 * 0x81c0 + 4) =
                                                eax_580.w
                                            data_61c8d0
                                            bool o_88 =
                                                unimplemented  {imul eax, dword [0x61c8d0], 0x1038}
                                            
                                            if (o_88)
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t eax_581
                                            eax_581.w =
                                                *(*(data_61c8c8 + 0xab0) + data_61c8d0 * 0x81c0 + 8)
                                            data_61cab4
                                            bool o_89 =
                                                unimplemented  {imul edx, dword [0x61cab4], 0x1038}
                                            
                                            if (o_89)
                                                sub_403010()
                                                noreturn
                                            
                                            *(*(data_61c8c8 + 0xab0) + data_61cab4 * 0x81c0 + 8) =
                                                eax_581.w
                                            
                                            if (*(data_780c58 + 0x111f8) != 0)
                                                sub_4837ec(data_61c8c8, data_61ccd8, false)
                                            
                                            sub_4836b0(ebp[-1], data_61c8d0)
                                    else if (ebp[-6] == 0xb)
                                        arg2.b = 1
                                        ebp[-1]
                                        ebp = sub_4d7b54(i_23, arg2.b, esi_2, edi_1)
                                        esp_9 += 0x20
                                    else if (ebp[-6] != 0xa)
                                        if (ebp[-6] == 0xc)
                                            int32_t temp35_1 = data_61d48c
                                            data_61d48c += 5
                                            
                                            if (add_overflow(temp35_1, 5))
                                                sub_403010()
                                                noreturn
                                        else if (ebp[-6] == 0xd)
                                            int32_t temp39_1 = data_61d48c
                                            data_61d48c -= 5
                                            
                                            if (add_overflow(temp39_1, 0xfffffffb))
                                                sub_403010()
                                                noreturn
                                        else if (ebp[-6] == 0xe)
                                            int32_t temp41_1 = data_61d490
                                            data_61d490 += 1
                                            
                                            if (add_overflow(temp41_1, 1))
                                                sub_403010()
                                                noreturn
                                        else if (ebp[-6] == 0xf)
                                            int32_t temp46_1 = data_61d490
                                            data_61d490 -= 1
                                            
                                            if (add_overflow(temp46_1, 0xffffffff))
                                                sub_403010()
                                                noreturn
                                        else if (ebp[-6] == 0x10)
                                            sub_48e89c(data_61c8c8, 0xf, i_23)
                                        else if (ebp[-6] == 0x11)
                                            ebp = sub_48e9e4(data_61c8c8, esi_2, edi_1)
                                            esp_9 += 0x20
                                        else if (ebp[-6] == 0x76)
                                            ebp[-1]
                                            sub_4d6590()
                                        else if (ebp[-6] == 0x77)
                                            sub_4c4ab8(1, &ebp[-0x53])
                                            sub_4cd498(&ebp[-0x53], 1, &ebp[-0x9f])
                                        else if (ebp[-6] == 0x12)
                                            int32_t ebx_9 = data_77e234
                                            
                                            if (ebx_9 s>= 0)
                                                int32_t i_12 = ebx_9 + 1
                                                ebp[-7] = 0
                                                int32_t i_6
                                                
                                                do
                                                    if (ebp[-7] != 0)
                                                        ebp[-8] = ebp[-7]
                                                    else
                                                        ebp[-8] = 0xa
                                                    
                                                    char eax_424
                                                    
                                                    if (ebp[-8] != 0xa)
                                                        eax_424, arg2 = sub_4c2d7c(ebp[-8])
                                                    
                                                    if (ebp[-8] == 0xa || eax_424 != 0)
                                                        *(esp_9 - 4) = 0xffffffff
                                                        arg2.b = 4
                                                        sub_4d3e30(0xa, arg2, ebp[-8])
                                                    
                                                    ebp[-7] += 1
                                                    i_6 = i_12
                                                    i_12 -= 1
                                                while (i_6 != 1)
                                        else
                                            int32_t eax_416
                                            
                                            if (ebp[-6] == 0x13)
                                                int32_t ebx_10 = data_77e234
                                                
                                                if (ebx_10 s>= 0)
                                                    int32_t i_13 = ebx_10 + 1
                                                    ebp[-7] = 0
                                                    int32_t i_7
                                                    
                                                    do
                                                        if (ebp[-7] != 0)
                                                            ebp[-8] = ebp[-7]
                                                        else
                                                            ebp[-8] = 0xa
                                                        
                                                        if (ebp[-8] != 0xa)
                                                            eax_416 = sub_4c2d7c(ebp[-8])
                                                        
                                                        if (ebp[-8] == 0xa || eax_416.b != 0)
                                                            int32_t edx_187
                                                            long double st0_1
                                                            st0_1, edx_187 = sub_402d38()
                                                            long double x87_r6_1 = data_4ec114
                                                            x87_r6_1 - st0_1
                                                            eax_416.w = (x87_r6_1 < st0_1 ? 1 : 0) << 8
                                                                | (is_unordered.t(x87_r6_1, st0_1) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r6_1 == st0_1 ? 1 : 0) << 0xe
                                                            
                                                            if (test_bit(eax_416:1.b, 6)
                                                                    || test_bit(eax_416:1.b, 0))
                                                                int32_t edx_188
                                                                long double st0_2
                                                                st0_2, edx_188 = sub_402d38()
                                                                long double x87_r6_2 = data_4ec114
                                                                x87_r6_2 - st0_2
                                                                eax_416.w =
                                                                    (x87_r6_2 < st0_2 ? 1 : 0) << 8 | (
                                                                    is_unordered.t(x87_r6_2, st0_2) ? 1 : 0)
                                                                    << 0xa
                                                                    | (x87_r6_2 == st0_2 ? 1 : 0) << 0xe
                                                                
                                                                if (test_bit(eax_416:1.b, 6)
                                                                        || test_bit(eax_416:1.b, 0))
                                                                    int32_t edx_189
                                                                    long double st0_3
                                                                    st0_3, edx_189 = sub_402d38()
                                                                    long double x87_r6_3 = data_4ec114
                                                                    x87_r6_3 - st0_3
                                                                    eax_416.w =
                                                                        (x87_r6_3 < st0_3 ? 1 : 0) << 8 | (
                                                                        is_unordered.t(x87_r6_3, st0_3) ? 1 : 0)
                                                                        << 0xa
                                                                        | (x87_r6_3 == st0_3 ? 1 : 0) << 0xe
                                                                    
                                                                    if (test_bit(eax_416:1.b, 6)
                                                                            || test_bit(eax_416:1.b, 0))
                                                                        *(esp_9 - 4) = 0xffffffff
                                                                        sub_4d3e30(0xa, 0, ebp[-8])
                                                                    else
                                                                        *(esp_9 - 4) = 0xffffffff
                                                                        edx_189.b = 3
                                                                        sub_4d3e30(0xa, edx_189, ebp[-8])
                                                                else
                                                                    *(esp_9 - 4) = 0xffffffff
                                                                    edx_188.b = 2
                                                                    sub_4d3e30(0xa, edx_188, ebp[-8])
                                                            else
                                                                *(esp_9 - 4) = 0xffffffff
                                                                edx_187.b = 1
                                                                sub_4d3e30(0xa, edx_187, ebp[-8])
                                                        
                                                        ebp[-7] += 1
                                                        i_7 = i_13
                                                        i_13 -= 1
                                                    while (i_7 != 1)
                                            else if (ebp[-6] == 0x76)
                                                data_687338 = 0
                                                arg2.b = 2
                                                eax_416.b = 0xa
                                                sub_517a38(0x6870a0, sub_517f20(eax_416.b, arg2.b))
                                                sub_517a38(0x6870a0, sub_517f20(4, 2))
                                                sub_517a38(0x6870a0, sub_517f20(1, 2))
                                                sub_517a38(0x6870a0, sub_517f20(5, 2))
                                                sub_516ec0(0x67e6f0)
                                                data_62635c = 0
                                                sub_517a38(0x6260c4, sub_517f20(6, 2))
                                                sub_517a38(0x6260c4, sub_517f20(9, 1))
                                                sub_516ec0(&data_61d714)
                                            else if (ebp[-6] == 0x3f9)
                                                *(esp_9 - 4) = 0
                                                *(esp_9 - 8) = 0
                                                *(esp_9 - 0xc) = 0
                                                *(esp_9 - 0x10) = 0
                                                sub_528770(data_780db4)
                                                sub_4748fc(data_61c8c8, ebp[-0xba], "Table-info")
                                                *(esp_9 - 0x14) = 0
                                                *(esp_9 - 0x18) = 0
                                                *(esp_9 - 0x1c) = 0
                                                *(esp_9 - 0x20) = 0
                                                *(esp_9 - 0x24) = &ebp[-0xbb]
                                                sub_528e4c(data_780db4, 1)
                                                esp_9 += 0x20
                                                sub_4748fc(data_61c8c8, ebp[-0xbb], "Player-info")
                                            else if (ebp[-6] == 0x3f9)
                                                data_687338 = 0
                                                data_62635c = 0
                                                data_637d84 = 0
                                                data_640a98 = 0
                                                arg2.b = 3
                                                eax_416.b = 0xb
                                                sub_517a38(0x6870a0, sub_517f20(eax_416.b, arg2.b))
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
                                            else if (ebp[-6] == 0x76)
                                                data_687338 = 0
                                                arg2.b = 2
                                                eax_416.b = 0xa
                                                sub_517a38(0x6870a0, sub_517f20(eax_416.b, arg2.b))
                                                sub_517a38(0x6870a0, sub_517f20(4, 2))
                                                sub_517a38(0x6870a0, sub_517f20(1, 2))
                                                sub_517a38(0x6870a0, sub_517f20(5, 2))
                                                sub_516ec0(0x67e6f0)
                                                data_62635c = 0
                                                sub_517a38(0x6260c4, sub_517f20(6, 2))
                                                sub_517a38(0x6260c4, sub_517f20(5, 1))
                                                sub_516ec0(&data_61d714)
                                            else if (ebp[-6] == 0x76)
                                                *(data_780c58 + 0x10020) = 4
                                                sub_403df8(&data_7a6a88)
                                                int32_t ecx_101
                                                ecx_101.b = 1
                                                sub_4bdac0(1, 1)
                                                *(esp_9 - 4) = data_7a6a88
                                                *(esp_9 - 8) = &data_4ec150
                                                *(esp_9 - 0xc) = &data_4ec150
                                                *(esp_9 - 0x10) = "3-GEGENSPIELER:"
                                                sub_404138(&data_7a6a88, 4)
                                                int32_t ecx_102
                                                ecx_102.b = 1
                                                sub_4bdac0(1, 3)
                                                *(esp_9 + 0x10) = 0
                                                *(esp_9 + 0xc) = 0
                                                *(esp_9 + 8) = 0
                                                *(esp_9 + 4) = 0
                                                esp_9 += 4
                                                sub_4040c4(&ebp[-0xbc], "Testfall1: ", data_7a6a88)
                                                sub_4748fc(data_61c8c8, ebp[-0xbc], 0)
                                            else if (ebp[-6] == 0x13)
                                                long double x87_r1
                                                sub_4c27e4(esi_2, edi_1, x87_r0, x87_r1)
                                                esp_9 += 0x20
                                            else if (ebp[-6] == 9)
                                                ebp[-7] = 0xa
                                                ebp[-0xd] = data_5304fc + 0xd50b0
                                                
                                                do
                                                    if (*(data_780c58 + 4) == 7)
                                                        *ebp[-0xd] = 0
                                                        *(ebp[-0xd] + 0x353c) = 0
                                                        *(ebp[-0xd] + 0x6a78) = 0
                                                        *(esp_9 - 4) = 0xffffffff
                                                        int32_t edx_238
                                                        edx_238.b = 2
                                                        sub_4d3e30(0xf, edx_238, ebp[-7])
                                                    
                                                    ebp[-7] += 1
                                                    ebp[-0xd] += 0x174e0
                                                while (ebp[-7] != 0xb)
                                                
                                                void* eax_489
                                                eax_489.b = *(data_780c58 + 4)
                                                eax_489.b -= 3
                                                char temp117_1 = eax_489.b
                                                eax_489.b -= 2
                                                
                                                if (temp117_1 u< 2)
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
                                                    arg2.b = 4
                                                    void* eax_490
                                                    eax_490.b = 8
                                                    *(esp_9 - 4) = sub_517f20(eax_490.b, arg2.b)
                                                    int32_t eax_491
                                                    eax_491.b = 1
                                                    int32_t eax_492 = sub_517f20(eax_491.b, 4)
                                                    ebp[-1]
                                                    sub_4d7a1c(*(esp_9 - 4), eax_492)
                                                    *(esp_9 - 4) = 0
                                                    sub_52c2dc(0, 0, 0x6260c4)
                                                    sub_516ec0(&data_61d714)
                                                else if (*(data_780c58 + 4) == 4)
                                                    data_67e354
                                                    bool o_52 = unimplemented  {imul eax, dword [
                                                        0x67e354], 0x35}
                                                    
                                                    if (o_52)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(data_67e354 * 0xd4 + &data_675908) = 0xa
                                                    data_67e354
                                                    bool o_53 = unimplemented  {imul eax, dword [
                                                        0x67e354], 0x35}
                                                    
                                                    if (o_53)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(data_67e354 * 0xd4 + &data_675834) = 0xa
                                                    data_67e354
                                                    bool o_54 = unimplemented  {imul eax, dword [
                                                        0x67e354], 0x35}
                                                    
                                                    if (o_54)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(data_67e354 * 0xd4 + &data_675909) = 3
                                                    data_67e354
                                                    bool o_55 = unimplemented  {imul eax, dword [
                                                        0x67e354], 0x35}
                                                    
                                                    if (o_55)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(data_67e354 * 0xd4 + &data_675835) = 4
                                                    sub_516e74(0x6759dc)
                                                
                                                if (*(data_780c58 + 4) == 1)
                                                    ebp[-7] = 1
                                                    ebp[-0xd] = &data_61d714
                                                    
                                                    do
                                                        sub_516e74(ebp[-0xd])
                                                        ebp[-7] += 1
                                                        ebp[-0xd] += 0x8d14
                                                    while (ebp[-7] != 0x15)
                                                    
                                                    ebp[-7] = 1
                                                    ebp[-0xd] = 0x6260c4
                                                    
                                                    do
                                                        sub_517794(0x67e38c, ebp[-0xd])
                                                        sub_517b44(ebp[-0xd])
                                                        ebp[-7] += 1
                                                        ebp[-0xd] += 0x8d14
                                                    while (ebp[-7] != 4)
                                                    
                                                    sub_51801c(0x67e38c, 0xa)
                                                    ebp[-7] = 1
                                                    
                                                    do
                                                        sub_517a38(0x6260c4, 
                                                            sub_517ad4(0x67e38c, sx.d(data_67e624)))
                                                        ebp[-7] += 1
                                                    while (ebp[-7] != 0xb)
                                                    
                                                    sub_52c66c(0x6759dc)
                                                    ebp[-7] = 1
                                                    
                                                    do
                                                        sub_517a38(0x62edd8, 
                                                            sub_517ad4(0x67e38c, sx.d(data_67e624)))
                                                        ebp[-7] += 1
                                                    while (ebp[-7] != 0xb)
                                                    
                                                    ebp[-7] = 1
                                                    
                                                    do
                                                        sub_517a38(0x637aec, 
                                                            sub_517ad4(0x67e38c, sx.d(data_67e624)))
                                                        ebp[-7] += 1
                                                    while (ebp[-7] != 0xb)
                                                    
                                                    ebp[-7] = 1
                                                    ebp[-0xd] = &data_61d714
                                                    
                                                    do
                                                        sub_516ec0(ebp[-0xd])
                                                        ebp[-7] += 1
                                                        ebp[-0xd] += 0x8d14
                                                    while (ebp[-7] != 0x15)
                                            else if (ebp[-6] == 7)
                                                sub_51fdc8(data_780c58)
                                            else if (ebp[-6] == 8)
                                                sub_403df8(&ebp[-0xa])
                                                ebp[-9] = 0
                                                ebp[-7] = 1
                                                ebp[-0xd] = 0x7804ac
                                                
                                                do
                                                    ebp[-8] = 1
                                                    ebp[-0x12] = 0x7805a4
                                                    
                                                    do
                                                        int32_t esi_5 = 0
                                                        int32_t i_14 = data_77e234
                                                        
                                                        if (i_14 s> 0)
                                                            ebp[-0xe] = &data_62608c
                                                            int32_t i_8
                                                            
                                                            do
                                                                int32_t j_4 = *ebp[-0xe]
                                                                
                                                                if (j_4 s> 0)
                                                                    ebp[-0xf] = ebp[-0xe] - 0x8978
                                                                    int32_t j_1
                                                                    
                                                                    do
                                                                        if (sx.d(*ebp[-0xf]) == ebp[-8]
                                                                                && sx.d(*(ebp[-0xf] + 1)) == ebp[-7])
                                                                            int32_t temp151_1 = esi_5
                                                                            esi_5 += 1
                                                                            
                                                                            if (add_overflow(temp151_1, 1))
                                                                                sub_403010()
                                                                                noreturn
                                                                        
                                                                        ebp[-0xf] += 0xd4
                                                                        j_1 = j_4
                                                                        j_4 -= 1
                                                                    while (j_1 != 1)
                                                                
                                                                ebp[-0xe] += 0x8d14
                                                                i_8 = i_14
                                                                i_14 -= 1
                                                            while (i_8 != 1)
                                                        
                                                        if (*(data_780c58 + 4) == 1)
                                                            int32_t i_15 = data_77e234
                                                            
                                                            if (i_15 s> 0)
                                                                ebp[-0xe] = data_5306ac + 0x298
                                                                int32_t i_9
                                                                
                                                                do
                                                                    int32_t j_5 = sx.d(*ebp[-0xe])
                                                                    
                                                                    if (j_5 s> 0)
                                                                        ebp[-0x10] = ebp[-0xe] - 0x298
                                                                        int32_t j_2
                                                                        
                                                                        do
                                                                            if (sx.d(*ebp[-0x10]) == ebp[-8]
                                                                                    && sx.d(*(ebp[-0x10] + 1)) == ebp[-7])
                                                                                int32_t temp159_1 = esi_5
                                                                                esi_5 += 1
                                                                                
                                                                                if (add_overflow(temp159_1, 1))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                            
                                                                            ebp[-0x10] += 4
                                                                            j_2 = j_5
                                                                            j_5 -= 1
                                                                        while (j_2 != 1)
                                                                    
                                                                    ebp[-0xe] += 0x31a
                                                                    i_9 = i_15
                                                                    i_15 -= 1
                                                                while (i_9 != 1)
                                                        
                                                        int32_t i_10 = 0xb
                                                        ebp[-0xe] = &data_67e354
                                                        
                                                        do
                                                            if (i_10 != 0xe)
                                                                int32_t j_6 = *ebp[-0xe]
                                                                
                                                                if (j_6 s> 0)
                                                                    ebp[-0x11] = ebp[-0xe] - 0x8978
                                                                    int32_t j_3
                                                                    
                                                                    do
                                                                        if (sx.d(*ebp[-0x11]) == ebp[-8]
                                                                                && sx.d(*(ebp[-0x11] + 1)) == ebp[-7])
                                                                            int32_t temp158_1 = esi_5
                                                                            esi_5 += 1
                                                                            
                                                                            if (add_overflow(temp158_1, 1))
                                                                                sub_403010()
                                                                                noreturn
                                                                        
                                                                        ebp[-0x11] += 0xd4
                                                                        j_3 = j_6
                                                                        j_6 -= 1
                                                                    while (j_3 != 1)
                                                            
                                                            i_10 += 1
                                                            ebp[-0xe] += 0x8d14
                                                        while (i_10 != 0x10)
                                                        
                                                        if (esi_5 != 1)
                                                            *(esp_9 - 4) = ebp[-0xa]
                                                            *(esp_9 - 8) = &data_4ec188
                                                            *(esp_9 - 0xc) = *ebp[-0xd]
                                                            *(esp_9 - 0x10) = &data_4ec188
                                                            *(esp_9 - 0x14) = *ebp[-0x12]
                                                            *(esp_9 - 0x18) = &data_4ec194
                                                            sub_408e1c(esi_5, &ebp[-0xbd])
                                                            *(esp_9 - 0x1c) = ebp[-0xbd]
                                                            *(esp_9 - 0x20) = &data_4ec1a0
                                                            sub_404138(&ebp[-0xa], 8)
                                                            esp_9 += 4
                                                        
                                                        int32_t temp150_1 = ebp[-9]
                                                        ebp[-9] += esi_5
                                                        
                                                        if (add_overflow(temp150_1, esi_5))
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        ebp[-8] += 1
                                                        ebp[-0x12] += 4
                                                    while (ebp[-8] != 9)
                                                    
                                                    ebp[-7] += 1
                                                    ebp[-0xd] += 4
                                                while (ebp[-7] != 5)
                                                
                                                if (ebp[-0xa] == 0)
                                                    *(esp_9 - 4) = 0
                                                    *(esp_9 - 8) = 0
                                                    *(esp_9 - 0xc) = 0
                                                    *(esp_9 - 0x10) = 0
                                                    esp_9 -= 0x10
                                                    sub_408e1c(ebp[-9], &ebp[-0xc1])
                                                    sub_4040c4(&ebp[-0xc0], "konsistent. Summe ", 
                                                        ebp[-0xc1])
                                                    sub_4748fc(ebp[-1], ebp[-0xc0], 0)
                                                else
                                                    *(esp_9 - 4) = 0
                                                    *(esp_9 - 8) = 0
                                                    *(esp_9 - 0xc) = 0
                                                    *(esp_9 - 0x10) = 0
                                                    *(esp_9 - 0x14) = "INKONSISTENT: \r"
                                                    *(esp_9 - 0x18) = ebp[-0xa]
                                                    *(esp_9 - 0x1c) = &data_4ec1c4
                                                    *(esp_9 - 0x20) = "Summe "
                                                    sub_408e1c(ebp[-9], &ebp[-0xbf])
                                                    *(esp_9 - 0x24) = ebp[-0xbf]
                                                    sub_404138(&ebp[-0xbe], 5)
                                                    sub_4748fc(ebp[-1], ebp[-0xbe], 0)
                                else if (ebp[-6] == data_61ccc0)
                                    *(*data_530380 + 0xc3d20) = 1
                                    int32_t eax_393 = *(*data_530380 + 0xc3d24) & 0x80000003
                                    
                                    if (eax_393 s< 0)
                                        eax_393 = ((eax_393 - 1) | 0xfffffffc) + 1
                                    
                                    if (add_overflow(eax_393, 1))
                                        sub_403010()
                                        noreturn
                                    
                                    *(*data_530380 + 0xc3d24) = eax_393 + 1
                                else if (ebp[-6] == data_61ccc4)
                                    *(*data_530380 + 0xc3d20) = 0
                                    *(*data_530380 + 0xc3d24) = 0
                                else if (ebp[-6] == data_61ccd0)
                                    *(*data_530380 + 0xc3d21) = 1
                                else if (ebp[-6] == data_61ccd4)
                                    *(*data_530380 + 0xc3d21) = 0
                                else if (ebp[-6] == data_61ccc8)
                                    sub_4b7420(*data_530380, arg2)
                                else if (ebp[-6] == data_61cccc)
                                    ebp = sub_4b764c(*data_530380, *(*data_530380 + 0xc3d1c))
                                    esp_9 += 0x20
                            else if (ebp[-6] == 2)
                                sub_48380c(ebp[-1], data_61cac4)
                            else if (ebp[-6] == data_61cbe4)
                                *(esp_9 - 4) = *(ebp[-1] + 0xa64)
                                *(esp_9 - 8) = "\save\"
                                *(esp_9 - 0xc) = 0
                                *(esp_9 - 0x10) = &ebp[-0xad]
                                data_61cac4
                                data_61c8c8
                                ebp = sub_47a7ec(data_61cbd4)
                                *(esp_9 - 0xc) = ebp[-0xad]
                                sub_404138(&ebp[-0xa], 3)
                                esp_9 += 0x20
                                
                                if (sub_524d14(data_780c58, ebp[-0xa], esi_2, edi_1) != 0)
                                    data_77e23c = 1
                                    sub_5255a0(data_780c58)
                                    sub_4837d0(ebp[-1], data_61cac4)
                        else if (ebp[-6] == 2)
                            sub_48380c(ebp[-1], data_61cac0)
                        else if (ebp[-6] == data_61cbd4)
                            *(esp_9 - 4) = &ebp[-0xb]
                            sub_47a2ac(data_61c8c8, data_61cac0, data_61cbd4)
                            *(esp_9 - 8) = ebp[-0xb]
                            sub_47ab08(data_61c8c8, data_61cac0, data_61cbdc, x87_r0)
                            esp_9 -= 4
                            data_61cac0
                            bool o_27 = unimplemented  {imul eax, dword [0x61cac0], 0x1038}
                            
                            if (o_27)
                                sub_403010()
                                noreturn
                            
                            data_61cbdc
                            bool o_28 = unimplemented  {imul edx, dword [0x61cbdc], 0x23}
                            
                            if (o_28)
                                sub_403010()
                                noreturn
                            
                            *(*(data_61c8c8 + 0xab0) + data_61cac0 * 0x81c0 + data_61cbdc * 0x118
                                - 0x84) = 0
                        else if (ebp[-6] == data_61cbe0)
                            *(esp_9 - 4) = 0
                            *(esp_9 - 8) = 0
                            *(esp_9 - 0xc) = &ebp[-0xaa]
                            data_61cac0
                            data_61c8c8
                            void* ebp_7 = sub_47a7ec(data_61cbdc)
                            *(esp_9 - 8) = *(ebp_7 - 0x2a8)
                            *(esp_9 - 0xc) = *(*(ebp_7 - 4) + 0xa64)
                            *(esp_9 - 0x10) = "\save\"
                            *(esp_9 - 0x14) = 0
                            *(esp_9 - 0x18) = ebp_7 - 0x2b0
                            data_61cac0
                            data_61c8c8
                            ebp = sub_47a7ec(data_61cbdc)
                            *(esp_9 - 0x14) = ebp[-0xac]
                            sub_404138(&ebp[-0xab], 3)
                            sub_52452c(data_780c58, ebp[-0xab], *(esp_9 + 0x10), esi_2, edi_1)
                            esp_9 += 0x20
                            sub_48380c(data_61c8c8, data_61cac0)
                    else if (ebp[-6] == data_61cd94)
                        sub_4837ec(data_61c8c8, data_61cda4, false)
                        ebp[-1]
    
    *(esp_9 + 8)
    fsbase->NtTib.ExceptionList = *esp_9
    *(esp_9 + 8) = sub_4ebdeb
    sub_403e1c(&ebp[-0x12c], 0x18)
    sub_403e1c(&ebp[-0xd4], 0x1f)
    sub_403e1c(&ebp[-0xad], 7)
    sub_403e1c(&ebp[-0xa4], 4)
    sub_403df8(&ebp[-0xa0])
    return sub_403e1c(&ebp[-0xb], 2)
}
