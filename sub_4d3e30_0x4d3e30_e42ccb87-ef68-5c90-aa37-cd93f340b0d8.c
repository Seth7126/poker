// ============================================================
// 函数名称: sub_4d3e30
// 虚拟地址: 0x4d3e30
// WARP GUID: e42ccb87-ef68-5c90-aa37-cd93f340b0d8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4d5ba0, sub_4cc140, sub_402d38, sub_4cb8e8, sub_4c2de8, sub_4d41ec, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4cf900, sub_4e649b, sub_4d36c4, sub_4cdec4, sub_5295d8, sub_4cbf78
// ============================================================

void __fastcallsub_4d3e30(int32_t arg1, char arg2, void* arg3 @ eax, void* arg4)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t ecx
    ecx.b = arg2
    int32_t esi = ecx * 0xd4f
    bool o = unimplemented  {imul esi, ecx, 0xd4f}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t edx = var_8 * 0x2e9c
    bool o_1 = unimplemented  {imul edx, dword [ebp-0x4], 0x2e9c}
    
    if (o_1)
        sub_403010()
        noreturn
    
    if (add_overflow(0xc8, neg.d(arg1)))
        sub_403010()
        noreturn
    
    if (*((edx << 3) + &data_532f70 + (esi << 2) - 0x14010) s>= 0xc8 - arg1)
        return 
    
    void* esi_1 = (edx << 3) + &data_532f70 + (esi << 2) - 0x174e0
    
    if (arg4 == 0xffffffff)
        int32_t temp4_1 = *(esi_1 + 0x34d0)
        *(esi_1 + 0x34d0) += arg1
        
        if (add_overflow(temp4_1, arg1))
            sub_403010()
            noreturn
        
        int32_t eax_1 = *(esi_1 + 0x34d0)
        arg3 = eax_1 - 1
        
        if (add_overflow(eax_1, 0xffffffff))
            sub_403010()
            noreturn
    else if (arg4 s<= 0xc8)
        arg3 = arg4
        int32_t edx_3 = *(esi_1 + 0x34d0)
        
        if (add_overflow(edx_3, 0xffffffff))
            sub_403010()
            noreturn
        
        if (arg3 s> edx_3 - 1)
            if (add_overflow(arg3, 1))
                sub_403010()
                noreturn
            
            *(esi_1 + 0x34d0) = arg3 + 1
            int32_t edi_1 = edx_3
            void* edx_5 = arg3 - arg1
            
            if (add_overflow(arg3, neg.d(arg1)))
                sub_403010()
                noreturn
            
            if (edx_5 s>= edi_1)
                void* i_2 = edx_5 - edi_1 + 1
                void* i
                
                do
                    bool o_8 = unimplemented  {imul edx, edi, 0xa}
                    
                    if (o_8)
                        sub_403010()
                        noreturn
                    
                    *(esi_1 + edi_1 * 0x50 + 0x18) = 3
                    edi_1 += 1
                    i = i_2
                    i_2 -= 1
                while (i != 1)
    
    if (add_overflow(arg3, 1))
        sub_403010()
        noreturn
    
    void* edi_4 = arg3 + 1 - arg1
    
    if (add_overflow(arg3 + 1, neg.d(arg1)))
        sub_403010()
        noreturn
    
    if (arg3 s< edi_4)
        return 
    
    void* i_3 = arg3 - edi_4 + 1
    void* i_1
    
    do
        if (arg2 == 6)
            bool o_11 = unimplemented  {imul eax, edi, 0xa}
            
            if (o_11)
                sub_403010()
                noreturn
            
            *(esi_1 + edi_4 * 0x50 + 0x14) = 0x3f800000
        else if (*(*data_530304 + 0xdfb) == 0)
            long double st0_1 = sub_402d38()
            bool o_13 = unimplemented  {imul eax, edi, 0xa}
            
            if (o_13)
                sub_403010()
                noreturn
            
            *(esi_1 + edi_4 * 0x50 + 0x14) = fconvert.s(st0_1 * data_4d41a4 + data_4d41b0)
        else
            bool o_12 = unimplemented  {imul eax, edi, 0xa}
            
            if (o_12)
                sub_403010()
                noreturn
            
            *(esi_1 + edi_4 * 0x50 + 0x14) = 0x3f733333
        
        bool o_14 = unimplemented  {imul eax, edi, 0xa}
        
        if (o_14)
            sub_403010()
            noreturn
        
        *(esi_1 + edi_4 * 0x50 + 4) = edi_4
        bool o_15 = unimplemented  {imul eax, edi, 0xa}
        
        if (o_15)
            sub_403010()
            noreturn
        
        *(esi_1 + edi_4 * 0x50) = arg2
        
        if (arg2 != 6)
            int16_t eax_11 = sub_4d5ba0(arg2)
            bool o_16 = unimplemented  {imul edx, edi, 0xa}
            
            if (o_16)
                sub_403010()
                noreturn
            
            *(esi_1 + edi_4 * 0x50 + 8) = eax_11
        
        bool o_17 = unimplemented  {imul eax, edi, 0xa}
        
        if (o_17)
            sub_403010()
            noreturn
        
        *(esi_1 + edi_4 * 0x50 + 0xc) = var_8
        bool o_18 = unimplemented  {imul eax, edi, 0xa}
        
        if (o_18)
            sub_403010()
            noreturn
        
        *(esi_1 + edi_4 * 0x50 + 0x10) = arg2
        bool o_19 = unimplemented  {imul eax, edi, 0xa}
        
        if (o_19)
            sub_403010()
            noreturn
        
        *(esi_1 + edi_4 * 0x50 + 0x18) = 1
        bool o_20 = unimplemented  {imul eax, edi, 0xa}
        
        if (o_20)
            sub_403010()
            noreturn
        
        *(esi_1 + edi_4 * 0x50 + 0x1c) = 0xffffffff
        int32_t eax_17 = sub_4cc140(var_8, arg2, edi_4)
        void* edi_8
        int32_t var_48
        float var_30[0x6]
        
        if (arg2 == 6)
            int32_t var_10_1
            
            if (sub_4c2de8(0) != 2)
                var_10_1 = 0
            else
                bool o_22 = unimplemented  {imul eax, edi, 0xa}
                
                if (o_22)
                    sub_403010()
                    noreturn
                
                if (*(esi_1 + edi_4 * 0x50 + 8) != 1)
                    var_10_1 = 0
                else
                    var_10_1 = 1
            
            int32_t eax_22
            
            if (var_8 != 9)
                char var_40_5 = 0
                int32_t var_44_5 = 4
                eax_22.b = arg2 == 4
                var_48 = eax_22
                sub_4d41ec(var_8, var_10_1, 2, &var_30, var_48.b, var_44_5, var_40_5)
                bool o_24 = unimplemented  {imul eax, edi, 0xa}
                
                if (o_24)
                    sub_403010()
                    noreturn
                
                __builtin_memcpy(esi_1 + edi_4 * 0x50 + 0x20, &var_30, 0x18)
                edi_8 = edi_4
            else
                char var_40_3 = 0
                int32_t var_44_3 = 3
                eax_22.b = arg2 == 4
                var_48 = eax_22
                sub_4d41ec(var_8, edi_4, 2, &var_30, var_48.b, var_44_3, var_40_3)
                bool o_23 = unimplemented  {imul eax, edi, 0xa}
                
                if (o_23)
                    sub_403010()
                    noreturn
                
                __builtin_memcpy(esi_1 + edi_4 * 0x50 + 0x20, &var_30, 0x18)
                edi_8 = edi_4
        else
            char var_40_1 = 0
            int32_t eax_18
            eax_18.b = arg2 == 4
            var_48 = eax_18
            sub_4d41ec(var_8, edi_4, 2, &var_30, var_48.b, eax_17, var_40_1)
            bool o_21 = unimplemented  {imul eax, edi, 0xa}
            
            if (o_21)
                sub_403010()
                noreturn
            
            __builtin_memcpy(esi_1 + edi_4 * 0x50 + 0x20, &var_30, 0x18)
            edi_8 = edi_4
        
        if (sub_4cb8e8().b != 0)
            int32_t edx_15 = edi_8 * 0xa
            bool o_25 = unimplemented  {imul edx, edi, 0xa}
            
            if (o_25)
                sub_403010()
                noreturn
            
            if (*(esi_1 + (edx_15 << 3)) != 0)
                bool o_26 = unimplemented  {imul edx, edi, 0xa}
                
                if (o_26)
                    sub_403010()
                    noreturn
                
                if (*(esi_1 + edi_8 * 0x50) != 1)
                    bool o_27 = unimplemented  {imul edx, edi, 0xa}
                    
                    if (o_27)
                        sub_403010()
                        noreturn
                    
                    if (*(esi_1 + edi_8 * 0x50) != 2)
                        bool o_28 = unimplemented  {imul edx, edi, 0xa}
                        
                        if (o_28)
                            sub_403010()
                            noreturn
                        
                        if (*(esi_1 + edi_8 * 0x50) == 3)
                            *(esi_1 + (edx_15 << 3) + 0x28) =
                                fconvert.s(data_4d41e0 * fconvert.t(*(esi_1 + (edx_15 << 3) + 0x28)))
                    else
                        *(esi_1 + (edx_15 << 3) + 0x28) =
                            fconvert.s(data_4d41d4 * fconvert.t(*(esi_1 + (edx_15 << 3) + 0x28)))
                else
                    *(esi_1 + (edx_15 << 3) + 0x28) =
                        fconvert.s(data_4d41c8 * fconvert.t(*(esi_1 + (edx_15 << 3) + 0x28)))
            else
                *(esi_1 + (edx_15 << 3) + 0x28) =
                    fconvert.s(data_4d41bc * fconvert.t(*(esi_1 + (edx_15 << 3) + 0x28)))
        
        edi_4 = edi_8 + 1
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
}
