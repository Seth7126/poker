// ============================================================
// 函数名称: sub_461360
// 虚拟地址: 0x461360
// WARP GUID: 8fc67c8d-0056-5255-bf04-87d5929168cf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_461314, sub_461334, sub_4612e4
// [被调用的父级函数]: sub_461884, sub_461a0c
// ============================================================

int32_t __convention("regparm")sub_461360(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int16_t* ebp = arg1[arg2 + 0x10]
    int16_t* ebp = arg1[arg2 + 0x10]
    
    if (ebp == 0)
        void* eax_1 = *arg1
        *(eax_1 + 0x14) = 0x33
        *(eax_1 + 0x18) = arg2
        (**arg1)(arg2)
    
    int32_t result = 0
    int32_t i = 0
    int16_t* eax_3 = ebp
    
    do
        if (*eax_3 u> 0xff)
            result = 1
        
        i += 1
        eax_3 = &eax_3[1]
    while (i s< 0x40)
    
    if (*(ebp + 0x80) == 0)
        sub_461314(arg1, 0xdb)
        int32_t edx_2 = 0x83
        
        if (result == 0)
            edx_2 = 0x43
        
        sub_461334(arg1, edx_2)
        sub_4612e4(arg1, (result << 4).b + arg2.b)
        void* var_14_1 = &data_52eed0
        
        for (int32_t i_1 = 0; i_1 s< 0x40; )
            uint32_t ecx_1 = zx.d(ebp[*var_14_1])
            
            if (result != 0)
                sub_4612e4(arg1, (ecx_1 u>> 8).b)
            
            sub_4612e4(arg1, ecx_1.b)
            i_1 += 1
            var_14_1 += 4
        
        *(ebp + 0x80) = 1
    
    return result
}
