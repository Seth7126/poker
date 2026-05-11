// ============================================================
// 函数名称: sub_464480
// 虚拟地址: 0x464480
// WARP GUID: 6b816e4b-c270-503c-8c6b-a772626e6206
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_464970
// ============================================================

int32_t __convention("regparm")sub_464480(int32_t* arg1)
{
    // 第一条实际指令: int32_t edx = *(arg1 + 0x15d)
    int32_t edx = *(arg1 + 0x15d)
    int32_t var_2c = 0
    void* var_28 = arg1[0xf]
    int32_t result
    
    while (true)
        result = arg1[0xd]
        
        if (result s<= var_2c)
            break
        
        int32_t ebx_1 = *(var_28 + 0x10)
        int16_t* var_24
        int32_t var_20
        int32_t i_2
        void* var_18
        int32_t var_14
        
        if (ebx_1 s< 0 || ebx_1 s>= 4 || arg1[ebx_1 + 0x10] == 0)
            void* eax_3 = *arg1
            *(eax_3 + 0x14) = 0x33
            *(eax_3 + 0x18) = ebx_1
            (**arg1)(arg1, edx, var_2c, var_28, var_24, var_20, i_2, var_18, var_14)
        
        var_24 = arg1[ebx_1 + 0x10]
        int32_t ecx_3 = arg1[0x2f]
        
        if (ecx_3 u< 1)
            if (*(edx + (ebx_1 << 2) + 0xc) == 0)
                *(edx + (ebx_1 << 2) + 0xc) =
                    (*arg1[1])(arg1, edx, var_2c, var_28, var_24, var_20, i_2, var_18, var_14)
            
            int32_t i = 0
            uint32_t* ecx_7 = *(edx + (ebx_1 << 2) + 0xc)
            int16_t* edx_8 = var_24
            
            do
                *ecx_7 = zx.d(*edx_8) << 3
                i += 1
                ecx_7 = &ecx_7[1]
                edx_8 = &edx_8[1]
            while (i s< 0x40)
        else if (ecx_3 == 1)
            if (*(edx + (ebx_1 << 2) + 0xc) == 0)
                *(edx + (ebx_1 << 2) + 0xc) =
                    (*arg1[1])(arg1, edx, var_2c, var_28, var_24, var_20, i_2, var_18, var_14)
            
            void* ecx_9 = &data_52f3b0
            int32_t i_1 = 0
            int32_t* ebx_4 = *(edx + (ebx_1 << 2) + 0xc)
            int16_t* edx_12 = var_24
            
            do
                int32_t esi_5 = zx.d(*edx_12) * sx.d(*ecx_9) + 0x400
                edx_12 = &edx_12[1]
                ecx_9 += 2
                *ebx_4 = esi_5 s>> 0xb
                ebx_4 = &ebx_4[1]
                i_1 += 1
            while (i_1 s< 0x40)
        else if (ecx_3 == 2)
            if (*(edx + (ebx_1 << 2) + 0x20) == 0)
                *(edx + (ebx_1 << 2) + 0x20) =
                    (*arg1[1])(arg1, edx, var_2c, var_28, var_24, var_20, i_2, var_18, var_14)
            
            int32_t eax_18 = 0
            var_20 = *(edx + (ebx_1 << 2) + 0x20)
            i_2 = 0
            var_18 = &data_52f430
            
            do
                int32_t j = 0
                float* ebx_5 = var_20 + (eax_18 << 2)
                void* ecx_12 = &data_52f430
                int16_t* edx_18 = &var_24[eax_18]
                
                do
                    var_14 = zx.d(*edx_18)
                    *ebx_5 = fconvert.s(fconvert.t(1f) /
                        (float.t(var_14) * fconvert.t(*var_18) * fconvert.t(*ecx_12) * fconvert.t(8f)))
                    eax_18 += 1
                    ebx_5 = &ebx_5[1]
                    edx_18 = &edx_18[1]
                    j += 1
                    ecx_12 += 8
                while (j s< 8)
                
                i_2 += 1
                var_18 += 8
            while (i_2 s< 8)
        else
            *(*arg1 + 0x14) = 0x2f
            (**arg1)(arg1, edx, var_2c, var_28, var_24, var_20, i_2, var_18, var_14)
        
        var_2c += 1
        var_28 += 0x54
    
    return result
}
