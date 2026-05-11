// ============================================================
// 函数名称: sub_51783c
// 虚拟地址: 0x51783c
// WARP GUID: 662056d7-aae6-5d0a-86f2-7a30dac741cf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_5179dc
// [被调用的父级函数]: sub_4bca48, sub_4c4ab8, sub_4bdac0
// ============================================================

void __convention("regparm")sub_51783c(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void var_108
    void var_108
    __builtin_memcpy(&var_108, arg2, 0x104)
    int16_t i_2
    int32_t i_1 = sx.d(i_2)
    
    if (i_1 s<= 0)
        return 
    
    void* ebx_1 = &var_108
    int32_t i
    
    do
        sub_5179dc(arg1, *ebx_1)
        ebx_1 += 4
        i = i_1
        i_1 -= 1
    while (i != 1)
}
