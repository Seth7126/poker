// ============================================================
// 函数名称: sub_403b60
// 虚拟地址: 0x403b60
// WARP GUID: 681ad8fc-a169-5dde-8f22-c8efc8c2158c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_405ae8
// [被调用的父级函数]: sub_40da04, sub_4a36bc, sub_43e460
// ============================================================

int32_t __convention("regparm")sub_403b60(int32_t* arg1)
{
    // 第一条实际指令: int32_t i_1 = *arg1
    int32_t i_1 = *arg1
    void* esi = &arg1[1]
    int32_t result
    int32_t i
    
    do
        result = sub_405ae8(**(esi + 4), *esi)
        esi += 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    return result
}
