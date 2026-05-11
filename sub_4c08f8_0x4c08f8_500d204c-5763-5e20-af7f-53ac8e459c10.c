// ============================================================
// 函数名称: sub_4c08f8
// 虚拟地址: 0x4c08f8
// WARP GUID: 500d204c-5763-5e20-af7f-53ac8e459c10
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c2de8, sub_403010, sub_4c0924
// [被调用的父级函数]: sub_4c62e8, sub_4ceed4
// ============================================================

int32_tsub_4c08f8()
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    if (sub_4c0924() != 0)
        int32_t eax_1 = sub_4c2de8(0)
        int32_t ebx_1 = *data_5300d0
        result = ebx_1 - eax_1
        
        if (add_overflow(ebx_1, neg.d(eax_1)))
            sub_403010()
            noreturn
    
    return result
}
