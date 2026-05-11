// ============================================================
// 函数名称: sub_4c10a0
// 虚拟地址: 0x4c10a0
// WARP GUID: 4093d44a-0fcd-5e5c-8ed7-45be85f31fef
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4cc6dc, sub_4c5034, sub_4c2de8, sub_4c094c, sub_403010, sub_4c2d7c, sub_4c2e54
// [被调用的父级函数]: sub_5223e8
// ============================================================

int32_tsub_4c10a0()
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    if (sub_4c094c() == 0)
        result = sub_4c2de8(1)
    else
        result = sub_4c2e54(1)
    
    int32_t esi_1 = *data_5300d0
    
    if (esi_1 s>= 2)
        int32_t i_1 = esi_1 - 1
        int32_t ebx_1 = 2
        int32_t i
        
        do
            if (sub_4c2d7c(ebx_1) != 0 && sub_4cc6dc(ebx_1) s< sub_4c5034())
                int32_t result_1 = result
                result -= 1
                
                if (add_overflow(result_1, 0xffffffff))
                    sub_403010()
                    noreturn
            
            ebx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
