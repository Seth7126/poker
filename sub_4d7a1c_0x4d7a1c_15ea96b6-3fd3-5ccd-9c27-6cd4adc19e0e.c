// ============================================================
// 函数名称: sub_4d7a1c
// 虚拟地址: 0x4d7a1c
// WARP GUID: 15ea96b6-3fd3-5ccd-9c27-6cd4adc19e0e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_516ec0, sub_403010, sub_516e74
// [被调用的父级函数]: sub_4e6659, sub_4d7a11, sub_4e649b
// ============================================================

void* __fastcallsub_4d7a1c(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: char* ebx
    char* ebx
    char* var_28 = ebx
    int32_t var_10 = 0
    int32_t var_14 = 0
    int32_t var_18 = 0
    int32_t var_1c = 0
    int32_t i_4 = data_77e234
    
    if (i_4 s> 0)
        int32_t i_3 = i_4
        ebx = &data_61d714
        int32_t i
        
        do
            sub_516e74(ebx)
            ebx = &ebx[0x8d14]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    void* result = data_77e234
    
    if (result s> 0)
        void* var_20_1 = result
        int32_t esi_1 = 1
        int16_t* result_1 = &data_62635c
        void* i_1
        
        do
            result = result_1
            int32_t j_1 = sx.d(*result)
            
            if (j_1 s> 0)
                int32_t ecx = 1
                result = result_1 - 0x297
                int32_t j
                
                do
                    ebx.b = *result
                    
                    if (ebx.b == arg2:1.b)
                        ebx.b = *(result - 1)
                        
                        if (ebx.b == arg2.b)
                            var_10 = esi_1
                            var_14 = ecx
                    
                    ebx.b = *result
                    
                    if (ebx.b == arg1:1.b)
                        ebx.b = *(result - 1)
                        
                        if (ebx.b == arg1.b)
                            var_18 = esi_1
                            var_1c = ecx
                    
                    ecx += 1
                    result += 4
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            esi_1 += 1
            result_1 = &result_1[0x468a]
            i_1 = var_20_1
            var_20_1 -= 1
        while (i_1 != 1)
    
    if (var_10 != 0 && var_18 != 0 && var_14 != 0 && var_1c != 0)
        bool o_1 = unimplemented  {imul eax, dword [ebp-0xc], 0x2345}
        
        if (o_1)
            sub_403010()
            noreturn
        
        *(var_10 * 0x8d14 + &data_61d714 + (var_14 << 2) - 0x368) = arg1
        bool o_2 = unimplemented  {imul eax, dword [ebp-0x14], 0x2345}
        
        if (o_2)
            sub_403010()
            noreturn
        
        *(var_18 * 0x8d14 + &data_61d714 + (var_1c << 2) - 0x368) = arg2
        result = data_77e234
        
        if (result s> 0)
            void* var_20_2 = result
            void* ebx_1 = &data_61d714
            void* i_2
            
            do
                result = sub_516ec0(ebx_1)
                ebx_1 += 0x8d14
                i_2 = var_20_2
                var_20_2 -= 1
            while (i_2 != 1)
    
    return result
}
