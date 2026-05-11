// ============================================================
// 函数名称: sub_447b34
// 虚拟地址: 0x447b34
// WARP GUID: c4e31a39-e8f9-5ccd-a5ec-13b00e695587
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_44722c, sub_447240
// [被调用的父级函数]: sub_447b8c
// ============================================================

int32_tsub_447b34(void* arg1)
{
    // 第一条实际指令: int32_t result
    int32_t result
    result.b = 1
    int32_t i = sub_447240(*(arg1 - 0x10)) - 1
    
    if (i s>= 0)
        do
            void* eax_5 = sub_44722c(*(arg1 - 0x10), i)
            
            if (*(eax_5 + 0x24) == 0 && (*(eax_5 + 0x20) & 0x10) == 0 && *(eax_5 + 0x4b) != 0
                    && *(eax_5 + 0x47) != 0 && *(eax_5 + 0x213) != 1)
                return result
            
            i -= 1
        while (i != 0xffffffff)
    
    return 0
}
