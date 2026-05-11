// ============================================================
// 函数名称: sub_4c5614
// 虚拟地址: 0x4c5614
// WARP GUID: fe4f5e13-a624-510c-baa1-613df7c271e8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4c96bc, sub_4c95c4
// ============================================================

int32_tsub_4c5614()
{
    // 第一条实际指令: int32_t i = 1
    int32_t i = 1
    void* ebp = data_530594
    
    do
        int32_t j = 1
        void* edi_1 = ebp
        
        do
            int32_t i_1 = i
            
            if (i - 1 u< 3)
                int32_t i_2 = i_1
                i_1 += 0xd
                
                if (add_overflow(i_2, 0xd))
                    sub_403010()
                    noreturn
            
            if (i - 4 u< 3)
                int32_t i_3 = i_1
                i_1 += 0xe
                
                if (add_overflow(i_3, 0xe))
                    sub_403010()
                    noreturn
            
            if (i == 7)
                i_1 = 0x11
            
            if (i == 8)
                i_1 = 0x15
            
            if (i == 0xe)
                i_1 = 0x16
            
            *edi_1 = i_1
            j += 1
            edi_1 += 0x38
        while (j != 5)
        
        i += 1
        ebp += 4
    while (i != 0xf)
    
    return i
}
