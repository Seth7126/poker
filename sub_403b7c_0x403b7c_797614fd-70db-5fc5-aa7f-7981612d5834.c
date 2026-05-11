// ============================================================
// 函数名称: sub_403b7c
// 虚拟地址: 0x403b7c
// WARP GUID: 797614fd-70db-5fc5-aa7f-7981612d5834
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40da04, sub_44a58c, sub_4b3c44, sub_44cfb4
// ============================================================

int32_t __convention("regparm")sub_403b7c(int32_t* arg1)
{
    // 第一条实际指令: int32_t i_1 = *arg1
    int32_t i_1 = *arg1
    void* esi = &arg1[1]
    int32_t result
    int32_t i
    
    do
        result = **(esi + 4) + *(esi + 8)
        **esi = result
        esi += 0xc
        i = i_1
        i_1 -= 1
    while (i != 1)
    return result
}
