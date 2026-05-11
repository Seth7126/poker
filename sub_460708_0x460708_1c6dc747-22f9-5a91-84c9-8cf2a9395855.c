// ============================================================
// 函数名称: sub_460708
// 虚拟地址: 0x460708
// WARP GUID: 1c6dc747-22f9-5a91-84c9-8cf2a9395855
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_46077c
// [被调用的父级函数]: sub_460618
// ============================================================

int32_t* __convention("regparm")sub_460708(int32_t* arg1)
{
    // 第一条实际指令: int32_t edx_1 = arg1[9]
    int32_t edx_1 = arg1[9]
    
    if (edx_1 u> 5)
        *(*arg1 + 0x14) = 7
        return (**arg1)()
    
    switch (edx_1)
        case 0
            return sub_46077c(arg1, 0)
        case 1
            return sub_46077c(arg1, 1)
        case 2
            return sub_46077c(arg1, 3)
        case 3
            return sub_46077c(arg1, 3)
        case 4
            return sub_46077c(arg1, 4)
        case 5
            return sub_46077c(arg1, 5)
}
