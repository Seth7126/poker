// ============================================================
// 函数名称: sub_49aa3c
// 虚拟地址: 0x49aa3c
// WARP GUID: 3c577b82-a0c2-570e-9a79-bc59f028899b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49a9e8, sub_49a8a4, sub_49a9d4
// [被调用的父级函数]: 无
// ============================================================

voidsub_49aa3c()
{
    // 第一条实际指令: int32_t temp0 = data_5324b8
    int32_t temp0 = data_5324b8
    data_5324b8 -= 1
    
    if (temp0 u>= 1)
        return 
    
    sub_49a9d4()
    void var_14
    __builtin_memcpy(0x532498, &var_14, 0x10)
    sub_49a9e8(&var_14)
    __builtin_memcpy(0x5324a8, &var_14, 0x10)
    sub_49a8a4()
}
