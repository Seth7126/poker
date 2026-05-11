// ============================================================
// 函数名称: sub_4d36c4
// 虚拟地址: 0x4d36c4
// WARP GUID: c769b599-596e-5de0-9ee3-9585fa8dae2f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4d3e30, sub_4ca100, sub_402d20, sub_406807, sub_4c1e60, sub_403010, sub_4d41ec, sub_402b4c, sub_4d4f4c
// [被调用的父级函数]: sub_4ed7a0, sub_4ed040, sub_4c96bc, sub_5295d8, sub_4cbf78
// ============================================================

void* __convention("regparm")sub_4d36c4(int32_t arg1, char arg2, char arg3)
{
    // 第一条实际指令: int32_t i_2 = arg1 * 0x2e9c
    int32_t i_2 = arg1 * 0x2e9c
    bool o = unimplemented  {imul ebx, esi, 0x2e9c}
    
    if (o)
        sub_403010()
        noreturn
    
    (&data_532f34)[i_2 * 2].b = 1
    (&data_532f6c)[i_2 * 2] = 0
    
    if (arg1 == 9)
        (&data_532f34)[i_2 * 2].b = 0
    
    if (arg1 == 0xa)
        (&data_532f34)[i_2 * 2].b = 2
    
    if ((&data_532f34)[i_2 * 2].b == 1)
        bool o_1 = unimplemented  {imul edx, esi, 0x2345}
        
        if (o_1)
            sub_403010()
            noreturn
        
        *((i_2 << 3) + &data_532f54) = *(data_5301b0 + arg1 * 0x8d14 - 0x394)
        bool o_2 = unimplemented  {imul edx, esi, 0x2345}
        
        if (o_2)
            sub_403010()
            noreturn
        
        *((i_2 << 3) + 0x532f58) = *(data_5301b0 + arg1 * 0x8d14 - 0x390)
        bool o_3 = unimplemented  {imul edx, esi, 0x2345}
        
        if (o_3)
            sub_403010()
            noreturn
        
        *((i_2 << 3) + &data_532f5c) = *(data_5301b0 + arg1 * 0x8d14 - 0x38c)
        bool o_4 = unimplemented  {imul edx, esi, 0x2345}
        
        if (o_4)
            sub_403010()
            noreturn
        
        *((i_2 << 3) + 0x532f60) = *(data_5301b0 + arg1 * 0x8d14 - 0x388)
        bool o_5 = unimplemented  {imul edx, esi, 0x2345}
        
        if (o_5)
            sub_403010()
            noreturn
        
        *((i_2 << 3) + 0x532f64) = *(data_5301b0 + arg1 * 0x8d14 - 0x384)
        bool o_6 = unimplemented  {imul edx, esi, 0x2345}
        
        if (o_6)
            sub_403010()
            noreturn
        
        (&data_532f68)[i_2 * 2] = *(data_5301b0 + arg1 * 0x8d14 - 0x380)
    
    char var_4c = 1
    int32_t var_50 = 0
    float (* var_54)[0x6] = nullptr
    float var_3c[0x6]
    sub_4d41ec(arg1, arg1, 0, &var_3c, var_54.b, var_50, var_4c)
    __builtin_memcpy(&(&data_532f3c)[i_2 * 2], &var_3c, 0x18)
    i_2.b = arg3
    
    if (i_2.b u>= 0)
        i_2 += 1
        char var_7_1 = 0
        void* edi_1 = &data_532f70
        char i
        
        do
            int32_t eax_1 = arg1 * 0x2e9c
            bool o_7 = unimplemented  {imul eax, esi, 0x2e9c}
            
            if (o_7)
                sub_403010()
                noreturn
            
            *(edi_1 + (eax_1 << 3) - 0x14010) = 0
            *(edi_1 + (eax_1 << 3) - 0x1400c) = 0
            bool o_8 = unimplemented  {imul eax, esi, 0x2e9c}
            
            if (o_8)
                sub_403010()
                noreturn
            
            char eax_3
            
            if ((&data_532f34)[arg1 * 0x5d38].b == 0)
                eax_3 = sub_4ca100()
            
            void* edi_4
            
            if ((&data_532f34)[arg1 * 0x5d38].b != 0 || eax_3 != 0)
                char var_4c_4 = 1
                int32_t var_50_3 = 0
                var_54 = &var_3c
                sub_4d4f4c(arg1, var_7_1, 1, var_54, var_50_3, var_4c_4)
                bool o_10 = unimplemented  {imul eax, esi, 0x2e9c}
                
                if (o_10)
                    sub_403010()
                    noreturn
                
                __builtin_memcpy(edi_1 + arg1 * 0x174e0 - 0x14008, &var_3c, 0x18)
                edi_4 = edi_1
            else
                char var_4c_2 = 1
                int32_t var_50_1 = 0
                var_54 = &var_3c
                sub_4d4f4c(arg1, var_7_1, 3, var_54, var_50_1, var_4c_2)
                bool o_9 = unimplemented  {imul eax, esi, 0x2e9c}
                
                if (o_9)
                    sub_403010()
                    noreturn
                
                __builtin_memcpy(edi_1 + arg1 * 0x174e0 - 0x14008, &var_3c, 0x18)
                edi_4 = edi_1
            
            var_7_1 += 1
            edi_1 = edi_4 + 0x353c
            i = i_2.b
            i_2.b -= 1
        while (i != 1)
    
    void* result = *data_5301f4
    int32_t edx_13
    
    if (*(result + 0x111f9) == 0)
        i_2 = 2
        int32_t i_1
        
        do
            int32_t eax_9 = sub_402d20(4)
            
            if (add_overflow(eax_9, 1))
                sub_403010()
                noreturn
            
            char var_8
            
            if (eax_9 == 0)
                var_8 = 0
            
            if (eax_9 == 1)
                var_8 = 1
            
            if (eax_9 == 2)
                var_8 = 2
            
            if (eax_9 == 3)
                var_8 = 3
            
            if (eax_9 == 4)
                var_8 = 4
            
            void* eax_11
            eax_11, edx_13 = sub_402d20(4)
            
            if (add_overflow(eax_11, 1))
                sub_403010()
                noreturn
            
            char var_9
            
            if (eax_11 == 0)
                var_9 = 0
            
            if (eax_11 == 1)
                var_9 = 1
            
            if (eax_11 == 2)
                var_9 = 2
            
            if (eax_11 == 3)
                var_9 = 3
            
            if (eax_11 == 4)
                var_9 = 4
            
            result.b = var_8
            
            if (result.b != var_9)
                int32_t edx_15
                edx_15.b = var_9
                bool o_13 = unimplemented  {imul edx, edx, 0xd4f}
                
                if (o_13)
                    sub_403010()
                    noreturn
                
                int32_t eax_12 = arg1 * 0x2e9c
                bool o_14 = unimplemented  {imul eax, esi, 0x2e9c}
                
                if (o_14)
                    sub_403010()
                    noreturn
                
                void var_24
                __builtin_memcpy(&var_24, (eax_12 << 3) + &data_532f70 + edx_15 * 0x353c - 0x14008, 
                    0x18)
                int32_t edx_17
                edx_17.b = var_8
                bool o_15 = unimplemented  {imul edx, edx, 0xd4f}
                
                if (o_15)
                    sub_403010()
                    noreturn
                
                bool o_16 = unimplemented  {imul ecx, esi, 0x2e9c}
                
                if (o_16)
                    sub_403010()
                    noreturn
                
                int32_t edx_20
                edx_20.b = var_9
                bool o_17 = unimplemented  {imul edx, edx, 0xd4f}
                
                if (o_17)
                    sub_403010()
                    noreturn
                
                __builtin_memcpy((eax_12 << 3) + &data_532f70 + edx_20 * 0x353c - 0x14008, 
                    arg1 * 0x174e0 + &data_532f70 + edx_17 * 0x353c - 0x14008, 0x18)
                int32_t edx_22
                edx_22.b = var_8
                bool o_18 = unimplemented  {imul edx, edx, 0xd4f}
                
                if (o_18)
                    sub_403010()
                    noreturn
                
                result = (eax_12 << 3) + &data_532f70
                __builtin_memcpy(result + edx_22 * 0x353c - 0x14008, &var_24, 0x18)
            
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    i_2.b = arg2
    i_2.b ^= 1
    
    if (i_2.b != 0 && arg1 == 9)
        edx_13.b = 6
        sub_4d3e30(3, edx_13.b, arg1, 0xffffffff)
        result = arg1 * 0x2e9c
        bool o_19 = unimplemented  {imul eax, esi, 0x2e9c}
        
        if (o_19)
            sub_403010()
            noreturn
        
        (&data_52faa0)[result * 2].w = 1
        (&data_52fa50)[result * 2].w = 2
        (&data_52fa00)[result * 2].w = 0
    
    if (arg1 == 0xa || arg1 != 9 || i_2.b == 0)
        return result
    
    if (sub_4c1e60() s<= 0x64)
        int32_t temp0_1 = divs.dp.d(sx.q(sub_4c1e60()), 0x14)
        void* eax_18 = data_5300d0
        *eax_18
        int32_t ecx_13 = *eax_18 * 3
        bool o_20 = unimplemented  {imul ecx, dword [eax], 0x3}
        
        if (not(o_20))
            if (add_overflow(ecx_13, 4))
                sub_403010()
                noreturn
            
            int32_t ecx_15 = (ecx_13 + 4) * temp0_1
            bool o_22 = unimplemented  {imul ecx, ebx}
            
            if (o_22)
                sub_403010()
                noreturn
            
            if (add_overflow(ecx_15, 7))
                sub_403010()
                noreturn
            
            sub_4d3e30(ecx_15 + 7, 0, 9, 0xffffffff)
            void* eax_19 = data_5300d0
            *eax_19
            int32_t ecx_17 = *eax_19 * 3
            bool o_24 = unimplemented  {imul ecx, dword [eax], 0x3}
            
            if (o_24)
                sub_403010()
                noreturn
            
            if (add_overflow(ecx_17, 4))
                sub_403010()
                noreturn
            
            int32_t ecx_19 = (ecx_17 + 4) * temp0_1
            bool o_26 = unimplemented  {imul ecx, ebx}
            
            if (o_26)
                sub_403010()
                noreturn
            
            if (add_overflow(ecx_19, 6))
                sub_403010()
                noreturn
            
            sub_4d3e30(ecx_19 + 6, 1, 9, 0xffffffff)
            int32_t ecx_23 = *data_5300d0 * temp0_1
            bool o_28 = unimplemented  {imul ecx, ebx}
            
            if (o_28)
                sub_403010()
                noreturn
            
            int32_t ecx_24 = ecx_23 s>> 1
            bool c_1 = unimplemented  {sar ecx, 0x1}
            
            if (ecx_23 s>> 1 s< 0)
                ecx_24 = adc.d(ecx_24, 0, c_1)
            
            if (add_overflow(ecx_24, 0xe))
                sub_403010()
                noreturn
            
            sub_4d3e30(ecx_24 + 0xe, 2, 9, 0xffffffff)
            bool o_30 = unimplemented  {imul ebx}
            
            if (o_30)
                sub_403010()
                noreturn
            
            int32_t temp0_2 = divs.dp.d(sx.q(*data_5300d0 * temp0_1), 3)
            
            if (add_overflow(temp0_2, 0xa))
                sub_403010()
                noreturn
            
            sub_4d3e30(temp0_2 + 0xa, 3, 9, 0xffffffff)
            int32_t ecx_29 = temp0_1 s>> 1
            bool c_2 = unimplemented  {sar ecx, 0x1}
            
            if (temp0_1 s>> 1 s< 0)
                ecx_29 = adc.d(ecx_29, 0, c_2)
            
            if (not(add_overflow(ecx_29, 3)))
                return sub_4d3e30(ecx_29 + 3, 4, 9, 0xffffffff)
            
            sub_403010()
            noreturn
        
        sub_403010()
        noreturn
    
    if (sub_4c1e60() != 0xc8)
        int32_t temp0_5 = divs.dp.d(sx.q(sub_4c1e60()), 0x32)
        void* var_4c_21 = 0xffffffff
        float (* eax_41)[0x6]
        int32_t edx_39
        eax_41, edx_39 = sub_402b4c(float.t(*data_5300d0) * data_4d3e18)
        var_54 = eax_41
        bool o_47 = add_overflow(temp0_5, 1)
        
        if (o_47)
            sub_403010()
            noreturn
        
        int32_t eax_43
        int32_t edx_40
        edx_40:eax_43 = sx.q(temp0_5 + 1)
        int32_t eax_44
        int32_t edx_41
        eax_44, edx_41 = sub_406807(0x32, edx_40, eax_43, var_54, edx_39)
        
        if (o_47)
            sub_403010()
            noreturn
        
        bool o_48 = unimplemented  {adc edx, 0x0}
        
        if (o_48)
            sub_403010()
            noreturn
        
        int32_t ecx_48 = sub_4d3e30(eax_44 + 9, 0, 9, var_4c_21)
        void* var_4c_22 = 0xffffffff
        float (* eax_47)[0x6]
        int32_t edx_43
        eax_47, edx_43 = sub_402b4c(float.t(*data_5300d0) * data_4d3e24)
        int32_t var_50_6 = edx_43
        var_54 = eax_47
        bool o_49 = add_overflow(temp0_5, 2)
        
        if (o_49)
            sub_403010()
            noreturn
        
        int32_t eax_50
        int32_t edx_44
        edx_44:eax_50 = sx.q(temp0_5 + 2)
        int32_t eax_51
        int32_t edx_45
        eax_51, edx_45 = sub_406807(ecx_48, edx_44, eax_50)
        
        if (o_49)
            sub_403010()
            noreturn
        
        bool o_50 = unimplemented  {adc edx, 0x0}
        
        if (o_50)
            sub_403010()
            noreturn
        
        sub_4d3e30(eax_51 + 0x12, 1, 9, var_4c_22)
        void* eax_53 = data_5300d0
        *eax_53
        int32_t ecx_51 = (temp0_5 + 1) * *eax_53
        bool o_51 = unimplemented  {imul ecx, dword [eax]}
        
        if (o_51)
            sub_403010()
            noreturn
        
        if (add_overflow(ecx_51, 0xa))
            sub_403010()
            noreturn
        
        if (add_overflow(ecx_51 + 0xa, 0x1e))
            sub_403010()
            noreturn
        
        sub_4d3e30(ecx_51 + 0x28, 2, 9, 0xffffffff)
        int32_t ecx_56 = *data_5300d0 * temp0_5
        bool o_54 = unimplemented  {imul ecx, ebx}
        
        if (o_54)
            sub_403010()
            noreturn
        
        if (add_overflow(ecx_56, 4))
            sub_403010()
            noreturn
        
        if (add_overflow(ecx_56 + 4, 0x10))
            sub_403010()
            noreturn
        
        sub_4d3e30(ecx_56 + 0x14, 3, 9, 0xffffffff)
        int32_t ecx_60 = temp0_5 s>> 1
        bool c_6 = unimplemented  {sar ecx, 0x1}
        
        if (temp0_5 s>> 1 s< 0)
            ecx_60 = adc.d(ecx_60, 0, c_6)
        
        if (not(add_overflow(ecx_60, 9)))
            return sub_4d3e30(ecx_60 + 9, 4, 9, 0xffffffff)
        
        sub_403010()
        noreturn
    
    int32_t temp0_3 = divs.dp.d(sx.q(sub_4c1e60()), 0x1e)
    void* eax_29 = data_5300d0
    *eax_29
    int32_t ecx_31 = *eax_29 * 2
    bool o_33 = unimplemented  {imul ecx, dword [eax], 0x2}
    
    if (o_33)
        sub_403010()
        noreturn
    
    if (add_overflow(ecx_31, 6))
        sub_403010()
        noreturn
    
    int32_t ecx_33 = (ecx_31 + 6) * temp0_3
    bool o_35 = unimplemented  {imul ecx, ebx}
    
    if (o_35)
        sub_403010()
        noreturn
    
    if (add_overflow(ecx_33, 4))
        sub_403010()
        noreturn
    
    sub_4d3e30(ecx_33 + 4, 0, 9, 0xffffffff)
    void* eax_30 = data_5300d0
    *eax_30
    int32_t ecx_35 = *eax_30 * 2
    bool o_37 = unimplemented  {imul ecx, dword [eax], 0x2}
    
    if (o_37)
        sub_403010()
        noreturn
    
    if (add_overflow(ecx_35, 5))
        sub_403010()
        noreturn
    
    int32_t ecx_37 = (ecx_35 + 5) * temp0_3
    bool o_39 = unimplemented  {imul ecx, ebx}
    
    if (o_39)
        sub_403010()
        noreturn
    
    if (add_overflow(ecx_37, 3))
        sub_403010()
        noreturn
    
    sub_4d3e30(ecx_37 + 3, 1, 9, 0xffffffff)
    bool o_41 = unimplemented  {imul ecx, ebx, 0x2}
    
    if (o_41)
        sub_403010()
        noreturn
    
    void* eax_31 = data_5300d0
    *eax_31
    int32_t ecx_40 = temp0_3 * 2 * *eax_31
    bool o_42 = unimplemented  {imul ecx, dword [eax]}
    
    if (o_42)
        sub_403010()
        noreturn
    
    if (add_overflow(ecx_40, 0xf))
        sub_403010()
        noreturn
    
    sub_4d3e30(ecx_40 + 0xf, 2, 9, 0xffffffff)
    bool o_44 = unimplemented  {imul ebx}
    
    if (o_44)
        sub_403010()
        noreturn
    
    int32_t temp0_4 = divs.dp.d(sx.q(*data_5300d0 * temp0_3), 3)
    
    if (add_overflow(temp0_4, 5))
        sub_403010()
        noreturn
    
    sub_4d3e30(temp0_4 + 5, 3, 9, 0xffffffff)
    int32_t ecx_45 = temp0_3 s>> 1
    bool c_3 = unimplemented  {sar ecx, 0x1}
    
    if (temp0_3 s>> 1 s< 0)
        ecx_45 = adc.d(ecx_45, 0, c_3)
    
    if (not(add_overflow(ecx_45, 3)))
        return sub_4d3e30(ecx_45 + 3, 4, 9, 0xffffffff)
    
    sub_403010()
    noreturn
}
