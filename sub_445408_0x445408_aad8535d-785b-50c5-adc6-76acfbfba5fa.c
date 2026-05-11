// ============================================================
// 函数名称: sub_445408
// 虚拟地址: 0x445408
// WARP GUID: aad8535d-785b-50c5-adc6-76acfbfba5fa
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43cd94
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_445408(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t* ecx = *(arg1 + 0x230)
    int32_t* ecx = *(arg1 + 0x230)
    
    if (ecx != 0)
        *(arg2 + 4)
        sub_43cd94(ecx)
}
