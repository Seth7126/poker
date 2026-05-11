// ============================================================
// 函数名称: sub_4c92f0
// 虚拟地址: 0x4c92f0
// WARP GUID: 14828d57-7354-5d22-8519-1b8963513bb4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_52c66c, sub_5176c4, sub_516ec0, sub_4bc450, sub_403010
// [被调用的父级函数]: sub_4c96bc, sub_508998, sub_50b624
// ============================================================

int32_tsub_4c92f0()
{
    // 第一条实际指令: *(data_5301b0 + 0x60c40) = 0
    *(data_5301b0 + 0x60c40) = 0
    
    for (int32_t i = 0; i != 2; i += 1)
        for (int32_t j = 1; j != 9; j += 1)
            for (int32_t k = 1; k != 5; k += 1)
                if (add_overflow(j, 0xffffffff))
                    sub_403010()
                    noreturn
                
                int32_t ebx_3 = (j - 1) * 4
                bool o_2 = unimplemented  {imul ebx, ebx, 0x4}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                int32_t ebx_4 = ebx_3 + k
                
                if (add_overflow(ebx_3, k))
                    sub_403010()
                    noreturn
                
                int32_t esi_1 = i * 0x20
                bool o_4 = unimplemented  {imul esi, ecx, 0x20}
                
                if (o_4)
                    sub_403010()
                    noreturn
                
                if (add_overflow(ebx_4, esi_1))
                    sub_403010()
                    noreturn
                
                int32_t esi_2 = (ebx_4 + esi_1) * 0x35
                bool o_6 = unimplemented  {imul esi, ebx, 0x35}
                
                if (o_6)
                    sub_403010()
                    noreturn
                
                *(data_5301b0 + (esi_2 << 2) + 0x581f4) = j.b
                *(data_5301b0 + (esi_2 << 2) + 0x581f5) = k.b
                void* ebx_12 = data_5301b0
                int32_t temp4_1 = *(ebx_12 + 0x60c40)
                *(ebx_12 + 0x60c40) += 1
                
                if (add_overflow(temp4_1, 1))
                    sub_403010()
                    noreturn
    
    void var_424
    sub_4bc450(&var_424)
    void var_320
    sub_5176c4(&var_424, &var_320)
    int16_t* esi_3
    int16_t* edi_1
    edi_1, esi_3 = __builtin_memcpy(data_5301b0 + 0x60c78, &var_320, 0x318)
    *edi_1 = *esi_3
    sub_516ec0(data_5301b0 + 0x582c8)
    sub_52c66c(data_5301b0 + 0x582c8)
    return 0
}
