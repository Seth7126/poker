// ============================================================
// 函数名称: sub_4aba4c
// 虚拟地址: 0x4aba4c
// WARP GUID: 7a69f002-54a4-5605-af3a-54539cdb3dc8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40423c, sub_4095f8, sub_4095cc
// [被调用的父级函数]: sub_4ab4f8
// ============================================================

int32_t __convention("regparm")sub_4aba4c(void* arg1)
{
    // 第一条实际指令: int32_t result
    int32_t result
    result.b = 1
    void* eax_2 = sub_4095cc(sub_40423c(*(arg1 + 0x10)))
    
    if ((*data_530a48)(*(arg1 + 0x24), eax_2, 1) s> 0)
        if ((*data_53028c)(*(arg1 + 0x24)) s<= 0)
            result = 0
    else
        result = 0
    
    sub_4095f8(eax_2)
    return result
}
