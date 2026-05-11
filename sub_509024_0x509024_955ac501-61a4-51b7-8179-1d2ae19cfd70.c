// ============================================================
// 函数名称: sub_509024
// 虚拟地址: 0x509024
// WARP GUID: 955ac501-61a4-51b7-8179-1d2ae19cfd70
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_512cbc, sub_4c2d7c, sub_403010, sub_4c2f1c
// [被调用的父级函数]: sub_5223e8
// ============================================================

boolsub_509024()
{
    // 第一条实际指令: int32_t edi = 0
    int32_t edi = 0
    int32_t i_1 = *data_5300d0
    
    if (i_1 s> 0)
        int32_t ebx_1 = 1
        int32_t i
        
        do
            if (sub_4c2d7c(ebx_1) != 0 && sub_4c2f1c(ebx_1) == 0
                    && sub_512cbc(*data_530454, ebx_1) != 0)
                int32_t temp2_1 = edi
                edi += 1
                
                if (add_overflow(temp2_1, 1))
                    sub_403010()
                    noreturn
            
            ebx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return edi s>= 1
}
