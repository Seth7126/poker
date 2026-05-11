// ============================================================
// 函数名称: sub_45c964
// 虚拟地址: 0x45c964
// WARP GUID: 14f500ee-565b-530c-b390-5c25bad542ba
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45cbd4
// ============================================================

int32_t __convention("regparm")sub_45c964(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_34 = 0
    int32_t var_34 = 0
    int32_t (__fastcall* var_30)(float arg1 @ ecx, void* arg2, void* arg3 @ eax, int32_t arg4, 
        int32_t* arg5) = nullptr
    int32_t var_3c = 0
    void* var_38 = arg1[0x35]
    void* var_20 = *(arg1 + 0x1b2) + 4
    int32_t result
    
    while (true)
        result = arg1[8]
        
        if (result s<= var_3c)
            break
        
        int32_t eax_3 = *(var_38 + 0x24)
        int16_t* var_2c
        int32_t var_28
        int32_t i_2
        int32_t* var_1c
        void* var_18
        int32_t var_14
        
        if (eax_3 == 1)
            var_30 = sub_45e6cc
            var_34 = 0
        else if (eax_3 == 2)
            var_30 = sub_45e4f0
            var_34 = 0
        else if (eax_3 == 4)
            var_30 = sub_45e15c
            var_34 = 0
        else if (eax_3 == 8)
            int32_t ecx_2 = arg1[0x11]
            
            if (ecx_2 u< 1)
                var_30 = sub_45db88
                var_34 = 0
            else if (ecx_2 == 1)
                var_30 = sub_45d77c
                var_34 = 1
            else if (ecx_2 == 2)
                var_30 = sub_45d34c
                var_34 = 2
            else
                *(*arg1 + 0x14) = 0x2f
                (**arg1)(arg1, var_3c, var_38, var_34, var_30, var_2c, var_28, i_2, var_20, var_1c, 
                    var_18, var_14)
        else
            void* eax_9 = *arg1
            *(eax_9 + 0x14) = 6
            *(eax_9 + 0x18) = *(var_38 + 0x24)
            (**arg1)(arg1, var_3c, var_38, var_34, var_30, var_2c, var_28, i_2, var_20, var_1c, var_18, 
                var_14)
        
        *var_20 = var_30
        
        if (*(var_38 + 0x30) != 0 && *(var_20 + 0x28) != var_34)
            var_2c = *(var_38 + 0x4c)
            
            if (var_2c != 0)
                *(var_20 + 0x28) = var_34
                
                if (var_34 u< 1)
                    int32_t i = 0
                    uint32_t* ecx_14 = *(var_38 + 0x50)
                    int16_t* edx_10 = var_2c
                    
                    do
                        *ecx_14 = zx.d(*edx_10)
                        i += 1
                        ecx_14 = &ecx_14[1]
                        edx_10 = &edx_10[1]
                    while (i s< 0x40)
                else if (var_34 == 1)
                    int32_t i_1 = 0
                    var_1c = *(var_38 + 0x50)
                    void* ecx_15 = &data_52ee10
                    int16_t* edx_12 = var_2c
                    
                    do
                        int32_t ebx_5 = (zx.d(*edx_12) * sx.d(*ecx_15) + 0x800) s>> 0xc
                        ecx_15 += 2
                        *var_1c = ebx_5
                        edx_12 = &edx_12[1]
                        var_1c = &var_1c[1]
                        i_1 += 1
                    while (i_1 s< 0x40)
                else if (var_34 == 2)
                    int32_t eax_17 = 0
                    var_28 = *(var_38 + 0x50)
                    i_2 = 0
                    var_18 = &data_52ee90
                    
                    do
                        int32_t j = 0
                        float* ebx_6 = var_28 + (eax_17 << 2)
                        void* ecx_16 = &data_52ee90
                        int16_t* edx_17 = &var_2c[eax_17]
                        
                        do
                            var_14 = zx.d(*edx_17)
                            edx_17 = &edx_17[1]
                            eax_17 += 1
                            j += 1
                            long double x87_r7_3 =
                                float.t(var_14) * fconvert.t(*var_18) * fconvert.t(*ecx_16)
                            ecx_16 += 8
                            *ebx_6 = fconvert.s(x87_r7_3)
                            ebx_6 = &ebx_6[1]
                        while (j s< 8)
                        
                        i_2 += 1
                        var_18 += 8
                    while (i_2 s< 8)
                else
                    *(*arg1 + 0x14) = 0x2f
                    (**arg1)(arg1, var_3c, var_38, var_34, var_30, var_2c, var_28, i_2, var_20, var_1c, 
                        var_18, var_14)
        
        var_20 += 4
        var_3c += 1
        var_38 += 0x54
    
    return result
}
