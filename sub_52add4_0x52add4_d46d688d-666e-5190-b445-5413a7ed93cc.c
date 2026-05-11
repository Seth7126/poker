// ============================================================
// 函数名称: sub_52add4
// 虚拟地址: 0x52add4
// WARP GUID: d46d688d-666e-5190-b445-5413a7ed93cc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_52adbc, sub_48e89c, sub_52adb0, sub_403010
// [被调用的父级函数]: sub_5223e8, sub_4e548c
// ============================================================

int32_t __convention("regparm")sub_52add4(void* arg1)
{
    // 第一条实际指令: *(arg1 + 4) = 0xc8
    *(arg1 + 4) = 0xc8
    *(arg1 + 8) = 0
    *(arg1 + 0xc) = 0
    int32_t i_2 = *data_5300d0
    int32_t ecx
    
    if (i_2 s> 0)
        int32_t edx_1 = 1
        int32_t i
        
        do
            ecx = 0
            *(arg1 + (edx_1 << 2) + 0x10) = 0
            edx_1 += 1
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    sub_52adbc(arg1)
    sub_52adb0(arg1)
    sub_48e89c(*data_530304, 0xa, ecx)
    int32_t j
    
    for (int32_t i_1 = 1; i_1 != 5; i_1 += 1)
        for (j = 9; j != 0xe; j += 1)
            bool o_1 = unimplemented  {imul ecx, edx, 0xd}
            
            if (o_1)
                sub_403010()
                noreturn
            
            *(arg1 + i_1 * 0x34 + (j << 2)) = 0
    
    __builtin_memcpy(arg1 + 0x108, 
        "\x1f\x85\x6b\x3f\x0a\xd7\x83\x3f\x71\x3d\x8a\x3f\x3d\x0a\x97\x3f\xa4\x70\x9d\x3f\x0a\xd7\xa3\x3f\x"
    "d7\xa3\x90\x3f\xd7\xa3\xb0\x3f\x52\xb8\x1e\x3f\xec\x51\x38\x3f\xb8\x1e\x45\x3f\x85\xeb\x51\x3f\x52"
    "b8\x5e\x3f\x7b\x14\x6e\x3f\xa4\x70\x7d\x3f\x71\x3d\x8a\x3f\xa4\x70\x9d\x3f\xae\x47\xa1\x3f\xc3\xf5"
    "a8\x3f\xe1\x7a\x94\x3f\xe1\x7a\xb4\x3f\xe1\x7a\x14\x3f\xc3\xf5\x28\x3f\x48\xe1\x3a\x3f\x5c\x8f\x42"
    "3f\x0a\xd7\x63\x3f\x0a\xd7\x63\x3f\xa4\x70\x7d\x3f\x7b\x14\x8e\x3f\x00\x00\xa0\x3f\xb8\x1e\xa5\x3f"
    "7b\x14\xae\x3f\x"
    "
        0x9c)
    return j
}
