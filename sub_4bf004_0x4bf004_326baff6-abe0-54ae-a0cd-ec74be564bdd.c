// ============================================================
// 函数名称: sub_4bf004
// 虚拟地址: 0x4bf004
// WARP GUID: 326baff6-abe0-54ae-a0cd-ec74be564bdd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4bf070
// ============================================================

int32_t*sub_4bf004(void* arg1)
{
    // 第一条实际指令: *(arg1 - 8) = *(arg1 - 4)
    *(arg1 - 8) = *(arg1 - 4)
    *(arg1 - 0xc) = 1
    
    while (true)
        if (*(arg1 - 0xc) s> sx.d(*(arg1 - 0x10)) || *(arg1 - 8) s> 5)
            int32_t* result
            result.b = *(arg1 - 8) s>= 5
            return result
        
        if (sx.d(*(arg1 - 0x110 + (*(arg1 - 0xc) << 2) - 3)) == *(arg1 - 0x114))
            int32_t temp1_1 = *(arg1 - 8)
            *(arg1 - 8) += 1
            
            if (add_overflow(temp1_1, 1))
                sub_403010()
                noreturn
        
        int32_t temp0_1 = *(arg1 - 0xc)
        *(arg1 - 0xc) += 1
        
        if (add_overflow(temp0_1, 1))
            break
        
        continue
    
    sub_403010()
    noreturn
}
