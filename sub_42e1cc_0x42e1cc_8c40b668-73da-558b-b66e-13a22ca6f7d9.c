// ============================================================
// 函数名称: sub_42e1cc
// 虚拟地址: 0x42e1cc
// WARP GUID: 8c40b668-73da-558b-b66e-13a22ca6f7d9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42e838, sub_42e7fc
// [被调用的父级函数]: sub_42e220
// ============================================================

int32_tsub_42e1cc(void* arg1)
{
    // 第一条实际指令: int32_t result
    int32_t result
    result.b = 1
    int32_t i = sub_42e838(*(arg1 - 0x10)) - 1
    
    if (i s>= 0)
        do
            void* eax_3 = sub_42e7fc(*(arg1 - 0x10), i)
            void* eax_5
            
            if (*(eax_3 + 0x4b) == 0)
                eax_5 = sub_42e7fc(*(arg1 - 0x10), i)
            
            if (*(eax_3 + 0x4b) != 0 || 3 != *(eax_5 + 0x51))
                return result
            
            i -= 1
        while (i != 0xffffffff)
    
    return 0
}
