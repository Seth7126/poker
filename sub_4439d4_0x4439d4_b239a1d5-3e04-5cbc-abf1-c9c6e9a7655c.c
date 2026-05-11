// ============================================================
// 函数名称: sub_4439d4
// 虚拟地址: 0x4439d4
// WARP GUID: b239a1d5-3e04-5cbc-abf1-c9c6e9a7655c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b01c, sub_42ee80
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4439d4(int32_t* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: void var_1c
    void var_1c
    __builtin_memcpy(&var_1c, arg3, 0x10)
    int32_t edi = arg1[9]
    arg1[0x24]
    int32_t esi_2 = sub_42b01c(arg1, arg2, &var_1c)
    int32_t result = arg1[9]
    
    if (result != 0 && edi == result && esi_2 != arg1[0x24])
        return sub_42ee80(arg1)
    
    return result
}
