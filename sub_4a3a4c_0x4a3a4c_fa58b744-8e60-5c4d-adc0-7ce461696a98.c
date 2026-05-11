// ============================================================
// 函数名称: sub_4a3a4c
// 虚拟地址: 0x4a3a4c
// WARP GUID: fa58b744-8e60-5c4d-adc0-7ce461696a98
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a3f34, sub_4a3f5c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a3a4c(void* arg1)
{
    // 第一条实际指令: *(arg1 + 0xc)
    *(arg1 + 0xc)
    int32_t result = (*(**data_5308e0 + 0x1c))(*(arg1 + 0x20), *(arg1 + 0x18))
    
    if (result != 0xffffffff)
        sub_4a3f34(arg1)
        sub_4a3f5c(arg1)
    
    return result
}
